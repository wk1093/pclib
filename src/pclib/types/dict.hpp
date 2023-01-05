#pragma once
#include "../_pcinc.hpp"
#include "int.hpp"
#include "str.hpp"
#include "list.hpp"

template<typename T, typename U>
class Dict : public pObject { // A dictionary is a map of keys to values, like a python dictionary
public:
    std::map<T, U> value;
    Dict(std::map<T, U> value) : pObject("dict") {
        this->value = value;
    }
    Dict() : pObject("dict") {
        this->value = std::map<T, U>();
    }
    Dict(NoneType _) : pObject("dict") {
        this->value = std::map<T, U>();
    }
    Dict(std::initializer_list<std::pair<T, U>> list) : pObject("dict") {
        for (auto pair : list) {
            this->value.insert(pair);
        }

    }
    U operator[](T key) {
        return this->value[key];
    }

    operator std::map<T, U>() const {
        return this->value;
    }

    void set(T key, U value) {
        this->value[key] = value;
    }

    void remove(T key) {
        this->value.erase(key);
    }

    bool contains(T key) {
        return this->value.find(key) != this->value.end();
    }

    int length() {
        return this->value.size();
    }

};