

#include "circle.h"

void Point::setX(int x)
{
	m_X = x;
}
void Point::setY(int y)
{
	m_Y = y;
}
//���Բ��
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
//���Բ��
Point Circle::getCenter()
{
	return m_center;
}
//���ð뾶
void Circle::setR(int r)
{
	m_r = r;
}
//��ð뾶
int Circle::getR()
{
	return m_r;
}