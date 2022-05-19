#pragma once
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>

#define INITIAL_SIZE 3         //数组初始化为3个空间
#define MAX_NAME 8             //输入姓名的最大长度为8个字符也就是四个汉字
#define MAX_COMPANY 8          //输入单位的最大长度为8个字符也就是四个汉字
#define MAX_LANDINE_NUMBER 12  //输入固定电话的最大长度为12位
#define MAX_MOBILE_NUMBER 11   //输入移动电话的最大长度位11位
#define MAX_CLASSIFY 8         //输入分类的最大长度位8个字符也就是四个汉字
#define MAX_EMAIL 17           //输入邮箱的最大长度为17个字符
#define MAX_QQ 10              //输入QQ的最大长度为10个字符

typedef struct PeoInfo
{
	char name[MAX_NAME];						//姓名
	char company[MAX_COMPANY];					//单位
	char landline_number[MAX_LANDINE_NUMBER];	//固定电话
	char mobile_number[MAX_MOBILE_NUMBER];		//移动电话
	char classify[MAX_CLASSIFY];				//分类
	char Email[MAX_EMAIL];						//邮箱
	char QQ[MAX_QQ];							//QQ
}PeoInfo;

typedef struct Contact
{
	PeoInfo* data;	//创建一个数组，用来存放信息
	int size;		//数组信息的总数，还可以用来作为下标
	int capacity;	//数组的总容量
}Contact;

enum Option
{
	Exit,	//0
	Input,	//1
	Modify,	//2
	Search,	//3
	Add,	//4
	Delete, //5
	Output	//6
};

void InitContact(Contact* ps);		//初始化通讯录
void DestroyContact(Contact* ps);	//释放通讯录
void InputContact(Contact* ps);		//输入信息
void OutputContact(Contact* ps);	//输出信息
void ModifyContact(Contact* ps);	//修改信息
void SearchContact(Contact* ps);	//查询信息
void AddContact(Contact* ps);		//增加信息
void DeleteContact(Contact* ps);	//删除信息
void SaveContact(Contact* ps);		//保存文件，将最终的信息保存到本地
void LoadContact(Contact* ps);		//加载文件，可加载出之前保存到本地的信息


