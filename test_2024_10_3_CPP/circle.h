#pragma once

#include <iostream>
using namespace std;

class Point
{
public:
	//����Բ��
	void setX(int x);
	void setY(int y);
	//���Բ��
	int getX();
	int getY();
private:
	int m_X;
	int m_Y;
};

class Circle
{
public:
	//����Բ��
	void setCenter(Point center);
	//���Բ��
	Point getCenter();
	//���ð뾶
	void setR(int r);
	//��ð뾶
	int getR();
private:
	int m_r;
	Point m_center;
};