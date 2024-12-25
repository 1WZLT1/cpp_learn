#include <iostream>
using namespace std;

//堆区程序员手动释放 
//new    返回的是地址
//delete 相当于free操作

int *function()
{
    int *p = new int(10);
    return p;
}

void test_01()
{
    int *p = function();
    cout << *p << endl;
    delete(p);
    cout << *p << endl;
}

int main()
{
    test_01();
}