
#include <iostream>
#include <math.h>
#include "circle.h"
using namespace std;

//
//class Base
//{
//public:
//	virtual int cal() = 0;
//	int m_a = 0;
//	int m_b = 0;
//};
//
////�ӷ�
//class add :public Base
//{
//public:
//	int cal()
//	{
//		return m_a + m_b;
//	}
//};
//
////����
//class sub :public Base
//{
//public:
//	int cal()
//	{
//		return m_a - m_b;
//	}
//};
//
//
//void test()
//{
//	Base* b = new add;
//	b->m_a = 10;
//	b->m_b = 20;
//	cout << b->cal() << endl;
//}
//
//int main()
//{
//	test();
//	return 0;
//}


class AbsDrink
{
public:
	//��ˮ
	virtual void boil() = 0;
	//����
	virtual void brew() = 0;
	//���뱭��
	virtual void pourincup() = 0;
	//���븨��
	virtual void putsomething() = 0;
	//������Ʒ
	void makedrink()
	{
		boil();
		brew();
		pourincup();
		putsomething();
	}
};

//��������
class Coffee :public AbsDrink
{
public:
	//��ˮ
	void boil()
	{
		cout << "��ũ��ɽȪ" << endl;
	}
	//����
	void brew()
	{
		cout << "���ݿ���" << endl;
	}
	//���뱭��
	void pourincup()
	{
		cout << "���뱭��" << endl;
	}
	//���븨��
	void putsomething()
	{
		cout << "�����Ǻ�ţ��" << endl;
	}
};

//������Ҷ
class Tea :public AbsDrink
{
public:
	//��ˮ
	void boil()
	{
		cout << "���Ȫˮ" << endl;
	}
	//����
	void brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}
	//���뱭��
	void pourincup()
	{
		cout << "���뱭��" << endl;
	}
	//���븨��
	void putsomething()
	{
		cout << "������轺��˲�" << endl;
	}
};

void dowork(AbsDrink& abs)
{
	abs.makedrink();
}

void test()
{
	Coffee cof;
	dowork(cof);
}

int main()
{
	test();
	return 0;
}