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

#include "screens.hpp"


int main(int argc, const char * argv[]) {
    
    // 제이슨 로딩
    // 제이슨 로딩 실패거나 정보가 없을때
    
    std::string name;
    int grade, semester, year;
    
    std::cout << "정보가 없습니다. 새로운 정보를 설정해 주세요." << std::endl;
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
    
    start_menu();
    int month = want_month(semester);
    
    
    return (0);
}

