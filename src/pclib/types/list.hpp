#pragma once
#include "../_pcinc.hpp"
#include "int.hpp"
#include "str.hpp"

template<typename T>
class List : public pObject {
public:
    std::vector<T> value;
    List() : pObject("list") {}
    List(std::vector<T> value) : pObject("list") {
        this->value = value;
    }
    List(std::initializer_list<T> value) : pObject("list") {
        this->value = value;
    }
    List(NoneType _) : pObject("list") {
        this->value = {};
    }
    List<T> operator=(std::vector<T> value) {
        this->value = value;
        return *this;
    }
    List<T> operator=(List<T> value) {
        this->value = value;
        return *this;
    }
    List<T> operator=(std::initializer_list<T> value) {
        this->value = value;
        return *this;
    }

    void append(T value) {
        this->value.push_back(value);
    }

    void extend(List<T> value) {
        this->value.insert(this->value.end(), value.value.begin(), value.value.end());
    }

    int length() {
        return this->value.size();
    }

    operator std::vector<T>() const {
        return this->value;
    }

    T operator[](int index) const {
        return this->value[index];
    }

    T operator[](Int index) const {
        return this->value[index];
    }

    std::string toString() const {
        std::string result = "[";
        for (int i = 0; i < this->value.size(); i++) {
            result += this->value[i].toString();
            if (i != this->value.size() - 1) {
                result += ", ";
            }
        }
        result += "]";
        return result;
    }

    void print() const {
        std::cout << this->toString() << std::endl;
    }
    
};