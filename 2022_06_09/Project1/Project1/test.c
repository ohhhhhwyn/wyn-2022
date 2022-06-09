#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

/*宏定义区*/
#define max_str 30 //最大字符串长度
#define max_num 30 //最大菜品数量
#define max_all 100 //今日售卖总计最大值

/*定义菜品结构体*/
struct dishes
{
    char name[max_str];
    int price;
};

/*定义全局变量*/
struct dishes list1[max_num]; //存放凉菜菜品信息
int num1 = 0; //存放凉菜菜品数量
int* p1 = &num1;
struct dishes list2[max_num]; //存放热菜菜品信息
int num2 = 0; //存放热菜菜品数量
int* p2 = &num2;
struct dishes list3[max_num]; //存放锅仔菜品信息
int num3 = 0; //存放锅仔菜品数量
int* p3 = &num3;
struct dishes list4[max_num]; //存放主食菜品信息
int num4 = 0; //存放主食菜品数量
int* p4 = &num4;
struct dishes list5[max_num]; //存放饮品菜品信息
int num5 = 0; //存放饮品菜品数量
int* p5 = &num5;
struct dishes list6[max_num]; //存放顾客点餐菜品信息
int num6 = 0; //存放顾客点餐菜品数量
int* p6 = &num6;
struct dishes list7[max_all]; //存放今日所点总菜品信息
int num7 = 0; //存放今日所点总菜品数量
int* p7 = &num7;

/*全局声明*/
/*菜单的输出*/
//一级主菜单
char menu_m1();
// 管理员一级菜单
char menu_a1();
// 管理员二级菜单：添加或删除菜品的提示
char menu_a2();
//输出菜单1（包括提示输入语句）
void output_1(struct dishes list[], int num);
//输出菜品信息2（不含有提示输入语句）
void output_2(struct dishes list[], int num);

/*函数*/
//创建程序运行所需的txt文件
void creat_file();
//加载菜品信息到结构体数组，嵌套功能模块1：读取txt写入到单个结构体数组中
void load_dishes(struct dishes list1[], int* p1, struct dishes list2[], int* p2, struct dishes list3[], int* p3, struct dishes list4[], int* p4, struct dishes list5[], int* p5);
//实现点餐的函数，嵌套功能模块2：实现点餐的结构体数组写入数据
void ordering(struct dishes list1[], int num1, struct dishes list2[], int* p2, struct dishes list3[], int* p3);
// 查看与结算的输出函数
void settlement(struct dishes list[], int num);
// 计算今日收入
void income(struct dishes list[], int num);
// 实现菜品的价格修改，内嵌功能模块3：实现结构体菜品的价格修改与文件的重构
void change(struct dishes list[], int* p, char ch);
// 实现菜品的删除，内嵌功能模块4：实现结构体菜品的删除与文件的重构
void del(struct dishes list[], int* p, char ch);
// 函数：实现菜品的添加，内嵌功能模块5：实现结构体菜品的添加与文件的重构
void add(struct dishes list[], int* p, char ch);

/*功能模块区*/
//功能模块1：读取txt写入到单个结构体数组中
int function_read(struct dishes list[], FILE* fp);
//功能模块2：实现点餐的结构体数组写入数据
void function_ordering(struct dishes list1[], int num1, struct dishes list2[], int* p2, struct dishes list3[], int* p3, int choice);
// 功能模块3：实现结构体菜品的价格修改与文件的重构，内嵌功能模块6：对经过修改的菜品结构体按价格从低到高排序
int funtion_change(struct dishes list[], int num, FILE* fp);
//功能模块4：实现结构体菜品的删除与文件的重构
int function_del(struct dishes list[], int* p, FILE* fp);
//功能模块5：实现结构体菜品的添加与文件的重构，,内嵌功能模块6：对经过修改的菜品结构体按价格从低到高排序
int function_add(struct dishes list[], int* p, FILE* fp);
// 功能模块6：对经过修改的菜品结构体按价格从低到高排序
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

/*菜单的输出*/
//一级主菜单
char menu_m1()
{
    char ch;
    printf("             ---------------------------\n");
    printf("            |     欢迎光临本餐厅        |\n");
    printf("            |    请按序号选择菜品       |\n");
    printf("             ---------------------------\n");
    printf("            |      1         凉菜       |\n");
    printf("            |      2         热菜       |\n");
    printf("            |      3         锅仔       |\n");
    printf("            |      4         主食       |\n");
    printf("            |      5         饮品       |\n");
    printf("            |      6         查看       |\n");
    printf("            |      y         结算       |\n");
    printf("             ---------------------------\n");
    printf("            输入序号：");
    ch = getch();
    return ch;
}

// 管理员一级菜单
char menu_a1()
{
    char ch;
    printf("\n-------------------------------\n");
    printf("\t1\t今日收入\t\n");
    printf("\t2\t修改价格\t\n");
    printf("\t3\t删除菜品\t\n");
    printf("\t4\t添加菜品\t\n");
    printf("\t0\t返回上一级\t\n");
    printf("-------------------------------\n");
    printf("输入序号：");
    ch = getch();
    return ch;
}

// 管理员二级菜单：添加或删除菜品的提示
char menu_a2()
{
    char ch;
    printf("\n-------------------------------\n");
    printf("\t1\t凉菜\t\n");
    printf("\t2\t热菜\t\n");
    printf("\t3\t锅仔\t\n");
    printf("\t4\t主食\t\n");
    printf("\t5\t饮品\t\n");
    printf("\t0\t返回上一级\t\n");
    printf("-------------------------------\n");
    printf("输入序号：");
    ch = getch();
    return ch;
}

//输出菜单1（包括提示输入语句）
void output_1(struct dishes list[], int num)
{
    int i;
    printf("\n-------------------------------------------------\n");
    printf("|\t序号\t菜品\t\t价格\t\t|\n");
    printf("-------------------------------------------------\n");
    for (i = 0; i < num; i++)
    {
        if (strlen(list[i].name) <= 6)
            printf("|\t%d\t%s\t\t%d\t\t|\n", i + 1, list[i].name, list[i].price);
        else
            printf("|\t%d\t%s\t%d\t\t|\n", i + 1, list[i].name, list[i].price);
    }
    printf("|\t0\t返回\t\t\t\t|\n");
    printf("-------------------------------------------------\n");
    printf("请输入序号：\n");
}

//输出菜品信息2（不含有提示输入语句）
void output_2(struct dishes list[], int num)
{
    int i;
    printf("\n-------------------------------------------------\n");
    printf("|\t序号\t菜品\t\t价格\t\t|\n");
    printf("-------------------------------------------------\n");
    for (i = 0; i < num; i++)
    {
        if (strlen(list[i].name) <= 6)
            printf("|\t%d\t%s\t\t%d\t\t|\n", i + 1, list[i].name, list[i].price);
        else
            printf("|\t%d\t%s\t%d\t\t|\n", i + 1, list[i].name, list[i].price);
    }
    printf("|\t0\t返回\t\t\t\t|\n");
    printf("-------------------------------------------------\n");
}

/*函数*/
//创建程序运行所需的txt文件
void creat_file()
{
    FILE* fp = fopen("凉菜.txt", "a");
    if (fp == NULL)
        return;
    fclose(fp);
    fp = fopen("热菜.txt", "a");
    if (fp == NULL)
        return;
    fclose(fp);
    fp = fopen("锅仔.txt", "a");
    if (fp == NULL)
        return;
    fclose(fp);
    fp = fopen("主食.txt", "a");
    if (fp == NULL)
        return;
    fclose(fp);
    fp = fopen("饮品.txt", "a");
    if (fp == NULL)
        return;
    fclose(fp);
}
//加载菜品信息到结构体数组，嵌套功能模块1：读取txt写入到单个结构体数组中
void load_dishes(struct dishes list1[], int* p1, struct dishes list2[], int* p2, struct dishes list3[], int* p3, struct dishes list4[], int* p4, struct dishes list5[], int* p5)
{
    FILE* fp;
    fp = fopen("凉菜.txt", "r");
    *p1 = function_read(list1, fp);
    fp = fopen("热菜.txt", "r");
    *p2 = function_read(list2, fp);
    fp = fopen("锅仔.txt", "r");
    *p3 = function_read(list3, fp);
    fp = fopen("主食.txt", "r");
    *p4 = function_read(list4, fp);
    fp = fopen("饮品.txt", "r");
    *p5 = function_read(list5, fp);
    fclose(fp);
}

//实现点餐的函数，嵌套功能模块2：实现点餐的结构体数组写入数据
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
            printf("输入序号有误，请重新输入：\n");
    }
}

// 查看与结算的输出函数
void settlement(struct dishes list[], int num)
{
    int i, sum;
    for (i = 0, sum = 0; i < num; i++)
        sum += list[i].price;
    printf("\n-------------------------------------------------\n");
    printf("|\t序号\t菜品\t\t价格\t\t|\n");
    printf("-------------------------------------------------\n");
    for (i = 0; i < num; i++)
    {
        if (strlen(list[i].name) <= 6)
            printf("|\t%d\t%s\t\t%d\t\t|\n", i + 1, list[i].name, list[i].price);
        else
            printf("|\t%d\t%s\t%d\t\t|\n", i + 1, list[i].name, list[i].price);
    }
    printf("-------------------------------------------------\n");
    printf("总价格为：%d\n\n", sum);
}

// 计算今日收入
void income(struct dishes list[], int num)
{
    int i, sum;
    output_2(list, num);
    for (i = 0, sum = 0; i < num; i++)
        sum += list[i].price;
    printf("今日总收入：%d\n", sum);
}

// 实现菜品的价格修改，内嵌功能模块3：实现结构体菜品的价格修改与文件的重构
void change(struct dishes list[], int* p, char ch)
{
    int i = 1;
    FILE* fp;
    while (i != 0)
    {
        switch (ch)
        {
        case '1':
            output_2(list1, num1), fp = fopen("凉菜.txt", "w"), i = funtion_change(list1, num1, fp), fclose(fp);
            break;
        case '2':
            output_2(list2, num2), fp = fopen("热菜.txt", "w"), i = funtion_change(list2, num2, fp), fclose(fp);
            break;
        case '3':
            output_2(list3, num3), fp = fopen("锅仔.txt", "w"), i = funtion_change(list3, num3, fp), fclose(fp);
            break;
        case '4':
            output_2(list4, num4), fp = fopen("主食.txt", "w"), i = funtion_change(list4, num4, fp), fclose(fp);
            break;
        case '5':
            output_2(list5, num5), fp = fopen("饮品.txt", "w"), i = funtion_change(list5, num5, fp), fclose(fp);
            break;
        }

    }
}

// 实现菜品的删除，内嵌功能模块4：实现结构体菜品的删除与文件的重构
void del(struct dishes list[], int* p, char ch)
{
    int i = 1;
    FILE* fp;
    while (i != 0)
    {
        switch (ch)
        {
        case '1':
            output_2(list1, num1), fp = fopen("凉菜.txt", "w"), i = function_del(list1, p1, fp), fclose(fp);
            break;
        case '2':
            output_2(list2, num2), fp = fopen("热菜.txt", "w"), i = function_del(list2, p2, fp), fclose(fp);
            break;
        case '3':
            output_2(list3, num3), fp = fopen("锅仔.txt", "w"), i = function_del(list3, p3, fp), fclose(fp);
            break;
        case '4':
            output_2(list4, num4), fp = fopen("主食.txt", "w"), i = function_del(list4, p4, fp), fclose(fp);
            break;
        case '5':
            output_2(list5, num5), fp = fopen("饮品.txt", "w"), i = function_del(list5, p5, fp), fclose(fp);
            break;
        }

    }
}

// 函数：实现菜品的添加，内嵌功能模块5：实现结构体菜品的添加与文件的重构
void add(struct dishes list[], int* p, char ch)
{
    int i = 1;
    FILE* fp;
    while (i != 0)
    {
        switch (ch)
        {
        case '1':
            output_2(list1, num1), fp = fopen("凉菜.txt", "w"), i = function_add(list1, p1, fp), fclose(fp);
            break;
        case '2':
            output_2(list2, num2), fp = fopen("热菜.txt", "w"), i = function_add(list2, p2, fp), fclose(fp);
            break;
        case '3':
            output_2(list3, num3), fp = fopen("锅仔.txt", "w"), i = function_add(list3, p3, fp), fclose(fp);
            break;
        case '4':
            output_2(list4, num4), fp = fopen("主食.txt", "w"), i = function_add(list4, p4, fp), fclose(fp);
            break;
        case '5':
            output_2(list5, num5), fp = fopen("饮品.txt", "w"), i = function_add(list5, p5, fp), fclose(fp);
            break;
        }

    }
}

/*功能模块区*/
//功能模块1：读取txt写入到单个结构体数组中
int function_read(struct dishes list[], FILE* fp)
{
    int num = 1;//索引从0开始 定义为1统计个数
    char t, c[max_str];
    int i;
    if (fp == NULL)
    {
        printf("Can't open this file\n");
        exit(1);
    }
    while (!feof(fp)) //检测流上的文件结束符，如果文件s结束，则返回非0值，否则返回0
    {
        t = fgetc(fp);
        if (t == '\n')
            num++;
    }
    rewind(fp); //将指针重置到第一行
    for (i = 0; i < num; i++)
    {
        fgets(c, max_str, fp);
        sscanf(c, "%s %d", list[i].name, &list[i].price);
    }
    fclose(fp);
    return num;
}

//功能模块2：实现点餐的结构体数组写入数据
void function_ordering(struct dishes list1[], int num1, struct dishes list2[], int* p2, struct dishes list3[], int* p3, int choice)
{
    strcpy(list2[*p2].name, list1[choice - 1].name);
    list2[*p2].price = list1[choice - 1].price;
    strcpy(list3[*p3].name, list1[choice - 1].name);
    list3[*p3].price = list1[choice - 1].price;
    *p2 = *p2 + 1;
    *p3 = *p3 + 1;
}

// 功能模块3：实现结构体菜品的价格修改与文件的重构，内嵌功能模块6：对经过修改的菜品结构体按价格从低到高排序
int funtion_change(struct dishes list[], int num, FILE* fp)
{
    if (fp == NULL)
    {
        printf("Can't open this file\n");
        exit(1);
    }
    int i, n;
    char temp[max_str], t[max_str];
    printf("\n输入ID：");
    scanf("%d", &n);
    if (n == 0)
    {
        for (i = 0; i < num; i++)
        {
            strcpy(temp, list[i].name);
            strcat(temp, " ");
            itoa(list[i].price, t, 10); //itoa()：将整型值转换为字符串，参数依次为：要复制的内容，复制给谁，以什么进制。
            strcat(temp, t);
            strcat(temp, "\n");
            fputs(temp, fp);
        }
        return n;
    }
    printf("输入修改后的价格：");
    scanf("%d", &list[n - 1].price);
    function_sort(list, num);
    for (i = 0; i < num; i++)
    {
        strcpy(temp, list[i].name);
        strcat(temp, " ");
        itoa(list[i].price, t, 10); //itoa()：将整型值转换为字符串，参数依次为：要复制的内容，复制给谁，以什么进制。
        strcat(temp, t);
        strcat(temp, "\n");
        fputs(temp, fp);
    }
    printf("修改完成\n");
    system("pause");
    system("cls");
    return 1;
}

//功能模块4：实现结构体菜品的删除与文件的重构
int function_del(struct dishes list[], int* p, FILE* fp)
{
    if (fp == NULL)
    {
        printf("Can't open this file\n");
        exit(1);
    }
    int i, n;
    char temp[max_str], t[max_str];
    printf("\n输入想要修改的菜品ID：");
    scanf("%d", &n);
    if (n == 0)
    {
        for (i = 0; i < *p; i++)
        {
            strcpy(temp, list[i].name);
            strcat(temp, " ");
            itoa(list[i].price, t, 10); //itoa()：将整型值转换为字符串，参数依次为：要复制的内容，复制给谁，以什么进制。
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
        itoa(list[i].price, t, 10); //itoa()：将整型值转换为字符串，参数依次为：要复制的内容，复制给谁，以什么进制。
        strcat(temp, t);
        strcat(temp, "\n");
        fputs(temp, fp);
    }
    printf("删除完成\n");
    system("pause");
    system("cls");
    return 1;
}

//功能模块5：实现结构体菜品的添加与文件的重构,内嵌功能模块6：对经过修改的菜品结构体按价格从低到高排序
int function_add(struct dishes list[], int* p, FILE* fp)
{
    if (fp == NULL)
    {
        printf("Can't open this file\n");
        exit(1);
    }
    int i, n, x;
    char temp[max_str], t[max_str], in[max_str];
    printf("\n输入0 0返回上一级\n");
    printf("输入菜品名和价格，中间使用空格隔开：\n");
    scanf("%s%d", list[*p].name, &list[*p].price);
    if (list[*p].price == 0)
    {
        for (i = 0; i < *p; i++)
        {
            strcpy(temp, list[i].name);
            strcat(temp, " ");
            itoa(list[i].price, t, 10); //itoa()：将整型值转换为字符串，参数依次为：要复制的内容，复制给谁，以什么进制。
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
        itoa(list[i].price, t, 10); //itoa()：将整型值转换为字符串，参数依次为：要复制的内容，复制给谁，以什么进制。
        strcat(temp, t);
        strcat(temp, "\n");
        fputs(temp, fp);
    }
    printf("添加完成\n");
    system("pause");
    system("cls");
    return 1;
}

// 功能模块6：对经过修改的菜品结构体按价格从低到高排序
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