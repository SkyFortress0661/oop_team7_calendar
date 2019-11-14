//
//  calendar.hpp
//  7zo
//
//  Created by 이승민 on 2019/11/14.
//  Copyright © 2019 min. All rights reserved.
//

#ifndef calendar_hpp
#define calendar_hpp

#include <string>

int dayNumber(int day, int month, int year);
std::string getMonthName(int monthNumber);
int numberOfDays(int monthNumber, int year);
void printCalendar(int year, int semester, std::string& name);

#endif /* calendar_hpp */
