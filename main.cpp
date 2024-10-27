#include <iostream>
using namespace std;


int main() {
    // these are the variables used to store the input values given by a user
    int l, m, n;


    // requesting the user to input three seperate integer values
    cout << "Enter three integers:" << endl;
    cout << "Enter first integer: ";
    cin >> l;
    cout << "Enter second integer: ";
    cin >> m;
    cout << "Enter third integer: ";
    cin >> n;

    // this is to create a pointer called "ptrL" which points to an integer stored in memory
    int* ptrL = new int(l);
    int* ptrM = new int(m);
    int* ptrN = new int(n);



    // this shows what is in the variables and pointers. Purpose is to display the stored values to confirm they were correctly assigned by user input.
    cout << "\nContents of variables:" << endl;
    cout << "l = " << l << ", m = " << m << ", n = " << n << endl;

    cout << "\nContents of pointers:" << endl;
    cout << "Pointer to l: " << *ptrL << endl;
    cout << "Pointer to m: " << *ptrM << endl;
    cout << "Pointer to n: " << *ptrN << endl;


    // illustrating the freeing of dynamically allocated memory, this is done using "new" and it's deallocated manually using delete operators to prevent memory leaks
    delete ptrL;
    delete ptrM;
    delete ptrN;

    cout << "\nMemory successfully deallocated." << endl;

    return 0;


}

