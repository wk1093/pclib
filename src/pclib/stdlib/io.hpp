#pragma once
#include "../_pcinc.hpp"
#include "../types.hpp"

// void Print(pObject obj) {
//     std::cout << obj.ToString() << std::endl;
// }

#define print(x) (x).print()

template<typename T>
T input(std::string message = "")
{
    if (!empty(message)) std::cout << message;
    T value;
    std::cin >> value;
    return value;
}

Str input(std::string message = "")
{
    return Str(input<std::string>(message));
}