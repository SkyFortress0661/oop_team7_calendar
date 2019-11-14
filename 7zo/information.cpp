//
//  information.cpp
//  7zo
//
//  Created by 이승민 on 2019/11/14.
//  Copyright © 2019 min. All rights reserved.
//

#include "information.hpp"
#include <iostream>

void information::set_name(std::string& name) {
    this->m_name = name;
}
void information::set_grade(int grade){
    this->m_grade = grade;
}
void information::set_semester(int semester){
    this->m_semester = semester;
}
void information::set_year(int year){
    this->m_year = year;
}

std::string information::get_name(){
    return this->m_name;
}
int information::get_grade(){
    return this->m_grade;
}
int information::get_semester(){
    return this->m_semester;
}
int information::get_year(){
    return this->m_year;
}
