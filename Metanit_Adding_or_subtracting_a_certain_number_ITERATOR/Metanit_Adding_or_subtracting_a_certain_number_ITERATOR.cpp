﻿#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec{ 1,3,2,4,5,6,787,5 }; // cоздается вектор vec с целочисленными значениями 
    auto iter{ vec.begin() }; // объявляется итератор iter, который инициализируется с помощью vec.begin(), что позволяет получить итератор, указывающий на первый элемент вектора.
        
    // переходим на 1 элемент вперед ко 2-му элементу
    ++iter;
    std::cout << *iter << std::endl;    // 3

    // переходим на 2 элемента вперед к 4-му элементу
    iter += 2;
    std::cout << *iter << std::endl;    // 4

    iter -= 2;
    std::cout << *iter << '\n'; // 3

}




