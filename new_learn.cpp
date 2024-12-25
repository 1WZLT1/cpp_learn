#include <iostream>
using namespace std;

//堆区程序员手动释放 
//new             返回的是地址
//delete          相当于free操作
//new    关键字[] 创建数组
//delete []       释放数组

int *function_variable()
{
    int *p = new int(10);
    return p;
}

int *function_array()
{
    int *p = new int[10];
    return p;
}

void test_01()
{
    int *p   = function_variable();
    int *p_a = function_array(); 

    for(int i = 0;i<10;i++)
    p_a[1] = 1;  
    cout << p_a[1] << endl;
    
    delete(p);
    cout << *p << endl;

    int  *p_copy = p_a;
    delete[] (p_a);
    cout << p_copy[1] <<endl;

    p_copy[1] = 2;
    cout << p_copy[1] <<endl;
     
}

int main()
{
    test_01();
}