

#include "circle.h"

void Point::setX(int x)
{
	m_X = x;
}
void Point::setY(int y)
{
	m_Y = y;
}
//获得圆心
int Point::getX()
{
	return m_X;
}
int Point::getY()
{
	return m_Y;
}
void Circle::setCenter(Point center)
{
	m_center = center;
}
//获得圆心
Point Circle::getCenter()
{
	return m_center;
}
//设置半径
void Circle::setR(int r)
{
	m_r = r;
}
//获得半径
int Circle::getR()
{
	return m_r;
}