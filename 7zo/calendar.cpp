//
//  calendar.cpp
//  7zo
//
//  Created by 이승민 on 2019/11/14.
//  Copyright © 2019 min. All rights reserved.
//

#include "calendar.hpp"
#include <string>
#include <cstdio>

int dayNumber(int day, int month, int year)
{
   static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
   year -= month < 3;
   return (year + year / 4 - year / 100 + year / 400 + t[month - 1] + day) % 7;
}
 
/*
 A Function that returns the name of the month
 with a given month number
 
 Month Number     Name
 0                January
 1                February
 2                March
 3                April
 4                May
 5                June
 6                July
 7                August
 8                September
 9                October
 10               November
 11               December */
std::string getMonthName(int monthNumber)
{
   std::string months[] = { "January", "February", "March",
                      "April", "May", "June",
                      "July", "August", "September",
                      "October", "November", "December"
   };
 
   return (months[monthNumber]);
}
 
/* A Function to return the number of days in
  a month
 
 Month Number     Name        Number of Days
 0                January     31
 1                February    28 (non-leap) / 29 (leap)
 2                March       31
 3                April       30
 4                May         31
 5                June        30
 6                July        31
 7                August      31
 8                September   30
 9                October     31
 10               November    30
 11               December    31
 
*/
int numberOfDays(int monthNumber, int year)
{
   // January
   if (monthNumber == 0)
       return (31);
 
   // February
   if (monthNumber == 1)
   {
       // If the year is leap then February has
       // 29 days
       if (year % 400 == 0 ||
           (year % 4 == 0 && year % 100 != 0))
           return (29);
       else
           return (28);
   }
 
   // March
   if (monthNumber == 2)
       return (31);
 
   // April
   if (monthNumber == 3)
       return (30);
 
   // May
   if (monthNumber == 4)
       return (31);
 
   // June
   if (monthNumber == 5)
       return (30);
 
   // July
   if (monthNumber == 6)
       return (31);
 
   // August
   if (monthNumber == 7)
       return (31);
 
   // September
   if (monthNumber == 8)
       return (30);
 
   // October
   if (monthNumber == 9)
       return (31);
 
   // November
   if (monthNumber == 10)
       return (30);
 
   // December
   if (monthNumber == 11)
       return (31);
    
    return -1;
}
 
// Function to print the calendar of the given year
void printCalendar(int year, int semester, std::string& name)
{
    printf("    %s's Calendar - %d\n\n", name.c_str(), year);
    int days;
    int start = 0;
 
    // Index of the day from 0 to 6
    int current = dayNumber(1, 1, year);
    
   // i --> Iterate through all the months
   // j --> Iterate through all the days of the
   //       month - i
    if (semester == 1){
        start = 2;
    }
    else if( semester == 2){
        start = 8;
    }

   for (int i = start; i < start+4; i++)
   {
       days = numberOfDays(i, year);
 
       // Print the current month name
       printf("\n  ------------%s-------------\n",
           getMonthName(i).c_str());
 
       // Print the columns
       printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
 
       // Print appropriate spaces
       int k;
       for (k = 0; k < current; k++)
           printf("     ");
 
       for (int j = 1; j <= days; j++)
       {
           printf("%5d", j);
 
           if (++k > 6)
           {
               k = 0;
               printf("\n");
           }
       }
 
       if (k)
           printf("\n");
 
       current = k;
   }
 
   return;
}
