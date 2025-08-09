//Abhinav Rakhunde
//PRN:24070123001

#include <iostream>
using namespace std;

int main() {
    int A[]={2,3,4,5,8};
    int *Ap1=&A[4];
    int *Ap2=&A[2];
    cout<<"Pointer 1 address:"<<Ap1<<endl;
    cout<<"Pointer 2 address:"<<Ap2<<endl;

    cout<<"Difference:"<<*Ap1-*Ap2<<endl;
}

/* OUTPUT:

Pointer 1 address:0x61ff04
Pointer 2 address:0x61fefc
Difference:4
*/