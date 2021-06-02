//
//  Printer.hpp
//  day_04_new
//
//  Created by waitwalker on 2021/6/2.
//

#ifndef Printer_hpp
#define Printer_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Printer {
private:
    /// 定义一个静态的对象指针变量 保存唯一实例
    static Printer *singlePrinter;
    
    Printer();
    Printer(const Printer &print);
    
public:
    /// 提供一个方法 保存单例指针
    static Printer *getSinglePrinter();
};

#endif /* Printer_hpp */
