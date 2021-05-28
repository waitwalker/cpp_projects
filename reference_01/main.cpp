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

int& my_data(void){
    /// 可以用static 修饰,不被释放,下面代码就OK了
    static int num = 10;
    cout<<"num="<<num<<endl;
    return num;/// 函数返回啥变量,引用就是该变量的别名,这里操作是非法的,千万不要返回局部变量
}


int main()
{

    int &ref = my_data();

    cout<<"ref="<<ref<<endl;

    my_data() = 1111;

    my_data();
    return 0;

    /// 引用作为函数的参数使用
    int data1 = 10, data2 = 20;
    cout<<"data1="<<data1<<",data2="<<data2<<endl;
    my_swap(data1,data2);
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
