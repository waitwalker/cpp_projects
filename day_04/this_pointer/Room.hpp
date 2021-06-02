//
//  Room.hpp
//  this_pointer
//
//  Created by waitwalker on 2021/6/2.
//

#ifndef Room_hpp
#define Room_hpp

#include <stdio.h>
#include <iostream>
#include <string.h>


using namespace std;

class Room {
    friend void visit(Room &ro);
    friend void visit2(Room &ro);
private:
    string bedRoom;
    
public:
    string sittingRoom;
    Room();
    Room(string bed, string sit);
    Room(const Room &room);
    ~Room();
};

#endif /* Room_hpp */
