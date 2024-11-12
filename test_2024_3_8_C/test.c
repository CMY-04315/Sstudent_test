#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <assert.h>

//多组输入，一个整数（2~20），表示直角三角形直角边的长度，即“*”的数量，也表示输出行数。
//每个“*”后面有一个空格
//#include <stdio.h>
//int main()
//{
//	int input = 0;
//	while (scanf("%d", &input))
//	{
//		int i = 0;
//		for (i = 0; i < input; i++)
//		{
//			int j = 0;
//			for (j = 0; j < input - 1 - i; j++)
//			{
//				printf("  ");
//			}
//			for (j = 0; j < i + 1; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//Kiki非常喜欢网购, 在一家店铺他看中了一件衣服, 他了解到, 如果今天是“双11”
//(11月11日)则这件衣服打7折, “双12”(12月12日)则这件衣服打8折, 如果有优
//惠券可以额外减50元(优惠券只能在双11或双12使用), 求KiKi最终所花的钱数。
//
//数据范围 : 衣服价格满足1<val≤100000
//
//输入描述 :
//
//一行, 四个数字, 第一个数表示小明看中的衣服价格, 第二和第三个整数分别表示
//当天的月份、当天的日期、第四个整数表示是否有优惠券(有优惠券用1表示, 无优
//	惠券用0表示)。注 : 输入日期保证只有“双11”和“双12”。
//
//	输出描述 :
//一行, 小明实际花的钱数(保留两位小数)。(提示 : 不要指望商家倒找你钱)
//#include <stdio.h>
//int main()
//{
//	float value = 0.0f;
//	int month = 0;
//	int day = 0;
//	int coupon = 0;
//	scanf("%f %d %d %d", &value, &month, &day, &coupon);
//	if (month == 11 && day == 11)
//	{
//		value = value * 0.7 - coupon * 50;
//	}
//	else if (month == 12 && day == 12)
//	{
//		value = value * 0.8 - coupon * 50;
//	}
//	if (value > 0)
//	{
//		printf("%.2f\n", value);
//	}
//	else
//	{
//		printf("0.00\n");
//	}
//	return 0;
//}


//5位运动员参加了10米台跳水比赛,有人让他们预测比赛结果:
//A选手说:B第二, 我第三;
//B选手说:我第二, E第四;
//C选手说:我第一, D第二;
//D选手说:C最后, 我第三;
//E选手说:我第四, A第一;
//比赛结束后, 每位选手都说对了一半, 请编程确定比赛的名次。
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&//表达式为真，返回值是1；表达式为假，返回值是0。
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1)
//							)
//						{
//							if (a * b * c * d * e == 120)
//							{
//								printf("a = %d b = %d c = %d d = %d e = %d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//日本某地发生了一件谋杀案, 警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词 :
//A说:不是我。
//B说 : 是C。
//C说 : 是D。
//D说 : C在胡说
//已知3个人说了真话, 1个人说的是假话。
//此题一看我就知道是在致敬山上彻也
//#include <stdio.h>
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer is %c\n", killer);
//		}
//	}
//	return 0;
//}


//打印一个十行十列的杨辉三角
//#include <stdio.h>
//int main()
//{
//	int yanghui[10][10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		yanghui[i][0] = 1;
//	}
//	for (i = 1; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			yanghui[i][j] = yanghui[i - 1][j - 1] + yanghui[i - 1][j];
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			if (yanghui[i][j] != 0)
//			{
//				printf("%d ", yanghui[i][j]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}


//定义一个函数指针，指向的函数有两个int形参并且返回一个函数指针，
//返回的指针指向一个有一个int形参且返回int的函数？
//int (*(*F)(int, int))(int)


//字符串左旋
//实现一个函数, 可以左旋字符串中的k个字符。
//例如:
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//char* Left_Rotation(char ptr[], int n)
//{
//	assert(n >= 0);
//	int ret = ptr;
//	int len = strlen(ptr);
//	int k = n % len;
//	while (k)
//	{
//		int i = 0;
//		int tmp = ptr[0];
//		for (i = 0; i < len - 1; i++)
//		{
//			ptr[i] = ptr[i + 1];
//		}
//		ptr[len - 1] = tmp;
//		k--;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[] = "abcdefgh";
//	int n = 0;
//	scanf("%d", &n);
//	Left_Rotation(arr, n);
//	printf("%s\n", arr);
//	return 0;
//}


//杨氏矩阵(每一行的元素都按照升序排列。每一列的元素也按照升序排列。每一行的第一个元素大于上一行的最后一个元素。)
//有一个数字矩阵,矩阵的每行从左到右是递增的,矩阵从上到下是递增的,
//请编写程序在这样的矩阵中查找某个数字是否存在。
//#include <stdio.h>
//int* find_num(int arr[3][3], int row, int col, int k)
//{
//	int x = 0;
//	int y = col - 1;
//	while (x <= row - 1 && y >= 0)
//	{
//		if (k < arr[x][y])
//		{
//			y--;
//		}
//		else if (k > arr[x][y])
//		{
//			x++;
//		}
//		else
//		{
//			return &arr[x][y];
//		}
//	}
//	return NULL;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//	int* ret = find_num(arr, 3, 3, k);//找到了返回1，没找到返回0。
//	printf("%x\n", ret);
//	return 0;
//}


//写一个函数, 判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如 : 给定s1 = AABCD和s2 = BCDAA, 返回1
//给定s1 = abcd和s2 = ACBD, 返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
#include <stdio.h>
#include <string.h>
//int is_retotion(char arr1[], char arr2[])//法一
//{
//	int len = strlen(arr1);
//	int k = len;
//	while (k)
//	{
//		int i = 0;
//		int tmp = arr1[0];
//		for (i = 0; i < len - 1; i++)
//		{
//			arr1[i] = arr1[i + 1];
//		}
//		arr1[len - 1] = tmp;
//		if (strcmp(arr1, arr2) == 0)
//		{
//			return 1;
//		}
//		k--;
//	}
//	return 0;
//}
//int is_retotion(char arr1[], char arr2[])//法二
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 == len2)
//	{
//		strncat(arr1, arr2, len2);
//		char* ret = strstr(arr1, arr2);
//		if (ret == NULL)
//		{
//			return 0;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "defabc";
//	int ret = is_retotion(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}


//假如这里有一个矩阵, 现在将它进行转置(将矩阵的行列互换得到的新矩阵称为转置矩阵)。
//第一行包含两个整数n和m, 表示一个矩阵包含n行m列, 用空格分隔。(1≤n≤10, 1sm≤10)
//从2到n + 1行, 每行输入m个整数(范国 - 231 - 231 - 1), 用空格分隔, 共输入n* m个数, 表示第一个矩阵中的元素。
//输出m行n列, 为矩阵转置后的结果。每个数后面有一个空格。
//#include <stdio.h>
//int main()
//{
//	int arr[10][10] = { 0 };
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int i = 0; 
//	int j = 0;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			int tmp = arr[i][j];
//			arr[i][j] = arr[j][i];
//			arr[j][i] = tmp;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//KiKi想知道一个n阶方矩是否为上三角矩阵, 请帮他编程判定。上三角矩阵即主对角
//线以下的元素都为0的矩阵, 主对角线为从矩阵的左上角至右下角的连线。
//第一行包含一个整数n, 表示一个方阵包含n行n列, 用空格分隔。(1≤n≤10)
//从2到n + 1行, 每行输入n个整数(范围 - 2^31 ~ 2^31 - 1), 用空格分隔, 共输入n*n个数。
//一行, 如果输入方阵是上三角矩阵输出"YES”并换行,否则输出”NO”并换行。
//#include <stdio.h>
//int main()
//{
//	int arr[10][10] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0; 
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}	
//	int flag = 1;
//	for (i = 1; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//	}
//	if (flag == 1)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}


//输入一个整数序列, 判断是否是有序序列, 有序, 指序列中的整数从小到大排序或者从大到小排序(相同元素也视为有序)。
//数据范围：数量3≤n≤50，序列中的值都满足1≤val≤100
//第一行输入一个整数N(3≤N≤50)。
//第二行输入N个整数, 用空格分隔N个整数。
//输出为一行, 如果序列有序输出sorted, 否则输出unsorted。
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int i = 0;
//	int flag = 1;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	if (arr[0] < arr[n - 1])//升序
//	{
//		int j = 0;
//		while (j != n - 1)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				flag = 0;
//				break;
//			}
//			j++;
//		}
//	}
//	else if (arr[0] > arr[n - 1])//降序
//	{
//		int j = 0;
//		while (j != n - 1)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				flag = 0;
//				break;
//			}
//			j++;
//		}
//	}
//	else//相同
//	{
//		int j = 0;
//		while (j != n - 1)
//		{
//			if (arr[j] != arr[j + 1])
//			{
//				flag = 0;
//				break;
//			}
//			j++;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("unsorted\n");
//	}
//	else
//	{
//		printf("sorted\n");
//	}
//	return 0;
//}


//-------------------------------------------------结构体-----------------------------------------------------------

//结构体内存对齐


//#include <stdio.h>
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S1));//打印结果是12
//	printf("%d\n", sizeof(struct S2));//打印结果是8
//	return 0;
//}
//成员内容相同，但是仅仅是换了一下顺序就导致结果不一样
//想要计算上述的结构体大小，就先要了解内存对其规则
//1.第一个成员在与结构体变量偏移量为0的地址处。
//2.其他成员变量要对齐到某个数字(对齐数)的整数倍的地址处。
//对齐数 = 编译器默认的一个对齐数与该成员大小的较小值。(VS中默认的值为8)
//3.结构体总大小为最大对齐数(每个成员变量都有一个对齐数)的整数倍。
//4.如果嵌套了结构体的情况, 嵌套的结构体对齐到自己的最大对齐数的整数倍处, 结构体的整
//体大小就是所有最大对齐数(含嵌套结构体的对齐数)的整数倍。

//offsetof(type, member)
//这是一个宏，它会返回结构体成员在结构体中的偏移量
//头文件是stddef.h


//#include <stddef.h>
//#include <stdio.h>
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct S1, c1));
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));
//	printf("%d\n", sizeof(struct S1));//打印结果是12
//	printf("%d\n", sizeof(struct S2));//打印结果是8
//	return 0;
//}
//结构体内存对齐是一种拿空间换时间的做法
//所以在设计程序时，要做到既要满足对齐，又要节省空间


//使用#pragma pack()可以修改默认对齐数
//#pragma pack(4)//将默认对齐数修改为4
//#pragma pack()//将默认对齐数恢复为默认值


//结构体传参
//struct S
//{
//	int data[1000];
//	int num;
//};
//void print1(struct S ss)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", ss.data[i]);
//	}
//	printf("%d\n", ss.num);
//}
//void print2(const struct S* ps)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", ps->data[i]);
//	}
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	struct S s = { {1,2,3}, 100 };
//	print1(s);//传值调用，生成临时空间，比较浪费
//	print2(&s);//传址调用，更节省空间，推荐
//	return 0;
//}


//--------------------------------------------位段-------------------------------------------------

//位段是通过结构体实现的
//位段的声明与结构体是类似的，但有两个不同：
//1.位段的成员必须是int、unsigned int或signed int。（虽然说必须，但实际上只要是整型家族都可以）
//2.位段的成员名后面有一个冒号和一个数字。
//比如：
//#include <stdio.h>
//struct A
//{
//	int _a : 2;//给_a分配两个比特位
//	int _b : 5;//给_b分配五个比特位
//	int c : 10;//给c分配十个比特位
//	int d : 30;//给d分配三十个比特位
//};
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}
//这种用法是一种非常拮据的用法
//位段涉及很多不确定因素，位段是不跨平台的，注意可移植程序应该避免使用位段。
//一般使用位段都是同一个类型


//------------------------------------------------------枚举--------------------------------------------------------------

//枚举的使用与结构体相似
//枚举常量也有下标值，与数组一样，从零开始。

//#include <stdio.h>
//enum Day//星期
//{
//	Mon,//枚举常量
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//enum Day2//星期
//{
//	Mon,//枚举常量
//	Tues = 2,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//int main()
//{
//	printf("%d\n", Mon);
//	printf("%d\n", Tues);
//	printf("%d\n", Wed);
//	printf("%d\n", Thur);
//	printf("%d\n", Fri);
//	printf("%d\n", Sat);
//	printf("%d\n", Sun);
//	return 0;
//}


//枚举的优点:
//
//1.增加代码的可读性和可维护性
//2.和#define定义的标识符比较枚举有类型检查, 更加严谨。
//3.防止了命名污染(封装)
//4.便于调试
//5.使用方便, 一次可以定义多个常量


//--------------------------------联合体-----------------------------------------

//联合也是一种特殊的自定义类型
//这种类型定义的变量也包含一系列的成员, 特征是这些成员共用同一块空间(所以联合也叫共用体)


//#include <stdio.h>
//union Un
//{
//	int a;//4
//	char c;//1
//};
////共用
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//4
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.a));
//	printf("%p\n", &(u.c));
//	return 0;
//}


//利用联合体判断系统大小端
//#include <stdio.h>
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int a;
//	}u;
//	u.a = 1;
//	return u.c;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


//联合体大小的计算
//联合体的大小至少是最大成员的大小
//当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对其数的整数倍

//#include <stdio.h>
//typedef union un
//{
//	char arr[5];
//	int i;
//}un;
//int main()
//{
//	printf("%d\n", sizeof(un));//8   虽然char是数组，但是计算时是按照char的大小计算的，也就是说char数组的对齐数是1，而int的对齐数是4，最大对其数是4，内存对齐后总大小为8。
//	return 0;
//}

//------------------------------------------动态内存管理-------------------------------------------------


//---------------malloc和free----------------

//void malloc(size_t size);
//头文件 stdlib.h
//malloc用来开辟空间
//如果开辟空间失败会返回空指针(NULL)。


//int main()
//{
//	int arr[10] = { 0 };
//	//动态内存开辟
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		assert(p);
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + i));
//	}
//	//没有free
//	//并不是说内存空间就不回收了
//	//当程序退出的时候,系统会自动回收内存空间的
//	return 0;
//}


//正确的写法
//int main()
//{
//	int arr[10] = { 0 };
//	//动态内存开辟
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		assert(p);
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + i));
//	}
//	free(p);//用完后释放空间，将空间归还系统。
//	p = NULL;//释放空间后p变成野指针，为防止出bug，将p置成野指针。
//	return 0;
//}


//free释放的内存必须是动态内存开辟的，否则是未定义行为。

//---------------------calloc-----------------------

//void* calloc(size_t num, size_t size);
//开辟num个size大小的内存
//开辟之后默认初始化为0

//---------------------realloc----------------------

//void* realloc(void* ptr, size_t size);
//调整内存大小
//ptr是要调整的内存地址
//size是调整之后新的大小
//返回值为调整之后的内存起始位置
//这个函数调整原内存空间大小的基础上，还会将原来内存中的数据移动到新的空间。


//-----------------------------例题-----------------------------------
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test()
//{
//	char* str = NULL;
//	GetMemory(str);//str的值没有改变，要想改变str存储的地址，需要传&str，使用二级指针。
//	strcpy(str, "hello world");//空指针解引用会崩溃
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


//每组输入包含两个正整数n和m。
//对于每组输入，输出一个正整数，为n和m的最大公约数和最小公倍数之和。
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int min = (m > n ? n : m);
//	int max = (m < n ? n : m);
//	int tmp1 = max;
//	int tmp2 = min;
//	int res1 = 1;
//	int res2 = 1;
//	while (1)//最小公倍数
//	{
//		if (tmp1 % max == 0 && tmp1 % min == 0)
//		{
//			res1 = tmp1;
//			break;
//		}
//		tmp1++;
//	}
//	tmp1 = max;
//	while (1)//最大公约数
//	{
//		if (max % tmp2 == 0 && min % tmp2 == 0)
//		{
//			res2 = tmp2;
//			break;
//		}
//		tmp2--;
//	}
//	tmp2 = min;
//	printf("%d\n", res1 + res2);
//	return 0;
//}


//输入描述:
//多组输入, 一个整数(3~20), 表示输出的行数, 也表示组成正方形边的“* ”的数量。
//输出描述 :
//针对每行输入, 输出用“* ”组成的“空心”正方形, 每个“* ”后面有一个空格。
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1; i <= n; i++)//每一行
//	{
//		if (i == 1 || i == n)//第一行与最后一行
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)//从左到右依次每一行
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		if (i >= 2 && i <= n - 1)//中间各行
//		{
//			int j = 0;
//			for (j = 1; j <= n; j++)//从左到右依次每一行
//			{
//				if (j == 1 || j == n)//第一行与最后一行
//				{
//					printf("* ");
//				}
//				else//中间各行
//				{
//					printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//------------------------------柔性数组--------------------------------------

//结构体中的最后一个元素是未知大小的数组就是柔性数组
//结构体中的柔性数组成员前面必须至少有一个成员
//sizeof返回结构体大小不包含柔性数组的大小

//typedef struct Stu
//{
//	int n;
//	int arr[];
//}Stu;
//int main()
//{
//	Stu* p = (Stu*)malloc(sizeof(Stu) + 40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	p->n = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = i;
//	}
//	Stu* ptr = (Stu*)realloc(p, 100);//由于这里数组的内存是由malloc函数开辟的，所以可以通过realloc函数来扩容。
//	if (ptr != NULL)
//	{
//		p = ptr;
//		ptr = NULL;
//	}
//	return 0;
//}


//-------------------------------------对文件的操作------------------------------------------------


//文件分为两种：
//程序文件：源程序文件（后缀为.c），目标文件（windows环境里后缀为.obj），可执行文件（windows环境里后缀为.exe）
//数据文件：文件的内容不一定是程序，而是程序运行时读写的数据，比如程序运行需要从中读取数据的文件，或者输出内容的文件。

//fopen打开文件
//fclose关闭文件

//FILE* fopen (const char* filename, const char* mode);  第一个是文件名，第二个是打开方式（读还是写）

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fputs("abcdef", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char arr[10];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "zhangsan",25,50.5f };
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fprintf(pf, "%s %d %.1f", s.arr, s.age, s.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//struct S
//{
//	char arr[10];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "zhangsan",25,50.5f };
//	FILE* pf = fopen("text.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fwrite(&s, sizeof(struct S), 1, pf);//以二进制的方式写入数据
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char arr[10];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("text.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fread(&s, sizeof(struct S), 1, pf);//以二进制的方式写入数据
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char arr[10];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "zhangsan",25,50.5f };
//	struct S tmp = { 0 };
//	char buf[20] = { 0 };
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.score);//将结构体类型转换为字符串类型并放到buf中。"zhangsan 25 50.500000";
//	printf("%s\n", buf);
//	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.score));//从字符串里输出其他类型的数据到tmp中。
//	printf("%s %d %f", tmp.arr, tmp.age, tmp.score);
//	return 0;
//}


