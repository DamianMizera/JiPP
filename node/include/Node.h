#ifndef NODE_H
#define NODE_H

#include <iostream>

class Node {
private:
    double x, y;

    friend double pointsDistance(Node a, Node b); //deklaracja przyjazni

public:
    Node();
    Node(double x, double y);

    void display(); //wyswietlanie wspolrzednych punktu
    void updateValue(double x, double y); //zmiana wartosci wspolrzednych punktu
    friend std::ostream &operator<<(std::ostream &lhs, const Node &rhs);
};

double pointsDistance(Node a, Node b); //funckja obliczajaca odleglosc miedzy punktami

#endif //NODE_H