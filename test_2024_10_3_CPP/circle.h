#pragma once

#include <iostream>
using namespace std;

class Point
{
public:
	//设置圆心
	void setX(int x);
	void setY(int y);
	//获得圆心
	int getX();
	int getY();
private:
	int m_X;
	int m_Y;
};

class Circle
{
public:
	//设置圆心
	void setCenter(Point center);
	//获得圆心
	Point getCenter();
	//设置半径
	void setR(int r);
	//获得半径
	int getR();
private:
	int m_r;
	Point m_center;
};