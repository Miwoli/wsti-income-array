#ifndef INCOME_HPP
#define INCOME_HPP

#include <utility>

class Income {
    double income[12];

    public:
        void load();
        void display();
        double get_total();
        double get_avarage();
        double get_max();
        double get_min();
        void sort();
        std::pair<int, double> over_avg();
        std::pair<int, double> below_avg();
};

#endif