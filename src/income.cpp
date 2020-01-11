#include <iostream>
#include <utility>
#include "income.hpp"

void Income::load() {
    for (int i = 0; i < 12; i++) {
        std::cout << "Type income for month nr: " << i + 1 << std::endl;
        std::cin >> income[i];
    }
}

void Income::display() {
    for (int i = 0; i < 12; i++) {
        std::cout << income[i] << ", ";
    }
    std::cout << std::endl;
}

double Income::get_total() {
    double temp = 0;

    for (int i = 0; i < 12; i++) {
        temp += income[i];
    }

    return temp;
}

double Income::get_avarage() {
    return get_total()/12;
}

double Income::get_max() {
    double temp;

    for (int i = 0; i < 12; i++) {
        if (i == 0) {
            temp = income[i];
        } else {
            if (income[i] > temp) {
                temp = income[i];
            }
        }
    }

    return temp;
}

double Income::get_min() {
    double temp;

    for (int i = 0; i < 12; i++) {
        if (i == 0) {
            temp = income[i];
        } else {
            if (income[i] < temp) {
                temp = income[i];
            }
        }
    }

    return temp;
}

void Income::sort() {
    double temp;

    for (int i = 0; i < 12; i++) {
        for (int j = i + 1; j < 12; j++) {
            if (income[j] < income[i]) {
                temp = income[i];
                income[i] = income[j];
                income[j] = temp;
            }
        }
    }
}

std::pair<int, double> Income::over_avg() {
    double avg = get_avarage();
    int counter = 0;
    double total = 0;

    for (int i = 0; i < 12; i++) {
        if (income[i] > avg) {
            total += income[i];
            counter++;
        }
    }

    std::pair<int, double> temp;
    temp.first = counter;
    temp.second = total;

    return temp;
}

std::pair<int, double> Income::below_avg() {
    double avg = get_avarage();
    int counter = 0;
    double total = 0;

    for (int i = 0; i < 12; i++) {
        if (income[i] < avg) {
            total += income[i];
            counter++;
        }
    }

    std::pair<int, double> temp;
    temp.first = counter;
    temp.second = total;

    return temp;
}