#define _CRT_SECURE_NO_WARNINGS 1


//-----------------------------------------------------------����ָ������---------------------------------------------------------
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
//	int (*arr[4])(int, int) = { add, sub, mul, div };//����ָ������
//	int ret = arr[0](8, 4);//��������,�ӷ�
//	printf("%d\n", ret);
//	return 0;
//}


//����ָ������ʹ������
//������
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
//		printf("����������:>\n");
//		scanf("%d", &input);
//		if (input > 0 && input <= 4)
//		{
//			printf("����������������:>\n");
//			scanf("%d %d", &a, &b);
//			int ret = arr[input](a, b);//���ú���ָ��������ú��������Դ��������������
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�������\n");
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	} while (input);
//	return 0;
//}


//-----------------------------------------------------ָ����ָ�������ָ��-----------------------------------------------------


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
//	int (*arr[5])(int, int) = { 0,add,sub,mul,div };// arr �Ǻ���ָ������
//	int (*(*parr)[5])(int, int) = &arr;// parr ��ָ����ָ�������ָ��
//	return 0;
//}


//----------------------------------------------�ص�����-------------------------------------------------


//void*���޾������͵�ָ�룬���Խ����������͵ĵ�ַ
//���ǲ��ܽ��н����ò�����Ҳ����+-������
//ǿ������ת������Խ��н����õȲ���


//ģ��qsort�����򣩺���
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
//void my_qsort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))//�������Ҫ���׵�ַ�������Ķ��٣�ÿһ��Ԫ�صĴ�С��һ���ȽϺ���
//{                                                                                      //����ȽϺ����涨e1>e2ʱ������һ������0�����֣�e1=e2ʱ������0��e1<e2ʱ������һ��С��0������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//����
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


//------------------------------------------------��ϰ��-------------------------------------------------
//#include <stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4 }; 
//	printf("%d\n", sizeof(a));//16    
//	//�����a������������
//	printf("%d\n", sizeof(a + 0));//4   
//	//��Ϊa���ǵ�����������ģ����������������Ԫ�ص�ַ
//	printf("%d\n", sizeof(*a));//4   
//	//a����Ԫ�ص�ַ�������ú�����Ԫ�أ�int����
//	printf("%d\n", sizeof(a + 1));//4
//	//a + 1��2�ĵ�ַ
//	printf("%d\n", sizeof(a[1]));//4
//	//a[1]ָ�ľ��������е�Ԫ��1������int����
//	printf("%d\n", sizeof(&a));//4
//	//a������Ǵ洢�ŵ�ַ��&a������ȡһ�ε�ַ
//	printf("%d\n", sizeof(*&a));//16
//	//&a��ȡ����������ĵ�ַ���ٶ�������ú�ͱ�������飬��������*&a����ָ�����飬�ǵ�Ȼ��16���ֽ���
//	printf("%d\n", sizeof(&a + 1));//4
//	//&a + 1Ҳ�ǵ�ַ
//	printf("%d\n", sizeof(&a[0]));//4
//	//&a[0]���ǵ�һ��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(&a[0] + 1));//4
//	//&a[0] + 1���ǵڶ���Ԫ�صĵ�ַ
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f'};//�õĴ����ţ�����û��'\0'��
//	printf("%d\n",sizeof(arr)); //6
//	//arr����������ĵ�ַ�����������������Ĵ�С
//	printf("%d\n",sizeof(arr + 0)); //4 
//	//�����arrû�е���ʹ�ã�������Ԫ�ص�ַ
//	printf("%d\n",sizeof(*arr)); //1
//	//*arr������Ԫ�أ�������char���ͣ�����1���ֽ�
//	printf("%d\n",sizeof(arr[1])); //1
//	//Ҳ�Ǵ�����Ԫ�أ�1���ֽ�
//	printf("%d\n",sizeof(&arr)); //4
//	//&arr�ǵ�ַ
//	printf("%d\n",sizeof(&arr + 1)); //4
//	//Ҳ�ǵ�ַ
//	printf("%d\n",sizeof(&arr[0] + 1)); //4
//	//arr[0]����Ԫ�أ�����&���ǵ�ַ����һ���ǵ�ַ
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n",strlen(arr));
//	//���ֵ��strlen����'\0'�Ż�ͣ��
//	printf("%d\n", strlen(arr + 0));
//	//���ֵ��ԭ��ͬ��
//	printf("%d\n", strlen(*arr));
//	//������֮��*arr�൱��'a'����'a'��char���ͣ���strlenҪ���������char*�����Ǻϣ����Դ˴��������⣬�޷�����
//	printf("%d\n", strlen(arr[1]));
//	//ͬ��
//	printf("%d\n", strlen(&arr));
//	//���ֵ
//	printf("%d\n", strlen(&arr + 1)); 
//	//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));
//	//���ֵ
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr)); //7
//	//�������������Ĵ�С
//	printf("%d\n", sizeof(arr + 0)); //4
//	//���ڴ�ʱarr���ǵ���ʹ�ã����������arr������Ԫ�ص�ַ������ǵ�ַ�Ĵ�С
//	printf("%d\n", sizeof(*arr)); //1
//	//����������ַ�'a'�Ĵ�С
//	printf("%d\n", sizeof(arr[1])); //1
//	//����������ַ�'b'�Ĵ�С
//	printf("%d\n", sizeof(&arr)); //4
//	//�൱�ڶ���ָ�룬����ǵ�ַ��С
//	printf("%d\n", sizeof(&arr + 1)); //4
//	//����ǵ�ַ��С
//	printf("%d\n", sizeof(&arr[0] + 1));//4
//	//����ǵ�ַ��С
//	return 0;
//}


//#include <string.h>
//#include <stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr)); //6
//	printf("%d\n", strlen(arr + 0)); //6
//	printf("%d\n", strlen(*arr)); //Ұָ�룬����
//	printf("%d\n", strlen(arr[1])); //Ұָ�룬����
//	printf("%d\n", strlen(&arr)); //6
//	printf("%d\n", strlen(&arr + 1)); //���ֵ
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
//	printf("%d\n", strlen(*p));//Ұָ��
//	printf("%d\n", strlen(p[0]));//Ұָ��
//	printf("%d\n", strlen(&p));//���ֵ
//	printf("%d\n", strlen(&p + 1));//���ֵ
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
//	//a[0]����ʹ�ã���ʾ��һ�еĵ�ַ
//	printf("%d\n", sizeof(a[0] + 1)); //4
//	//a[0]��û�е���ʹ�ã���Ҳûȡ��ַ�����Ա�ʾ��һ��Ԫ�صĵ�ַ����������ǵ�ַ��С
//	printf("%d\n", sizeof(*(a[0] + 1))); //4
//	//��������ǵ�һ�еڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(a + 1)); //4
//	//aû�е���ʹ�ã������Ƕ�ά�������Ԫ�صĵ�ַ��Ҳ���ǵ�һ�еĵ�ַ
//	//����a+1��ʾ�ڶ��еĵ�ַ
//	//��������ǵ�ַ��С
//	printf("%d\n", sizeof(*(a + 1)));//16
//	printf("%d\n", sizeof(&a[0] + 1)); //4
//	//a[0]�ǵ�һ�е����������Ե�һ��ȡ��ַ���õ���һ�еĵ�ַ����һ��õ��ڶ��еĵ�ַ
//	//��������ǵ�ַ��С
//	printf("%d\n", sizeof(*(&a[0] + 1))); //16
//	//a[0]�ǵ�һ�е����������Ե�һ��ȡ��ַ���õ���һ�еĵ�ַ����һ��õ��ڶ��еĵ�ַ
//	//�ٶ�������ú�õ��ڶ���
//	//������������������ڶ��еĴ�С
//	printf("%d\n", sizeof(*a)); //16
//	//a�ǵ�һ�е�����������������ú�õ���һ�е�����
//	//�������������������һ�еĴ�С
//	printf("%d\n", sizeof(a[3]));//16
//	//a[3]������������������sizeof�ڲ���������������Ĵ�С
//	return 0;
//}
//�ܽ᣺sizeof�����ͣ����������жϴ�С


//#include  <stdio.h>
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p = (struct Test*)0x100000;//p�д���������ǽṹ��ָ�룬��0x100000��һ��ʮ�����Ƶ�int���͵����֣�����Ҫ����ǿ������ת��
////����p��ֵΪ0x100800�� ���±���ʽ��ֵ�ֱ�Ϊ����?
////�ṹ�����ʹ�Сȡ���������ݣ��ڲ����еļ��������Ǵ�С
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
////x86
//int main()
//{
//	printf("%p\n", p + 0x1);//0x100014  ָ���һ������һ���ṹ��ָ�룬Ҳ����20���ֽڣ�ʮ�����Ƶ�1Ҳ�У�ʮ���Ƶ�1Ҳ��
//	printf("%p\n", (unsigned long)p + 0x1);  //0x100001   ����ǿ������ת������0x1��Ӿ���һ����ͨ�ӷ�
//	printf("%p\n", (unsigned int*)p + 0x1);  //0x100004   ����һ���ֽڵĴ�С
//	return 0;
//}


//�ں�����strlenҲ����ʹ��
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


//ע�ⶺ�ű��ʽ
//#include<stdio.h>
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) }; //�������Ƕ��ű��ʽ
//	//�����Ҫ�ﵽ��һ�з�0 1���ڶ��з�2 3�������з�4 5��Ч����Ӧ��������д����
//	/*
//	int a[3][2] = { {0,1},{2,3},{4,5} };//ע�⣬���������˴�����
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
//	p = a;//�ؼ�����
//	printf("%p, %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}
//������ǽ�-4�ֱ���%p��%d����ʽ��ӡ


//#include <stdio.h>
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp + 3);//�Ӻ����ȼ��ϵͣ�����ǰ�ߵ�
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}


//----------------------------------------------------�ַ������ڴ溯��--------------------------------------------------------


//���ַ�������
//strlen
//���Ȳ������Ƶ��ַ�������
//strcpy
//strcat
//strcmp
//���������Ƶ��ַ�������
//strncpy
//strncat
//strncmp
//�ַ�������
//strstr
//strtok
//������Ϣ����
//strerror
//�ַ�����
//�ڴ��������
//memcpy
//memmove
//memset
//memcmp


//----------------strlen------------------

//ͷ�ļ���string.h
//�ַ�����'\0'��Ϊ������־��strlen���ص�����'\0'ǰ����ֵ��ַ������������ո񣬵�������'\0'��
//����ָ����ַ�������Ҫ��'\0'����
//��������ֵ����Ϊ�޷�������
//ģ��ʵ��strlen
//#include <stdio.h>
//#include <assert.h>
//unsigned int my_strlen(const char* p)
//{
//	assert(p);//pΪ��ʱ������
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

//ͷ�ļ���string.h
//��һ���ַ�����������ݿ�������һ��������
//strcpy(char* destination, char* sources);
//Դ�ַ���������'\0'����
//�ὫԴ�ַ����е�'\0'������Ŀ��ռ�
//Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ���
//Ŀ��ռ������Ա��޸�
// 
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[20] = { 0 };
//	//name = "zhangsan";//����д�Ǵ����
//	strcpy(arr, "zhangsan");
//	printf("%s\n", arr);
//	return 0;
//}


//ģ��ʵ��strcpy
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
//�ڽ�'\0'����һ������ʱ����ʽ���Ϊ�٣�Ҳ����0��


//---------------------------strsat--------------------------

//ͷ�ļ���string.h
//�ַ���׷��
//ֱ����Ŀ���������׷�����������������

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[20] = "hello";
//	strcat(arr1, " world");
//	printf("%s\n", arr1);
//	return 0;
//}

//ģ��ʵ��strcat
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

//strcmp -- string compare �ַ����Ƚϴ�С�����ǱȽϳ��ȣ����ǱȽ����ݵ�ASCII��ֵ�Ĵ�С
//int strcmp ( const char* str1, const char* str2 );
//���str1����str2������һ�������������
//���str1����str2������������
//���str1С��str2������һ��С���������
//26����ĸ��Խ����ASCII��ֵԽ��


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[20] = "ddhf"; 
//	char arr2[] = "ajbcks";
//	printf("%d\n", strcmp(arr1, arr2));
//	return 0;
//}


//ģ��ʵ��strcmp
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


//------------------strncpy��strncmp��strncat--------------------------

//����strcpy��strcmp��strcat�����ַ����������ƣ�����ʹ��ʱĿ��������ܻ������Ҳ����ʹ�������з���
//���ַ����������Ƶĺ���strncpy��strncat��strncmp���г������ƣ����ܲ��䣬������ϱ߸���ȫ

//strncpy��strncmp��strncat�����ԭ�棬������һ���޷������͵ı��������������ʾ����Ҫ�����ķ��ŵĸ���


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

//strstr�ǲ����ִ�
//char* strstr (const char* str1, const char* str2)

//str1�Ǳ����ҵĶ��󣬶�str2������Ҫ�ҵ��ַ������ܵ���˵��������str1����str2
//����ҵ��ˣ���ô��������Ҫ�ҵ��ַ��������ַ���ַ
//���û�ҵ�������NULL

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


//ģ��ʵ��strstr
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


//strtok�������и��ַ�����
//char* strtok (char* str, const char* sep)
//sep�����Ǹ��ַ����������������ָ������ַ�����
//��һ������ָ��һ���ַ�������������0�����߶����sep�ַ�����һ�����߶���ָ����ָ�ı�ǡ�
//strtok�����ҵ�str�е���һ����ǣ���������\0��β������һ��ָ�������ǵ�ָ�롣(ע��strtok������ı䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸ġ�)
//strtok�����ĵ�һ��������Ϊ NULL���������ҵ�str�е�һ����ǣ�strtok���������������ַ����е�λ�á�
//strtok�����ĵ�һ������Ϊ NULL����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ����ũ
//����ַ����в����ڸ���ı�ǣ��򷵻�NULLָ�롣


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char sep[] = ".@";
//	char email[] = "zhangpengwei@bitejiuyeke.com";
//	char cp[30] = { 0 };//"zhangpengwei@bitejiuyeke.com   
//	strcpy(cp,email);//����strtok���ƻ�ԭ�������ݣ��������ｫԭ���ݿ���һ��
//	char* ret = NULL;
//	for (ret = strtok(cp, sep); ret != NULL; ret = strtok(NULL, sep))//���forѭ������Ȥ��forѭ����һ����Ҫ��i���á�
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//----------------------------------------------strerror-----------------------------------------------------

//char* strerror (int errnum);
//strerror �������룬�����������ԭ��

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
//errno ��c�������õ�һ��ȫ�ֵĴ������ŵı��������������Լ����ã�������Ҫͷ�ļ� errno.h
//�������������ֱ��ʹ�� printf("%s\n", strerror(errno)); �Ϳ��ԡ�


//----------------------------------------------memcpy------------------------------------------------------

//void* memcpy (void* destination, const void* source, unsigned int num)

//memcpy�ڴ濽�������κ����Ͷ����ԣ�ʹ��������strncpy��������������������ܹ�Ҫ�����ֽ���

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[5] = { 0 };
//	memcpy(arr2, arr1, 16);//��ǰ�ĸ�����
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


//ģ��ʵ��memcpy
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
//memcpy�����ڿ�����������Ŀռ�
//���������ص�����������ʼ����һ��ռ䣩�����к�����memmove��ʵ�֡�
//�������°�������У�memcpyҲ�������ص��ռ�Ŀ���

//--------------------------------------------memmove------------------------------------------------------

//memmove���ڴ����ص��ռ�����ݿ���
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


//ģ��ʵ��memmove
//#include <stdio.h>
//#include <assert.h>
//void* my_memmove(void* des, const void* src, size_t num)
//{
//	void* ret = des;
//	assert(des && src);
//	if (des < src)
//	{
//		//��ǰ��󿽱����ߵ�ַΪǰ
//		while (num--)
//		{
//			*(char*)des = *(char*)src;
//			des = (char*)des + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//�Ӻ���ǰ����
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
//���ptr1����ptr2������һ�������������
//���ptr1����ptr2������������
//���ptr1С��ptr2������һ��С���������
//�Ƚ�ASCII��ֵ


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "ahj";
//	printf("%d\n", memcmp(arr1, arr2, 3));//-1
//	return 0;
//}


//ģ��ʵ��memcmp

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

//memset�ڴ�����
//void* memset(void* ptr, int value, size_t num);
//ptrָ��Ŀ������
//value�ǵȴ������õ�����
//num��Ҫ���õ�value���ֽ���
//memset��������������


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "hello world";
//	memset(arr1, 'a', 3);
//	printf("%s\n", arr1);  //aaalo world
//	return 0;
//}


//---------------------------------------------��ϰ��------------------------------------------------------------


//����һ�����֣���ÿ��λ�ϵ�������Ϊ1��ż����Ϊ0
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