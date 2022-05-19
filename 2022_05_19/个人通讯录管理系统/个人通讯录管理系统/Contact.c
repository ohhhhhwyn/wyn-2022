#define _CRT_SECURE_NO_WARNINGS
#include "Contact.h"

void Only_Input(Contact* ps, int subscript)
{
	assert(ps);
	assert(subscript == ps->size);

	printf("请输入名字：>");
	scanf("%s", ps->data[subscript].name);
	printf("请输入公司：>");
	scanf("%s", ps->data[subscript].company);
	printf("请输入固定电话：>");
	scanf("%s", ps->data[subscript].landline_number);
	printf("请输入移动电话：>");
	scanf("%s", ps->data[subscript].mobile_number);
	printf("请输入分类：>");
	scanf("%s", ps->data[subscript].classify);
	printf("请输入Email：>");
	scanf("%s", ps->data[subscript].Email);
	printf("请输入QQ：>");
	scanf("%s", ps->data[subscript].QQ);
	ps->size++;
}

void Only_Output(Contact* ps, int subscript)
{
	assert(ps);
	assert(subscript >= 0 && subscript < ps->size);

	printf("%-10s%-10s%-14s%-13s%-10s%-19s%-12s\n",
		"姓名",
		"单位",
		"固定电话",
		"移动电话",
		"分类",
		"Email",
		"QQ");
	printf("%-10s%-10s%-14s%-13s%-10s%-19s%-12s\n",
		ps->data[subscript].name,
		ps->data[subscript].company,
		ps->data[subscript].landline_number,
		ps->data[subscript].mobile_number,
		ps->data[subscript].classify,
		ps->data[subscript].Email,
		ps->data[subscript].QQ);
}

void CheckCapacity(Contact* ps)
{
	assert(ps);

	if (ps->size == ps->capacity)//当元素数量==总容量大小时，进行增容。
	{
		//创建一个临时的指针来接受开辟的空间地址
		PeoInfo* tmp = (PeoInfo*)realloc(ps->data, sizeof(PeoInfo) * (ps->capacity + 2));
		if (tmp == NULL)//每次在realloc后要判断接受的地址是否为NULL
		{
			printf("realloc fail\n");//若为NULL，则realloc空间失败
			exit(-1);//退出程序
		}
		ps->data = tmp;//realloc成功，将新的地址赋给data
		ps->capacity += 2;//每次realloc两个空间，更新总容量大小
	}
}

void InitContact(Contact* ps)
{
	assert(ps);
	//在使用通讯录的时候，为通讯录开辟3个空间
	PeoInfo* tmp = (PeoInfo*)malloc(sizeof(PeoInfo) * INITIAL_SIZE);
	if (tmp == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	ps->data = tmp;
	ps->size = 0;
	ps->capacity = INITIAL_SIZE;//开辟好空间后，更新空间容量大小

	LoadContact(ps);//加载之前保存到本地的数据
}

void DestroyContact(Contact* ps)
{
	assert(ps);

	free(ps->data);		//释放开辟好的内存
	ps->data = NULL;	//释放之后置空
	ps->size = 0;		//格式化元素数量
	ps->capacity = 0;	//格式化容量大小
}

void InputContact(Contact* ps)
{
	assert(ps);
	if (ps->size != 0)
	{
		printf("通讯录已有联系人，添加联系人请选择Add\n");
		printf("按 Enter 继续");
		getchar();
		getchar();
	}
	else
	{
		system("cls");
		printf("**********************************\n");
		printf("          1.输入信息            \n");
		printf("          0.停止输入信息         \n");
		printf("**********************************\n");
		int input = 0;
		int i = 0;
		while (i == ps->size)
		{
			printf("请选择（1/0）>:");
			scanf("%d", &input);
			if (1 == input)
			{
				CheckCapacity(ps);
				Only_Input(ps, i);
				i++;
			}
			else if (0 == input)
			{
				break;
			}
			else
			{
				printf("选择错误，请重新选择\n");
			}
		}
	}
}

void OutputContact(Contact* ps)
{
	assert(ps);

	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		system("cls");
		printf("%-10s%-10s%-14s%-13s%-10s%-19s%-12s\n",
			"姓名",
			"单位",
			"固定电话",
			"移动电话",
			"分类",
			"Email",
			"QQ");
		for (int i = 0; i < ps->size; ++i)
		{
			printf("%-10s%-10s%-14s%-13s%-10s%-19s%-12s\n",
				ps->data[i].name,
				ps->data[i].company,
				ps->data[i].landline_number,
				ps->data[i].mobile_number,
				ps->data[i].classify,
				ps->data[i].Email,
				ps->data[i].QQ);
		}
	}
}

int FindLinkman(Contact* ps)
{
	assert(ps);

	system("cls");

	printf("              方式                \n");
	printf("**********************************\n");
	printf("      1. 姓名      2. 移动电话      \n");
	printf("**********************************\n");
	printf("选择方式:>");
	int input = 0;
	while (1)
	{
		scanf("%d", &input);
		if (input < 1 || input >2)//当输入的选项不符合目录要求的1和2时，重新来选择
		{
			printf("选择错误，请重新选择：>");
		}
		else//输入选项符合要求时，进行下一步
		{
			printf("输入信息：>");
			char information[100] = { 0 };
			scanf("%s", information);
			if (1 == input)
			{
				int i = 0;
				while (i < ps->size)
				{
					if (0 == strcmp(ps->data[i].name, information))
					{
						return i;//找到了目标信息，返回其元素所在数组中的下标
					}
					++i;
				}
			}
			else if (2 == input)
			{
				int i = 0;
				while (i < ps->size)
				{
					if (0 == strcmp(ps->data[i].mobile_number, information))
					{
						return i;//找到了目标信息，返回其元素所在数组中的下标
					}
					++i;
				}
			}
			break;
		}
	}
	return -1;//没有找到目标信息时，返回-1
}

void ModifyContact(Contact* ps)
{
	assert(ps);

	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		system("cls");
		int subscript = FindLinkman(ps);
		if (-1 == subscript)
		{
			printf("该联系人不存在\n");
		}
		else
		{
			system("cls");

			Only_Output(ps, subscript);
			printf("              修改信息的序号                 \n");
			printf("*******************************************\n");
			printf("               1. 姓名                      \n");
			printf("               2. 单位                      \n");
			printf("               3. 固定电话                  \n");
			printf("               4. 移动电话                  \n");
			printf("               5. 分类                      \n");
			printf("               6. Email                    \n");
			printf("               7. QQ                       \n");
			printf("*******************************************\n");
			printf("选择序号:>");
			int input = 0;
			while (1)
			{
				scanf("%d", &input);
				if (input < 1 || input >7)
				{
					printf("选择错误，请重新选择：>");
				}
				else
				{
					printf("输入修改信息:>");
					char information[100] = { 0 };
					scanf("%s", information);
					if (1 == input)
					{
						strcpy(ps->data[subscript].name, information);
					}
					else if (2 == input)
					{
						strcpy(ps->data[subscript].company, information);
					}
					else if (3 == input)
					{
						strcpy(ps->data[subscript].landline_number, information);
					}
					else if (4 == input)
					{
						strcpy(ps->data[subscript].mobile_number, information);
					}
					else if (5 == input)
					{
						strcpy(ps->data[subscript].classify, information);
					}
					else if (6 == input)
					{
						strcpy(ps->data[subscript].Email, information);
					}
					else if (7 == input)
					{
						strcpy(ps->data[subscript].QQ, information);
					}
					printf("修改成功\n");
					break;
				}
			}
		}
	}
}

void SearchContact(Contact* ps)
{
	assert(ps);

	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		system("cls");
		printf("            查找方式                \n");
		printf("***********************************\n");
		printf("          1. 姓名                   \n");
		printf("          2. 单位                   \n");
		printf("          3. 固定电话               \n");
		printf("          4. 移动电话               \n");
		printf("          5. 分类                   \n");
		printf("          6. Email                 \n");
		printf("          7. QQ                    \n");
		printf("***********************************\n");
		printf("选择方式:>");
		int input = 0;
		while (1)
		{
			scanf("%d", &input);
			if (input < 1 || input >7)
			{
				printf("选择错误，请重新选择：>");
			}
			else
			{
				printf("输入信息：>");
				char information[100] = { 0 };
				scanf("%s", information);
				int subscript = -1;
				if (1 == input)
				{
					int i = 0;
					while (i < ps->size)
					{
						if (0 == strcmp(ps->data[i].name, information))
						{
							subscript = i;
						}
						++i;
					}
				}
				else if (2 == input)
				{
					int i = 0;
					while (i < ps->size)
					{
						if (0 == strcmp(ps->data[i].company, information))
						{
							subscript = i;
						}
						++i;
					}
				}
				else if (3 == input)
				{
					int i = 0;
					while (i < ps->size)
					{
						if (0 == strcmp(ps->data[i].landline_number, information))
						{
							subscript = i;
						}
						++i;
					}
				}
				else if (4 == input)
				{
					int i = 0;
					while (i < ps->size)
					{
						if (0 == strcmp(ps->data[i].mobile_number, information))
						{
							subscript = i;
						}
						++i;
					}
				}
				else if (5 == input)
				{
					int i = 0;
					while (i < ps->size)
					{
						if (0 == strcmp(ps->data[i].classify, information))
						{
							subscript = i;
						}
						++i;
					}
				}
				else if (6 == input)
				{
					int i = 0;
					while (i < ps->size)
					{
						if (0 == strcmp(ps->data[i].Email, information))
						{
							subscript = i;
						}
						++i;
					}
				}
				else if (7 == input)
				{
					int i = 0;
					while (i < ps->size)
					{
						if (0 == strcmp(ps->data[i].QQ, information))
						{
							subscript = i;
						}
						++i;
					}
				}
				if (-1 == subscript)
				{
					printf("该联系人不存在\n");
				}
				else
				{
					Only_Output(ps, subscript);
				}
				break;
			}
		}
	}
}

void AddContact(Contact* ps)
{
	assert(ps);

	system("cls");

	int subscript = FindLinkman(ps);
	if (-1 == subscript)
	{
		CheckCapacity(ps);
		Only_Input(ps, ps->size);
		printf("添加联系人成功\n");
	}
	else
	{
		printf("该联系人已存在\n");
	}
}

void DeleteContact(Contact* ps)
{
	assert(ps);

	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		system("cls");
		int subscript = FindLinkman(ps);
		if (-1 == subscript)
		{
			printf("该联系人不存在\n");
		}
		else
		{
			for (int i = subscript; i < ps->size - 1; ++i)
			{
				ps->data[i] = ps->data[i + 1];
			}
			ps->size--;
			printf("删除联系人成功\n");
		}
	}
}

void LoadContact(Contact* ps)
{
	FILE* pf = fopen("contact.txt", "rb");
	if (pf == NULL)
	{
		return;
	}
	PeoInfo buf = { 0 };
	while (fread(&buf, sizeof(PeoInfo), 1, pf))
	{
		CheckCapacity(ps);

		ps->data[ps->size] = buf;
		ps->size++;
	}
	fclose(pf);
	pf = NULL;
}

void SaveContact(Contact* ps)
{
	FILE* pf = fopen("contact.txt", "wb");
	if (pf == NULL)
	{
		return;
	}
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(ps->data + i, sizeof(PeoInfo), 1, pf);
	}
	fclose(pf);
	pf = NULL;
}