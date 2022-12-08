#include <iostream>

#include "Robot.h"

using namespace std;

int main() {

    Robot robot1;

    for (int i = 0; i < 10; ++i) {
        robot1.deplacer();
    }

    cout << "Position: " << robot1.getPosition() << endl;

    robot1.faireDemiTour();

    for (int i = 0; i < 6; ++i) {
        robot1.deplacer();
    }

    cout << "Position: " << robot1.getPosition() << endl;


    return EXIT_SUCCESS;
}
