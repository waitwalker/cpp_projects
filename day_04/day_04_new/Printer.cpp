//
//  Printer.cpp
//  day_04_new
//
//  Created by waitwalker on 2021/6/2.
//

#include "Printer.hpp"

Printer* Printer::singlePrinter = new Printer;


Printer* Printer::getSinglePrinter() {
    return singlePrinter;
}

Printer::Printer(){
    
}

Printer::Printer(const Printer &printer){
    
}


void Printer::startPrint(char *text) {
    cout<<"打印的内容:"<<text<<endl;
}
