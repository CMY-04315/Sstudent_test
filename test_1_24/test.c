#define _CRT_SECURE_NO_WARNINGS 1


//һ������ӵ����������int��������Ҳ�����ͣ���������ȥ����������������
//���磺int arr[10] = { 0 };   �������;��� int[10] 


//��������ͬ�������������ݻ���
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


//ɨ���Ȳ����ˣ��Ժ��Լ�дд����


//----------------------------------------------------������-----------------------------------------------------------------------
// 
// 
// % ȡģ���������˱����������������ұ߱�����������
// 
// << ���Ʋ�����
// >> ���Ʋ�����
// 
//��λ�������Ĳ�����ֻ�����������ƶ����Ƕ�����λ�Ĳ��롣
// 
//�����Ķ����Ʊ�ʾ��3�ӣ�
//ԭ�롢���롢����
// 
//����������ԭ�롢���롢������ͬ
//����������ԭ�롢���롢������Ҫ�����
//���������ֵĵ�һλ�Ƿ���λ���������λ��0����ʾ����һ�������������1����ô��ʾ�Ǹ���
// 
// ���磺7�Ķ����Ʊ�ʾ��
// 00000000000000000000000000000111 -- ԭ��
// 00000000000000000000000000000111 -- ����
// 00000000000000000000000000000111 -- ����
// 
// -7
// 10000000000000000000000000000111 -- ԭ��
// 11111111111111111111111111111000 -- ���� ��ԭ��ķ���λ���䣬����λ��λȡ�����Ƿ��룩
// 11111111111111111111111111111001 -- ���� �������һ���ǲ��룩
//
//�������ڴ��д洢���ǲ���
//
//
//#include <stdio.h>
//int main()
//{
//	int a = 7;
//	int b = a << 1;//����a��ֵû�б�
//	printf("a=%d\n", a);//a = 7    00000000000000000000000000000111
//	printf("b=%d\n", b);//b = 14   00000000000000000000000000001110  ���Ʋ���������߶������ұ߲��㡣
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
//�ϱ߾����ٵĶ������Ʋ����������Ʋ�����������
//���Ʋ��������ƶ���Ϊ:������λ���߼���λ��
//������λ���ұ߶�������߲�ԭ����λ
//�߼���λ���ұ߶�������߲���
//
//����������˵��������λ���߼���λ��Ч����һ����
//
//������������λ�����߼���λȡ���ڱ�����
//VS���������õ���������λ
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


// & - ����2���ƣ�λ��
// | - ����2���ƣ�λ��
// ^ - ����2���ƣ�λ���
//ֻ�������������Բ������


// & ��λ��
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
//00000000000000000000000000000011 -- ����
//
//-5
//10000000000000000000000000000101 -- ԭ��
//11111111111111111111111111111010 -- ����
//11111111111111111111111111111011 -- ����
//
//��&���������Ĳ��룬��ͬλ�ϵ�����ͬʱ��1����������1��ֻҪ������һ��0����ô��������㣨��ʵ��������Ϊ�����������λ�ϵ�������ˣ���
//
//3�Ĳ���  -- 00000000000000000000000000000011
//-5�Ĳ��� -- 11111111111111111111111111111011
//3 & -5   -- 00000000000000000000000000000011 = 3
//�����ϱߵĴ�������3
//
//
// | ��λ��
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
// '|'��һ����һ������ͬʱΪ������㡣
// 
//3�Ĳ���  -- 00000000000000000000000000000011
//-5�Ĳ��� -- 11111111111111111111111111111011
//3 | -5   -- 11111111111111111111111111111011 = -5
//
//
// ^ ��λ���
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
//�� ^ ����ͬΪ0������Ϊ1
// 
//3�Ĳ���  -- 00000000000000000000000000000011
//-5�Ĳ��� -- 11111111111111111111111111111011
//3 ^ -5   -- 11111111111111111111111111111000 -- ����
//            11111111111111111111111111110111 -- ����
//            10000000000000000000000000001000 -- ԭ�� = -8




//���ܴ���������ʵ���������Ļ�����
//
//��һ�ӣ�ûʲô��������
//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 8;
//	printf("����ǰ��a = %d, b = %d\n", a,b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("������a = %d, b = %d\n", a, b);
//	return 0;
//}
//
//
//�ڶ��֣�����ķ���
//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 8;
//	printf("����ǰ��a = %d, b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("������a = %d, b = %d\n", a, b);
//	return 0;
//}
//
//��ȷһ�°�λ�������㷨��       1. ��ͬΪ0������Ϊ1
//                                   2. a ^ a = 0 ��������ͬ���ֽ��а�λ������0��
//                                   3. 0 ^ a = a (0���κ����ֽ��а�λ��򶼵����������)
//                                   4. ��λ���֧�ֽ�����   
//�����⼸���ٿ��ϱߵĴ���Ӧ�ò�������



//��д����ʵ�֣���һ�������洢���ڴ��еĶ�������1�ĸ���
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


//�ڵ�Ŀ�������У��� + ��ûʲô�ã����޷���һ������������������ǡ� - ��������һ�������������
//�� ~ ���Ƕ�һ�����Ķ����ư�λȡ����������һλ����λ��
//#include <stdio.h>
//int main()
//{
//	int a = 0;          // a - 00000000000000000000000000000000
//	printf("%d\n", ~a); //~a - 11111111111111111111111111111111 - ����
//	return 0;           //     11111111111111111111111111111110 - ����
//}                       //     10000000000000000000000000000001 - ԭ�� = -1


//�� ++ ���롰 -- ��
// 
//��Ϊǰ�������
// 
//ǰ�ã��ȸı����ִ�С����ʹ�øı�����ֵ��
//���ã���ʹ��δ�ı�����֣��ٸı����ִ�С��
// 
// 
//ע�⣺�� ++ ���롰 -- �����ı���ԭ�����ֵĴ�С��


//�߼��롰&&�����߼���||��
//
//��&&�����ߵı���ʽ��Ϊ�棬�����Ϊ�棬�൱�������еġ����ҡ���
//��||������ֻҪ��һ������ʽΪ�棬��������棬�൱�������еġ����ߡ���
// 
// 
// ע�⣺�������ļ����Ǵ������ҽ��У������С�&&������ʱ�������ʽΪ�٣���ô��ʽ���ᱻִ�У�ֻ����ʽ�ᱻִ�С�
//           ��||�����ϱߵ�ǡ���෴�������С�||������ʱ�������ʽΪ�棬��ô��ʽ���ᱻִ�У�ֻ����ʽ�ᱻִ�С�
// 
// 
// ����
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	i = a++ && ++b && d++;  //���ڡ�a++���Ǻ��üӼӣ�������ʹ�ã������ӡ���ô��һ����&&����ʽΪ�٣�ʣ�µġ�++b���͡�d++�������ᱻִ�С�
//	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//	return 0;
//}
//


//���ű���ʽ�г���Ϊ�ٵ�ʽ�Ӳ�Ӱ�����У��������С�


//�����еġ�[]�����±����ò������������������������������±�����


//������̨��
//һֻ��������n��̨�ף�������һ����һ�׻����ף���ô��һ��������������
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



//��һ����������(�������ظ�������),��ɾ��ָ����ĳһ������,���ɾ��ָ������֮������У�������δ��ɾ�����ֵ�ǰ��λ��û�з����ı䡣
//���ݷ�Χ:���г��Ⱥ������е�ֵ������1 <= n <= 50                     ��ע�⣺�������ɾ��������У����������ǵ��������Ҫɾ��Ԫ�أ�
//	�������� :
//��һ������һ������(0<N<50)��
//�ڶ�������N�������������ÿո�ָ���N��������
//������������Ҫ����ɾ����һ��������
//  ������� :
//���Ϊһ�У�ɾ��ָ������֮������С�
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


//����n�����֣��������n���������������������Ĳ
//��������:
//���У���һ��Ϊn����ʾn�����֣��������10000��
//�ڶ���Ϊn������(������ʾ����Χ0 - 100)���Կո������
//������� :
//һ�У����n���������������������Ĳ
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


//����
//�����ĸ��Сдת������һ���ַ����ж����Ƿ�Ϊ��д��ĸ������ǣ�����ת����Сд��ĸ; ��֮��ת��Ϊ��д��ĸ��
//�������� :
//�������룬ÿһ������һ����ĸ��
//������� :
//���ÿ�����룬�������ռһ�У������ĸ�Ķ�Ӧ��ʽ��
//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)//scanfδ��ȡ���ַ�ʱ�᷵��EOF
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);//�ַ��洢ʱ����ASCII�����ʽ����
//		}
//		else if(ch >= 'A' && ch <= 'Z')
//		{
//			printf("%c\n", ch + 32);
//		}
//	}
//	return 0;
//}
//�ֻ���������
//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)//scanfδ��ȡ���ַ�ʱ�᷵��EOF
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);//�ַ��洢ʱ����ASCII�����ʽ����
//		}
//		else
//		{
//			printf("%c\n", ch + 32);
//		}
//		getchar();//ȥ���ַ����\n
//	}
//	return 0;
//}


//�ж������Ƿ�����ĸ
//�������� :
//�������룬ÿһ������һ���ַ�.
//������� :
//���ÿ�����룬�������ռһ�У��ж������ַ��Ƿ�Ϊ��ĸ��
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
//%cǰ��ӿո�
//������һ���ַ�֮ǰ�����пհ��ַ�


//���c���Ե�ѧ�ĵ�һ������Ӧ�þ������hello world������֪��ÿһ���ַ�����һ��ASCII�룬�������
//hello worldÿһ���ַ���ASCII�� + 1��Ӧ���Ǹ��ַ�������a��ӦASCII�����һ���ַ���b.
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


//����ˮ�ɻ��� - Lily Number : ����������֣����м��ֳ��������֣�����1461���Բ�ֳ�(1��461)��(14��61)��(146��1)
//������в�ֺ�ĳ˻�֮�͵�������������һ��Lily Number��
//���� :
//655 = 6 * 55 + 65 * 5
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//��� 5λ���е����� Lily Number.
//�������� :
//	��
//������� :
//һ�У�5λ���е����� Lily Number��ÿ������֮����һ���ո�
//��д��
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
//�����
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


//-------------------------------------------------------------------����ָ��--------------------------------------------------------------

//ţ�;����﷨���Ű�˳��ṹϰ��
//ָ�����ڴ���һ����С��Ԫ�ı�ţ�Ҳ���ǵ�ַ
//ƽʱ������˵��ָ�룬ͨ��ָ����ָ�����������������ڴ��ַ�ı�����
//ָ�����ֽڵĵ�ַ
//ָ���Сȡ����ϵͳ����:
//64λϵͳ8���ֽ�
//32λϵͳ4���ֽ�


//ʹ��long int���Է�ֹ���
//#include <stdio.h>
//int main()
//{
//    long int a = 0;
//    scanf("%ld", &a);
//    printf("%ld", a * 3156 * 10000);
//    return 0;
//}


//����ָ�����ͣ�
//ָ�����;�����ָ���ڽ����õ�ʱ����ʼ����ֽ�
//�����int*��ָ�룬�����÷���4���ֽ�
//�����char*��ָ�룬�����÷���1���ֽ�
//floatռ��4���ֽ�
//doubleռ��8���ֽ�
//ָ������;�����ָ��Ӽ�һ������ʱ�������˼����ֽڣ�����˵�����£�
//������ָ��Ĳ���
//�����int*��ָ�룬pi+1�����ĸ��ֽڣ��������£���1����5��
//�����char*��ָ�룬pc+1����һ���ֽڣ�����һ�£���1����2��


//Ұָ�룺Ұָ�����ָ��ָ���λ���ǲ���֪�ģ�����ġ�����ȷ�ġ�û����ȷ���Ƶģ�
//Ұָ����ֵ������
//1��ָ��δ��ʼ��
//2��ָ��Խ����ʣ��ͱ���������δ��룩
//3��ָ��ָ��Ŀռ��ͷ�
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
//����Ĵ����У�ָ��p������arr[i]���������ݽ����˷���
//ѭ��һ��ʮһ�Σ�ǰʮ�η��ʶ�û���⣬����ʮһ��ʱ��ָ��p���ʵ���������������������Խ�����


//��ָ����г�ʼ����Ҫô����һ�������ĵ�ַ��Ҫô����NULL��NULL�ı��ʾ���0����ʱ�����ɿ�ָ�룩��
//ʹ��NULL����һ���鷳����NULL�����ָ�벻���������ʣ�Ҳ����˵int* p = NULL; *p = 100;����д���Ǵ����
//��ȷ���÷��ǣ�int* p = NULL; if(p != NULL) { *p = 100; }


//��ι��Ұָ�룺
//1.ָ���ʼ��
//2.С��ָ��Խ��
//3.ָ��ָ��ռ��ͷż�ʱ����NULL
//4.���ⷵ�ؾֲ������ĵ�ַ
//5.ָ��ʹ��֮ǰ�����Ч��


//��ָ��ķ����ı���������
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


//ָ�����
//ָ��ͬһ��ռ��2��ָ��������
//ָ���ȥָ��õ��ľ���ֵ������ָ��֮��Ԫ�صĸ���
//�ͱ��磺&arr[9] - &arr[0]  �õ�����9
//����    &arr[0] - &arr[9]  �õ�����-9
//ָ���ָ��û������


//ʹ��ָ���ȥָ��ʵ��strlen�Ĺ���
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


//��׼�涨:
//����ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ�
//���ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽϡ�
//���仰˵�����������������Խ�磬����������ǰԽ�硣


//����ָ��������������һ��ָ������ĵ�ַ��


//���ָ����������ָ������
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
//	//parr���Ǵ��ָ�������
//	//ָ������
//	//���⣬parrҲ�Ƕ���ָ��
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
//ģ��ʵ�ֶ�ά����
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


//-------------------------------------------�ṹ��-----------------------------------------


//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա������
//�ṹ��ÿһ����Ա�����ǲ�ͬ���͵ı�����
//�ṹ��ĳ�Ա�����Ǳ��������顢ָ�룬�����������ṹ�塣

//#include <stdio.h>
//struct Peo
//{
//	char name[20]; 
//	char tele[12];//Ϊʲô����������������֣���ȴʹ��char������int�أ���Ϊ������绰���뱻�������ַ��������ʹ��int������ܻ������
//	char sex[5];//(һ������ռ�����ֽ�)
//	int high;
//}p3,p4;
////p1��p2������ȫ�ֵĽṹ����������Ƽ�����ʹ�ã���Ϊ��������ȫ�ֱ�����
//struct st
//{
//	struct Peo p;//�ṹ����Ƕ�׽ṹ�壬��ʼ�����±ߡ�
//	int stu_ID;
//	float f;
//};
//void print1(struct Peo* str)
//{
//	printf("%s %s %s %d\n", str->name, str->tele, str->sex, str->high);//ʹ��ָ��ʱʹ�ü�ͷ������
//}
//void print2(struct Peo p)
//{
//	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);
//}
//int main()
//{
//	struct Peo p1 = { "����","15596668862","��",181 };//�ṹ������Ĵ���(�Ƽ�)��������ʱҪ����˳������
//	struct st s = { { "����","15596668862","��",166 },100, 3.14f };//С������f�ᱻĬ��Ϊdouble����,���������ڴ����޷���׼���棬�ܻ���һ���ƫ�
//
//	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.stu_ID, s.f);
//	print1(&p1);
//	print2(p1);
//	return 0;
//}

//Ѫ�Ľ�ѵ����
//�ڴ���char���͵�����ʱ��һ��Ҫ����\0������λ�ã��ͱ�������Ĵ��룬������ṹ����char tele[12];�еġ�12����Ϊ��11������ô�ڴ洢�绰����ʱ�������н�û�С�\0������͵����˴�ӡ��tele��Ҫ�ٴ�ӡһ���в�������\0ͣ���������ս���ͻ��ӡ�����������С���
//ʹ��̫ʹ�ˣ������о���һ���Ū���ף�


//�ṹ�崫���Ƽ�����ַ


//-----------------------------------------------------------------��ϰ��-----------------------------------------------------------------------


//ͳ�ƶ������������ж��ٸ�1
//�ⷨһ��
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
//�ⷨ�����������ڸ�������
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
//�ⷨ���������ĸ��֣���
//#include <stdio.h>
//int count_num_of_1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);//Ч����ȥ��n�е�һ��1
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


//���������������в�ͬλ�ĸ���
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


//��ӡ���������Ƶ�����λ��ż��λ
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	printf("��������Ϊ");
//	for (i = 30; i >= 0; i = i - 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	a = a >> 1;
//	printf("ż������Ϊ");
//	for (i = 30; i >= 0; i = i - 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	return 0;
//}


//�������Ľ����
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i); 
//	printf("ret =%d\n", ret);
//	return 0;
//}
//��ʵ����δ����д�����Ϊ�ڲ�ͬ�ı����������н����һ��


//ȫ�ֱ�������̬�������Ƿ��ھ�̬��
//ȫ�ֱ�������̬��������ʼ����ʱ��Ĭ�ϻᱻ��ʼ��Ϊ0
//�ֲ��������Ƿ���ջ��������ʼ����Ĭ��ֵ�����ֵ
//#include <stdio.h>
//int i;//Ĭ����0
//int main()
//{
//	i--;//i = -1
//	if (i > sizeof(i))//����ת��
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}
//i���з�������int������sizeof�ķ���ֵ���޷�������unsigned�������������Ͳ���
//���Խ�������ת������i���з�����ת�����޷�����
//i��-1���Ĳ���Ϊ11111111111111111111111111111111
//����ת��������Ĳ���ֱ�ӿ���һ�����������֣���ô��������һ���൱�������
//����i�����sizeof(i)


//����ʽ��ֵ�ȿ��Ƿ������������������ת�����ٽ��м���
//����ʽ���������ʱ���ȿ����ڲ����������ȼ���������˭
//���ڲ����������ȼ���ͬ������£����������Ľ���Ծ�������˳��
//��ʹ�������ȼ��ͽ���ԣ�����ʽҲ��һ�������Ψһֵ


//��������:
//�������룬һ������(2~20)����ʾ�����������Ҳ��ʾ��ɡ�X���ķ�б�ߺ���б�ߵĳ��ȡ�
//������� :
//���ÿ�����룬����á� * ����ɵ�X��ͼ����
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


//��ͨ���꣺���������4�ı������Ҳ���100�ı����ģ�Ϊ���꣨��2004�ꡢ2020��Ⱦ������꣩��
//�������꣺����������������ģ�������400�ı����������꣨��1900�겻�����꣬2000�������꣩��
//��������:
//�������룬һ���������������ֱ��ʾ��ݺ��·ݣ��ÿո�ָ�.
//������� :
//���ÿ�����룬���Ϊһ�У�һ����������ʾ��һ��������ж����졣
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%d %d", &year, &month);
//	if ((year % 400 == 0)||((year % 4 == 0) && (year % 100 != 0)))//����
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
//	else//ƽ��
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
//�����
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