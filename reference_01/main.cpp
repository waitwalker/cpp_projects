#include <iostream>

using namespace std;
void my_swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void test02(){
    int arr[5] = {1,2345,45,6,5};
    for(int i =0; i < 5; i++){
        cout<<arr[i]<<endl;
    }

    int (&array)[5] = arr;
    for(int i =0; i < 5; i++){
        cout<<"array("<<i<<")"<<array[i]<<endl;
    }
}

int main()
{
    int data1 = 10, data2 = 20;
    cout<<"data1="<<data1<<",data2="<<data2<<endl;
    my_swap(data1,data2);///这里并不能交换data1和data2的值
    cout<<"data1="<<data1<<",data2="<<data2<<endl;

    test02();
    ///1.引用的基本语法
    int num = 10;
    int &a = num;
    cout<<"a="<<a<<endl;
    cout<<"num="<<num<<endl;
    int data = 100;
    a = data;
    cout<<"a="<<a<<endl;
    cout<<"num="<<num<<endl;
    cout << "Hello World!" << endl;
    return 0;
}
