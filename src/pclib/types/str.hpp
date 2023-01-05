#pragma once
#include "../_pcinc.hpp"
#include "int.hpp"

class Str : public pObject {
public:
    std::string value;
    Str(std::string value) : pObject("str") {
        this->value = value;
    }
    Str(const char* value) : pObject("str") {
        this->value = value;
    }
    Str() : pObject("str") {
        this->value = "";
    }
    Str(NoneType _) : pObject("str") {
        this->value = "";
    }
    std::string operator=(std::string value) {
        this->value = value;
        return value;
    }
    std::string operator=(Str value) {
        this->value = (std::string)value;
        return value;
    }
    std::string operator+(std::string value) const {
        return this->value + value;
    }
    std::string operator+(Str value) const {
        return this->value + (std::string)value;
    }
    std::string operator+=(std::string value) {
        this->value += value;
        return this->value;
    }
    std::string operator+=(Str value) {
        this->value += (std::string)value;
        return this->value;
    }
    bool operator==(std::string value) const {
        return this->value == value;
    }
    bool operator==(Str value) const {
        return this->value == (std::string)value;
    }
    bool operator!=(std::string value) const {
        return this->value != value;
    }
    bool operator!=(Str value) const {
        return this->value != (std::string)value;
    }
    bool operator<(std::string value) const {
        return this->value < value;
    }
    bool operator<(Str value) const {
        return this->value < (std::string)value;
    }
    bool operator<=(std::string value) const {
        return this->value <= value;
    }
    bool operator<=(Str value) const {
        return this->value <= (std::string)value;
    }
    bool operator>(std::string value) const {
        return this->value > value;
    }
    bool operator>(Str value) const {
        return this->value > (std::string)value;
    }
    bool operator>=(std::string value) const {
        return this->value >= value;
    }
    bool operator>=(Str value) const {
        return this->value >= (std::string)value;
    }
    Str operator[](int index) const {
        return Str(this->value.substr(index, 1));
    }
    Str operator[](Int index) const {
        return Str(this->value.substr(index.value, 1));
    }
    int length() const {
        return this->value.length();
    }
    std::string slice(int start, int end) const {
        return this->value.substr(start, end - start);
    }
    std::string slice(Int start, Int end) const {
        return this->value.substr(start.value, end.value - start.value);
    }
    Int count(Str val) const {
        Int count = 0;
        for (int i = 0; i < this->value.length(); i++) {
            if (this->value.substr(i, val.value.length()) == val.value) {
                count++;
            }
        }
        return count;
    }

    Str* clone() const {
        return new Str(this->value);
    }
    operator std::string() const {
        return this->value;
    }

    operator int() const {
        return std::stoi(this->value);
    }

    operator double() const {
        return std::stod(this->value);
    }

    operator bool() const {
        return this->value != "";
    }

    std::string toString() const {
        return this->value;
    }

    void print() const {
        std::cout << this->value << std::endl;
    }

};