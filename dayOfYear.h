#include <iostream>

namespace Yunseol2649038
{
    class dayOfYear{
        //private:
        int month;
        int day;

        void testMonth(){
            if(month < 1 || month >12){
                std::cout << "Invalid month";
                std::exit(1);}
        }

        void testDay(){
            if(day < 1|| day > 31){
                std::cout << "Invalid day";
                std::exit(1);
            }
        }

        public:

        dayOfYear(int m=1, int d=1):month{m}, day{d} {
            testMonth();
            testDay();
        }

        void input(){
            std::cout << "Month? ";
            std::cin >> month; testMonth();
            std::cout << "\n";

            std::cout << "Day? ";
            std::cin >> day; testDay();
            std::cout << "\n";
        }

        void setMonth(int m){m = month; testMonth();}
        void setDay(int d){d = day; testDay();}

        void print() const {
            
                switch (month)
            {
            case 1:
            std::cout << "January "; break;
            case 2:
            std::cout << "Febuary "; break;
            case 3:
            std::cout << "March "; break;
            case 4:
            std::cout << "April "; break;
            case 5:
            std::cout << "May "; break;
            case 6:
            std::cout << "June "; break;
            case 7:
            std::cout << "July "; break;
            case 8:
            std::cout << "August "; break;
            case 9:
            std::cout << "September "; break;
            case 10: std::cout << "October "; break;
            case 11: std::cout << "November "; break;
            case 12: std::cout << "December "; break;
            default:
            std::cout << "Error dayOfYear::print()";
            }
            std::cout << day << std::endl;
            }

        int getMonth() const{
            return month;
        }
        int getDay() const{
            return day;
        }
    };

}