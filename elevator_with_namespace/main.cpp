#include "elevator.h"

int main()
{
    int minFloor = 0, maxFloor = 10;
    // You can either qualify the name...
    elev_namespace::Elevator myElevator(minFloor, maxFloor);
    // or use a using directive:
    // using namespace elev_namespace;
    // Elevator myElevator(minFloor, maxFloor);

    int floorRequest;
    char choice;

    cout << "Welcome to the Elevator Simulator!" << endl;
    cout << "Elevator range: floors " << minFloor << " to " << maxFloor << endl;
    cout << "Current floor: " << myElevator.getCurrentFloor() << endl;

    do
    {
        cout << "\nEnter floor number to go to (or -1 to exit): ";
        cin >> floorRequest;

        if (floorRequest == -1)
            break;

        myElevator.moveToFloor(floorRequest);
        cout << "Current floor: " << myElevator.getCurrentFloor() << endl;

        cout << "Do you want to request another floor? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using the Elevator Simulator!" << endl;
    return 0;
}
