//
//  screens.cpp
//  7zo
//
//  Created by 이승민 on 2019/11/14.
//  Copyright © 2019 min. All rights reserved.
//

#include "screens.hpp"
#include <iostream>

void start_menu() {
    std::string choose;
    
    while (true) {
        std::cout << "MENU" << std::endl
                  << "=====" << std::endl
                  << "1. Menu A" << std::endl
        << "2. Menu B" << std::endl;
        
        std::cin >> choose;
        
        if (choose == "일정") {
            // when Menu A selected
            break;
        } else if (choose == "시간표") {
            // when Menu B selected
            break;
        } else {
            std::cout << "Wrong selection! Select Again!";
        }
    }
}

int want_month(int semester){
    int month = 0;
    if( semester == 1){
        std::cout << " Mar. " << " Apr. " << " May  " << " Jun. " << std::endl;
        std::cout << "원하는 달은?";
        std::cin >> month;
        return month;
    } else if( semester == 2){
        std::cout << " Sep. " << " Oct. " << " Nov. " << " Dec. " << std::endl;
        std::cout << "원하는 달은?";
        std::cin >> month;
        return month;
    }
    
    return month;
}

