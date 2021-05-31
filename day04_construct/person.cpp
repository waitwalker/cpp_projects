#include "person.h"

//Person::Person()
//{
//    name = NULL;
//    num = 0;
//    cout<<"无参数构造"<<endl;
//}

inline Person::Person(char *na, int nu) {
    /// 申请空间
    name = (char *)calloc(1,strlen(na) + 1);
    if(name == NULL) {
        cout<<"空间初始化失败"<<endl;
        return;
    }

    strcpy(name,na);
    num = nu;
    cout<<"有参数构造"<<endl;
}

inline Person::~Person(){
    if (name != NULL) {
        free(name);
        name = NULL;
    }

    cout<<"析构函数"<<endl;
}
