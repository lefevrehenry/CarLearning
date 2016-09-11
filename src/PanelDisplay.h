#ifndef PANELDISPLAY_H
#define PANELDISPLAY_H

// Qt
#include <QWidget>

using namespace std;

class QLabel;
class QScrollArea;
class QPixmap;
class Simulation;

class PanelDisplay : public QWidget
{
    Q_OBJECT

public:
    explicit PanelDisplay(Simulation *simulation, QWidget *parent = 0);
    ~PanelDisplay();

    virtual QSize sizeHint() const;
    virtual void paintEvent(QPaintEvent*);
    virtual void keyPressEvent(QKeyEvent*);
    virtual void keyReleaseEvent(QKeyEvent*);

    void displayRays(QPainter& p_painter, const vector<vector<QPoint> >& p_rays);

private:
    QLabel *m_label;
    QScrollArea *m_scrollArea;
    QPixmap *m_pixmap;

    Simulation *m_simulation;

signals:
    void keyPressed(int, bool);

};

#endif // PANELDISPLAY_H
