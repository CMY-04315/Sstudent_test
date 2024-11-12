#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "test.h"
#include <assert.h>


//初始化
int SeqListInit(SL* ps)
{
	int* p = (int*)malloc(3 * sizeof(int));
	if (p == NULL)
	{
		printf("fuil\n");
		return 1;
	}
	ps->a = p;
	p = NULL;
	ps->capacity = 3;
	ps->size = 0;
	return 0;
}
//打印数组内容
void SeqListPrint(SL* ps)
{
	if (ps->size != 0)
	{
		int i = 0;
		for (i = 0; i < ps->size; i++)
		{
			printf("%d ", ps->a[i]);
		}
		printf("\n");
	}
}
//销毁空间
void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = 0;
	ps->size = 0;
}
//检查空间大小
int SeqListCheckCapacity(SL* ps)
{
	if (ps->capacity == ps->size)
	{
		int* p = realloc(ps->a, (ps->capacity + 3));
		if (p == NULL)
		{
			printf("fuil\n");
			return 1;
		}
		ps->a = p;
		ps->capacity += 3;
	}
	return 0;
}
//尾插
void SeqListPushBack(SL* ps, int x)
{
	SeqListCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
//尾删
void SeqListPopBack(SL* ps)
{
	if (ps->size > 0)
	{
		ps->size--;
	}
}
//头插
void SeqListPushFront(SL* ps, int x)
{
	SeqListCheckCapacity(ps);
	int i = 0;
	for (i = ps->size; i > 0; i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[0] = x;
	ps->size++;
}
//头删
void SeqListPopFront(SL* ps)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	if (ps->size > 1)
	{
		ps->size--;
	}
}
//查找
int SeqListFind(SL* ps, int x)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}
//指定下标插入
void SeqListInsert(SL* ps, int pos, int x)
{
	SeqListCheckCapacity(ps);
	assert(pos >= 0 && pos <= ps->size);
	int i = 0;
	for (i = ps->size; i > pos; i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[pos] = x;
	ps->size++;
}
//指定下标删除
void SeqListErase(SL* ps, int pos)
{
	assert(pos >= 0 && pos < ps->size);
	int i = 0;
	for (i = pos; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	if (ps->size > 1)
	{
		ps->size--;
	}
}
