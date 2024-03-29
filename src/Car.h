#ifndef CAR_H
#define CAR_H

// Qt
#include <QObject>
#include <QtGlobal>

// Eigen
#include <Eigen>

using Eigen::Vector3d;

class Car : public QObject
{

public:
    explicit Car(QObject *parent = 0);

    qreal X() const { return m_x; }
    qreal Y() const { return m_y; }
    qreal theta() const { return m_theta; }
    qreal velocity() const { return m_velocity; }

    void setX(qreal x);
    void setY(qreal y);
    void setTheta(qreal teta);
    void setVelocity(qreal velocity);

    void forward(qreal distance) {
        setX(X() + distance * cos( theta() * M_PI / 180.0 ));
        setY(Y() + distance * sin( theta() * M_PI / 180.0 ));
    }
    void turn(qreal p_theta) { setTheta(theta() + p_theta); }

    static const size_t nbRays;

private:

    qreal m_x;
    qreal m_y;
    qreal m_theta;
    qreal m_velocity;

};

#endif // CAR_H
