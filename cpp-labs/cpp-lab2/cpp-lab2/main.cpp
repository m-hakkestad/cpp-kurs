//
//  main.cpp
//  cpp-lab2
//
//  Created by Mårten Hakkestad on 2018-08-29.
//  Copyright © 2018 Mårten Hakkestad. All rights reserved.
//

#include <iostream>
#include "boxCollision.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    AABB box1(5,0,10,10);
    AABB box2(6,11,20,20);
    AABB box(0,0,0,0);
    Point pt(5,5);
    
    
    if(intersect(box1, box2)) std::cout << "true" << std::endl;
    else std::cout << "false" << std::endl;
    
    box = min_bounding_box(box1, box2);
    box.print();
    
}
