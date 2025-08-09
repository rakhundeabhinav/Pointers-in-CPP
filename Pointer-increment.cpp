//Abhinav Rakhunde
//PRN:24070123001

#include <iostream>
using namespace std;

int main() {
    int a=20;
    int *aptr =&a;

    float b=20.22;
    float *bptr=&b;

    double c=45.66;
    double *cptr=&c;

    char d='B';
    char *dptr=&d;


    cout<<"For int:\n"<<a<<endl;
    cout<<"Before increment:"<<aptr<<endl;
    aptr++;
    cout<<"After increment:"<<aptr<<endl;

     cout<<"For float:\n"<<b<<endl;
    cout<<"Before increment:"<<bptr<<endl;
    bptr++;
    cout<<"After increment:"<<bptr<<endl;
    

     cout<<"For double:\n"<<c<<endl;
    cout<<"Before increment:"<<cptr<<endl;
    cptr++;
    cout<<"After increment:"<<cptr<<endl;
    

     cout<<"For char:\n"<<d<<endl;
    cout<<"Before increment:"<<dptr<<endl;
    dptr++;
    cout<<"After increment:"<<dptr<<endl;
    }
/* OUTPUT:
For int:
20
Before increment:0x61fefc
After increment:0x61ff00
For float:
20.22
Before increment:0x61fef8
After increment:0x61fefc
For double:
45.66
Before increment:0x61fef0
After increment:0x61fef8
For char:
B
Before increment:B«Gßz╘F@Å┬íA
After increment:«Gßz╘F@Å┬íA 
*/

