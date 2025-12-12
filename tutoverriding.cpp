#include <iostream>
using namespace std;

class Base {
public:
   virtual void show() {
        cout << "Base class show() called" << endl;
    }
};

class Derived : public Base {
public:
    // This overrides the show() function in Base class
    void show() {
        cout << "Derived class show() called" << endl;
    }
};

int main() {
    Base b;
    Derived d;

    b.show();  // Calls Base class show()
    d.show();  // Calls Derived class show(), overriding Base's version

    return 0;
}
 