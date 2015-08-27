#include <iostream>
using namespace std;


int main()
{
int i=0;
int PIN=1111, PI, PUK=123123123, PU;
bool req=false;

    while ((req == false)&&(i<3))
        {
            cout<<"Enter PIN: ";
            cin>>PI;
            if (PIN == PI) { cout<<"welcome to smart....Simply Amazing\n"; req=true; }
            else cout<<"Invalid PIN code\n";
            i++;
        }
    i=0;
    while ((req == false)&&(i<3))
    {
        cout<<"Enter PUK: ";
        cin>>PU;
        if (PU == PUK) { cout<<"welcome to smart....Simply Amazing\n"; req=true; }
        else cout<<"Invalid PUK code\n";
        i++;
     }
    if (req==false) cout<<"SIM BLOCKED\n";
        cout<<"Hello";
    return 0;
}
