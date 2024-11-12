#pragma once

typedef struct SeqList
{
	int* a;
	int capacity;//�������ɿռ�
	int size;	 //ʵ�ʴ洢Ԫ������
}SL;


//��ʼ��
int SeqListInit(SL* ps);
//���ٿռ�
void SeqListDestory(SL* ps);
//���ռ��С
int SeqListCheckCapacity(SL* ps);
//β��
void SeqListPushBack(SL* ps, int x);
//βɾ
void SeqListPopBack(SL* ps);
//ͷ��
void SeqListPushFront(SL* ps, int x);
//ͷɾ
void SeqListPopFront(SL* ps);
//����
int SeqListFind(SL* ps, int x);
//ָ���±����
void SeqListInsert(SL* ps, int pos, int x);
//ָ���±�ɾ��
void SeqListErase(SL* ps, int pos);
//��ӡ��������
void SeqListPrint(SL* ps);
