#include <iostream>
using namespace std;
class Distance {
public:
    int value;

    Distance(int val) : value(val) {
        cout << "Constructor called. Value: " << value <<endl;
    }

    ~Distance() {
        cout << "Destructor called. Value: " << value << endl;
    }
};

int main() {
    // Heap memory allocation
   Distance* obj1 = new Distance(10);
   Distance* obj2 = new Distance(20);

    // Accessing heap objects
    cout << "obj1 value: " << obj1->value <<"f"<< endl;
    cout << "obj2 value: " << obj2->value <<"f"<< endl;

    // Deallocate heap memory
    delete obj1;
    delete obj2;

    return 0;
}

