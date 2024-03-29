#ifndef SIMULATION_H
#define SIMULATION_H

// Qt
#include <QObject>
#include <QTimer>

//std
#include <iostream>

// carLearning
#include "Car.h"
#include "Circuit.h"
#include "NeuralNetwork.h"

using namespace std;

class Simulation : public QObject
{
    Q_OBJECT

public:
    explicit Simulation(qreal L, QObject *parent = 0);
    ~Simulation();

    const Car* getCar() const { return &m_car; }
    const Circuit* getCircuit() const { return &m_circuit; }

private:
    Car m_car;
    Circuit m_circuit;
    NeuralNetwork *m_neuralNetwork;

    QTimer m_timer;

signals:

public slots:
    void timeUpdate();

};

#endif // SIMULATION_H
