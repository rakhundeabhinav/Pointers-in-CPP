//Abhinav Rakhunde
//PRN:24070123001

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int *a=arr+n-1;

    cout <<"Array in reverse order:"<< endl;
    for (int i = n-1;i>=0;i--) {
        cout << *a << " ";
        a--;
    }

    return 0;
}
/* OUTPUT:
Array in reverse order:
5 4 3 2 1
*/
