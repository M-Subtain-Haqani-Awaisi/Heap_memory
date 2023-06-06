#include <iostream>
using namespace std;
int main() {
    // Heap memory allocation
    int* numPtr = new int(42);

    // Accessing heap memory
    cout << "Value stored in heap memory: " << *numPtr <<endl;

    // Deallocate heap memory
    delete numPtr;

    return 0;
}

