#include "pch.h"
#include <gtest/gtest.h>
#include "../C++Research/C++Research1.cpp"


class MyTestFixture : public ::testing::Test {
protected:
    void SetUp() override {
        
    }

    void TearDown() override {
        
    }
};


TEST(MyTestCase, ValueFunctionTest) {
    int x = 5;
    Value(x);
    EXPECT_EQ(5, x); 
}

TEST(MyTestCase, ReferenceFunctionTest) {
    int y = 5;
    Reference(y);
    EXPECT_EQ(10, y); 
}

TEST(MyTestCase, MemoryLeakTest) {
    
    
}


TEST_F(MyTestFixture, MyClassStackTest) {
    MyClass objStack;
    
    
}

TEST_F(MyTestFixture, MyClassHeapTest) {
    MyClass* objHeap = new MyClass();
    
    

    delete objHeap; 
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}