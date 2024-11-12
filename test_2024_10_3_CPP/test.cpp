
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
////加法
//class add :public Base
//{
//public:
//	int cal()
//	{
//		return m_a + m_b;
//	}
//};
//
////减法
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
	//煮水
	virtual void boil() = 0;
	//冲泡
	virtual void brew() = 0;
	//倒入杯中
	virtual void pourincup() = 0;
	//加入辅料
	virtual void putsomething() = 0;
	//制作饮品
	void makedrink()
	{
		boil();
		brew();
		pourincup();
		putsomething();
	}
};

//制作咖啡
class Coffee :public AbsDrink
{
public:
	//煮水
	void boil()
	{
		cout << "煮农夫山泉" << endl;
	}
	//冲泡
	void brew()
	{
		cout << "冲泡咖啡" << endl;
	}
	//倒入杯中
	void pourincup()
	{
		cout << "倒入杯中" << endl;
	}
	//加入辅料
	void putsomething()
	{
		cout << "加入糖和牛奶" << endl;
	}
};

//制作茶叶
class Tea :public AbsDrink
{
public:
	//煮水
	void boil()
	{
		cout << "煮矿泉水" << endl;
	}
	//冲泡
	void brew()
	{
		cout << "冲泡茶叶" << endl;
	}
	//倒入杯中
	void pourincup()
	{
		cout << "倒入杯中" << endl;
	}
	//加入辅料
	void putsomething()
	{
		cout << "加入枸杞和人参" << endl;
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