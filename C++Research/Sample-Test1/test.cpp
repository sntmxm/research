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
    int* initial = new int(5);
    func();
    int* afterFunc = new int(10);

    EXPECT_EQ(*initial, 5);
    EXPECT_EQ(*afterFunc, 10);

    delete initial;
    delete afterFunc;

}


TEST_F(MyTestFixture, MyClassStackTest) {
    MyClass* objStack = new MyClass[5];
    EXPECT_EQ(sizeof(MyClass), sizeof(objStack[5]));

}

TEST_F(MyTestFixture, MyClassHeapTest) {
    MyClass* objHeap = new MyClass[8];
    EXPECT_EQ(sizeof(MyClass), sizeof(objHeap[8]));

    delete[] objHeap;
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}



