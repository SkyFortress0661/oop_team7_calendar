//
//  information.hpp
//  7zo
//
//  Created by 이승민 on 2019/11/14.
//  Copyright © 2019 min. All rights reserved.
//

#ifndef information_hpp
#define information_hpp

#include <string>

class information{
private:
    std::string m_name;
    int m_grade;
    int m_semester;
    int m_year;
public:
    void set_name(std::string& name);
    void set_grade(int grade);
    void set_semester(int semester);
    void set_year(int year);

    std::string get_name();
    int get_grade();
    int get_semester();
    int get_year();
    
    information(const std::string& name, int grade, int semester, int year):
    m_name(name), m_grade(grade), m_semester(semester), m_year(year) {}
};

#endif /* information_hpp */
