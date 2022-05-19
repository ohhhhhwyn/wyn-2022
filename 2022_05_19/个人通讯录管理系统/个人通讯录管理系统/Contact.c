#define _CRT_SECURE_NO_WARNINGS
#include "Contact.h"

void Only_Input(Contact* ps, int subscript)
{
	assert(ps);
	assert(subscript == ps->size);

	printf("���������֣�>");
	scanf("%s", ps->data[subscript].name);
	printf("�����빫˾��>");
	scanf("%s", ps->data[subscript].company);
	printf("������̶��绰��>");
	scanf("%s", ps->data[subscript].landline_number);
	printf("�������ƶ��绰��>");
	scanf("%s", ps->data[subscript].mobile_number);
	printf("��������ࣺ>");
	scanf("%s", ps->data[subscript].classify);
	printf("������Email��>");
	scanf("%s", ps->data[subscript].Email);
	printf("������QQ��>");
	scanf("%s", ps->data[subscript].QQ);
	ps->size++;
}

void Only_Output(Contact* ps, int subscript)
{
	assert(ps);
	assert(subscript >= 0 && subscript < ps->size);

	printf("%-10s%-10s%-14s%-13s%-10s%-19s%-12s\n",
		"����",
		"��λ",
		"�̶��绰",
		"�ƶ��绰",
		"����",
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

	if (ps->size == ps->capacity)//��Ԫ������==��������Сʱ���������ݡ�
	{
		//����һ����ʱ��ָ�������ܿ��ٵĿռ��ַ
		PeoInfo* tmp = (PeoInfo*)realloc(ps->data, sizeof(PeoInfo) * (ps->capacity + 2));
		if (tmp == NULL)//ÿ����realloc��Ҫ�жϽ��ܵĵ�ַ�Ƿ�ΪNULL
		{
			printf("realloc fail\n");//��ΪNULL����realloc�ռ�ʧ��
			exit(-1);//�˳�����
		}
		ps->data = tmp;//realloc�ɹ������µĵ�ַ����data
		ps->capacity += 2;//ÿ��realloc�����ռ䣬������������С
	}
}

void InitContact(Contact* ps)
{
	assert(ps);
	//��ʹ��ͨѶ¼��ʱ��ΪͨѶ¼����3���ռ�
	PeoInfo* tmp = (PeoInfo*)malloc(sizeof(PeoInfo) * INITIAL_SIZE);
	if (tmp == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	ps->data = tmp;
	ps->size = 0;
	ps->capacity = INITIAL_SIZE;//���ٺÿռ�󣬸��¿ռ�������С

	LoadContact(ps);//����֮ǰ���浽���ص�����
}

void DestroyContact(Contact* ps)
{
	assert(ps);

	free(ps->data);		//�ͷſ��ٺõ��ڴ�
	ps->data = NULL;	//�ͷ�֮���ÿ�
	ps->size = 0;		//��ʽ��Ԫ������
	ps->capacity = 0;	//��ʽ��������С
}

void InputContact(Contact* ps)
{
	assert(ps);
	if (ps->size != 0)
	{
		printf("ͨѶ¼������ϵ�ˣ������ϵ����ѡ��Add\n");
		printf("�� Enter ����");
		getchar();
		getchar();
	}
	else
	{
		system("cls");
		printf("**********************************\n");
		printf("          1.������Ϣ            \n");
		printf("          0.ֹͣ������Ϣ         \n");
		printf("**********************************\n");
		int input = 0;
		int i = 0;
		while (i == ps->size)
		{
			printf("��ѡ��1/0��>:");
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
				printf("ѡ�����������ѡ��\n");
			}
		}
	}
}

void OutputContact(Contact* ps)
{
	assert(ps);

	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		system("cls");
		printf("%-10s%-10s%-14s%-13s%-10s%-19s%-12s\n",
			"����",
			"��λ",
			"�̶��绰",
			"�ƶ��绰",
			"����",
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

	printf("              ��ʽ                \n");
	printf("**********************************\n");
	printf("      1. ����      2. �ƶ��绰      \n");
	printf("**********************************\n");
	printf("ѡ��ʽ:>");
	int input = 0;
	while (1)
	{
		scanf("%d", &input);
		if (input < 1 || input >2)//�������ѡ�����Ŀ¼Ҫ���1��2ʱ��������ѡ��
		{
			printf("ѡ�����������ѡ��>");
		}
		else//����ѡ�����Ҫ��ʱ��������һ��
		{
			printf("������Ϣ��>");
			char information[100] = { 0 };
			scanf("%s", information);
			if (1 == input)
			{
				int i = 0;
				while (i < ps->size)
				{
					if (0 == strcmp(ps->data[i].name, information))
					{
						return i;//�ҵ���Ŀ����Ϣ��������Ԫ�����������е��±�
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
						return i;//�ҵ���Ŀ����Ϣ��������Ԫ�����������е��±�
					}
					++i;
				}
			}
			break;
		}
	}
	return -1;//û���ҵ�Ŀ����Ϣʱ������-1
}

void ModifyContact(Contact* ps)
{
	assert(ps);

	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		system("cls");
		int subscript = FindLinkman(ps);
		if (-1 == subscript)
		{
			printf("����ϵ�˲�����\n");
		}
		else
		{
			system("cls");

			Only_Output(ps, subscript);
			printf("              �޸���Ϣ�����                 \n");
			printf("*******************************************\n");
			printf("               1. ����                      \n");
			printf("               2. ��λ                      \n");
			printf("               3. �̶��绰                  \n");
			printf("               4. �ƶ��绰                  \n");
			printf("               5. ����                      \n");
			printf("               6. Email                    \n");
			printf("               7. QQ                       \n");
			printf("*******************************************\n");
			printf("ѡ�����:>");
			int input = 0;
			while (1)
			{
				scanf("%d", &input);
				if (input < 1 || input >7)
				{
					printf("ѡ�����������ѡ��>");
				}
				else
				{
					printf("�����޸���Ϣ:>");
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
					printf("�޸ĳɹ�\n");
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
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		system("cls");
		printf("            ���ҷ�ʽ                \n");
		printf("***********************************\n");
		printf("          1. ����                   \n");
		printf("          2. ��λ                   \n");
		printf("          3. �̶��绰               \n");
		printf("          4. �ƶ��绰               \n");
		printf("          5. ����                   \n");
		printf("          6. Email                 \n");
		printf("          7. QQ                    \n");
		printf("***********************************\n");
		printf("ѡ��ʽ:>");
		int input = 0;
		while (1)
		{
			scanf("%d", &input);
			if (input < 1 || input >7)
			{
				printf("ѡ�����������ѡ��>");
			}
			else
			{
				printf("������Ϣ��>");
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
					printf("����ϵ�˲�����\n");
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
		printf("�����ϵ�˳ɹ�\n");
	}
	else
	{
		printf("����ϵ���Ѵ���\n");
	}
}

void DeleteContact(Contact* ps)
{
	assert(ps);

	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		system("cls");
		int subscript = FindLinkman(ps);
		if (-1 == subscript)
		{
			printf("����ϵ�˲�����\n");
		}
		else
		{
			for (int i = subscript; i < ps->size - 1; ++i)
			{
				ps->data[i] = ps->data[i + 1];
			}
			ps->size--;
			printf("ɾ����ϵ�˳ɹ�\n");
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