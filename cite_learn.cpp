#include <iostream>
using namespace std;

void function()
{
    int a  = 10;
    int &b = a;
    b = 11;
    cout << a <<endl;
    int c = sizeof(b);

    cout << c <<endl;

    int *p_a = &a;
    int *p_b = &b; 

    cout << p_a <<endl;
    cout << p_b <<endl;
}

void test_1()
{
    int *p;
    cout << "p" << sizeof(int) <<endl;
} 

int main()
{
    function();
    test_1();
}