//
// Created by Filip on 05.12.2021.
//

#include <iostream>
#include <vector>
#include "Stop.h"
#include "Line.h"

using namespace std;

int main() {
    vector<Stop*> stops;
    stops.reserve(10);
    stops.emplace_back(new Stop(1, "Politechnika", 50.1, 50.2));
    stops.emplace_back(new Stop(2, "Nowy Kleparz", 50.2, 50.2));
    stops.emplace_back(new Stop(3, "Plac Inwalidów", 50.2, 50.2));
    stops.emplace_back(new Stop(4, "Urzędnicza", 50.2, 50.2));
    stops.emplace_back(new Stop(5, "Biprostal", 50.2, 50.2));
    stops.emplace_back(new Stop(6, "Uniwersytet Pedagogiczny", 50.2, 50.2));

    Line l1("P", "Podchorążych");
    l1.addStop(stops[0]);
    l1.addStop(stops[1]);
    l1.addStop(stops[2]);
    l1.addStop(stops[3]);
    l1.addStop(stops[4]);
    l1.addStop(stops[5]);

    l1.print();

    cout << "---------------------------------------" << endl;
    stops.emplace_back(new Stop(7, "Bratysławska", 50.2, 50.2));
    stops.emplace_back(new Stop(8, "Teatr Bagatela", 50.2, 50.2));
    stops.emplace_back(new Stop(9, "Stary Kleparz", 50.2, 50.2));
    stops.emplace_back(new Stop(10, "Teatr Słowackiego", 50.2, 50.2));
    stops.emplace_back(new Stop(11, "Teatr Słowackiego1", 50.2, 50.2));
    stops.emplace_back(new Stop(12, "Teatr Słowackiego2", 50.2, 50.2));
    stops.emplace_back(new Stop(13, "Teatr Słowackiego3", 50.2, 50.2));

    l1.print();

    cout << "---------------------------------------" << endl;
    stops[0]->print();
    stops[1]->print();
    stops[2]->print();

    vector<Stop*>::iterator i;
    for(i = stops.begin(); i != stops.end(); i++) {
        delete *i;
    }

    return 0;
}