#include <iostream>
#include <cmath>

//Вариант 12. Вывести первые 10 слагаемых и их суммы.

int main(){
    double sum{0.0};
    for(auto i = 1; i < 11; ++i){
        auto t = 1.0 / (std::pow(i,3) + std::pow(i,1.0/5.0));
        sum += t;
        std::cout << t << " ";
    }
    std::cout << std::endl << sum << std::endl;
}