#include "Car.h"

Car::Car()
{
    this->m_x = 0;
    this->m_y = 0;
    this->m_teta = 0;
    this->m_velocity = 0;
}

void Car::setX(qreal x)
{
    this->m_x = x;
}

void Car::setY(qreal y)
{
    this->m_y = y;
}

void Car::setTeta(qreal teta)
{
    this->m_teta = teta;
}

void Car::setVelocity(qreal velocity)
{
    this->m_velocity = velocity;
}