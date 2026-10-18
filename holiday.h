#pragma once
#include "dayOfYear.h"
namespace Yunseol2649038{

    class holiday{
        //private:
        dayOfYear date;
        bool parkingEnforcement;

        public:
        holiday(dayOfYear d = dayOfYear{1,1}, bool p = false)
            :date{d}, parkingEnforcement{p}
            {}

        void print() const{
            date.print();
            if(parkingEnforcement)
            std::cout << "parking laws will be enforced\n";
            else
            std::cout << "parking laws will not be enforced\n";
        }

        const dayOfYear& getDate() const {return date;}
        void setDate(const dayOfYear& d){date = d;}


    };
}
