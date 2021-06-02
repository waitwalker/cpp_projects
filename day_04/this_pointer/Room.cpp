//
//  Room.cpp
//  this_pointer
//
//  Created by waitwalker on 2021/6/2.
//

#include "Room.hpp"

void visit(Room &ro) {
    cout<<"卧室:"<<ro.bedRoom<<endl;
}

void visit2(Room &room) {
    cout<<"卧室:"<<room.bedRoom<<endl;
}

Room::Room() {
    cout<<"Room不参数构造"<<endl;
}

Room::Room(string bed, string sit):bedRoom(bed),sittingRoom(sit) {
    cout<<"Room有参数构造"<<endl;
}

Room::Room(const Room &room) {
    cout<<"Romm拷贝构造"<<endl;
}

Room::~Room(){
    cout<<"Room析构函数"<<endl;
}
