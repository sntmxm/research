#include <iostream>
using namespace std;



class MyClass 
{
    
};

void Value(int value)
{
    value = 10;  // local copy
}

void Reference(int& value) 
{
    value = 10;  // reference type
}

void func() 
{
    int* ptr = new int(5);  // memory allocation
    // without delete to free memory
}




int main() {
    
    MyClass objStack[77];  // created on stack
    int b = sizeof(objStack);
    cout << "b" << b;
    
    MyClass* objHeap = new MyClass(); // created on heap
    int a = sizeof(objHeap);
    cout << "a" << a;

    delete objHeap;


    int x = 5;
    Value(x);
    std::cout << "Value type: " << x << std::endl;  // Value type

    
    int y = 5;
    Reference(y);
    std::cout << "Reference type: " << y << std::endl; // Reference type 

    
    func();

    
    return 0;
}
