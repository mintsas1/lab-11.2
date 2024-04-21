
#include <iostream>
using namespace std;
int main() {
    double* ptr1 = new double; 
    double* ptr2 = new double; 

   
    cout << "Enter a value for the first variable:  ";
    cin >> *ptr1;

    
    cout << "Enter a value for the first variable:  ";
    cin >> *ptr2;

    
    *ptr1 *= 2;

    
    cout << "First value: " << *ptr1 << endl;
        cout << "Second value: " << *ptr2 << endl;

    delete ptr1;
    delete ptr2;

    return 0;
}


    





