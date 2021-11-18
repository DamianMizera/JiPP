#include "Node.h"
#include <math.h>
#include <iostream>

using namespace std;

Node::Node() { //konstruktor
    x = 0;
    y = 0;
}

Node::Node(double x, double y): x(x), y(y) {} //konstruktor

void Node::display() { //wyswietlanie wspolrzednych punktu
    cout << "x: " << x << "\ty: " << y << endl;
}

void Node::updateValue(double x, double y) { //zmiana wartosci wspolrzednych punktu
    this->x = x;
    this->y = y;
}

double pointsDistance(Node a, Node b) { //zaprzyjazniona funkcja do obliczania odleglosci dwoch punktow
    return sqrt(pow(b.x - a.x,2) + pow(b.y - a.y, 2));
}

//Dla zadania z trojkatem
std::ostream &operator<<(std::ostream &lhs, const Node &rhs) {
    return lhs << "(" << rhs.x << ", " << rhs.y << ")";
}