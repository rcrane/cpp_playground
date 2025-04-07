#include "elevator.h"

namespace elev_namespace
{

    // Constructor: Initializes the elevator with a range of floors
    Elevator::Elevator(int min, int max) : minFloor(min), maxFloor(max), currentFloor(min) {}

    // Moves the elevator to the requested floor
    void Elevator::moveToFloor(int floor)
    {
        if (floor < minFloor || floor > maxFloor)
        {
            cout << "Requested floor " << floor << " is out of range!" << endl;
        }
        else
        {
            if (floor == currentFloor)
            {
                cout << "Elevator is already on floor " << currentFloor << "." << endl;
            }
            else if (floor > currentFloor)
            {
                cout << "Going up: ";
                for (int i = currentFloor + 1; i <= floor; i++)
                {
                    cout << i << " ";
                }
                cout << endl;
                currentFloor = floor;
            }
            else
            { // floor < currentFloor
                cout << "Going down: ";
                for (int i = currentFloor - 1; i >= floor; i--)
                {
                    cout << i << " ";
                }
                cout << endl;
                currentFloor = floor;
            }
        }
    }

    // Getter for the current floor
    int Elevator::getCurrentFloor() const
    {
        return currentFloor;
    }

} // namespace elev_namespace
