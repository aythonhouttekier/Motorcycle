#include <iostream>
#include "motorcycle.h"


using namespace std;
//using namespace Vehicles;

int main(void)  {

    cout << "Hello World!" << endl;

    Vehicles::Motorcycle fighter("Ducati", "Fighter");
    fighter.set_capacity(600);
    fighter.set_speed(230);
    fighter.set_manufacturing_year(1998);
    cout << fighter.to_string() << endl;

    Vehicles::Motorcycle vn800("Kawasaki", "Vulcan 800");
    vn800.set_capacity(802);

    return 0;


}