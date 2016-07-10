#ifndef PANELDISPLAY_H
#define PANELDISPLAY_H

// Qt
#include <QWidget>

// c++
#include <vector>

using namespace std;

class Car;
class Circuit;
class QLabel;
class QScrollArea;
class QPixmap;

class PanelDisplay : public QWidget
{
    Q_OBJECT

public:
    explicit PanelDisplay(QWidget *parent = 0);
    ~PanelDisplay();

    void addCar(const Car *car);
    void setCircuit(const Circuit *circuit);

    virtual QSize sizeHint() const;
    virtual void paintEvent(QPaintEvent*);
    virtual void keyPressEvent(QKeyEvent*);

    void displayRays(QPainter& p_painter, const vector<vector<QPointF> >& p_rays, const vector<qreal>& p_lengths);

    void displayOneRay(QPainter& p_painter, const vector<QPointF>& p_ray, qreal p_lengths);

private:
    QLabel *label;
    QScrollArea *scrollArea;
    QPixmap *m_pixmap;

    std::vector<Car*> *m_listCar;
    const Circuit *m_circuit;

};

#endif // PANELDISPLAY_H
