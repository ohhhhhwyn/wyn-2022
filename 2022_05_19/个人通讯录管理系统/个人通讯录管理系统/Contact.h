#pragma once
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>

#define INITIAL_SIZE 3         //�����ʼ��Ϊ3���ռ�
#define MAX_NAME 8             //������������󳤶�Ϊ8���ַ�Ҳ�����ĸ�����
#define MAX_COMPANY 8          //���뵥λ����󳤶�Ϊ8���ַ�Ҳ�����ĸ�����
#define MAX_LANDINE_NUMBER 12  //����̶��绰����󳤶�Ϊ12λ
#define MAX_MOBILE_NUMBER 11   //�����ƶ��绰����󳤶�λ11λ
#define MAX_CLASSIFY 8         //����������󳤶�λ8���ַ�Ҳ�����ĸ�����
#define MAX_EMAIL 17           //�����������󳤶�Ϊ17���ַ�
#define MAX_QQ 10              //����QQ����󳤶�Ϊ10���ַ�

typedef struct PeoInfo
{
	char name[MAX_NAME];						//����
	char company[MAX_COMPANY];					//��λ
	char landline_number[MAX_LANDINE_NUMBER];	//�̶��绰
	char mobile_number[MAX_MOBILE_NUMBER];		//�ƶ��绰
	char classify[MAX_CLASSIFY];				//����
	char Email[MAX_EMAIL];						//����
	char QQ[MAX_QQ];							//QQ
}PeoInfo;

typedef struct Contact
{
	PeoInfo* data;	//����һ�����飬���������Ϣ
	int size;		//������Ϣ��������������������Ϊ�±�
	int capacity;	//�����������
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

void InitContact(Contact* ps);		//��ʼ��ͨѶ¼
void DestroyContact(Contact* ps);	//�ͷ�ͨѶ¼
void InputContact(Contact* ps);		//������Ϣ
void OutputContact(Contact* ps);	//�����Ϣ
void ModifyContact(Contact* ps);	//�޸���Ϣ
void SearchContact(Contact* ps);	//��ѯ��Ϣ
void AddContact(Contact* ps);		//������Ϣ
void DeleteContact(Contact* ps);	//ɾ����Ϣ
void SaveContact(Contact* ps);		//�����ļ��������յ���Ϣ���浽����
void LoadContact(Contact* ps);		//�����ļ����ɼ��س�֮ǰ���浽���ص���Ϣ


