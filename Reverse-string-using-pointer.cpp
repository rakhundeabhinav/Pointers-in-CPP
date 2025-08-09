//Abhinav Rakhunde
//PRN:24070123001

#include <iostream>
#include <string>
using namespace std;

int main() {
    string A;
    
    cout <<"Enter a string: ";
    cin>>A; 

    char *ptr = &A[0];
    int len = A.length();

    cout <<"Reversed string: ";
    for (int i =len-1;i>=0;i--) {
        cout << *(ptr + i);
    }

    cout << endl;
    return 0;
}
/* OUTPUT:
Enter a string: Abhinav 
Reversed string: vanihbA
*/