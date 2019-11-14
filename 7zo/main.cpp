//
//  main.cpp
//  7zo
//
//  Created by 이승민 on 2019/11/14.
//  Copyright © 2019 min. All rights reserved.
//
#include<stdio.h>
#include<cstring>
#include<iostream>
#include "calendar.hpp"
#include "information.hpp"

int main(int argc, const char * argv[]) {
    std::string name;
    int grade, semester, year;
    
    std::cout << "사용자의 정보를 입력하시오." << std::endl;
    std::cout << "이름 : " ;
    std::cin >> name;
    std::cout << "학년 : " ;
    std::cin >> grade;
    std::cout << "학기 : " ;
    std::cin >> semester;
    std::cout << "현재 년도 : " ;
    std::cin >> year;
    
    information i(name, grade, semester, year);
    
    if ( semester == 1){
        printCalendar(year, 1,name);
    }
    else if( semester == 2){
        printCalendar(year, 2,name);
    }
    
    return (0);
}
