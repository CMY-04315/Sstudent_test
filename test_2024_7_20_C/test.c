#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//sprintf ��һ����ʽ��������д���ַ����У������ǰ�һ����ʽ�����ַ���ת�����ַ�����
//sscanf ��һ���ַ�����ת������ʽ��������

//fseek ʹ�ļ��ڵ�ָ�����ƫ��
//ftell ��ȡ�ļ��ڵ�ָ���������ʼλ�õ�ƫ����
//rewind ʹ�ļ�ָ��ص���ʼλ��


//��ӡ������ͼ��
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int j = 0;
//	//�ϰ벿��
//	for (i = 0; i < a + 1; i++)
//	{
//		for (j = 0; j < 2 * a - 2 * i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//�°벿��
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < (i + 1) * 2; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < a - i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}



///////////////////////////////////////////////////////���ݽṹ////////////////////////////////////////////////////////////////////

//
//
//char* f()
//{
//	char* ps = (char*)malloc(6);
//	if (ps == NULL)
//	{
//		printf("fuil");
//		return 1;
//	}
//	strcpy(ps, "hello");
//	return ps;
//}
//
//int main()
//{
//	char* p = f();
//	printf("%s\n", p);
//	return 0;
//}
//




//int removeElement(int* nums, int numsSize, int val) 
//{
//    int i = 0;
//    int count = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        if (nums[i] == val)
//        {
//            count++;
//            int j = 0;
//            for (j = i; j < numsSize; j++)
//            {
//                nums[j] = nums[j + 1];
//            }
//            i--;
//        }
//    }
//    return numsSize - count;
//}

//
//int removeElement(int* nums, int numsSize, int val)
//{
//    int left = 0;
//    int right = 0;
//    for (right = 0; right < numsSize; right++) 
//    {
//        if (nums[right] != val)
//        {
//            nums[left] = nums[right];
//            left++;
//        }
//    }
//    return left;
//}
//
//
//int main()
//{
//	int nums[8] = { 0,1,2,2,3,0,4,2 };
//	int val = 2;
//    int k = removeElement(nums, 8, val);
//    int i = 0;
//    for (i = 0; i < k; i++)
//    {
//        printf("%d ", nums[i]);
//    }
//    printf("\n%d\n", k);
//	return 0;
//}
//


//
//
////���ٿռ�
//ListNode* SLCreateCapacity(int x)
//{
//    ListNode* p = (ListNode*)malloc(sizeof(ListNode));
//    if (p == NULL)
//    {
//        printf("SLCreateCapacity fail\n");
//        exit(1);
//    }
//    p->val = x;
//    p->next = NULL;
//    return p;
//}

//
//
////ͷ��
//ListNode* SLPushFront(ListNode** pphead, int x)
//{
//    ListNode* newnode = SLCreateCapacity(x);
//    newnode->next = *pphead;
//    *pphead = newnode;
//    return newnode;
//}

//ɾ������������ָ�������֣���������Ԫ�ص�ַ
//ListNode* removeElements(ListNode* head, int val)
//{
//    struct ListNode* p1 = head;
//    struct ListNode* p2 = head;
//    struct ListNode* returnhead = head;
//    while (p1 != NULL)
//    {
//        if (returnhead->val == val)
//        {
//            p1 = p1->next;
//            p2 = p2->next;
//            returnhead = p1;
//            free(head);
//            head = NULL;
//            continue;
//        }
//        else if (p1->val == val)
//        {
//            p1 = p1->next;
//            free(p2->next);
//            p2->next = p1;
//            continue;
//        }
//        p2 = p1;
//        p1 = p1->next;
//    }
//    return returnhead;
//}


//
//ListNode* f1(ListNode* phead, int x)
//{
//    ListNode* exp2 = phead;
//    ListNode* exp1 = phead->next;
//    ListNode* head = NULL;
//    ListNode* tail = NULL;
//    while (exp1)
//    {
//        if (exp1->val < x)
//        {
//            if (exp1->next != NULL)
//            {
//                if (head == NULL)
//                {
//                    head = exp1;
//                    tail = exp1;
//                    exp2->next = exp1->next;
//                    exp1->next = phead;
//                    exp1 = exp2->next;
//                    continue;
//                }
//                exp2->next = exp1->next;
//                tail->next = exp1;
//                tail = tail->next;
//            }
//            else
//            {
//                if (head == NULL)
//                {
//                    exp2->next = NULL;
//                    head = exp1;
//                    tail = exp1;
//                    exp1->next = phead;
//                    exp1 = NULL;
//                    continue;
//                }
//            }
//        }
//        exp2 = exp1;
//        exp1 = exp1->next;
//    }
//    return head;
//}

//**************************

/*
����һ������Ϊ n ������ÿ���ڵ����һ���������ӵ����ָ�� random ����ָ�����ָ�������е��κνڵ��սڵ㡣
������������ ����� ���Ӧ�������� n �� ȫ�� �ڵ���ɣ�����ÿ���½ڵ��ֵ����Ϊ���Ӧ��ԭ�ڵ��ֵ��
�½ڵ�� next ָ��� random ָ��Ҳ��Ӧָ���������е��½ڵ㣬��ʹԭ����͸��������е���Щָ���ܹ���ʾ��ͬ������״̬��
���������е�ָ�붼��Ӧָ��ԭ�����еĽڵ� ��
���磬���ԭ�������� X �� Y �����ڵ㣬���� X.random-- > Y ����ô�ڸ��������ж�Ӧ�������ڵ� x �� y ��ͬ���� x.random->y��
���ظ��������ͷ�ڵ㡣
*/

//struct ListNode
//{
//    int val;
//    struct ListNode* next;
//    struct ListNode* random;
//};
//
////��ӡ
//void SLPrint(struct ListNode* phead)
//{
//    if (phead == NULL)
//    {
//        printf("NULL\n");
//    }
//    else
//    {
//        struct ListNode* cur = phead;
//        while (cur != NULL)
//        {
//            printf("%d->", cur->val);
//            cur = cur->next;
//        }
//        printf("NULL\n");
//    }
//}
//
//struct ListNode* copyRandomList(struct ListNode* phead)
//{
//    struct ListNode* p1 = phead;
//    struct ListNode* p2 = phead;
//    struct ListNode* headcopy = phead;
//    if (p1 == NULL)
//    {
//        struct ListNode* newnode = NULL;
//        return newnode;
//    }
//    while (p1)//�������������ԭ�б���Ӧ�ڵ�֮�󣬲���val���и�ֵ
//    {
//        struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//        newnode->next = p1->next;
//        p1->next = newnode;
//        newnode->val = p1->val;
//        p1 = p1->next->next;
//    }
//    p1 = phead;
//    p2 = phead->next;
//    while (p1)//��random���и�ֵ
//    {
//        if (p1->random != NULL)
//        {
//            p2->random = p1->random->next;
//        }
//        else if (p1->random == NULL)
//        {
//            p2->random = NULL;
//        }
//        p1 = p1->next->next;
//        if (p2->next == NULL)
//        {
//            continue;
//        }
//        p2 = p2->next->next;
//    }
//    p1 = phead;
//    p2 = phead->next;
//    headcopy = phead->next;
//    while (1)//������������ȡ����
//    {
//        p1->next = p1->next->next;
//        p1 = p1->next;
//        p2->next = p2->next->next;
//        p2 = p2->next;
//        if (p2->next == NULL)
//        {
//            p1->next = NULL;
//            break;
//        }
//    }
//    return headcopy;
//}
//
//
//int main()
//{
//    //struct ListNode* phead = NULL;
//    struct ListNode* node1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* node2 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* node3 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* node4 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* node5 = (struct ListNode*)malloc(sizeof(struct ListNode));
//
//    node1->next = node2;
//    node2->next = node3;
//    node3->next = node4;
//    node4->next = node5;
//    node5->next = NULL;
//
//    node1->val = 7;
//    node2->val = 13;
//    node3->val = 11;
//    node4->val = 10;
//    node5->val = 1;
//
//    node1->random = NULL;
//    node2->random = node1;
//    node3->random = node5;
//    node4->random = node3;
//    node5->random = node1;
//
//    SLPrint(node1);
//    copyRandomList(node1);
//	return 0;
//}

//*****************************

//
//int main()
//{
//	int i = 0;
//	int a[4] = { 0 };
//	int n = 13;
//	for (i = 0; n != 0; i++)
//	{
//		a[i] = n % 2;
//		n = n / 2;
//	}
//	for(;i>=0;i--)
//		printf("%d", a[i]);
//	return 0;
//}
//
//

//int main()
//{
//    unsigned int a = 1;
//    int b = -1;
//    a = b;
//    printf("%u\n", a);
//	return 0;
//}


//int main()
//{
//	char a[30], b[30];
//	scanf("%s",a);
//	gets(b);
//	printf("%s\n%s\n",a,b);
//	return 0;
//}







#define PI 3.1415926
int main()
{
	double r = 3.67, c, s, v;
	c = 2 * PI * r;
	s = PI * pow(r, 2);
	v = 4.0 / 3.0 * PI * pow(r, 3);
	printf("c=%f\ns=%f\nv=%f\n", c, s, v);
	return 0;
}


