#include <iostream>
#include "Head1.h"
using namespace std;

int main()
{
    clock c1 = MakeClock(2,30,4);
    clock c2 = MakeClock(6,0,0);
    clock c3 = MakeClock(1,62,30); //should not be created as the input is invalid, use IsValid function

    PrintClock(c1);
    PrintClock(c2);

    cout<<GetHour(c1)<<endl;
    cout<<GetSecond(c2)<<endl;

    c3 = AddClock(c1, c2);
    PrintClock(c3);

    cout<<IsEqual(c1,c2);

    return 0;
}
