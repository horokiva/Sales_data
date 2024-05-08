#include <iostream>
#include <string>
#ifndef UNTITLED6_MAIN_H
#define UNTITLED6_MAIN_H
struct Sales_data {
    Sales_data& combined(const Sales_data& rhs) {
        m_UnitsSold  += rhs.m_UnitsSold;
        m_Revenue += rhs.m_Revenue;
        return *this;
    }

    std::string isbn() const {
        return m_BookNo;
    }

    double avg_price() const {
        if (m_UnitsSold) {
            return m_Revenue / m_UnitsSold;
        }
        else
            return 0;
    }

    std::string m_BookNo;
    unsigned m_UnitsSold = 0;
    double m_Revenue = 0.0;

};
// nonmember Sales_data interface functions
Sales_data add(const Sales_data&, const Sales_data&) {

}
std::ostream& print(std::ostream&, const Sales_data&) {}

std::istream& read(std::istream&, Sales_data&) {}

#endif //UNTITLED6_MAIN_H
