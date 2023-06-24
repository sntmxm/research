#include <iostream>



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
    
    MyClass objStack;  // created on stack

    
    MyClass* objHeap = new MyClass(); // created on heap

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
