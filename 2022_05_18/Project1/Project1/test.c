#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define max 1000

int num = 1;
int bnum = 1;

typedef struct address_book
{
	char Name[20]; // ͨѶ¼����
	char Unit[100]; // ��λ
	char Fix_phone[20]; //�̶��绰
	char mobile_phone[20]; //�ƶ��绰
	char classify[20]; //����
	char Emall[20]; // emall
	char QQ[20]; //QQ

}address_book;

typedef struct address

{

	address_book a[max];

	int blank[1000]; // ��λ��

}address;

void print(address L, int i);  //�����Ϣ
int check(address L);          //����
void cread(address* L);        //������ϵ��
void Delete(address* L);       //ɾ����ϵ��
void inint(address* L);        //�����ϵ��
void modification(address* L); //�޸���ϵ��
void menu();

int main()
{
	address L;
	int n, i, j;
	while (1)
	{
		menu();
		printf("���������˵��еĴ���\n");
		scanf("%d", &n);
		if (n == 1)
		{
			cread(&L);
		}
		else if (n == 2)
		{
			printf("��������Ҫ������˵�λ��\n");
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
	printf("ϵͳ�����ϵ�˵���Ϣ\n");
	printf("-------------------------------------\n");
	printf("����:  ");
	printf("%s\n", L.a[i].Name);
	printf("������λ��  ");
	printf("%s\n", L.a[i].Unit);
	printf("�̶��绰��  ");
	printf("%s\n", L.a[i].Fix_phone);
	printf("�ƶ��绰��  ");
	printf("%s\n", L.a[i].mobile_phone);
	printf("���ࣺ ");
	printf("%s\n", L.a[i].classify);
	printf("Emall:  ");
	printf("%s\n", L.a[i].Emall);
	printf("QQ�� ");
	printf("%s\n", L.a[i].QQ);
	printf("------------------------------------\n");
	printf("�밴�����\n");
	getch();
}
int check(address L)
{
	int i, j = 1, n = 0, m;
	char A[100];
	printf("                    ���ҷ�ʽ               \n");
	printf("*******************************************\n");
	printf("       1. ���� \n");
	printf("       2. ��λ \n");
	printf("       3. �ƶ��绰 \n");
	printf("       4. �̶��绰 \n");
	printf("       5. EMALL \n");
	printf("       6. QQ \n");
	printf("******************************************\n");
	printf("��������˵ķ�ʽ��\n");
	scanf("%d", &i);
	printf("��������Ҫ�����˵���Ϣ��");
	scanf("%s", A);
	if (i == 1)
	{
		while (j <= num)
		{
			if (strcmp(A, L.a[j].Name) == 0)
			{
				n++;//��¼������ͬ�ĸ�����
				printf("��ͬ������%d��\n", n);
				printf("��ţ� %d\n", j);
				print(L, j);
			}
			j++;//������λ��
		}
		return j;
	}

	if (i == 2)
	{
		while (j <= num)
		{
			if (strcmp(A, L.a[j].Unit) == 0)
			{
				n++;//��¼������ͬ�ĸ�����
				printf("��ͬ������%d��\n", n);
				printf("��ţ� %d\n", j);
				print(L, j);
			}
			j++;//������λ��
		}
		return j;
	}

	if (i == 3)
	{
		while (j <= num)
		{
			if (strcmp(A, L.a[j].Fix_phone) == 0)
			{
				printf("��ţ� %d\n", j);
				print(L, j);
				break;
			}
			j++;//������λ��
		}
		return j;//���ڹ̶��绰���������ͬ�����Բ���Ҫִ�� check1;
	}

	if (i == 4)
	{
		while (j <= num)
		{
			if (strcmp(A, L.a[j].mobile_phone) == 0)

			{
				printf("��ţ� %d\n", j);
				print(L, j);
				break;
			}
			j++;//������λ��
		}
		return j;//�����ƶ��绰���������ͬ�����Բ���Ҫִ�� check1;
	}

	if (i == 5)
	{
		while (j <= num)
		{
			if (strcmp(A, L.a[j].Emall) == 0)
			{
				printf("��ţ� %d\n", j);
				print(L, j);
				break;
			}
			j++;//������λ��
		}
		return j;//����EMall���������ͬ�����Բ���Ҫִ�� check1;
	}
	if (i == 6)
	{
		while (j <= num)
		{
			if (strcmp(A, L.a[j].QQ) == 0)
			{
				printf("��ţ� %d\n", j);
				print(L, j);
				break;
			}
			j++;//������λ��
		}
		return j;//����QQ���������ͬ�����Բ���Ҫִ�� check1;
	}
	if (i <= 0 || i >= 7)
	{
		printf("���ҳ��ִ���\n");
		return 0;
	}
}

void cread(address* L)
{
	int n, i;
	printf("��������Ҫ������ϵ�˵���Ŀ\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("��������ϵ�˵���Ϣ\n");
		printf("-------------------------------------\n");
		printf("������������\n");
		scanf("%s", L->a[i].Name);
		printf("�����빤����λ��\n");
		scanf("%s", L->a[i].Unit);
		printf("������̶��绰��\n");
		scanf("%s", L->a[i].Fix_phone);
		printf("�������ƶ��绰��\n");
		scanf("%s", L->a[i].mobile_phone);
		printf("��������ϵ�˵ķ��ࣺ\n");
		scanf("%s", L->a[i].classify);
		printf("��������ϵ�˵�EMALL��\n");
		scanf("%s", L->a[i].Emall);
		printf("��������ϵ�˵�QQ�ţ�\n");
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
		printf("ɾ�����ɹ������²���\n");
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
		printf("������������\n");
		scanf("%s", L->a[bnum].Name);
		printf("�����빤����λ��\n");
		scanf("%s", L->a[bnum].Unit);
		printf("������̶��绰��\n");
		scanf("%s", L->a[bnum].Fix_phone);
		printf("�������ƶ��绰��\n");
		scanf("%s", L->a[bnum].mobile_phone);
		printf("��������ϵ�˵ķ��ࣺ\n");
		scanf("%s", L->a[bnum].classify);
		printf("��������ϵ�˵�EMALL��\n");
		scanf("%s", L->a[bnum].Emall);
		printf("��������ϵ�˵�QQ�ţ�\n");
		scanf("%s", L->a[bnum].QQ);
		bnum--;
	}
	else
	{
		printf("������������\n");
		scanf("%s", L->a[num].Name);
		printf("�����빤����λ��\n");
		scanf("%s", L->a[num].Unit);
		printf("������̶��绰��\n");
		scanf("%s", L->a[num].Fix_phone);
		printf("�������ƶ��绰��\n");
		scanf("%s", L->a[num].mobile_phone);
		printf("��������ϵ�˵ķ��ࣺ\n");
		scanf("%s", L->a[num].classify);
		printf("��������ϵ�˵�EMALL��\n");
		scanf("%s", L->a[num].Emall);
		printf("��������ϵ�˵�QQ�ţ�\n");
		scanf("%s", L->a[num].QQ);
		num++;
	}
}

void modification(address* L)
{
	int i, j;
	char A[100];
	i = check(*L);
	printf("             �޸���Ϣ�����        \n");
	printf("*******************************************\n");
	printf("       1. ���� \n");
	printf("       2. ��λ \n");
	printf("       3. �ƶ��绰 \n");
	printf("       4. �̶��绰 \n");
	printf("       5. ��ϵ�˷��� \n");
	printf("       6. EMALL \n");
	printf("       7. QQ \n");
	printf("******************************************\n");
	printf("������Ҫ�޸���Ϣ�����:  \n");
	scanf("%d", &j);
	printf("�����޸���Ϣ��\n");
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
	printf("                   ���˵�                    \n");
	printf("=============================================\n");
	printf("      1.  ������ϵ��\n");
	printf("      2.  �����ϵ��\n");
	printf("      3.  �����ϵ��\n");
	printf("      4.  ������ϵ��\n");
	printf("      5.  ɾ����ϵ��\n");
	printf("      6.  �޸���ϵ��\n");
	printf("=============================================\n\n");
}
