#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <assert.h>

//�������룬һ��������2~20������ʾֱ��������ֱ�Ǳߵĳ��ȣ�����*����������Ҳ��ʾ���������
//ÿ����*��������һ���ո�
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


//Kiki�ǳ�ϲ������, ��һ�ҵ�����������һ���·�, ���˽⵽, ��������ǡ�˫11��
//(11��11��)������·���7��, ��˫12��(12��12��)������·���8��, �������
//��ȯ���Զ����50Ԫ(�Ż�ȯֻ����˫11��˫12ʹ��), ��KiKi����������Ǯ����
//
//���ݷ�Χ : �·��۸�����1<val��100000
//
//�������� :
//
//һ��, �ĸ�����, ��һ������ʾС�����е��·��۸�, �ڶ��͵����������ֱ��ʾ
//������·ݡ���������ڡ����ĸ�������ʾ�Ƿ����Ż�ȯ(���Ż�ȯ��1��ʾ, ����
//	��ȯ��0��ʾ)��ע : �������ڱ�ֻ֤�С�˫11���͡�˫12����
//
//	������� :
//һ��, С��ʵ�ʻ���Ǯ��(������λС��)��(��ʾ : ��Ҫָ���̼ҵ�����Ǯ)
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


//5λ�˶�Ա�μ���10��̨��ˮ����,����������Ԥ��������:
//Aѡ��˵:B�ڶ�, �ҵ���;
//Bѡ��˵:�ҵڶ�, E����;
//Cѡ��˵:�ҵ�һ, D�ڶ�;
//Dѡ��˵:C���, �ҵ���;
//Eѡ��˵:�ҵ���, A��һ;
//����������, ÿλѡ�ֶ�˵����һ��, ����ȷ�����������Ρ�
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
//						if (((b == 2) + (a == 3) == 1) &&//���ʽΪ�棬����ֵ��1�����ʽΪ�٣�����ֵ��0��
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


//�ձ�ĳ�ط�����һ��ıɱ��, ����ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ��� :
//A˵:�����ҡ�
//B˵ : ��C��
//C˵ : ��D��
//D˵ : C�ں�˵
//��֪3����˵���滰, 1����˵���Ǽٻ���
//����һ���Ҿ�֪�������¾�ɽ�ϳ�Ҳ
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


//��ӡһ��ʮ��ʮ�е��������
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


//����һ������ָ�룬ָ��ĺ���������int�ββ��ҷ���һ������ָ�룬
//���ص�ָ��ָ��һ����һ��int�β��ҷ���int�ĺ�����
//int (*(*F)(int, int))(int)


//�ַ�������
//ʵ��һ������, ���������ַ����е�k���ַ���
//����:
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
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


//���Ͼ���(ÿһ�е�Ԫ�ض������������С�ÿһ�е�Ԫ��Ҳ�����������С�ÿһ�еĵ�һ��Ԫ�ش�����һ�е����һ��Ԫ�ء�)
//��һ�����־���,�����ÿ�д������ǵ�����,������ϵ����ǵ�����,
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
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
//	int* ret = find_num(arr, 3, 3, k);//�ҵ��˷���1��û�ҵ�����0��
//	printf("%x\n", ret);
//	return 0;
//}


//дһ������, �ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���� : ����s1 = AABCD��s2 = BCDAA, ����1
//����s1 = abcd��s2 = ACBD, ����0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
#include <stdio.h>
#include <string.h>
//int is_retotion(char arr1[], char arr2[])//��һ
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
//int is_retotion(char arr1[], char arr2[])//����
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


//����������һ������, ���ڽ�������ת��(����������л����õ����¾����Ϊת�þ���)��
//��һ�а�����������n��m, ��ʾһ���������n��m��, �ÿո�ָ���(1��n��10, 1sm��10)
//��2��n + 1��, ÿ������m������(���� - 231 - 231 - 1), �ÿո�ָ�, ������n* m����, ��ʾ��һ�������е�Ԫ�ء�
//���m��n��, Ϊ����ת�ú�Ľ����ÿ����������һ���ո�
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


//KiKi��֪��һ��n�׷����Ƿ�Ϊ�����Ǿ���, ���������ж��������Ǿ������Խ�
//�����µ�Ԫ�ض�Ϊ0�ľ���, ���Խ���Ϊ�Ӿ�������Ͻ������½ǵ����ߡ�
//��һ�а���һ������n, ��ʾһ���������n��n��, �ÿո�ָ���(1��n��10)
//��2��n + 1��, ÿ������n������(��Χ - 2^31 ~ 2^31 - 1), �ÿո�ָ�, ������n*n������
//һ��, ������뷽���������Ǿ������"YES��������,���������NO�������С�
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


//����һ����������, �ж��Ƿ�����������, ����, ָ�����е�������С����������ߴӴ�С����(��ͬԪ��Ҳ��Ϊ����)��
//���ݷ�Χ������3��n��50�������е�ֵ������1��val��100
//��һ������һ������N(3��N��50)��
//�ڶ�������N������, �ÿո�ָ�N��������
//���Ϊһ��, ��������������sorted, �������unsorted��
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
//	if (arr[0] < arr[n - 1])//����
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
//	else if (arr[0] > arr[n - 1])//����
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
//	else//��ͬ
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


//-------------------------------------------------�ṹ��-----------------------------------------------------------

//�ṹ���ڴ����


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
//	printf("%d\n", sizeof(struct S1));//��ӡ�����12
//	printf("%d\n", sizeof(struct S2));//��ӡ�����8
//	return 0;
//}
//��Ա������ͬ�����ǽ����ǻ���һ��˳��͵��½����һ��
//��Ҫ���������Ľṹ���С������Ҫ�˽��ڴ�������
//1.��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ����
//2.������Ա����Ҫ���뵽ĳ������(������)���������ĵ�ַ����
//������ = ������Ĭ�ϵ�һ����������ó�Ա��С�Ľ�Сֵ��(VS��Ĭ�ϵ�ֵΪ8)
//3.�ṹ���ܴ�СΪ��������(ÿ����Ա��������һ��������)����������
//4.���Ƕ���˽ṹ������, Ƕ�׵Ľṹ����뵽�Լ���������������������, �ṹ�����
//���С����������������(��Ƕ�׽ṹ��Ķ�����)����������

//offsetof(type, member)
//����һ���꣬���᷵�ؽṹ���Ա�ڽṹ���е�ƫ����
//ͷ�ļ���stddef.h


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
//	printf("%d\n", sizeof(struct S1));//��ӡ�����12
//	printf("%d\n", sizeof(struct S2));//��ӡ�����8
//	return 0;
//}
//�ṹ���ڴ������һ���ÿռ任ʱ�������
//��������Ƴ���ʱ��Ҫ������Ҫ������룬��Ҫ��ʡ�ռ�


//ʹ��#pragma pack()�����޸�Ĭ�϶�����
//#pragma pack(4)//��Ĭ�϶������޸�Ϊ4
//#pragma pack()//��Ĭ�϶������ָ�ΪĬ��ֵ


//�ṹ�崫��
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
//	print1(s);//��ֵ���ã�������ʱ�ռ䣬�Ƚ��˷�
//	print2(&s);//��ַ���ã�����ʡ�ռ䣬�Ƽ�
//	return 0;
//}


//--------------------------------------------λ��-------------------------------------------------

//λ����ͨ���ṹ��ʵ�ֵ�
//λ�ε�������ṹ�������Ƶģ�����������ͬ��
//1.λ�εĳ�Ա������int��unsigned int��signed int������Ȼ˵���룬��ʵ����ֻҪ�����ͼ��嶼���ԣ�
//2.λ�εĳ�Ա��������һ��ð�ź�һ�����֡�
//���磺
//#include <stdio.h>
//struct A
//{
//	int _a : 2;//��_a������������λ
//	int _b : 5;//��_b�����������λ
//	int c : 10;//��c����ʮ������λ
//	int d : 30;//��d������ʮ������λ
//};
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}
//�����÷���һ�ַǳ��׾ݵ��÷�
//λ���漰�ܶ಻ȷ�����أ�λ���ǲ���ƽ̨�ģ�ע�����ֲ����Ӧ�ñ���ʹ��λ�Ρ�
//һ��ʹ��λ�ζ���ͬһ������


//------------------------------------------------------ö��--------------------------------------------------------------

//ö�ٵ�ʹ����ṹ������
//ö�ٳ���Ҳ���±�ֵ��������һ�������㿪ʼ��

//#include <stdio.h>
//enum Day//����
//{
//	Mon,//ö�ٳ���
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//enum Day2//����
//{
//	Mon,//ö�ٳ���
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


//ö�ٵ��ŵ�:
//
//1.���Ӵ���Ŀɶ��ԺͿ�ά����
//2.��#define����ı�ʶ���Ƚ�ö�������ͼ��, �����Ͻ���
//3.��ֹ��������Ⱦ(��װ)
//4.���ڵ���
//5.ʹ�÷���, һ�ο��Զ���������


//--------------------------------������-----------------------------------------

//����Ҳ��һ��������Զ�������
//�������Ͷ���ı���Ҳ����һϵ�еĳ�Ա, ��������Щ��Ա����ͬһ��ռ�(��������Ҳ�й�����)


//#include <stdio.h>
//union Un
//{
//	int a;//4
//	char c;//1
//};
////����
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


//�����������ж�ϵͳ��С��
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
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}


//�������С�ļ���
//������Ĵ�С����������Ա�Ĵ�С
//������Ա��С����������������������ʱ�򣬾�Ҫ���뵽����������������

//#include <stdio.h>
//typedef union un
//{
//	char arr[5];
//	int i;
//}un;
//int main()
//{
//	printf("%d\n", sizeof(un));//8   ��Ȼchar�����飬���Ǽ���ʱ�ǰ���char�Ĵ�С����ģ�Ҳ����˵char����Ķ�������1����int�Ķ�������4������������4���ڴ������ܴ�СΪ8��
//	return 0;
//}

//------------------------------------------��̬�ڴ����-------------------------------------------------


//---------------malloc��free----------------

//void malloc(size_t size);
//ͷ�ļ� stdlib.h
//malloc�������ٿռ�
//������ٿռ�ʧ�ܻ᷵�ؿ�ָ��(NULL)��


//int main()
//{
//	int arr[10] = { 0 };
//	//��̬�ڴ濪��
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		assert(p);
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + i));
//	}
//	//û��free
//	//������˵�ڴ�ռ�Ͳ�������
//	//�������˳���ʱ��,ϵͳ���Զ������ڴ�ռ��
//	return 0;
//}


//��ȷ��д��
//int main()
//{
//	int arr[10] = { 0 };
//	//��̬�ڴ濪��
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		assert(p);
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + i));
//	}
//	free(p);//������ͷſռ䣬���ռ�黹ϵͳ��
//	p = NULL;//�ͷſռ��p���Ұָ�룬Ϊ��ֹ��bug����p�ó�Ұָ�롣
//	return 0;
//}


//free�ͷŵ��ڴ�����Ƕ�̬�ڴ濪�ٵģ�������δ������Ϊ��

//---------------------calloc-----------------------

//void* calloc(size_t num, size_t size);
//����num��size��С���ڴ�
//����֮��Ĭ�ϳ�ʼ��Ϊ0

//---------------------realloc----------------------

//void* realloc(void* ptr, size_t size);
//�����ڴ��С
//ptr��Ҫ�������ڴ��ַ
//size�ǵ���֮���µĴ�С
//����ֵΪ����֮����ڴ���ʼλ��
//�����������ԭ�ڴ�ռ��С�Ļ����ϣ����Ὣԭ���ڴ��е������ƶ����µĿռ䡣


//-----------------------------����-----------------------------------
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test()
//{
//	char* str = NULL;
//	GetMemory(str);//str��ֵû�иı䣬Ҫ��ı�str�洢�ĵ�ַ����Ҫ��&str��ʹ�ö���ָ�롣
//	strcpy(str, "hello world");//��ָ������û����
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


//ÿ�������������������n��m��
//����ÿ�����룬���һ����������Ϊn��m�����Լ������С������֮�͡�
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
//	while (1)//��С������
//	{
//		if (tmp1 % max == 0 && tmp1 % min == 0)
//		{
//			res1 = tmp1;
//			break;
//		}
//		tmp1++;
//	}
//	tmp1 = max;
//	while (1)//���Լ��
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


//��������:
//��������, һ������(3~20), ��ʾ���������, Ҳ��ʾ��������αߵġ�* ����������
//������� :
//���ÿ������, ����á�* ����ɵġ����ġ�������, ÿ����* ��������һ���ո�
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1; i <= n; i++)//ÿһ��
//	{
//		if (i == 1 || i == n)//��һ�������һ��
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)//����������ÿһ��
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		if (i >= 2 && i <= n - 1)//�м����
//		{
//			int j = 0;
//			for (j = 1; j <= n; j++)//����������ÿһ��
//			{
//				if (j == 1 || j == n)//��һ�������һ��
//				{
//					printf("* ");
//				}
//				else//�м����
//				{
//					printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//------------------------------��������--------------------------------------

//�ṹ���е����һ��Ԫ����δ֪��С�����������������
//�ṹ���е����������Աǰ�����������һ����Ա
//sizeof���ؽṹ���С��������������Ĵ�С

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
//	Stu* ptr = (Stu*)realloc(p, 100);//��������������ڴ�����malloc�������ٵģ����Կ���ͨ��realloc���������ݡ�
//	if (ptr != NULL)
//	{
//		p = ptr;
//		ptr = NULL;
//	}
//	return 0;
//}


//-------------------------------------���ļ��Ĳ���------------------------------------------------


//�ļ���Ϊ���֣�
//�����ļ���Դ�����ļ�����׺Ϊ.c����Ŀ���ļ���windows�������׺Ϊ.obj������ִ���ļ���windows�������׺Ϊ.exe��
//�����ļ����ļ������ݲ�һ���ǳ��򣬶��ǳ�������ʱ��д�����ݣ��������������Ҫ���ж�ȡ���ݵ��ļ�������������ݵ��ļ���

//fopen���ļ�
//fclose�ر��ļ�

//FILE* fopen (const char* filename, const char* mode);  ��һ�����ļ������ڶ����Ǵ򿪷�ʽ��������д��

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
//	fwrite(&s, sizeof(struct S), 1, pf);//�Զ����Ƶķ�ʽд������
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
//	fread(&s, sizeof(struct S), 1, pf);//�Զ����Ƶķ�ʽд������
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
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.score);//���ṹ������ת��Ϊ�ַ������Ͳ��ŵ�buf�С�"zhangsan 25 50.500000";
//	printf("%s\n", buf);
//	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.score));//���ַ���������������͵����ݵ�tmp�С�
//	printf("%s %d %f", tmp.arr, tmp.age, tmp.score);
//	return 0;
//}


