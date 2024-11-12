#pragma once

typedef struct SeqList
{
	int* a;
	int capacity;//最大可容纳空间
	int size;	 //实际存储元素数量
}SL;


//初始化
int SeqListInit(SL* ps);
//销毁空间
void SeqListDestory(SL* ps);
//检查空间大小
int SeqListCheckCapacity(SL* ps);
//尾插
void SeqListPushBack(SL* ps, int x);
//尾删
void SeqListPopBack(SL* ps);
//头插
void SeqListPushFront(SL* ps, int x);
//头删
void SeqListPopFront(SL* ps);
//查找
int SeqListFind(SL* ps, int x);
//指定下标插入
void SeqListInsert(SL* ps, int pos, int x);
//指定下标删除
void SeqListErase(SL* ps, int pos);
//打印数组内容
void SeqListPrint(SL* ps);
