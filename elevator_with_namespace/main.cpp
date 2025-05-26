#include "elevator.h"

int main() {
  int minFloor = 0, maxFloor = 10;

  elev_namespace::Elevator mainElevator(minFloor, maxFloor);
  elev_namespace::Elevator emergencyElevator(minFloor, maxFloor);

  int floorRequest;
  char choice;

  cout << "Welcome to the Elevator Simulator!" << endl;
  cout << "Elevator range: floors " << minFloor << " to " << maxFloor << endl;
  cout << "Current floor: " << mainElevator.getCurrentFloor() << endl;

  // Demonstrate the use of 'this' pointer
  mainElevator.printAddress();
  emergencyElevator.printAddress();

  // Demonstrate the use of static variable
  cout << "Number of Elevator instances: " << elev_namespace::Elevator::getElevatorCount() << endl;

  do {
    cout << "\nEnter floor number to go to (or -1 to exit): ";
    cin >> floorRequest;
    // ToDo: Error handling (char input, out of range, etc.)

    if (floorRequest == -1)
      break;

    mainElevator.moveToFloor(floorRequest);
    cout << "Main elevator on floor: " << mainElevator.getCurrentFloor() << endl;

    if (floorRequest > maxFloor / 2 && emergencyElevator.getCurrentFloor() != minFloor) {
        emergencyElevator.moveToFloor(minFloor);
    }else if (floorRequest < maxFloor / 2 && emergencyElevator.getCurrentFloor() != maxFloor) {
        emergencyElevator.moveToFloor(maxFloor);
    }
    cout << "Emergency elevator on floor: " << emergencyElevator.getCurrentFloor() << endl;

    // ToDo: open the door of the main elevator

    cout << "Do you want to request another floor? (y/n): ";
    cin >> choice;

  } while (choice == 'y' || choice == 'Y');

  cout << "Thank you for using the Elevator Simulator!" << endl;
  return 0;
}
