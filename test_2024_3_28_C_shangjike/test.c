#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>


//4.5
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("������:>");
//	scanf("%d %d %d", &a, &b, &c);
//	printf("max = %d\n", (a > (b > c ? b : c) ? a : (b > c ? b : c)));
//	return 0;
//}


//4.6
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	char lev = 0;
//	if (input >= 90)
//	{
//		lev = 'A';
//	}
//	else if (input >= 80 && input < 90)
//	{
//		lev = 'B';
//	}
//	else if (input >= 70 && input < 80)
//	{
//		lev = 'C';
//	}
//	else if (input >= 60 && input < 70)
//	{
//		lev = 'D';
//	}
//	else
//	{
//		lev = 'E';
//	}
//	printf("%c\n", lev);
//	return 0;
//}


//4.7
//(1)
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = 0;
//	while (a)
//	{
//		a = a / 10;
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//(2)
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int arr[5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		arr[i] = a % 10;
//		a = a / 10;
//	}
//	for (i = 4; i >= 0; i--)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//----------------------------2024.4.11-----------------------------------


//int main()
//{
//	printf("202309100509������\n");
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int max = ((a > b ? a : b) > c ? (a > b ? a : b) : c);
//	printf("%d\n", max);
//	return 0;
//}


//int main()
//{
//	printf("202309100509������\n");
//	int arr[3] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 2; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 2; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	printf("202309100509������\n");
//	int input = 0;
//	scanf("%d", &input);
//	if (input > 100 || input < 0)
//	{
//		printf("�������ݴ�\n");
//		return 0;
//	}
//	char lev = 0;
//	if (input >= 90)
//	{
//		lev = 'A';
//	}
//	else if (input >= 80 && input <= 89)
//	{
//		lev = 'B';
//	}
//	else if (input >= 70 && input <= 79)
//	{
//		lev = 'C';
//	}
//	else if (input >= 60 && input <= 69)
//	{
//		lev = 'D';
//	}
//	else
//	{
//		lev = 'E';
//	}
//	printf("%c\n", lev);
//	return 0;
//}


//int main()
//{
//	printf("202309100509������\n");
//	int input = 0;
//	scanf("%d", &input);
//	if (input > 100 || input < 0)
//	{
//		printf("�������ݴ�\n");
//		return 0;
//	}
//	char lev = 0;
//	int tmp = input / 10;
//	switch (tmp)
//	{
//	case 9:
//		lev = 'A';
//		break;
//	case 8:
//		lev = 'B';
//		break;
//	case 7:
//		lev = 'C';
//		break;
//	case 6:
//		lev = 'D';
//		break;
//	default:
//		lev = 'E';
//		break;
//	}
//	printf("%c\n", lev);
//	return 0;
//}


//4.7
//(1)
//int main()
//{
//	printf("202309100509������\n");
//	int a = 0;
//	scanf("%d", &a);
//	int count = 0;
//	while (a)
//	{
//		a = a / 10;
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//(2)
//int main()
//{
//	printf("202309100509������\n");
//	int a = 0;
//	scanf("%d", &a);
//	int tmp = a;
//	int count = 0;
//	while (a)
//	{
//		a = a / 10;
//		count++;
//	}
//	a = tmp;
//	int arr[5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		arr[i] = a % 10;
//		a = a / 10;
//	}
//	for (i = 5 - count; i >= 0; i--)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


//(3)
//int main()
//{
//	printf("202309100509������\n");
//	int a = 0;
//	scanf("%d", &a);
//	int tmp = a;
//	int count = 0;
//	while (a)
//	{
//		a = a / 10;
//		count++;
//	}
//	a = tmp;
//	int i = 0;
//	for (i = 0; i < count; i++)
//	{
//		printf("%d",a % 10);
//		a = a / 10;
//	}
//	return 0;
//}


//��100~200��ȫ������
//int main()
//{ 
//	printf("������ 202309100509\n");
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
//int main()
//{
//	char input = 0;
//	int num_Eng = 0;
//	int num_ = 0;
//	int num_Math = 0;
//	int num_other = 0;
//	do
//	{
//		scanf("%c", &input);
//		if (input >= 48 && input <= 57)
//		{
//			num_Math++;
//		}
//		else if ((input >= 65 && input <= 90) || (input >= 97 && input <= 122))
//		{
//			num_Eng++;
//		}
//		else if (input == ' ')
//		{
//			num_++;
//		}
//		else
//		{
//			num_other++;
//		}
//	} while (input != '\n');
//	printf("num_Eng = %d\nnum_ = %d\nnum_Math = %d\nnum_other = %d\n", num_Eng, num_, num_Math, num_other - 1);
//	return 0;
//}


//���ͼ��
//int main()
//{
//	int i = 0;
//	int line = 0;
//	scanf("%d", &line);
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
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


//��100~499֮�������ˮ�ɻ���������λ���ֵ�������ǡ�õ��ڸ������������
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 499; i++)
//	{
//		int tmp = i;
//		double arr[3] = { 0 };
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			arr[j] = (double)(i % 10);
//			i = i / 10;
//		}
//		if (pow(arr[0], 3.0) + pow(arr[1], 3.0) + pow(arr[2], 3.0) == i)
//		{
//			printf("%d ", i);
//		}
//		i = tmp;
//	}
//	return 0;
//}
//????????????????????????????????????????


//\x + ���� ��ʾʮ����������
//\0 + ���� ��ʾ�˽�������
//'\n'����һ���ַ�
//int main()
//{
//	int x = 17;
//	printf("%d\n", x++ * 1 / 6);
//	return 0;
//}


//int main()
//{
//	printf("202309100509 ������\n");
//	int class1[3] = { 0 };//���ſ�Ŀ
//	int class2[3] = { 0 };
//	int class3[3] = { 0 };
//	int class4[3] = { 0 };
//	int i = 0;
//	printf("�������һ�ſ�Ŀ�ĳɼ�:>\n");
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &class1[i]);
//	}
//	printf("������ڶ��ſ�Ŀ�ĳɼ�:>\n");
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &class2[i]);
//	}
//	printf("����������ſ�Ŀ�ĳɼ�:>\n");
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &class3[i]);
//	}
//	printf("����������ſ�Ŀ�ĳɼ�:>\n");
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &class4[i]);
//	}
//	printf("��һ�ſ�Ŀ��ƽ���ɼ���%d\n", (class1[0] + class1[1] + class1[2]) / 3);
//	printf("�ڶ��ſ�Ŀ��ƽ���ɼ���%d\n", (class2[0] + class2[1] + class2[2]) / 3);
//	printf("�����ſ�Ŀ��ƽ���ɼ���%d\n", (class3[0] + class3[1] + class3[2]) / 3);
//	printf("�����ſ�Ŀ��ƽ���ɼ���%d\n", (class4[0] + class4[1] + class4[2]) / 3);
//	return 0;
//}


//int main()
//{
//	printf("202309100509������\n");
//	int arr[5] = { 1,3,5,8,9 };
//	int i = 0;
//	int n = 5;
//	int tmp = 0;
//	for (i = 0; i < n / 2; i++)
//	{
//		tmp = arr[i];
//		arr[i] = arr[n - i - 1];
//		arr[n - i - 1] = tmp;
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	printf("202309100509������\n");
//	char input = 0;
//	int num_Eng_Big = 0;
//	int num_Eng_Min = 0;
//	int num_ = 0;
//	int num_Math = 0;
//	int num_other = 0;
//	do
//	{
//		scanf("%c", &input);
//		if (input >= 48 && input <= 57)
//		{
//			num_Math++;
//		}
//		else if (input >= 65 && input <= 90)
//		{
//			num_Eng_Big++;
//		}
//		else if (input >= 97 && input <= 122)
//		{
//			num_Eng_Min++;
//		}
//		else if (input == ' ')
//		{
//			num_++;
//		}
//		else
//		{
//			num_other++;
//		}
//	} while (input != '\n');
//	printf("num_Eng_Big = %d\nnum_Eng_Min = %d\nnum_ = %d\nnum_Math = %d\nnum_other = %d\n", num_Eng_Big, num_Eng_Min, num_, num_Math, num_other - 1);
//	return 0;
//	return 0;
//}


//int main()
//{
//	printf("202309100509������\n");
//	char input = 0;
//	do
//	{
//		scanf("%c", &input);
//		if (input >= 'A' && input <= 'Z')
//		{
//			printf("%c", 90 - (input - 'A'));
//		}
//		else if (input >= 'a' && input <= 'z')
//		{
//			printf("%c", 122 - (input - 'a'));
//		}
//		else
//		{
//			printf("%c", input);
//		}
//	} while (input != '\0');
//	return 0;
//}


//int main()
//{
//	printf("202309100509������\n");
//	printf("%d\n", -5 % 2);
//	return 0;
//}



//int main()
//{
//	char a[10] = "abcd";
//	printf("%d,%d\n", strlen(a), sizeof(a));
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[4] = { 0 };
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int a = arr[0] > arr[1] ? arr[0] : arr[1];
//	int b = arr[2] > arr[3] ? arr[2] : arr[3];
//	printf("%d\n", a > b ? a : b);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	return 0;
//}


//void Sta()
//{
//	char input = 0;
//	int num_Eng_Big = 0;
//	int num_Eng_Min = 0;
//	int num_ = 0;
//	int num_Math = 0;
//	int num_other = 0;
//	do
//	{
//		scanf("%c", &input);
//		if (input >= 48 && input <= 57)
//		{
//			num_Math++;
//		}
//		else if (input >= 65 && input <= 90)
//		{
//			num_Eng_Big++;
//		}
//		else if (input >= 97 && input <= 122)
//		{
//			num_Eng_Min++;
//		}
//		else if (input == ' ')
//		{
//			num_++;
//		}
//		else
//		{
//			num_other++;
//		}
//	} while (input != '\n');
//	printf("num_Eng_Big = %d\nnum_Eng_Min = %d\nnum_ = %d\nnum_Math = %d\nnum_other = %d\n", num_Eng_Big, num_Eng_Min, num_, num_Math, num_other - 1);
//}
//int main()
//{
//	printf("202309100509������\n");
//	Sta();
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 9; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 9 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int* twoSum(int* nums, int numsSize, int target, int* returnSize)//nums���ṩ���ݵ����飬numsSize������Ԫ�صĸ�����target��Ŀ�����ӣ�returnSize�Ƿ��������Ԫ�ظ�����Ӧ���ǣ�������ֱ�Ӹ�ֵ�ɶ��Ϳ��ԣ���󷵻�ֵ��һ��ָ�룬ָ����ָʾ�Ŀռ���malloc���١�
//{
//    int i = 0;
//    int j = 0;
//    int* result = NULL;
//    *returnSize = 2;
//    for (i = 0; i < numsSize; i++)
//    {
//        for (j = 0; j < numsSize; j++)
//        {
//            if (j == i)
//            {
//                continue;
//            }
//            if (nums[j] + nums[i] == target)
//            {
//                result = (int*)malloc(sizeof(int) * 2);
//                result[0] = i;
//                result[1] = j;
//                return result;
//            }
//        }
//    }
//    return result;
//}
//int main()
//{
//    int nums[4] = { 2,7,11,15 };
//    int target = 9;
//    int arr[4] = { 0 };
//    twoSum(nums, sizeof(nums), target, arr);
//    return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//bool isPalindrome(int x)
//{
//    if (x < 0)
//    {
//        return false;
//    }
//    else if (x >= 0 && x <= 9)
//    {
//        return true;
//    }
//    int arr1[10] = { 0 };
//    int i = 0;
//    while (x)
//    {
//        arr1[i] = x % 10;
//        i++;
//        x = x / 10;
//    }
//    int tmp = i;
//    int arr2[10] = { 0 };
//    for (i = 0; i < tmp; i++)
//    {
//        arr2[i] = arr1[tmp - i - 1];
//    }
//    for (i = 0; i < tmp; i++)
//    {
//        if (arr1[i] != arr2[i])
//        {
//            return false;
//        }
//        else
//        {
//            return true;
//        }
//    }
//}
//int main()
//{
//    int x = 0;
//    scanf("%d", &x);
//    printf("%d\n", isPalindrome(x));
//    return 0;
//}

//char* toLowerCase(char* s) 
//{
//    int len = strlen(s);
//    int i = 0;
//    for (i = 0; i < len; i++)
//    {
//        if (s[i] >= 'A' && s[i] <= 'Z')
//        {
//            s[i] = s[i] + 'a' - 'A';
//        }
//    }
//    return s;
//}
//int main()
//{
//    toLowerCase("LOVELY");
//    return 0;
//}

//int subtractProductAndSum(int n) 
//{
//    int ji = 1;
//    while (n)
//    {
//        ji = ji * (n % 10);
//        n = n / 10;
//    }
//    int he = 0;
//    while (n)
//    {
//        he = he + (n % 10);
//        n = n / 10;
//    }
//    return ji - he;
//}


//int main()
//{
//	char ch1 = 'abc';
//	char ch2 = "12\n12";
//	char ch3 = "0";
//	char ch4 = " ";
//	return 0;
//}


//int main()
//{
//	int n[3] = { 0 };
//	int t = 0; 
//	int j = 0; 
//	int k = 0;
//	for (t = 0; t < 3; t++)
//	{
//		n[t] = 0;
//	}
//	k = 2;
//	for (t = 0; t < k; t++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			n[j] = n[t] + 1;
//		}
//	}
//	printf("%d\n", n[1]);
//	return 0;
//}


//������̨��
//int num(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else if (n == 2)
//	{
//		return 2;
//	}
//	else
//	{
//		return num(n - 1) + num(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//����̨����
//	printf("%d\n", num(n));
//	return 0;
//}


//int main()
//{
//	int num = 28;
//	int n = 2;
//	int i = 0;
//	int a[10] = { 0 };
//	for (i = 0; num != 0; i--)
//	{
//		a[i] = num % n;
//		num /= n;
//	}
//	for (i--; i >= 0; i--)
//	{
//		printf("%d", a[i]);
//	}
//	return 0;
//}


//int main()
//{
//	char ch1 = 765;
//  char ch2 = '\765';
//	char ch4 = 'xfff';
//	//char ch3='\';
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for(;)
//	return 0;
//}

typedef struct Student
{
	char name;
	int score;
}Stu;
int main()
{
	//Stu arr[5] = { {'A',95},{'B',74},{'C',68},{'D',91},{'E',87} };
	int i = 0;
	int j = 0;
	Stu arr[5] = { 0 };
	for (i = 0; i < 5; i++)
	{
		scanf("%c", arr[i].name);
		scanf("%d", arr[i].score);
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4 - i; j++)
		{
			if (arr[j].score < arr[j + 1].score)
			{
				Stu tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%c %d\n", arr[i].name, arr[i].score);
	}
	return 0;
}
//strcmp  strcat  strstr  