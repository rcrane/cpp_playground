#ifndef ELEVATOR_H
#define ELEVATOR_H

#include <iostream>
using namespace std;

class Elevator
{
private:
    int currentFloor;
    int maxFloor;
    int minFloor;

public:
    // Constructor
    Elevator(int min, int max);

    // Moves the elevator to a requested floor
    void moveToFloor(int floor);

    // Getter for the current floor
    int getCurrentFloor() const;
};

#endif // ELEVATOR_H
