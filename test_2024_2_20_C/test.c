#define _CRT_SECURE_NO_WARNINGS 1


//-----------------------------------------------------------函数指针数组---------------------------------------------------------
//#include <stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int (*arr[4])(int, int) = { add, sub, mul, div };//函数指针数组
//	int ret = arr[0](8, 4);//函数调用,加法
//	printf("%d\n", ret);
//	return 0;
//}


//函数指针数组使用例子
//计算器
//#include <stdio.h>
//void menu()
//{
//	printf("*******************************************\n");
//	printf("*********   1.add      2.sub   ************\n");
//	printf("*********   3.mul      4.div   ************\n");
//	printf("*********   0.exit             ************\n");
//	printf("*******************************************\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int a = 0;
//	int b = 0;
//	int (*arr[])(int, int) = { 0,add,sub,mul,div };
//	do
//	{
//		menu();
//		printf("请输入数字:>\n");
//		scanf("%d", &input);
//		if (input > 0 && input <= 4)
//		{
//			printf("请输入两个操作数:>\n");
//			scanf("%d %d", &a, &b);
//			int ret = arr[input](a, b);//利用函数指针数组调用函数，可以大幅缩减代码量。
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else
//		{
//			printf("输入错误\n");
//		}
//	} while (input);
//	return 0;
//}


//-----------------------------------------------------指向函数指针数组的指针-----------------------------------------------------


//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int (*arr[5])(int, int) = { 0,add,sub,mul,div };// arr 是函数指针数组
//	int (*(*parr)[5])(int, int) = &arr;// parr 是指向函数指针数组的指针
//	return 0;
//}


//----------------------------------------------回调函数-------------------------------------------------


//void*是无具体类型的指针，可以接受任意类型的地址
//但是不能进行解引用操作，也不能+-整数。
//强制类型转换后可以进行解引用等操作


//模拟qsort（排序）函数
//#include <stdio.h>
//void swap(char* buf1, char* buf2, int width)
//{
//	int k = 0;
//	for (k = 0; k < width; k++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//int cmp(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void my_qsort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))//这个函数要传首地址，数量的多少，每一个元素的大小，一个比较函数
//{                                                                                      //这个比较函数规定e1>e2时，返回一个大于0的数字；e1=e2时，返回0；e1<e2时，返回一个小于0的数字
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//交换
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 6,65,232,78,456,1,5,6,8,42 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int widch = sizeof(int);
//	my_qsort(arr, sz, widch, cmp);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//------------------------------------------------练习题-------------------------------------------------
//#include <stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4 }; 
//	printf("%d\n", sizeof(a));//16    
//	//这里的a代表整个数组
//	printf("%d\n", sizeof(a + 0));//4   
//	//因为a不是单独放在里面的，所以它代表的是首元素地址
//	printf("%d\n", sizeof(*a));//4   
//	//a是首元素地址，解引用后是首元素，int类型
//	printf("%d\n", sizeof(a + 1));//4
//	//a + 1是2的地址
//	printf("%d\n", sizeof(a[1]));//4
//	//a[1]指的就是数组中的元素1，它是int类型
//	printf("%d\n", sizeof(&a));//4
//	//a本身就是存储着地址，&a就是再取一次地址
//	printf("%d\n", sizeof(*&a));//16
//	//&a是取出整个数组的地址，再对其解引用后就变成了数组，所以这里*&a就是指的数组，那当然是16个字节了
//	printf("%d\n", sizeof(&a + 1));//4
//	//&a + 1也是地址
//	printf("%d\n", sizeof(&a[0]));//4
//	//&a[0]就是第一个元素的地址
//	printf("%d\n", sizeof(&a[0] + 1));//4
//	//&a[0] + 1就是第二个元素的地址
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f'};//用的大括号，里面没有'\0'。
//	printf("%d\n",sizeof(arr)); //6
//	//arr是整个数组的地址，计算的是整个数组的大小
//	printf("%d\n",sizeof(arr + 0)); //4 
//	//这里的arr没有单独使用，代表首元素地址
//	printf("%d\n",sizeof(*arr)); //1
//	//*arr代表首元素，由于是char类型，所以1个字节
//	printf("%d\n",sizeof(arr[1])); //1
//	//也是代表首元素，1个字节
//	printf("%d\n",sizeof(&arr)); //4
//	//&arr是地址
//	printf("%d\n",sizeof(&arr + 1)); //4
//	//也是地址
//	printf("%d\n",sizeof(&arr[0] + 1)); //4
//	//arr[0]是首元素，加上&后是地址，加一后还是地址
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n",strlen(arr));
//	//随机值，strlen遇到'\0'才会停下
//	printf("%d\n", strlen(arr + 0));
//	//随机值，原因同上
//	printf("%d\n", strlen(*arr));
//	//解引用之后*arr相当于'a'，但'a'是char类型，而strlen要求的类型是char*，不吻合，所以此代码有问题，无法运行
//	printf("%d\n", strlen(arr[1]));
//	//同上
//	printf("%d\n", strlen(&arr));
//	//随机值
//	printf("%d\n", strlen(&arr + 1)); 
//	//随机值
//	printf("%d\n", strlen(&arr[0] + 1));
//	//随机值
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr)); //7
//	//求的是整个数组的大小
//	printf("%d\n", sizeof(arr + 0)); //4
//	//由于此时arr不是单独使用，所以这里的arr就是首元素地址，求的是地址的大小
//	printf("%d\n", sizeof(*arr)); //1
//	//这里求的是字符'a'的大小
//	printf("%d\n", sizeof(arr[1])); //1
//	//这里求的是字符'b'的大小
//	printf("%d\n", sizeof(&arr)); //4
//	//相当于二级指针，求的是地址大小
//	printf("%d\n", sizeof(&arr + 1)); //4
//	//求的是地址大小
//	printf("%d\n", sizeof(&arr[0] + 1));//4
//	//求的是地址大小
//	return 0;
//}


//#include <string.h>
//#include <stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr)); //6
//	printf("%d\n", strlen(arr + 0)); //6
//	printf("%d\n", strlen(*arr)); //野指针，报错
//	printf("%d\n", strlen(arr[1])); //野指针，报错
//	printf("%d\n", strlen(&arr)); //6
//	printf("%d\n", strlen(&arr + 1)); //随机值
//	printf("%d\n", strlen(&arr[0] + 1));//5
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char* p = "abcdef"; 
//	printf("%d\n", sizeof(p)); //4
//	printf("%d\n", sizeof(p + 1)); //4
//	printf("%d\n", sizeof(*p)); //1
//	printf("%d\n", sizeof(p[0])); //1
//	printf("%d\n", sizeof(&p));//4
//	printf("%d\n", sizeof(&p + 1));//4
//	printf("%d\n", sizeof(&p[0] + 1));//4
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	printf("%d\n", strlen(*p));//野指针
//	printf("%d\n", strlen(p[0]));//野指针
//	printf("%d\n", strlen(&p));//随机值
//	printf("%d\n", strlen(&p + 1));//随机值
//	printf("%d\n", strlen(&p[0] + 1));//5
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16
//	//a[0]单独使用，表示第一行的地址
//	printf("%d\n", sizeof(a[0] + 1)); //4
//	//a[0]并没有单独使用，，也没取地址，所以表示第一个元素的地址，这里求的是地址大小
//	printf("%d\n", sizeof(*(a[0] + 1))); //4
//	//这里求的是第一行第二个元素的大小
//	printf("%d\n", sizeof(a + 1)); //4
//	//a没有单独使用，所以是二维数组的首元素的地址，也就是第一行的地址
//	//所以a+1表示第二行的地址
//	//这里求的是地址大小
//	printf("%d\n", sizeof(*(a + 1)));//16
//	printf("%d\n", sizeof(&a[0] + 1)); //4
//	//a[0]是第一行的数组名，对第一行取地址，得到这一行的地址，加一后得到第二行的地址
//	//这里求的是地址大小
//	printf("%d\n", sizeof(*(&a[0] + 1))); //16
//	//a[0]是第一行的数组名，对第一行取地址，得到这一行的地址，加一后得到第二行的地址
//	//再对其解引用后得到第二行
//	//所以这里求的是整个第二行的大小
//	printf("%d\n", sizeof(*a)); //16
//	//a是第一行的数组名，对其解引用后得到第一行的内容
//	//所以这里求的是整个第一行的大小
//	printf("%d\n", sizeof(a[3]));//16
//	//a[3]是数组名，单独放在sizeof内部计算的是这个数组的大小
//	return 0;
//}
//总结：sizeof看类型，依靠类型判断大小


//#include  <stdio.h>
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p = (struct Test*)0x100000;//p中储存的类型是结构体指针，但0x100000是一个十六进制的int类型的数字，所以要进行强制类型转换
////假设p的值为0x100800。 如下表表达式的值分别为多少?
////结构体类型大小取决于其内容，内部所有的加起来就是大小
////已知，结构体Test类型的变量大小是20个字节
////x86
//int main()
//{
//	printf("%p\n", p + 0x1);//0x100014  指针加一后跳过一个结构体指针，也就是20个字节，十六进制的1也行，十进制的1也行
//	printf("%p\n", (unsigned long)p + 0x1);  //0x100001   这里强制类型转化后与0x1相加就是一个普通加法
//	printf("%p\n", (unsigned int*)p + 0x1);  //0x100004   跳过一个字节的大小
//	return 0;
//}


//在函数中strlen也可以使用
//#include<stdio.h>
//#include <string.h>
//int length(char* a)
//{
//	return strlen(a);
//}
//int main()
//{
//	char a[] = "abcdef";
//	printf("%d\n", length(a));
//	return 0;
//}


//注意逗号表达式
//#include<stdio.h>
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) }; //这里面是逗号表达式
//	//如果想要达到第一行放0 1，第二行放2 3，第三行放4 5的效果，应采用如下写法：
//	/*
//	int a[3][2] = { {0,1},{2,3},{4,5} };//注意，这里面用了大括号
//	*/
//
//	int* p; 
//	p = a[0]; 
//	printf("%d", p[0]);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;//关键在这
//	printf("%p, %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}
//结果就是将-4分别以%p和%d的形式打印


//#include <stdio.h>
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp + 3);//加号优先级较低，先算前边的
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}


//----------------------------------------------------字符串和内存函数--------------------------------------------------------


//求字符串长度
//strlen
//长度不受限制的字符串函数
//strcpy
//strcat
//strcmp
//长度受限制的字符串函数
//strncpy
//strncat
//strncmp
//字符串查找
//strstr
//strtok
//错误信息报告
//strerror
//字符操作
//内存操作函数
//memcpy
//memmove
//memset
//memcmp


//----------------strlen------------------

//头文件是string.h
//字符串以'\0'作为结束标志，strlen返回的是在'\0'前面出现的字符个数，包括空格，但不包括'\0'。
//参数指向的字符串必须要以'\0'结束
//函数返回值类型为无符号整型
//模拟实现strlen
//#include <stdio.h>
//#include <assert.h>
//unsigned int my_strlen(const char* p)
//{
//	assert(p);//p为空时报警告
//	unsigned int count = 0;
//	while (*p)
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%u\n", my_strlen(arr));
//	return 0;
//}


//--------------------------strcpy---------------------------------

//头文件是string.h
//将一个字符串数组的内容拷贝到另一个数组内
//strcpy(char* destination, char* sources);
//源字符串必须以'\0'结束
//会将源字符串中的'\0'拷贝到目标空间
//目标空间必须足够大，以确保能存放源字符串
//目标空间必须可以被修改
// 
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[20] = { 0 };
//	//name = "zhangsan";//这样写是错误的
//	strcpy(arr, "zhangsan");
//	printf("%s\n", arr);
//	return 0;
//}


//模拟实现strcpy
//#include <stdio.h>
//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* tmp = dest;
//	while (*(dest++) = *(src++))
//	{
//		;
//	}
//	return tmp;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	char arr2[] = "zhangsan";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}
//在将'\0'赋给一个变量时，算式表达为假，也就是0。


//---------------------------strsat--------------------------

//头文件是string.h
//字符串追加
//直接在目标数组后面追加上你所输入的内容

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[20] = "hello";
//	strcat(arr1, " world");
//	printf("%s\n", arr1);
//	return 0;
//}

//模拟实现strcat
//#include <stdio.h>
//#include <assert.h>
//char* my_strcat(char* des, const char* src)
//{
//	assert(des && src);
//	assert(des != src);
//	char* tmp = des;
//	while (*des != '\0')
//	{
//		des++;
//	}
//	while (*des++ = *src++)
//	{
//		;
//	}
//	return tmp;
//}
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[10] = " world";
//	printf("%s\n", my_strcat(arr1, arr2));
//	return 0;
//}


//---------------------------strcmp---------------------------

//strcmp -- string compare 字符串比较大小，不是比较长度，而是比较内容的ASCII码值的大小
//int strcmp ( const char* str1, const char* str2 );
//如果str1大于str2，返回一个大于零的数字
//如果str1等于str2，返回数字零
//如果str1小于str2，返回一个小于零的数字
//26个字母，越往后ASCII码值越大


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[20] = "ddhf"; 
//	char arr2[] = "ajbcks";
//	printf("%d\n", strcmp(arr1, arr2));
//	return 0;
//}


//模拟实现strcmp
//#include <stdio.h>
//#include <assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//int main()
//{
//	char arr1[20] = "abc";
//	char arr2[20] = "abc";
//	printf("%d\n", my_strcmp(arr1, arr2));
//	return 0;
//}


//------------------strncpy、strncmp、strncat--------------------------

//由于strcpy、strcmp、strcat是无字符串长度限制，所以使用时目标数组可能会溢出，也就是使用起来有风险
//有字符串长度限制的函数strncpy、strncat、strncmp，有长度限制，功能不变，相较于上边更安全

//strncpy、strncmp、strncat相较于原版，都多了一个无符号整型的变量，这个变量表示我们要操作的符号的个数


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[20] = "xxxxxx";
//	strncpy(arr, "zhangsan", 2);
//	printf("%s\n", arr);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[20] = "hello";
//	strncat(arr1, " world", 3);
//	printf("%s\n", arr1);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[20] = "abcdfjkl"; 
//	char arr2[] = "abcd";
//	printf("%d\n", strncmp(arr1, arr2, 6));
//	return 0;
//}

//---------------------------------strstr-----------------------------------------

//strstr是查找字串
//char* strstr (const char* str1, const char* str2)

//str1是被查找的对象，而str2是我们要找的字符串，总的来说，就是在str1中找str2
//如果找到了，那么返回我们要找的字符串的首字符地址
//如果没找到，返回NULL

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char email[] = "zpw@bitejiuyeke.com";
//	char target[] = "abc";
//	char* p = strstr(email, target);
//	printf("%p\n", p);
//	return 0;
//}


//模拟实现strstr
//#include <stdio.h>
//#include <assert.h>
//char* my_strstr(const char* stem, const char* trg)
//{
//	assert(stem && trg);
//	char* p1 = stem;
//	char* p2 = trg;
//	while (*stem != '\0')
//	{
//		stem++;
//		p1 = stem;
//		p2 = trg;
//		if (*stem == *trg)
//		{
//			while (*trg != '\0')
//			{
//				if (*stem == *trg)
//				{
//					stem++;
//					trg++;
//				}
//				else
//				{
//					break;
//				}
//			}
//			if (*trg == '\0')
//			{
//				return p1;
//			}
//			stem = p1;
//			trg = p2;
//		}
//	}
//	return NULL;
//}
//int main()
//{
//	char email[] = "zpw@bitejiuyeke.com";
//	char target[] = "bite";
//	printf("%s\n", my_strstr(email, target));
//	return 0;
//}


//------------------------------------------strtok------------------------------------------------


//strtok是用来切割字符串的
//char* strtok (char* str, const char* sep)
//sep参数是个字符串，定义了用作分隔符的字符集合
//第一个参数指定一个字符串，它包含了0个或者多个由sep字符串中一个或者多个分隔符分割的标记。
//strtok函数找到str中的下一个标记，并将其用\0结尾，返回一个指向这个标记的指针。(注：strtok函数会改变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改。)
//strtok函数的第一个参数不为 NULL，函数将找到str中第一个标记，strtok函数将保存它在字符串中的位置。
//strtok函数的第一个参数为 NULL，函数将在同一个字符串中被保存的位置开始，查找下一个标农
//如果字符串中不存在更多的标记，则返回NULL指针。


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char sep[] = ".@";
//	char email[] = "zhangpengwei@bitejiuyeke.com";
//	char cp[30] = { 0 };//"zhangpengwei@bitejiuyeke.com   
//	strcpy(cp,email);//由于strtok会破坏原数组内容，所以这里将原数据拷贝一份
//	char* ret = NULL;
//	for (ret = strtok(cp, sep); ret != NULL; ret = strtok(NULL, sep))//这个for循环很有趣，for循环不一定非要与i连用。
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//----------------------------------------------strerror-----------------------------------------------------

//char* strerror (int errnum);
//strerror 甄别错误码，并告诉你错误原因

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	printf("%s\n", strerror(0)); 
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3)); 
//	printf("%s\n", strerror(4)); 
//	printf("%s\n", strerror(5));
//	return 0;
//}
//errno 是c语言设置的一个全局的错误码存放的变量，不用我们自己设置，但是需要头文件 errno.h
//如果程序发生错误，直接使用 printf("%s\n", strerror(errno)); 就可以。


//----------------------------------------------memcpy------------------------------------------------------

//void* memcpy (void* destination, const void* source, unsigned int num)

//memcpy内存拷贝，对任何类型都可以，使用类似于strncpy，但是最后的数字填的是总共要传的字节数

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[5] = { 0 };
//	memcpy(arr2, arr1, 16);//传前四个数字
//
//	float arr3[5] = { 1.0,2.0,3.0,4.0,5.0 };
//	float arr4[5] = { 0.0 };
//	memcpy(arr4, arr3, 20);
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 4; i++)
//	{
//		printf("%.2f ", arr4[i]);
//	}
//	return 0;
//}


//模拟实现memcpy
//#include <stdio.h>
//#include <assert.h>
//void* my_memcpy(void* des, const void* src, unsigned int num)
//{
//	assert(des && src);
//	void* tmp = des;
//	while (num--)
//	{
//		*(char*)des = *(char*)src;
//		des = (char*)des + 1;
//		src = (char*)src + 1;
//	}
//	return tmp;
//}
//int main()
//{
//	int arr3[20] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int arr4[5] = { 0.0 };
//	my_memcpy(arr3 + 2, arr3, 16);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	return 0;
//}
//memcpy适用于拷贝两块独立的空间
//像上述的重叠拷贝（操作始终在一块空间），另有函数（memmove）实现。
//但是在新版编译器中，memcpy也能做到重叠空间的拷贝

//--------------------------------------------memmove------------------------------------------------------

//memmove用于处理重叠空间的数据拷贝
//void* memmove (void* destination, const void* source, size_t num);


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int arr1[20] = { 1,2,3,4,5,6,7,8,9,10 };
//	memmove(arr1 + 2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);//1 2 1 2 3 4 5 8 9 10
//	}
//	return 0;
//}


//模拟实现memmove
//#include <stdio.h>
//#include <assert.h>
//void* my_memmove(void* des, const void* src, size_t num)
//{
//	void* ret = des;
//	assert(des && src);
//	if (des < src)
//	{
//		//从前向后拷贝，高地址为前
//		while (num--)
//		{
//			*(char*)des = *(char*)src;
//			des = (char*)des + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//从后往前拷贝
//		while (num--)
//		{
//			*((char*)des + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[20] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr1 + 2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}


//--------------------------------------------------memcmp--------------------------------------------------------

//int memcmp (const void* ptr1, const void* ptr2, size_t num);
//如果ptr1大于ptr2，返回一个大于零的数字
//如果ptr1等于ptr2，返回数字零
//如果ptr1小于ptr2，返回一个小于零的数字
//比较ASCII码值


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "ahj";
//	printf("%d\n", memcmp(arr1, arr2, 3));//-1
//	return 0;
//}


//模拟实现memcmp

//#include <stdio.h>
//#include <string.h>
//int my_memcmp(const void* ptr1, const void* ptr2, size_t num)
//{
//	while (*(char*)ptr1 == *(char*)ptr2)
//	{
//		ptr1 = (char*)ptr1 + 1;
//		ptr2 = (char*)ptr2 + 1;
//		num--;
//		if (num == 0)
//		{
//			return 0;
//		}
//	}
//	if (*(char*)ptr1 > *(char*)ptr2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[] = { 1,2,6,8 };
//	int ret = my_memcmp(arr1, arr2, 12);
//	printf("%d\n", ret);
//	return 0;
//}

//-----------------------------------------------memset-------------------------------------------------

//memset内存设置
//void* memset(void* ptr, int value, size_t num);
//ptr指向目标数组
//value是等待被设置的整型
//num是要设置的value的字节数
//memset所起的作用是替代


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "hello world";
//	memset(arr1, 'a', 3);
//	printf("%s\n", arr1);  //aaalo world
//	return 0;
//}


//---------------------------------------------练习题------------------------------------------------------------


//输入一个数字，将每个位上的奇数改为1，偶数改为0
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n = 0;
//	int tmp = 0;
//	int ret = 0;
//	int i = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		tmp = n % 10;
//		if (tmp % 2 == 1)
//		{
//			ret = ret + pow(10, i);
//		}
//		n = n / 10;
//		i++;
//	}
//	printf("%d\n", ret);
//	return 0;
//}