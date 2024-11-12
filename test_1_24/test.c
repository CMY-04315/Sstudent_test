#define _CRT_SECURE_NO_WARNINGS 1


//一个整数拥有其类型是int，而数组也有类型，定义数组去掉数组名就是类型
//比如：int arr[10] = { 0 };   它的类型就是 int[10] 


//将长度相同的两个数组内容互换
//#include <stdio.h>
//void arr_change(int arr1[], int arr2[])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 11,12,13,14,15,16,17,18,19,20 };
//	arr_change(arr1, arr2);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}


//扫雷先不看了，以后自己写写试试


//----------------------------------------------------操作符-----------------------------------------------------------------------
// 
// 
// % 取模操作符两端必须是整数，并且右边必须是正数。
// 
// << 左移操作符
// >> 右移操作符
// 
//移位操作符的操作数只能是整数，移动的是二进制位的补码。
// 
//整数的二进制表示有3钟：
//原码、反码、补码
// 
//正的整数的原码、反码、补码相同
//负的整数的原码、反码、补码是要计算的
//二进制数字的第一位是符号位，如果符号位是0，表示这是一个正数；如果是1，那么表示是负数
// 
// 例如：7的二进制表示是
// 00000000000000000000000000000111 -- 原码
// 00000000000000000000000000000111 -- 反码
// 00000000000000000000000000000111 -- 补码
// 
// -7
// 10000000000000000000000000000111 -- 原码
// 11111111111111111111111111111000 -- 反码 （原码的符号位不变，其他位按位取反就是反码）
// 11111111111111111111111111111001 -- 补码 （反码加一就是补码）
//
//整数在内存中存储的是补码
//
//
//#include <stdio.h>
//int main()
//{
//	int a = 7;
//	int b = a << 1;//这里a的值没有变
//	printf("a=%d\n", a);//a = 7    00000000000000000000000000000111
//	printf("b=%d\n", b);//b = 14   00000000000000000000000000001110  左移操作符：左边丢弃，右边补零。
//	return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//	int a = -7;
//	int b = a << 1;
//	printf("a=%d\n", a);//a = -7
//	printf("b=%d\n", b);//b = -14
//	return 0;
//}
//
//
//上边举例举的都是左移操作符，右移操作符较特殊
//左移操作符的移动分为:算数移位和逻辑移位。
//算术移位：右边丢弃，左边补原符号位
//逻辑移位：右边丢弃，左边补零
//
//对于正数来说，算术移位和逻辑移位的效果是一样的
//
//究竟是算术移位还是逻辑移位取决于编译器
//VS编译器采用的是算术移位
//
//
//#include <stdio.h>
//int main()
//{
//	int a = -7;
//	int b = a >> 1;
//	printf("a=%d\n", a);//a = -7
//	printf("b=%d\n", b);//b = -4
//	return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//	int a = 7;
//	int b = a >> 1;
//	printf("a=%d\n", a);//a = 7
//	printf("b=%d\n", b);//b = 3
//	return 0;
//}


// & - 按（2进制）位与
// | - 按（2进制）位或
// ^ - 按（2进制）位异或
//只适用于整数，对补码操作


// & 按位与
// 
// 
//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a & b;
//	printf("c = %d\n", c);//c = 3 
//	return 0;
//}
// 
// 
//3
//00000000000000000000000000000011 -- 补码
//
//-5
//10000000000000000000000000000101 -- 原码
//11111111111111111111111111111010 -- 反码
//11111111111111111111111111111011 -- 补码
//
//‘&’两个数的补码，相同位上的数字同时是1，其结果才是1；只要其中有一个0，那么结果就是零（其实可以理解为两个补码各个位上的数字相乘）。
//
//3的补码  -- 00000000000000000000000000000011
//-5的补码 -- 11111111111111111111111111111011
//3 & -5   -- 00000000000000000000000000000011 = 3
//所以上边的代码结果是3
//
//
// | 按位或
//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a | b;
//	printf("c = %d\n", c);//c = -5
//	return 0;
//}
//
// '|'有一就是一，两个同时为零才是零。
// 
//3的补码  -- 00000000000000000000000000000011
//-5的补码 -- 11111111111111111111111111111011
//3 | -5   -- 11111111111111111111111111111011 = -5
//
//
// ^ 按位异或
//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a ^ b;
//	printf("c = %d\n", c);//c = -8
//	return 0;
//}
//
//‘ ^ ’相同为0，相异为1
// 
//3的补码  -- 00000000000000000000000000000011
//-5的补码 -- 11111111111111111111111111111011
//3 ^ -5   -- 11111111111111111111111111111000 -- 补码
//            11111111111111111111111111110111 -- 反码
//            10000000000000000000000000001000 -- 原码 = -8




//不能创建变量，实现两个数的互换。
//
//第一钟，没什么技术含量
//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 8;
//	printf("交换前：a = %d, b = %d\n", a,b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("交换后：a = %d, b = %d\n", a, b);
//	return 0;
//}
//
//
//第二种，难想的方法
//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 8;
//	printf("交换前：a = %d, b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后：a = %d, b = %d\n", a, b);
//	return 0;
//}
//
//明确一下按位异或的运算法则：       1. 相同为0，相异为1
//                                   2. a ^ a = 0 （两个相同数字进行按位异或等于0）
//                                   3. 0 ^ a = a (0与任何数字进行按位异或都等于这个数字)
//                                   4. 按位异或支持交换律   
//根据这几条再看上边的代码应该不难理解



//编写代码实现：求一个整数存储在内存中的二进制中1的个数
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (num & 1 == 1)
//		{
//			count++;
//		}
//		num = num >> 1;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//在单目操作符中，“ + ”没什么用，它无法让一个负数变成正数，但是“ - ”可以让一个负数变成正数
//“ ~ ”是对一个数的二进制按位取反（包括第一位符号位）
//#include <stdio.h>
//int main()
//{
//	int a = 0;          // a - 00000000000000000000000000000000
//	printf("%d\n", ~a); //~a - 11111111111111111111111111111111 - 补码
//	return 0;           //     11111111111111111111111111111110 - 反码
//}                       //     10000000000000000000000000000001 - 原码 = -1


//“ ++ ”与“ -- ”
// 
//分为前置与后置
// 
//前置：先改变数字大小，再使用改变后的数值。
//后置：先使用未改变的数字，再改变数字大小。
// 
// 
//注意：“ ++ ”与“ -- ”都改变了原先数字的大小。


//逻辑与“&&”，逻辑或“||”
//
//“&&”两边的表达式都为真，整体才为真，相当于语言中的“并且”。
//“||”两边只要有一个表达式为真，整体就是真，相当于语言中的“或者”。
// 
// 
// 注意：编译器的计算是从左向右进行，当进行“&&”计算时，如果左式为假，那么右式不会被执行，只有左式会被执行。
//           “||”与上边的恰好相反，当进行“||”计算时，如果左式为真，那么右式不会被执行，只有左式会被执行。
// 
// 
// 例：
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	i = a++ && ++b && d++;  //由于“a++”是后置加加，所以先使用，再增加。那么第一个“&&”左式为假，剩下的“++b”和“d++”都不会被执行。
//	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//	return 0;
//}
//


//逗号表达式中出现为假的式子不影响运行，跳过就行。


//数组中的“[]”叫下标引用操作符，有两个操作数：数组名和下标数。


//青蛙跳台阶
//一只青蛙跳上n阶台阶，它可以一次跳一阶或两阶，那么它一共多少种跳法？
//#include <stdio.h>
//int steps(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//	{
//		return (steps(n - 1) + steps(n - 2));
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int tmp = steps(n);
//	printf("%d\n", tmp);
//	return 0;
//}



//有一个整数序列(可能有重复的整数),现删除指定的某一个整数,输出删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变。
//数据范围:序列长度和序列中的值都满足1 <= n <= 50                     （注意：输出的是删除后的数列，不是让我们单纯不输出要删的元素）
//	输入描述 :
//第一行输入一个整数(0<N<50)。
//第二行输入N个整数，输入用空格分隔的N个整数。
//第三行输入想要进行删除的一个整数。
//  输出描述 :
//输出为一行，删除指定数字之后的序列。
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del = 0;
//	scanf("%d", &del);
//	int j = 0;
//	for (j = 0; j < n; j++)
//	{
//		arr[del + j - 1] = arr[del + j];
//	}
//	int k = 0;
//	for (k = 0; k < n - 1; k++)
//	{
//		printf("%d ", arr[k]);
//	}
//	return 0;
//}


//输入n个数字，换行输出n个数字中最高数和最低数的差。
//输入描述:
//两行，第一行为n，表示n个数字，不会大于10000。
//第二行为n个数字(整数表示，范围0 - 100)，以空格隔开。
//输出描述 :
//一行，输出n个数字中最高数和最低数的差。
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[10000] = { 0 };
//	int max = -1;
//	int min = 101;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//		if (min > arr[i])
//		{
//			min = arr[i];
//		}
//	}
//	printf("%d\n", max - min);
//	return 0;
//}


//描述
//完成字母大小写转换，有一个字符，判断它是否为大写字母，如果是，将它转换成小写字母; 反之则转换为大写字母。
//输入描述 :
//多组输入，每一行输入一个字母。
//输出描述 :
//针对每组输入，输出单独占一行，输出字母的对应形式。
//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)//scanf未读取到字符时会返回EOF
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);//字符存储时是以ASCII码的形式储存
//		}
//		else if(ch >= 'A' && ch <= 'Z')
//		{
//			printf("%c\n", ch + 32);
//		}
//	}
//	return 0;
//}
//又或者这样：
//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)//scanf未读取到字符时会返回EOF
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);//字符存储时是以ASCII码的形式储存
//		}
//		else
//		{
//			printf("%c\n", ch + 32);
//		}
//		getchar();//去掉字符后的\n
//	}
//	return 0;
//}


//判断输入是否是字母
//输入描述 :
//多组输入，每一行输入一个字符.
//输出描述 :
//针对每组输入，输出单独占一行，判断输入字符是否为字母。
//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//		{
//			printf("%c is an alphabet.\n", ch);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", ch);
//		}
//		getchar();
//	}
//	return 0;
//}
//%c前面加空格
//跳过下一个字符之前的所有空白字符


//大家c语言的学的第一个程序应该就是输出hello world，我们知道每一个字符都有一个ASCII码，请你输出
//hello world每一个字符的ASCII码 + 1对应的那个字符．比如a对应ASCII码的下一个字符是b.
//#include <stdio.h>
//int main()
//{
//    char ch[] = "hello world";
//    int i = 0;
//    for (i = 0; i < 11; i++)
//    {
//        ch[i] = ch[i] + 1;
//    }
//    printf("%s", ch);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char ch[] = "hello world";
//    printf("%c", ch[2]);
//    return 0;
//}


//变种水仙花数 - Lily Number : 把任意的数字，从中间拆分成两个数字，比如1461可以拆分成(1和461)，(14和61)，(146和1)
//如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
//例如 :
//655 = 6 * 55 + 65 * 5
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//求出 5位数中的所有 Lily Number.
//输入描述 :
//	无
//输出描述 :
//一行，5位数中的所有 Lily Number，每两个数之间间隔一个空格。
//我写的
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		if (((i / 10000) * (i % 10000)) + ((i / 1000) * (i % 1000)) + ((i / 100) * (i % 100)) + ((i / 10) * (i % 10)) == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//鹏哥的
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		int sum = 0;
//		int j = 0; 
//		for (j = 1; j <= 4; j++)
//		{
//			int k = (int)pow(10, j);
//			sum += (i%k) * (i / k);
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//-------------------------------------------------------------------初见指针--------------------------------------------------------------

//牛客竞赛语法入门班顺序结构习题
//指针是内存中一个最小单元的编号，也就是地址
//平时口语中说的指针，通常指的是指针变量，是用来存放内存地址的变量。
//指针是字节的地址
//指针大小取决于系统配置:
//64位系统8个字节
//32位系统4个字节


//使用long int可以防止溢出
//#include <stdio.h>
//int main()
//{
//    long int a = 0;
//    scanf("%ld", &a);
//    printf("%ld", a * 3156 * 10000);
//    return 0;
//}


//关于指针类型：
//指针类型决定了指针在解引用的时候访问几个字节
//如果是int*的指针，解引用访问4个字节
//如果是char*的指针，解引用访问1个字节
//float占用4个字节
//double占用8个字节
//指针的类型决定了指针加减一操作的时候，跳过了几个字节（或者说跳几下）
//决定了指针的步长
//如果是int*的指针，pi+1跳过四个字节（跳了四下，从1跳到5）
//如果是char*的指针，pc+1跳过一个字节（跳了一下，从1跳到2）


//野指针：野指针就是指针指向的位置是不可知的（随机的、不正确的、没有明确限制的）
//野指针出现的情况：
//1、指针未初始化
//2、指针越界访问（就比如下面这段代码）
//3、指针指向的空间释放
//int main()
//{
//	int arr[10] = { 0 }; 
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}
//上面的代码中，指针p代替了arr[i]对数组内容进行了访问
//循环一共十一次，前十次访问都没问题，但第十一次时，指针p访问到了数组以外的区域，这就是越界访问


//给指针进行初始化，要么给它一个变量的地址，要么输入NULL（NULL的本质就是0，此时它会变成空指针）。
//使用NULL会有一点麻烦，用NULL定义的指针不允许被访问，也就是说int* p = NULL; *p = 100;这种写法是错误的
//正确的用法是：int* p = NULL; if(p != NULL) { *p = 100; }


//如何规避野指针：
//1.指针初始化
//2.小心指针越界
//3.指针指向空间释放及时放置NULL
//4.避免返回局部变量的地址
//5.指针使用之前检查有效性


//用指针的方法改变数组内容
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		*p = 1;
//		p++;
//	}
//	return 0;
//}


//指针相减
//指向同一块空间的2个指针才能相减
//指针减去指针得到的绝对值是两个指针之间元素的个数
//就比如：&arr[9] - &arr[0]  得到的是9
//但是    &arr[0] - &arr[9]  得到的是-9
//指针加指针没有意义


//使用指针减去指针实现strlen的功能
//#include <stdio.h>
//int my_strlen(char* str)
//{
//	char* p0 = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	char* p1 = str;
//	return (p1 - p0);
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}


//标准规定:
//允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，
//但是不允许与指向第一个元素之前的那个内存位置的指针进行比较。
//换句话说，就是数组允许向后越界，但不允许向前越界。


//二级指针变量是用来存放一级指针变量的地址的


//存放指针的数组就是指针数组
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20; 
//	int c = 30;
//	int arr[10] = { 0 };
//
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	int* parr[10]={&a, &b, &c};
//	//parr就是存放指针的数组
//	//指针数组
//	//另外，parr也是二级指针
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", **(parr + i));
//	}
//	printf("\n");
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *parr[i]);
//	}
//	return 0;
//}
//模拟实现二维数组
//#include <stdio.h>
//int main()
//{
//	int arr1[4] = { 1,2,3,4 }; 
//	int arr2[4] = { 2,3,4,5 }; 
//	int arr3[4] = { 3,4,5,6 };
//	int* parr[3] = { arr1, arr2, arr3 }; 
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ",( parr[i])[j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//-------------------------------------------结构体-----------------------------------------


//结构是一些值的集合，这些值称为成员变量。
//结构的每一个成员可以是不同类型的变量。
//结构体的成员可以是标量、数组、指针，甚至是其他结构体。

//#include <stdio.h>
//struct Peo
//{
//	char name[20]; 
//	char tele[12];//为什么这里明明存的是数字，但却使用char而不是int呢？因为在这里电话号码被看作了字符串，如果使用int，则可能会溢出。
//	char sex[5];//(一个汉字占两个字节)
//	int high;
//}p3,p4;
////p1和p2是两个全局的结构体变量（不推荐这样使用，因为这是两个全局变量）
//struct st
//{
//	struct Peo p;//结构体内嵌套结构体，初始化看下边。
//	int stu_ID;
//	float f;
//};
//void print1(struct Peo* str)
//{
//	printf("%s %s %s %d\n", str->name, str->tele, str->sex, str->high);//使用指针时使用箭头操作符
//}
//void print2(struct Peo p)
//{
//	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);
//}
//int main()
//{
//	struct Peo p1 = { "张三","15596668862","男",181 };//结构体变量的创建(推荐)，放数据时要按照顺序来。
//	struct st s = { { "张三","15596668862","男",166 },100, 3.14f };//小数不加f会被默认为double类型,浮点数在内存中无法精准保存，总会有一点的偏差。
//
//	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.stu_ID, s.f);
//	print1(&p1);
//	print2(p1);
//	return 0;
//}

//血的教训！！
//在创建char类型的数组时，一定要给‘\0’留个位置，就比如上面的代码，如果将结构体中char tele[12];中的‘12’改为‘11’，那么在存储电话号码时，数组中将没有‘\0’，这就导致了打印完tele后还要再打印一个男才能碰见\0停下来，最终结果就会打印出了两个‘男’。
//痛！太痛了！！我研究了一天才弄明白！


//结构体传参推荐传地址


//-----------------------------------------------------------------练习题-----------------------------------------------------------------------


//统计二进制数字中有多少个1
//解法一：
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (num & 1 == 1)
//		{
//			count++;
//		}
//		num = num >> 1;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//解法二（不适用于负数）：
//#include <stdio.h>
//int count_num_of_1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if ((n % 2) == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0; 
//	scanf("%d", &num);
//	int n = count_num_of_1(num);
//	printf("%d\n", n);
//	return 0;
//}
//解法三（真正的高手）：
//#include <stdio.h>
//int count_num_of_1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);//效果是去掉n中的一个1
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0; 
//	scanf("%d", &num);
//	int n = count_num_of_1(num);
//	printf("%d\n", n);
//	return 0;
//}


//求两个数二进制中不同位的个数
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = a ^ b;
//	int count = 0;
//	while (c)
//	{
//		c = c & (c - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}


//打印整数二进制的奇数位和偶数位
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	printf("奇数数列为");
//	for (i = 30; i >= 0; i = i - 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	a = a >> 1;
//	printf("偶数数列为");
//	for (i = 30; i >= 0; i = i - 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	return 0;
//}


//下面代码的结果是
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i); 
//	printf("ret =%d\n", ret);
//	return 0;
//}
//事实上这段代码有错误，因为在不同的编译器上运行结果不一样


//全局变量，静态变量都是放在静态区
//全局变量，静态变量不初始化的时候，默认会被初始化为0
//局部变量，是放在栈区，不初始化，默认值是随机值
//#include <stdio.h>
//int i;//默认是0
//int main()
//{
//	i--;//i = -1
//	if (i > sizeof(i))//算数转化
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}
//i是有符号数（int），而sizeof的返回值是无符号数（unsigned），两种数类型不符
//所以进行算数转化，将i从有符号数转换成无符号数
//i（-1）的补码为11111111111111111111111111111111
//经过转换，这里的补码直接看作一个二进制数字，那么它将会是一个相当大的正数
//所以i会大于sizeof(i)


//表达式求值先看是否存在整形提升或算术转换，再进行计算
//表达式真正计算的时候先看相邻操作符的优先级决定先算谁
//相邻操作符的优先级相同的情况下，看操作符的结合性决定计算顺序
//即使有了优先级和结合性，表达式也不一定能求出唯一值


//输入描述:
//多组输入，一个整数(2~20)，表示输出的行数，也表示组成“X”的反斜线和正斜线的长度。
//输出描述 :
//针对每行输入，输出用“ * ”组成的X形图案。
//#include <stdio.h>
//void print_X(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i == j||i + j == n - 1)
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_X(n);
//	return 0;
//}


//普通闰年：公历年份是4的倍数，且不是100的倍数的，为闰年（如2004年、2020年等就是闰年）。
//世纪闰年：公历年份是整百数的，必须是400的倍数才是闰年（如1900年不是闰年，2000年是闰年）。
//输入描述:
//多组输入，一行有两个整数，分别表示年份和月份，用空格分隔.
//输出描述 :
//针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天。
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%d %d", &year, &month);
//	if ((year % 400 == 0)||((year % 4 == 0) && (year % 100 != 0)))//闰年
//	{
//		switch (month)
//		{
//			case(2):
//			{
//				day = 29;
//				break;
//			}
//			case(1):
//			case(3):
//			case(5):
//			case(7):
//			case(8):
//			case(10):
//			case(12):
//			{
//				day = 31;
//				break;
//			}
//			case(4):
//			case(6):
//			case(9):
//			case(11):
//			{
//				day = 30;
//				break;
//			}
//		}
//	}
//	else//平年
//	{
//		switch (month)
//		{
//			case(1):
//			case(3):
//			case(5):
//			case(7):
//			case(8):
//			case(10):
//			case(12):
//			{
//				day = 31;
//				break;
//			}
//			case(2):
//			case(4):
//			case(6):
//			case(9):
//			case(11):
//			{
//				day = 30;
//				break;
//			}
//		}
//	}
//	printf("%d", day);
//	return 0;
//}
//鹏哥的
//#include <stdio.h>
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int y = 0; 
//	int m = 0;
//	int d = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d%d", &y, &m) == 2)
//	{
//		int d = days[m];
//		if ((is_leap_year(y) == 1) && (m == 2))
//		{
//			d++;
//		}
//		printf("%d\n",d);
//	}
//	return 0;
//}
