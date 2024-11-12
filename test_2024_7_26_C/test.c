#include "test.h"

int main()
{
	SL bc = { 0 };
	SeqListInit(&bc);
	SeqListPushBack(&bc, 1);
	SeqListPushBack(&bc, 2);
	SeqListPushBack(&bc, 3);
	SeqListPushBack(&bc, 4);
	SeqListPushBack(&bc, 5);
	SeqListPrint(&bc);

	SeqListDestory(&bc);
	return 0;
}