#ifndef ELEVATOR_H
#define ELEVATOR_H

#include <iostream>
using namespace std;

namespace elev_namespace {
    class Elevator {
        private:
            int currentFloor;
            int maxFloor;
            int minFloor;
            static int elevatorCount;

        public:
            // Constructor
            Elevator(int min, int max);

            // Moves the elevator to a requested floor
            void moveToFloor(int floor);

            // Getter for the current floor
            int getCurrentFloor() const;

            // Demonstrates the use of 'this' pointer
            void printAddress() const;

            // Static method to get the number of Elevator instances
            static int getElevatorCount();
    };
} // namespace elev_namespace

#endif // ELEVATOR_H
