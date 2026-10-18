#include "holiday.h"

namespace Yunseol2649038
{
bool comparedayOfYear(const dayOfYear& d1, const dayOfYear& d2){
    return d1.getMonth() == d2.getMonth() && d1.getDay() == d2.getDay();

}
}

int main()
{
    using namespace Yunseol2649038;

    holiday h1; h1.print();
    holiday h2{dayOfYear{12,25},true}; h2.print();

    if(comparedayOfYear(h1.getDate(), h2.getDate()))
    std::cout << "same\n";

    else
    std::cout << "different\n";

    return 0;
}




