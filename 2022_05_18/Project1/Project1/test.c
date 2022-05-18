#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define max 1000

int num = 1;
int bnum = 1;

typedef struct address_book
{
	char Name[20]; // 通讯录姓名
	char Unit[100]; // 单位
	char Fix_phone[20]; //固定电话
	char mobile_phone[20]; //移动电话
	char classify[20]; //分类
	char Emall[20]; // emall
	char QQ[20]; //QQ

}address_book;

typedef struct address

{

	address_book a[max];

	int blank[1000]; // 空位置

}address;

void print(address L, int i);  //输出信息
int check(address L);          //查找
void cread(address* L);        //创建联系人
void Delete(address* L);       //删除联系人
void inint(address* L);        //添加联系人
void modification(address* L); //修改联系人
void menu();

int main()
{
	address L;
	int n, i, j;
	while (1)
	{
		menu();
		printf("请输入主菜单中的代号\n");
		scanf("%d", &n);
		if (n == 1)
		{
			cread(&L);
		}
		else if (n == 2)
		{
			printf("请输入需要输出的人的位置\n");
			scanf("%d", &i);
			print(L, i);
		}
		else if (n == 3)
		{
			inint(&L);
		}
		else if (n == 4)
		{
			j = check(L);
		}
		else if (n == 5)
		{
			Delete(&L);
		}
		else
		{
			printf("1");
			modification(&L);
		}
	}
}

void print(address L, int i)
{
	printf("系统输出联系人的信息\n");
	printf("-------------------------------------\n");
	printf("姓名:  ");
	printf("%s\n", L.a[i].Name);
	printf("工作单位：  ");
	printf("%s\n", L.a[i].Unit);
	printf("固定电话：  ");
	printf("%s\n", L.a[i].Fix_phone);
	printf("移动电话：  ");
	printf("%s\n", L.a[i].mobile_phone);
	printf("分类： ");
	printf("%s\n", L.a[i].classify);
	printf("Emall:  ");
	printf("%s\n", L.a[i].Emall);
	printf("QQ： ");
	printf("%s\n", L.a[i].QQ);
	printf("------------------------------------\n");
	printf("请按任意键\n");
	getch();
}
int check(address L)
{
	int i, j = 1, n = 0, m;
	char A[100];
	printf("                    查找方式               \n");
	printf("*******************************************\n");
	printf("       1. 姓名 \n");
	printf("       2. 单位 \n");
	printf("       3. 移动电话 \n");
	printf("       4. 固定电话 \n");
	printf("       5. EMALL \n");
	printf("       6. QQ \n");
	printf("******************************************\n");
	printf("输入查找人的方式：\n");
	scanf("%d", &i);
	printf("请输入需要查找人的信息：");
	scanf("%s", A);
	if (i == 1)
	{
		while (j <= num)
		{
			if (strcmp(A, L.a[j].Name) == 0)
			{
				n++;//记录名字相同的个数；
				printf("相同条件又%d个\n", n);
				printf("编号： %d\n", j);
				print(L, j);
			}
			j++;//遍历的位置
		}
		return j;
	}

	if (i == 2)
	{
		while (j <= num)
		{
			if (strcmp(A, L.a[j].Unit) == 0)
			{
				n++;//记录名字相同的个数；
				printf("相同条件又%d个\n", n);
				printf("编号： %d\n", j);
				print(L, j);
			}
			j++;//遍历的位置
		}
		return j;
	}

	if (i == 3)
	{
		while (j <= num)
		{
			if (strcmp(A, L.a[j].Fix_phone) == 0)
			{
				printf("编号： %d\n", j);
				print(L, j);
				break;
			}
			j++;//遍历的位置
		}
		return j;//由于固定电话不会出现相同的所以不需要执行 check1;
	}

	if (i == 4)
	{
		while (j <= num)
		{
			if (strcmp(A, L.a[j].mobile_phone) == 0)

			{
				printf("编号： %d\n", j);
				print(L, j);
				break;
			}
			j++;//遍历的位置
		}
		return j;//由于移动电话不会出现相同的所以不需要执行 check1;
	}

	if (i == 5)
	{
		while (j <= num)
		{
			if (strcmp(A, L.a[j].Emall) == 0)
			{
				printf("编号： %d\n", j);
				print(L, j);
				break;
			}
			j++;//遍历的位置
		}
		return j;//由于EMall不会出现相同的所以不需要执行 check1;
	}
	if (i == 6)
	{
		while (j <= num)
		{
			if (strcmp(A, L.a[j].QQ) == 0)
			{
				printf("编号： %d\n", j);
				print(L, j);
				break;
			}
			j++;//遍历的位置
		}
		return j;//由于QQ不会出现相同的所以不需要执行 check1;
	}
	if (i <= 0 || i >= 7)
	{
		printf("查找出现错误\n");
		return 0;
	}
}

void cread(address* L)
{
	int n, i;
	printf("请输入需要输入联系人的数目\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("请输入联系人的信息\n");
		printf("-------------------------------------\n");
		printf("请输入姓名：\n");
		scanf("%s", L->a[i].Name);
		printf("请输入工作单位：\n");
		scanf("%s", L->a[i].Unit);
		printf("请输入固定电话：\n");
		scanf("%s", L->a[i].Fix_phone);
		printf("请输入移动电话：\n");
		scanf("%s", L->a[i].mobile_phone);
		printf("请输入联系人的分类：\n");
		scanf("%s", L->a[i].classify);
		printf("请输入联系人的EMALL：\n");
		scanf("%s", L->a[i].Emall);
		printf("请输入联系人的QQ号：\n");
		scanf("%s", L->a[i].QQ);
		printf("-------------------------------------\n");
		num++;
	}
}

void Delete(address* L)
{
	int i;
	i = check(*L);
	if (i == 0)
	{
		printf("删除不成功请重新操作\n");
	}
	else
	{
		// L->a[i] = memset(&L->a[i], 0, sizeof());
		L->blank[bnum++] = i;
	}
}
void inint(address* L)
{
	if (bnum)
	{
		printf("请输入姓名：\n");
		scanf("%s", L->a[bnum].Name);
		printf("请输入工作单位：\n");
		scanf("%s", L->a[bnum].Unit);
		printf("请输入固定电话：\n");
		scanf("%s", L->a[bnum].Fix_phone);
		printf("请输入移动电话：\n");
		scanf("%s", L->a[bnum].mobile_phone);
		printf("请输入联系人的分类：\n");
		scanf("%s", L->a[bnum].classify);
		printf("请输入联系人的EMALL：\n");
		scanf("%s", L->a[bnum].Emall);
		printf("请输入联系人的QQ号：\n");
		scanf("%s", L->a[bnum].QQ);
		bnum--;
	}
	else
	{
		printf("请输入姓名：\n");
		scanf("%s", L->a[num].Name);
		printf("请输入工作单位：\n");
		scanf("%s", L->a[num].Unit);
		printf("请输入固定电话：\n");
		scanf("%s", L->a[num].Fix_phone);
		printf("请输入移动电话：\n");
		scanf("%s", L->a[num].mobile_phone);
		printf("请输入联系人的分类：\n");
		scanf("%s", L->a[num].classify);
		printf("请输入联系人的EMALL：\n");
		scanf("%s", L->a[num].Emall);
		printf("请输入联系人的QQ号：\n");
		scanf("%s", L->a[num].QQ);
		num++;
	}
}

void modification(address* L)
{
	int i, j;
	char A[100];
	i = check(*L);
	printf("             修改信息的序号        \n");
	printf("*******************************************\n");
	printf("       1. 姓名 \n");
	printf("       2. 单位 \n");
	printf("       3. 移动电话 \n");
	printf("       4. 固定电话 \n");
	printf("       5. 联系人分类 \n");
	printf("       6. EMALL \n");
	printf("       7. QQ \n");
	printf("******************************************\n");
	printf("输入需要修改信息的序号:  \n");
	scanf("%d", &j);
	printf("输入修改信息：\n");
	scanf("%s", A);
	if (j == 1)
	{
		strcpy(L->a[i].Name, A);
	}
	if (j == 2)
	{
		strcpy(L->a[i].Unit, A);
	}
	if (j == 3)
	{
		strcpy(L->a[i].Fix_phone, A);
	}
	if (j == 4)
	{
		strcpy(L->a[i].mobile_phone, A);
	}
	if (j == 5)
	{
		strcpy(L->a[i].classify, A);
	}
	if (j == 6)
	{
		strcpy(L->a[i].Emall, A);
	}
	if (j == 7)
	{
		strcpy(L->a[i].QQ, A);
	}
}

void menu()
{
	printf("                   主菜单                    \n");
	printf("=============================================\n");
	printf("      1.  输入联系人\n");
	printf("      2.  输出联系人\n");
	printf("      3.  添加联系人\n");
	printf("      4.  查找联系人\n");
	printf("      5.  删除联系人\n");
	printf("      6.  修改联系人\n");
	printf("=============================================\n\n");
}
