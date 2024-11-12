#define _CRT_SECURE_NO_WARNINGS 1

//----------------------------------------------------实用调试技巧---------------------------------------------


//所有发生的事情都一定有迹可循，
//如果问心无愧，就不需要掩盖也就没有迹象了，
//如果问心有愧，就必然需要掩盖，那就一定会有迹象，
//迹象越多就越容易顺藤而上，这就是推理的途径。
//顺着这条途径顺流而下就是犯罪，逆流而上，就是真相。


//Debug和Release的介绍：
//Debug 通常称为调试版本，它包含调试信息，并且不作任何优化，便于程序员调试程序。
//Release 称为发布版本，它往往是进行了各种优化，使得程序在代码大小和运行速度上都是最优的，以便用户很好地使用。


//ctrl + F10 是越过当前函数或者越过当前循环，进入下一个循环
//fn + F10 是逐语句运行，但是会跳过函数
//ctrl + F11 是反汇编
//fn + F11 是逐语句进行，不会跳过任何东西


//以下代码如果输入6,5,65,66（回车），结果是什么？
//#include <stdio.h>
//int main() 
//{
//    char a, b, c, d;
//    scanf("%c,%c,%d,%d", &a, &b, &c, &d);
//    printf("%c,%c,%c,%c\n", a, b, c, d);
//    return 0;
//}
//6,5,A,B
////char型数据以%d输入时，输入的是ASCII码值；c中存入的是ASCII码65，也就是A; 
//而对于a，是以字符型存入，相当于char a = 6；6在a中存储是字符型的，最终输出的也是字符6；
//而实际中，字符6的ASCII码是54，若：printf("%d\n", a); 输出就是54


//模拟实现strcpy
//strcpy的返回值是目标空间的起始地址
//#include <stdio.h>
//方法一：
//char* my_strcpy(char* ch1, char* ch2)
//{
//	int i = 0;
//	while (ch2[i] != '\0')
//	{
//		ch1[i] = ch2[i];
//		i++;
//	}
//	ch1[i] = '\0';
//}
//方法二（鹏哥法）：
//#include <assert.h>
//char* my_strcpy(char* ch1, const char* ch2)//被const修饰的变量无法直接修改，但是可以用指针改
//{
//	char* ret = ch1;
//	assert(ch1 != NULL);
//	assert(ch2 != NULL);
//	while (*ch1++ = *ch2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char ch1[20] = { 0 };
//	char ch2[] = "hello world";
//	my_strcpy(ch1, ch2);
//	printf("%s\n", ch1);
//	return 0;
//}


//被const修饰的变量无法直接修改，但是可以用指针改
//const修饰指针变量
//1.const放在*左边（const int* p = &num;）
//意思是：指针变量所指向的对象不能通过指针变量来改变
//但是指针变量所存储的地址可以改变
//2.const放在*右边（int* const p = &num;）
//意思是：指针变量所指向的对象可以通过指针变量改变
//但是指针变量所存储的地址不能改变


//常见的coding技巧:
//1.使用assert(头文件：#include <assert.h>，当assert内的表达式为假时就会报错)
//2.尽量使用const
//3.养成良好的编码风格
//4.添加必要的注释
//5.避免编码的陷阱


//描述
//任意给出的三条边a、b、c，判断能否构成三角形，如果能构成三角形，判断三角形的类型(等边三角形、等腰三角形或普通三角形)
//输入描述:
//题目有多组输入数据，每一行输入三个a，b，c(0 < a, b, c < 1000)，作为三角形的三个边，用空格分隔。
//输出描述 :
//针对每组输入数据，输出占一行，
//如果能构成三角形，
//等边三角形则输出"Equilateral triangle!”，
//等腰三角形则输出“lsosceles triangle!”，
//其余的三角形则输出“Ordinary triangle!”, 
//反之输出“Not a triangle!”。


//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) == 3)
//	{
//		if ((a + b > c) && (a + c > b) && (b + c > a))
//		{
//			if ((a == b) && (a == c))
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if ((a != b) && (b != c) && (a != c))
//			{
//				printf("Ordinary triangle!\n");
//			}
//			else
//			{
//				printf("lsosceles triangle!\n");
//			}
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//	return 0;
//}


//输入一段字符串，接收后将其逆序再输出
//#include <stdio.h>
//#include <string.h>
//void reverse(char* str, int left,int right)
//{
//	while(left < right)
//	{
//		char tmp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char ch[20] = { 0 };
//	gets(ch);
//	int sz = strlen(ch);
//	int left = 0;
//	int right = sz - 1;
//	reverse(ch, left, right);
//	printf("%s\n", ch);
//	return 0;
//}
//由于scanf遇到空格就会停止读取，所以此代码中不用scanf而是用gets,
//gets只能读取字符串


//Sn=2+22+222+2222+22222···，求前n项和
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum = sum + k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//“水仙花数”是指一个n位数，其各位数字的n次方之和恰好等于该数本身，
//如：153=1^3+5^3+3^3，则153是一个“水仙花数”。
//输入一个数字x，求出0~x之间的所有“水仙花数”并输出
//#include <stdio.h>
//#include <math.h>
//int main()//12345
//{
//	int i = 0;
//	int x = 0;
//	scanf("%d", &x);
//	for (i = 0; i <= x; i++)
//	{
//		int arr[10] = { 0 };
//		int ori = i;
//		int n = 0;
//		if (i == 0)//求数字的位数
//		{
//			n = 1;
//		}
//		else
//		{
//			while (i)
//			{
//				i = i / 10;
//				n++;
//			}
//		}
//		i = ori;
//		int j = 0;
//		for (j = 0; j < n; j++)//获得每一位并存起来
//		{
//			arr[n - 1 - j] = i % 10;
//			i = i / 10;
//		}
//		i = ori;
//		int k = 0;
//		int ret = 0;
//		for (k = 0; k < n; k++)//将每一位次方之后相加
//		{
//			ret = pow(arr[k], n) + ret;
//		}
//		if (ret == i)//判断并输出
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//求数字的长度
//#include <stdio.h>
//int main()
//{
//	int count = 0;
//	int n = 123456;//需要处理的数字
//	if (n == 0)
//	{
//		count = 1;
//	}
//	else
//	{
//		while (n)
//		{
//			n = n / 10;
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//取得一个数的每一位
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };//位数存放的数组
//	int k = 1234;//假设要处理的数字
//	int n = 4;//假设已知长度
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		arr[n - 1- i] = k % 10;
//		k = k / 10;
//	}
//	return 0;
//}


//输入整数n，打印出一个菱形
//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)//空格
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)//*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//喝汽水
//1瓶汽水1元，2个空瓶可以换1瓶汽水，给n元，喝多少汽水
//#include <stdio.h>
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty >= 2)
//	{
//		total = total + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}


//静态函数只能在声明它的文件中可见，其他文件不能引用该函数
//不同的文件可以使用相同名字的静态函数，互不影响


//输入两个数，输出它们的最小公倍数
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	while (a * i % b)
//	{
//		i++;
//	}
//	printf("%d\n", a * i);
//	return 0;
//}


//将一句话的单词进行倒置，标点不倒置。
//比如：I like Beijing.经过函数后变成：Beijing.like I
//#include <stdio.h>
//#include <string.h>
//void total_reserve(char* left, char* right)
//{
//	while (left < right)
//	{
//		int tmp = 0;
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void per_reserve(char* arr)
//{
//	char* p1 = arr;
//	char* p2 = arr;
//	while (*p2 != '\0')
//	{
//		if (*p2 == ' ')
//		{
//			total_reserve(p1, p2 - 1);
//			p1 = p2 + 1;
//		}
//		p2++;
//	}
//	if (*p2 == '\0')
//	{
//		total_reserve(p1, p2 - 1);
//	}
//}
//int main()
//{
//	char arr[101] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	total_reserve(arr, arr + len - 1);//逆序整个字符串
//	per_reserve(arr);//逆序单个单词
//	printf("%s\n", arr);
//	return 0;
//}


//---------------------------------------------------------------------C语言进阶---------------------------------------------------------------------------


//long类型在32位系统下4个字节，在64位系统下8个字节。


//整数的2进制表示也有三种表示形式:
//1.正的整数，原码、反码、补码相同
//2.负的整数，原码、反码、补码是需要计算的
//原码:直接通过正负的形式写出的二进制序列就是原码
//反码:原码的符号位不变，其他位按位取反得到的就是反码
//补码:反码+1就是补码


//整型家族包括：int, char, short, long, long long
//其中，除了char，其他类型都分为有符号数与无符号数，也就是signed与unsigned
//char分为三种，分别是：char, signed char, unsigned char
//以上类型，除了char之外，平时我们写代码时默认为有符号（signed）类型，这是语法规定
//由于char类型标准没有规定默认为signed还是unsigned，所以char类型分为三种。具体情况，取决于编译器（vs默认char是signed类型）
//signed类型的变量允许有正有负，存储时二进制码的第一位是符号位，符号位是0表示正数，符号位是1表示负数，符号位只存储正负信息，不作为有效数字。
//而unsigned类型只允许有零和正数，二进制码没有符号位，不能表示负数，所有位都是有效数字。

//void*也是指针的一种类型

//原码按位取反加一得到补码，补码按位取反加一得到原码。

//大端字节序存储：把一个数据的高位字节序的内容存放在低地址处，把低位字节序的内容放在高地址处。
//小端字节序存储：把一个数据的低位字节序的内容存放在低地址处，把高位字节序的内容放在高地址处。
//vs采用的是小端字节序存储


//使用代码判断此系统是大端字节序存储还是小端字节序存储
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	if (*((char*)&a) == 1)
//	{
//		printf("小端字节序存储");
//	}
//	else
//	{
//		printf("大端字节序存储");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char a = -1; 
//	signed char b = -1; 
//	unsigned char c = -1; 
//	printf("a=%d,b=%d,c=%d", a, b, c); 
//	return 0;
//}
//整型提升，有符号数补符号位，无符号数补零


//有符号的char取值范围：-128~127
//无符号的char取值范围：0~255
//signed short取值范围：-32768~32767
//unsigned short取值范围：0~65535


//#include <stdio.h>
//int main()
//{
//	printf("%u\n", strlen("abc") - strlen("abcdef"));
//	return 0;
//}
//strlen的返回值是size_t，是unsigned int


//浮点数的存储：
//根据国际标准IEEE(电气和电子工程协会)754，任意一个二进制浮点数V可以表示成下面的形式：
//(-1)^S* M * 2^E
//(-1)^S表示符号位，当S = 0，V为正数；当S = -1，V为负数。
//M表示有效数字，大于等于1，小于2。
//2^E表示指数位。
//比如：5.0f 的二进制是 (-1) ^ 0 * 1.01 * 2 ^ 2
//      9.5f 的二进制是 (-1) ^ 0 * 1.0011 * 2 ^ 3


//IEEE 754对有效数字M和指数E，还有一些特别规定。
//前面说过，1≤M<2，也就是说，M可以写成1.xxxxxx的形式，其中xxxxxx表示小数部分。
//IEEE 754规定，在计算机内部保存M时，默认这个数的第一位总是1，因此可以被舍去，只保存后面的xxxxxx部分。
//比如保存1.01的时候，只保存01，等到读取的时候，再把第一位的1加上去。这样做的目的，是节省1位有效数字。
//以32位浮点数（float）为例，留给M只有23位，将第一位的1舍去以后，等于可以保存24位有效数字。
//至于指数E，情况就比较复杂。
//首先，E为一个无符号整数(unsigned int)
//这意味着，如果E为8位，它的取值范围为0~255; 如果E为11位，它的取值范围为0~2047。
//但是，我们知道，科学计数法中的E是可以出现负数的，比如0.5，所以IEEE 754规定，存入内存时E的真实值必须再加上一个中间数，
//对于8位的E（float），这个中间数是127; 对于11位的E（double），这个中间数是1023。
//比如，2 ^ 10的E是10，所以保存成32位浮点数时，必须保存成10 + 127 = 137，即10001001.


//(-1)^S* M * 2^E
//单精度浮点数（float）存储模型：
//共4个byte，32个bit
//第一个bit存储S
//第二到第九个，共八个bit存储E
//剩下的23个bit存储M


//双精度浮点数（double）存储模型：
//共8个byte，64个bit
//第一个bit存储S
//第二到第十二个，共十一个bit存储E
//剩下的52个bit存储M


//例：
//5.5f    (-1)^0 * 1.011 * 2^2   01000000101100000000000000000000
//-9.5f   (-1)^1 * 1.0011 * 2^3  11000001000110000000000000000000


//指数E从内存中取出还可以再分成三种情况:
//E不全为0或不全为1
//这时，浮点数就采用下面的规则表示，即指数E的计算值减去127(或1023)，得到真实值，再将有效数字M前加上第一位的1。
//比如 :
//0.5(1 / 2)的二进制形式为0.1，由于规定正数部分必须为1，即将小数点右移1位，则为1.0 * 2 ^ (-1)，其阶码为 - 1 + 127 = 126，表示为01111110，
//而尾数1.0去掉整数部分为0，补齐0到23位00000000000000000000000，则其二进制表示形式为 :
//	0 01111110 00000000000000000000000


//E全为0
//这时，浮点数的指数E等于-126(或者-1022)即为真实值,有效数字M不再加上第一位的1，而是还原为0.xxxxxx的小数。这样做是为了表示正负零，以及接近于0的很小的数字。
 

//E全为1
//这时，如果有效数字M全为0，表示正负无穷大(正负取决于符号位s);


//输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分,所有偶数位于数组的后半部分。
//#include <stdio.h>
//void fun(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while ((arr[left] % 2 == 1) && (left < right))
//		{
//			left++;
//		}
//		while ((arr[right] % 2 == 0) && (left < right))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1,3,5,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	fun(arr, sz);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}


//描述：
//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
//数据范围： 1≤n, m≤1000，序列中的值满足0≤ val ≤ 30000
//输入描述：
//输入包含三行，
//第一行包含两个正整数n, m，用空格分隔。n表示第二行第一个升序序列中数字的个数，m表示第三行第二个升序序列中数字的个数。
//第二行包含n个整数，用空格分隔
//第三行包含m个整数，用空格分隔。
//输出描述 :
//输出为一行，输出长度为n + m的升序序列，即长度为n的升序序列和长度为m的升序序列中的元素重新进行升序序列排列合并。
//方法一：
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr[1000] = { 0 };
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	for (i = 0; i < n + m; i++)
//	{
//		scanf("%d", &arr[i]);//疑惑点：在输入完三行后，总是要再起一行，并且再输入一个数字（随便一个数字），然后再回车，程序才能正常运行。到底是为什么呢？
//	}                        //查到原因了，因为我在%d的后面加上了空格所导致的
//	for (i = 0; i < m + n - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m + n - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < m + n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//方法二：
// #include <stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	int j = 0;
//	int k = 0;
//	while (j < n && k < m)
//	{
//		if (arr1[j] < arr2[k])
//		{
//			printf("%d ", arr1[j]);
//			j++;
//		}
//		else
//		{
//			printf("%d ", arr2[k]);
//			k++;
//		}
//	}
//	if (j < n)
//	{
//		for (; j < n; j++)
//		{
//			printf("%d ", arr1[j]);
//		}
//	}
//	else
//	{
//		for (; k < n; k++)
//		{
//			printf("%d ", arr2[k]);
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	const char* p1 = "abcdef"; 
//	const char* p2 = "abcdef";
//	
//	char arr1[] = "abcdef"; 
//	char arr2[] = "abcdef";
//
//	if (p1 == p2)
//		printf("p1==p2\n");
//	else
//		printf("p1!=p2\n");
//
//	if (arr1 == arr2)
//		printf("arr1 == arr2\n"); 
//	else
//		printf("arr1 != arr2\n");
//
//	return 0;
//}
//对于指针来说，"abcdef"是常量字符串，只能读取，不能修改，所以没有必要在内存中开辟两片空间，两个指针公用就行。
//对于数组来讲，"abcdef"是可以修改的，所以必须分别为它们开辟空间，避免它们读取与修改发生混乱。


//指针数组 - 是数组，是用来存放指针的数组
//int* arr2[6]; 存放整型指针的数组，每个元素的类型是int*
//char* arr3[5]; 存放字符指针的数组，每个元素的类型是char*


//数组指针 - 指针 - 指向数组的指针
//int* p1[10];  指针数组 - 这是一个数组
//int (*p2)[10];  数组指针 - 这是一个指针，指向一个数组，该数组有10个元素，每个元素是int类型。


//数组名可以表示首元素地址
//但是，有两个例外：
//1.sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节。
//2. &数组名 ，这里的数组名表示整个数组，取出的是整个数组的地址，这个地址就是首元素的地址。
//但是 &数组名 与 数组名 仍有区别：当 数组名+1 时，此时的地址会跳过第一个元素的地址，表示第二个元素的地址；
// &数组名+1 会直接跳过整个数组，所表示的地址是数组之后的地址
// &数组名[0] 与 数组名 在含义上等效。


//数组指针
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//数组指针
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 }; 
//	int(*p)[10] = &arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]); 
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(*p + i));//p是指向数组的，*p其实就相当于数组名，数组名又是数组首元素的地址，所以*p本质上是数组首元素的地址
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", (*p)[i]);//这里表明*p本质上就是数组名
//	}
//	return 0;
//}
//上边这个是一个错误示范，因为用起来非常绕且别扭。


//数组指针通常用于二维以上的数组中
//二维数组的首元素是第一行


//#include <stdio.h>
//void print1(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));//p + i 拿到某一行的地址
//		}                                  //*(p + i) 拿到这一行的首元素地址，此时它就相当于数组名
//		printf("\n");                      //*(p + i) + j 拿到这一行其他元素的地址
//	}                                      //*(*(p + i) + j) 再次解引用，获得元素
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}                                 
//		printf("\n");                   
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print1(arr, 3, 5);
//	return 0;
//}


//回顾以下代码
//int arr[5];   arr是整型指针
//int* parr1[10];   parr1是整型指针数组
//int (*parr2)[10];  parr2是数组指针
//int (*parr3[10])[5];  数组指针数组，parr3是存放数组指针的数组 -- parr3是数组名，这个数组里有10个元素，元素的类型是数组指针，这些数组指针所指向的数组每个数组存储着5个整型。
//int* (*parr4)[6];  指针数组指针


//---------------------------------------------------------------数组传参----------------------------------------------------------------------------


//以下例子中，除了标记错误的例子，其他都是正确示范。
//一维数组传参
//#include <stdio.h>
//void test(int arr[])
//{}
//void test(int* arr)
//{}
//void test2(int* arr[])
//{}
//void test2(int** arr)
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}


//#include <stdio.h>
//void test(int arr[3][5])
//{}
//void test(int arr[][])//错误，二维数组的形参，行可以省略，列不能省略。
//{}
//void test(int arr[][5])
//{}
//void test(int* arr)//错误
//{}
//void test(int* arr[5])//错误
//{}
//void test(int (*arr)[5])
//{}
//void test(int** arr)//错误
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}
//所以二维数组传参要么用二维数组接收，要么就只能用数组指针接收。


//一级指针传参
//#include <stdio.h>
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	return 0;
//}


//二级指针传参
//#include <stdio.h>
//void test(int** ptr)
//{
//	printf("%d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}


//---------------------------------------------------------------------函数指针------------------------------------------------------------------------


//类比一下
//数组指针 - 指向数组的指针
//函数指针 - 指向函数的指针

//既然
//&数组名 - 取出数组的地址
//那么
//&函数名 - 取出函数的地址
//对于函数来说，&函数名和函数名都是函数的地址


//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*p)(int, int) = &add;//函数指针
//	return 0;
//}


//应用例子1
//#include <stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int (*p)(int, int) = &add;//创建指针变量
//	int ret = (*p)(a, b);//传参，这个地方p的括号和星号可以不加，要么星号和括号都有，要么都没有。
//	int tmp = p(a, b);
//	printf("%d %d", ret, tmp);
//	return 0;
//}


//应用例子2
//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//void calc(int(*pf)(int, int))
//{
//	int a = 3; 
//	int b = 5; 
//	int ret = pf(a, b); 
//	printf("%d\n", ret);
//}
//int main()
//{
//	calc(Add);
//	return 0;
//}


//int main()
//{
//	( *( void (*)() )0 )();//这段代码牛逼大了劲！！！
//	return 0;
//}
//以上代码是一次函数调用
//void (*)() 是函数指针类型，它加上括号，对数字0进行了强制类型转换
//此时0被视作一个函数指针，将其解引用之后，成为了一个无参数、无返回值的函数并被调用。


//void (*signal(int,void(*)(int)))(int);
//以上代码是一次函数声明，signal是一个函数名
//声明函数的第一个参数的类型是int，第二个参数的类型是函数指针，该指针指向的函数参数类型是int，返回类型是void。
//signal函数的返回类型也是一个函数指针，该函数指针指向的函数参数是int，返回类型是void。


//typedef的功能
//主要是将一个类型进行重命名
//比如：
//typedef unsigned int uint;
//将 unsigned int 重命名为 uint，并且原功能不变，仅仅是将其改了个名字而已。


//有了typedef，可以对上边的代码进行简化：
//typedef void (*vdt)(int);//其意义是将 void(*)(int) 重命名为 vdt。
//vdt signal(int, vdt);


//函数指针实用案例
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
//void calc(int (*p)(int, int))//这样可以减少重复代码，提高工作效率。
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个操作数:>\n");
//	scanf("%d %d", &a, &b);
//	int ret = p(a, b);
//	printf("%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请输入数字:>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(add);
//			break;
//		case 2:
//			calc(sub);
//			break;
//		case 3:
//			calc(mul);
//			break;
//		case 4:
//			calc(div);
//			break;
//		case 0:
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}




























































































































