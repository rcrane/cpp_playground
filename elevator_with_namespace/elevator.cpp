#include "elevator.h"

namespace elev_namespace {

// Initialize static variable
int Elevator::elevatorCount = 0;

// Constructor: Initializes the elevator with a range of floors
Elevator::Elevator(int min, int max) : minFloor(min), maxFloor(max), currentFloor(min) {
  ++elevatorCount;
}

// Moves the elevator to the requested floor
void Elevator::moveToFloor(int floor) {
  if (floor < minFloor || floor > maxFloor) {
    cout << "Requested floor " << floor << " is out of range!" << endl;
  } else {
    if (floor == currentFloor) {
      cout << "Elevator is already on floor " << currentFloor << "." << endl;
    } else if (floor > currentFloor) {
      cout << "Going up: ";
      for (int i = currentFloor + 1; i <= floor; i++) {
        cout << i << " ";
      }
      cout << endl;
      currentFloor = floor;
    } else { // floor < currentFloor
      cout << "Going down: ";
      for (int i = currentFloor - 1; i >= floor; i--) {
        cout << i << " ";
      }
      cout << endl;
      currentFloor = floor;
    }
  }
}

// Getter for the current floor
int Elevator::getCurrentFloor() const {
  return currentFloor;
}

// Demonstrates the use of 'this' pointer
void Elevator::printAddress() const {
  cout << "The address of this Elevator object is: " << this << endl;
}

// Static method to get the number of Elevator instances
int Elevator::getElevatorCount() {
  return elevatorCount;
}

} // namespace elev_namespace
