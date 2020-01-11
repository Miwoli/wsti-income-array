#include <iostream>
#include <utility>
#include "income.hpp"

int main(int art, char** argv) {
    std::cout << "Program calculating yearly income." << std::endl;

    Income income;

    int input = 0;

    while (input != 7) {

        std::cout << "What do you want to do?" << std::endl;
        std::cout << "1) Load data" << std::endl;
        std::cout << "2) Display data" << std::endl;
        std::cout << "3) Avarage and total" << std::endl;
        std::cout << "4) Min and max" << std::endl;
        std::cout << "5) Sort from the lowest" << std::endl;
        std::cout << "6) Below and over average" << std::endl;
        std::cout << "7) Exit" << std::endl;

        std::cin >> input;

        switch (input) {
        case 1:
            income.load();
            break;

        case 2:
            income.display();
            break;

        case 3:
            std::cout << "Average: " << income.get_avarage() << std::endl;
            std::cout << "Total: " << income.get_total() << std::endl;
            break;

        case 4:
            std::cout << "Max: " << income.get_max() << std::endl;
            std::cout << "Min: " << income.get_min() << std::endl;
            break;

        case 5:
            income.sort();
            income.display();
            break;

        case 6: 
            std::cout << "Over avarage: " << income.over_avg().first << " total: " << income.over_avg().second << std::endl;
            std::cout << "Below avarage: " << income.below_avg().first << " total: " << income.below_avg().second << std::endl;
            break;

        default:
            break;
        }
    }

    return 0;
}