#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

/*�궨����*/
#define max_str 30 //����ַ�������
#define max_num 30 //����Ʒ����
#define max_all 100 //���������ܼ����ֵ

/*�����Ʒ�ṹ��*/
struct dishes
{
    char name[max_str];
    int price;
};

/*����ȫ�ֱ���*/
struct dishes list1[max_num]; //������˲�Ʒ��Ϣ
int num1 = 0; //������˲�Ʒ����
int* p1 = &num1;
struct dishes list2[max_num]; //����Ȳ˲�Ʒ��Ϣ
int num2 = 0; //����Ȳ˲�Ʒ����
int* p2 = &num2;
struct dishes list3[max_num]; //��Ź��в�Ʒ��Ϣ
int num3 = 0; //��Ź��в�Ʒ����
int* p3 = &num3;
struct dishes list4[max_num]; //�����ʳ��Ʒ��Ϣ
int num4 = 0; //�����ʳ��Ʒ����
int* p4 = &num4;
struct dishes list5[max_num]; //�����Ʒ��Ʒ��Ϣ
int num5 = 0; //�����Ʒ��Ʒ����
int* p5 = &num5;
struct dishes list6[max_num]; //��Ź˿͵�Ͳ�Ʒ��Ϣ
int num6 = 0; //��Ź˿͵�Ͳ�Ʒ����
int* p6 = &num6;
struct dishes list7[max_all]; //��Ž��������ܲ�Ʒ��Ϣ
int num7 = 0; //��Ž��������ܲ�Ʒ����
int* p7 = &num7;

/*ȫ������*/
/*�˵������*/
//һ�����˵�
char menu_m1();
// ����Աһ���˵�
char menu_a1();
// ����Ա�����˵�����ӻ�ɾ����Ʒ����ʾ
char menu_a2();
//����˵�1��������ʾ������䣩
void output_1(struct dishes list[], int num);
//�����Ʒ��Ϣ2����������ʾ������䣩
void output_2(struct dishes list[], int num);

/*����*/
//�����������������txt�ļ�
void creat_file();
//���ز�Ʒ��Ϣ���ṹ�����飬Ƕ�׹���ģ��1����ȡtxtд�뵽�����ṹ��������
void load_dishes(struct dishes list1[], int* p1, struct dishes list2[], int* p2, struct dishes list3[], int* p3, struct dishes list4[], int* p4, struct dishes list5[], int* p5);
//ʵ�ֵ�͵ĺ�����Ƕ�׹���ģ��2��ʵ�ֵ�͵Ľṹ������д������
void ordering(struct dishes list1[], int num1, struct dishes list2[], int* p2, struct dishes list3[], int* p3);
// �鿴�������������
void settlement(struct dishes list[], int num);
// �����������
void income(struct dishes list[], int num);
// ʵ�ֲ�Ʒ�ļ۸��޸ģ���Ƕ����ģ��3��ʵ�ֽṹ���Ʒ�ļ۸��޸����ļ����ع�
void change(struct dishes list[], int* p, char ch);
// ʵ�ֲ�Ʒ��ɾ������Ƕ����ģ��4��ʵ�ֽṹ���Ʒ��ɾ�����ļ����ع�
void del(struct dishes list[], int* p, char ch);
// ������ʵ�ֲ�Ʒ����ӣ���Ƕ����ģ��5��ʵ�ֽṹ���Ʒ��������ļ����ع�
void add(struct dishes list[], int* p, char ch);

/*����ģ����*/
//����ģ��1����ȡtxtд�뵽�����ṹ��������
int function_read(struct dishes list[], FILE* fp);
//����ģ��2��ʵ�ֵ�͵Ľṹ������д������
void function_ordering(struct dishes list1[], int num1, struct dishes list2[], int* p2, struct dishes list3[], int* p3, int choice);
// ����ģ��3��ʵ�ֽṹ���Ʒ�ļ۸��޸����ļ����ع�����Ƕ����ģ��6���Ծ����޸ĵĲ�Ʒ�ṹ�尴�۸�ӵ͵�������
int funtion_change(struct dishes list[], int num, FILE* fp);
//����ģ��4��ʵ�ֽṹ���Ʒ��ɾ�����ļ����ع�
int function_del(struct dishes list[], int* p, FILE* fp);
//����ģ��5��ʵ�ֽṹ���Ʒ��������ļ����ع���,��Ƕ����ģ��6���Ծ����޸ĵĲ�Ʒ�ṹ�尴�۸�ӵ͵�������
int function_add(struct dishes list[], int* p, FILE* fp);
// ����ģ��6���Ծ����޸ĵĲ�Ʒ�ṹ�尴�۸�ӵ͵�������
void function_sort(struct dishes list[], int num);

int main()
{
    creat_file();
    load_dishes(list1, p1, list2, p2, list3, p3, list4, p4, list5, p5);
    int i, j, choice;
    char a, b, c;
    while (1)
    {
        a = menu_m1();
        switch (a)
        {
        case '1':
            ordering(list1, num1, list6, p6, list7, p7);
            break;
        case '2':
            ordering(list2, num2, list6, p6, list7, p7);
            break;
        case '3':
            ordering(list3, num3, list6, p6, list7, p7);
            break;
        case '4':
            ordering(list4, num4, list6, p6, list7, p7);
            break;
        case '5':
            ordering(list5, num5, list6, p6, list7, p7);
            break;
        case '6':
            system("cls"), settlement(list6, num6), system("pause"), system("cls");
            break;
        case 'y':
            system("cls"), settlement(list6, num6), * p6 = 0, system("pause");
            break;
        case 'a':
            system("cls");
            while (1)
            {
                b = menu_a1();
                switch (b)
                {
                case '1':
                    system("cls"), income(list7, num7), system("pause"), system("cls");
                    break;
                case '2':
                {
                    system("cls");
                    c = menu_a2();
                    system("cls");
                    switch (c)
                    {
                    case '1':
                        change(list1, p1, c);
                        break;
                    case '2':
                        change(list2, p2, c);
                        break;
                    case '3':
                        change(list3, p3, c);
                        break;
                    case '4':
                        change(list4, p4, c);
                        break;
                    case '5':
                        change(list5, p5, c);
                        break;
                    }
                    system("cls");
                }
                break;
                case '3':
                {
                    system("cls");
                    c = menu_a2();
                    system("cls");
                    switch (c)
                    {
                    case '1':
                        del(list1, p1, c);
                        break;
                    case '2':
                        del(list2, p2, c);
                        break;
                    case '3':
                        del(list3, p3, c);
                        break;
                    case '4':
                        del(list4, p4, c);
                        break;
                    case '5':
                        del(list5, p5, c);
                        break;
                    }
                    system("cls");
                }
                break;
                case '4':
                {
                    system("cls");
                    c = menu_a2();
                    system("cls");
                    switch (c)
                    {
                    case '1':
                        add(list1, p1, c);
                        break;
                    case '2':
                        add(list2, p2, c);
                        break;
                    case '3':
                        add(list3, p3, c);
                        break;
                    case '4':
                        add(list4, p4, c);
                        break;
                    case '5':
                        add(list5, p5, c);
                        break;
                    }
                    system("cls");
                }
                break;
                case '0':
                    system("cls");
                    break;
                }
                if (b == '0')
                    break;
            }
            break;

        }
        system("cls");
    }
}

/*�˵������*/
//һ�����˵�
char menu_m1()
{
    char ch;
    printf("             ---------------------------\n");
    printf("            |     ��ӭ���ٱ�����        |\n");
    printf("            |    �밴���ѡ���Ʒ       |\n");
    printf("             ---------------------------\n");
    printf("            |      1         ����       |\n");
    printf("            |      2         �Ȳ�       |\n");
    printf("            |      3         ����       |\n");
    printf("            |      4         ��ʳ       |\n");
    printf("            |      5         ��Ʒ       |\n");
    printf("            |      6         �鿴       |\n");
    printf("            |      y         ����       |\n");
    printf("             ---------------------------\n");
    printf("            ������ţ�");
    ch = getch();
    return ch;
}

// ����Աһ���˵�
char menu_a1()
{
    char ch;
    printf("\n-------------------------------\n");
    printf("\t1\t��������\t\n");
    printf("\t2\t�޸ļ۸�\t\n");
    printf("\t3\tɾ����Ʒ\t\n");
    printf("\t4\t��Ӳ�Ʒ\t\n");
    printf("\t0\t������һ��\t\n");
    printf("-------------------------------\n");
    printf("������ţ�");
    ch = getch();
    return ch;
}

// ����Ա�����˵�����ӻ�ɾ����Ʒ����ʾ
char menu_a2()
{
    char ch;
    printf("\n-------------------------------\n");
    printf("\t1\t����\t\n");
    printf("\t2\t�Ȳ�\t\n");
    printf("\t3\t����\t\n");
    printf("\t4\t��ʳ\t\n");
    printf("\t5\t��Ʒ\t\n");
    printf("\t0\t������һ��\t\n");
    printf("-------------------------------\n");
    printf("������ţ�");
    ch = getch();
    return ch;
}

//����˵�1��������ʾ������䣩
void output_1(struct dishes list[], int num)
{
    int i;
    printf("\n-------------------------------------------------\n");
    printf("|\t���\t��Ʒ\t\t�۸�\t\t|\n");
    printf("-------------------------------------------------\n");
    for (i = 0; i < num; i++)
    {
        if (strlen(list[i].name) <= 6)
            printf("|\t%d\t%s\t\t%d\t\t|\n", i + 1, list[i].name, list[i].price);
        else
            printf("|\t%d\t%s\t%d\t\t|\n", i + 1, list[i].name, list[i].price);
    }
    printf("|\t0\t����\t\t\t\t|\n");
    printf("-------------------------------------------------\n");
    printf("��������ţ�\n");
}

//�����Ʒ��Ϣ2����������ʾ������䣩
void output_2(struct dishes list[], int num)
{
    int i;
    printf("\n-------------------------------------------------\n");
    printf("|\t���\t��Ʒ\t\t�۸�\t\t|\n");
    printf("-------------------------------------------------\n");
    for (i = 0; i < num; i++)
    {
        if (strlen(list[i].name) <= 6)
            printf("|\t%d\t%s\t\t%d\t\t|\n", i + 1, list[i].name, list[i].price);
        else
            printf("|\t%d\t%s\t%d\t\t|\n", i + 1, list[i].name, list[i].price);
    }
    printf("|\t0\t����\t\t\t\t|\n");
    printf("-------------------------------------------------\n");
}

/*����*/
//�����������������txt�ļ�
void creat_file()
{
    FILE* fp = fopen("����.txt", "a");
    if (fp == NULL)
        return;
    fclose(fp);
    fp = fopen("�Ȳ�.txt", "a");
    if (fp == NULL)
        return;
    fclose(fp);
    fp = fopen("����.txt", "a");
    if (fp == NULL)
        return;
    fclose(fp);
    fp = fopen("��ʳ.txt", "a");
    if (fp == NULL)
        return;
    fclose(fp);
    fp = fopen("��Ʒ.txt", "a");
    if (fp == NULL)
        return;
    fclose(fp);
}
//���ز�Ʒ��Ϣ���ṹ�����飬Ƕ�׹���ģ��1����ȡtxtд�뵽�����ṹ��������
void load_dishes(struct dishes list1[], int* p1, struct dishes list2[], int* p2, struct dishes list3[], int* p3, struct dishes list4[], int* p4, struct dishes list5[], int* p5)
{
    FILE* fp;
    fp = fopen("����.txt", "r");
    *p1 = function_read(list1, fp);
    fp = fopen("�Ȳ�.txt", "r");
    *p2 = function_read(list2, fp);
    fp = fopen("����.txt", "r");
    *p3 = function_read(list3, fp);
    fp = fopen("��ʳ.txt", "r");
    *p4 = function_read(list4, fp);
    fp = fopen("��Ʒ.txt", "r");
    *p5 = function_read(list5, fp);
    fclose(fp);
}

//ʵ�ֵ�͵ĺ�����Ƕ�׹���ģ��2��ʵ�ֵ�͵Ľṹ������д������
void ordering(struct dishes list1[], int num1, struct dishes list2[], int* p2, struct dishes list3[], int* p3)
{
    int choice;
    system("cls");
    output_1(list1, num1);
    while (1)
    {
        scanf("%d", &choice);
        if (choice >= 0 && choice <= num1)
        {
            if (choice == 0)
                break;
            else
                function_ordering(list1, num1, list2, p2, list3, p3, choice);
        }
        else
            printf("��������������������룺\n");
    }
}

// �鿴�������������
void settlement(struct dishes list[], int num)
{
    int i, sum;
    for (i = 0, sum = 0; i < num; i++)
        sum += list[i].price;
    printf("\n-------------------------------------------------\n");
    printf("|\t���\t��Ʒ\t\t�۸�\t\t|\n");
    printf("-------------------------------------------------\n");
    for (i = 0; i < num; i++)
    {
        if (strlen(list[i].name) <= 6)
            printf("|\t%d\t%s\t\t%d\t\t|\n", i + 1, list[i].name, list[i].price);
        else
            printf("|\t%d\t%s\t%d\t\t|\n", i + 1, list[i].name, list[i].price);
    }
    printf("-------------------------------------------------\n");
    printf("�ܼ۸�Ϊ��%d\n\n", sum);
}

// �����������
void income(struct dishes list[], int num)
{
    int i, sum;
    output_2(list, num);
    for (i = 0, sum = 0; i < num; i++)
        sum += list[i].price;
    printf("���������룺%d\n", sum);
}

// ʵ�ֲ�Ʒ�ļ۸��޸ģ���Ƕ����ģ��3��ʵ�ֽṹ���Ʒ�ļ۸��޸����ļ����ع�
void change(struct dishes list[], int* p, char ch)
{
    int i = 1;
    FILE* fp;
    while (i != 0)
    {
        switch (ch)
        {
        case '1':
            output_2(list1, num1), fp = fopen("����.txt", "w"), i = funtion_change(list1, num1, fp), fclose(fp);
            break;
        case '2':
            output_2(list2, num2), fp = fopen("�Ȳ�.txt", "w"), i = funtion_change(list2, num2, fp), fclose(fp);
            break;
        case '3':
            output_2(list3, num3), fp = fopen("����.txt", "w"), i = funtion_change(list3, num3, fp), fclose(fp);
            break;
        case '4':
            output_2(list4, num4), fp = fopen("��ʳ.txt", "w"), i = funtion_change(list4, num4, fp), fclose(fp);
            break;
        case '5':
            output_2(list5, num5), fp = fopen("��Ʒ.txt", "w"), i = funtion_change(list5, num5, fp), fclose(fp);
            break;
        }

    }
}

// ʵ�ֲ�Ʒ��ɾ������Ƕ����ģ��4��ʵ�ֽṹ���Ʒ��ɾ�����ļ����ع�
void del(struct dishes list[], int* p, char ch)
{
    int i = 1;
    FILE* fp;
    while (i != 0)
    {
        switch (ch)
        {
        case '1':
            output_2(list1, num1), fp = fopen("����.txt", "w"), i = function_del(list1, p1, fp), fclose(fp);
            break;
        case '2':
            output_2(list2, num2), fp = fopen("�Ȳ�.txt", "w"), i = function_del(list2, p2, fp), fclose(fp);
            break;
        case '3':
            output_2(list3, num3), fp = fopen("����.txt", "w"), i = function_del(list3, p3, fp), fclose(fp);
            break;
        case '4':
            output_2(list4, num4), fp = fopen("��ʳ.txt", "w"), i = function_del(list4, p4, fp), fclose(fp);
            break;
        case '5':
            output_2(list5, num5), fp = fopen("��Ʒ.txt", "w"), i = function_del(list5, p5, fp), fclose(fp);
            break;
        }

    }
}

// ������ʵ�ֲ�Ʒ����ӣ���Ƕ����ģ��5��ʵ�ֽṹ���Ʒ��������ļ����ع�
void add(struct dishes list[], int* p, char ch)
{
    int i = 1;
    FILE* fp;
    while (i != 0)
    {
        switch (ch)
        {
        case '1':
            output_2(list1, num1), fp = fopen("����.txt", "w"), i = function_add(list1, p1, fp), fclose(fp);
            break;
        case '2':
            output_2(list2, num2), fp = fopen("�Ȳ�.txt", "w"), i = function_add(list2, p2, fp), fclose(fp);
            break;
        case '3':
            output_2(list3, num3), fp = fopen("����.txt", "w"), i = function_add(list3, p3, fp), fclose(fp);
            break;
        case '4':
            output_2(list4, num4), fp = fopen("��ʳ.txt", "w"), i = function_add(list4, p4, fp), fclose(fp);
            break;
        case '5':
            output_2(list5, num5), fp = fopen("��Ʒ.txt", "w"), i = function_add(list5, p5, fp), fclose(fp);
            break;
        }

    }
}

/*����ģ����*/
//����ģ��1����ȡtxtд�뵽�����ṹ��������
int function_read(struct dishes list[], FILE* fp)
{
    int num = 1;//������0��ʼ ����Ϊ1ͳ�Ƹ���
    char t, c[max_str];
    int i;
    if (fp == NULL)
    {
        printf("Can't open this file\n");
        exit(1);
    }
    while (!feof(fp)) //������ϵ��ļ�������������ļ�s�������򷵻ط�0ֵ�����򷵻�0
    {
        t = fgetc(fp);
        if (t == '\n')
            num++;
    }
    rewind(fp); //��ָ�����õ���һ��
    for (i = 0; i < num; i++)
    {
        fgets(c, max_str, fp);
        sscanf(c, "%s %d", list[i].name, &list[i].price);
    }
    fclose(fp);
    return num;
}

//����ģ��2��ʵ�ֵ�͵Ľṹ������д������
void function_ordering(struct dishes list1[], int num1, struct dishes list2[], int* p2, struct dishes list3[], int* p3, int choice)
{
    strcpy(list2[*p2].name, list1[choice - 1].name);
    list2[*p2].price = list1[choice - 1].price;
    strcpy(list3[*p3].name, list1[choice - 1].name);
    list3[*p3].price = list1[choice - 1].price;
    *p2 = *p2 + 1;
    *p3 = *p3 + 1;
}

// ����ģ��3��ʵ�ֽṹ���Ʒ�ļ۸��޸����ļ����ع�����Ƕ����ģ��6���Ծ����޸ĵĲ�Ʒ�ṹ�尴�۸�ӵ͵�������
int funtion_change(struct dishes list[], int num, FILE* fp)
{
    if (fp == NULL)
    {
        printf("Can't open this file\n");
        exit(1);
    }
    int i, n;
    char temp[max_str], t[max_str];
    printf("\n����ID��");
    scanf("%d", &n);
    if (n == 0)
    {
        for (i = 0; i < num; i++)
        {
            strcpy(temp, list[i].name);
            strcat(temp, " ");
            itoa(list[i].price, t, 10); //itoa()��������ֵת��Ϊ�ַ�������������Ϊ��Ҫ���Ƶ����ݣ����Ƹ�˭����ʲô���ơ�
            strcat(temp, t);
            strcat(temp, "\n");
            fputs(temp, fp);
        }
        return n;
    }
    printf("�����޸ĺ�ļ۸�");
    scanf("%d", &list[n - 1].price);
    function_sort(list, num);
    for (i = 0; i < num; i++)
    {
        strcpy(temp, list[i].name);
        strcat(temp, " ");
        itoa(list[i].price, t, 10); //itoa()��������ֵת��Ϊ�ַ�������������Ϊ��Ҫ���Ƶ����ݣ����Ƹ�˭����ʲô���ơ�
        strcat(temp, t);
        strcat(temp, "\n");
        fputs(temp, fp);
    }
    printf("�޸����\n");
    system("pause");
    system("cls");
    return 1;
}

//����ģ��4��ʵ�ֽṹ���Ʒ��ɾ�����ļ����ع�
int function_del(struct dishes list[], int* p, FILE* fp)
{
    if (fp == NULL)
    {
        printf("Can't open this file\n");
        exit(1);
    }
    int i, n;
    char temp[max_str], t[max_str];
    printf("\n������Ҫ�޸ĵĲ�ƷID��");
    scanf("%d", &n);
    if (n == 0)
    {
        for (i = 0; i < *p; i++)
        {
            strcpy(temp, list[i].name);
            strcat(temp, " ");
            itoa(list[i].price, t, 10); //itoa()��������ֵת��Ϊ�ַ�������������Ϊ��Ҫ���Ƶ����ݣ����Ƹ�˭����ʲô���ơ�
            strcat(temp, t);
            strcat(temp, "\n");
            fputs(temp, fp);
        }
        return 0;
    }
    for (i = n - 1; i < *p; i++)
    {
        strcpy(list[i].name, list[i + 1].name);
        list[i].price = list[i + 1].price;
    }
    *p = *p - 1;
    for (i = 0; i < *p; i++)
    {
        strcpy(temp, list[i].name);
        strcat(temp, " ");
        itoa(list[i].price, t, 10); //itoa()��������ֵת��Ϊ�ַ�������������Ϊ��Ҫ���Ƶ����ݣ����Ƹ�˭����ʲô���ơ�
        strcat(temp, t);
        strcat(temp, "\n");
        fputs(temp, fp);
    }
    printf("ɾ�����\n");
    system("pause");
    system("cls");
    return 1;
}

//����ģ��5��ʵ�ֽṹ���Ʒ��������ļ����ع�,��Ƕ����ģ��6���Ծ����޸ĵĲ�Ʒ�ṹ�尴�۸�ӵ͵�������
int function_add(struct dishes list[], int* p, FILE* fp)
{
    if (fp == NULL)
    {
        printf("Can't open this file\n");
        exit(1);
    }
    int i, n, x;
    char temp[max_str], t[max_str], in[max_str];
    printf("\n����0 0������һ��\n");
    printf("�����Ʒ���ͼ۸��м�ʹ�ÿո������\n");
    scanf("%s%d", list[*p].name, &list[*p].price);
    if (list[*p].price == 0)
    {
        for (i = 0; i < *p; i++)
        {
            strcpy(temp, list[i].name);
            strcat(temp, " ");
            itoa(list[i].price, t, 10); //itoa()��������ֵת��Ϊ�ַ�������������Ϊ��Ҫ���Ƶ����ݣ����Ƹ�˭����ʲô���ơ�
            strcat(temp, t);
            strcat(temp, "\n");
            fputs(temp, fp);
        }
        return 0;
    }
    *p = *p + 1;
    function_sort(list, *p);
    for (i = 0; i < *p; i++)
    {
        strcpy(temp, list[i].name);
        strcat(temp, " ");
        itoa(list[i].price, t, 10); //itoa()��������ֵת��Ϊ�ַ�������������Ϊ��Ҫ���Ƶ����ݣ����Ƹ�˭����ʲô���ơ�
        strcat(temp, t);
        strcat(temp, "\n");
        fputs(temp, fp);
    }
    printf("������\n");
    system("pause");
    system("cls");
    return 1;
}

// ����ģ��6���Ծ����޸ĵĲ�Ʒ�ṹ�尴�۸�ӵ͵�������
void function_sort(struct dishes list[], int num)
{
    int i, j;
    struct dishes t;
    for (j = num - 1; j > 0; j--)
    {
        for (i = 0; i < j; i++)
            if (list[i].price > list[i + 1].price)
            {
                t = list[i];
                list[i] = list[i + 1];
                list[i + 1] = t;
            }
    }
}