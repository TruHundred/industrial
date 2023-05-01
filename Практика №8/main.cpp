#include <iostream>
#include "DigitalSensor.h"
#include "Type3.h"
#include "Type4.h"

using namespace std;

int main() {
    Type3 eq1(0.0);
    eq1.show();
    eq1.Get_answer();

    Type4 eq2(1.0, 1.0);
    eq2.show();
    eq2.Get_answer();

    Type4 eq3(0.0, 1.0);
    eq3.show();
    eq3.Get_answer();

    return 0;
}
