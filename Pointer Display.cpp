//Abhinav Rakhunde
//PRN:24070123001

#include <iostream>
using namespace std;

int main() {
    int a=20;
    int *aptr =&a;
    cout<<a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;
    cout<<&a<<endl;

}
/* OUTPUT:
20
0x61ff08
20
0x61ff08
    */
