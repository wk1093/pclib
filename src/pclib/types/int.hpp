#pragma once
#include "../_pcinc.hpp"

class Int : public pObject {
public:
    int value;
    Int(int value) : pObject("int") {
        this->value = value;
    }
    Int() : pObject("int") {
        this->value = 0;
    }
    Int(NoneType _) : pObject("int") {
        this->value = 0;
    }
    int operator=(int value) {
        this->value = value;
        return value;
    }
    int operator=(Int value) {
        this->value = value;
        return value;
    }
    int operator+(int value) const {
        return this->value + value;
    }
    int operator+(Int value) const {
        return this->value + value;
    }
    int operator-(int value) const {
        return this->value - value;
    }
    int operator-(Int value) const {
        return this->value - value;
    }
    int operator*(int value) const {
        return this->value * value;
    }
    int operator*(Int value) const {
        return this->value * value;
    }
    int operator/(int value) const {
        return this->value / value;
    }
    int operator/(Int value) const {
        return this->value / value;
    }
    int operator%(int value) const {
        return this->value % value;
    }
    int operator%(Int value) const {
        return this->value % value;
    }
    int operator+=(int value) {
        this->value += value;
        return this->value;
    }
    int operator+=(Int value) {
        this->value += value;
        return this->value;
    }
    int operator-=(int value) {
        this->value -= value;
        return this->value;
    }
    int operator-=(Int value) {
        this->value -= value;
        return this->value;
    }
    int operator*=(int value) {
        this->value *= value;
        return this->value;
    }
    int operator*=(Int value) {
        this->value *= value;
        return this->value;
    }
    int operator/=(int value) {
        this->value /= value;
        return this->value;
    }
    int operator/=(Int value) {
        this->value /= value;
        return this->value;
    }
    int operator%=(int value) {
        this->value %= value;
        return this->value;
    }
    int operator%=(Int value) {
        this->value %= value;
        return this->value;
    }
    bool operator==(int value) const {
        return this->value == value;
    }
    bool operator==(Int value) const {
        return this->value == value;
    }
    bool operator!=(int value) const {
        return this->value != value;
    }
    bool operator!=(Int value) const {
        return this->value != value;
    }
    bool operator>(int value) const {
        return this->value > value;
    }
    bool operator>(Int value) const {
        return this->value > value;
    }
    bool operator<(const int &value) const {
        return this->value < value;
    }
    bool operator<(Int value) const {
        return this->value < value;
    }
    bool operator>=(int value) const {
        return this->value >= value;
    }
    bool operator>=(Int value) const {
        return this->value >= value;
    }
    bool operator<=(int value) const {
        return this->value <= value;
    }
    bool operator<=(Int value) const {
        return this->value <= value;
    }
    int operator++() {
        return ++this->value;
    }
    int operator++(int) {
        return this->value++;
    }
    int operator--() {
        return --this->value;
    }
    int operator--(int) {
        return this->value--;
    }
    int operator-() {
        return -this->value;
    }
    int operator+() const {
        return +this->value;
    }
    int operator~() const {
        return ~this->value;
    }
    int operator&(int value) const {
        return this->value & value;
    }
    int operator&(Int value) const {
        return this->value & value;
    }
    int operator|(int value) const {
        return this->value | value;
    }
    int operator|(Int value) const {
        return this->value | value;
    }
    int operator^(int value) const {
        return this->value ^ value;
    }
    int operator^(Int value) const {
        return this->value ^ value;
    }
    int operator<<(int value) const {
        return this->value << value;
    }
    int operator<<(Int value) const {
        return this->value << value;
    }
    int operator>>(int value) const {
        return this->value >> value;
    }
    int operator>>(Int value) const {
        return this->value >> value;
    }
    int operator&=(int value) {
        this->value &= value;
        return this->value;
    }
    int operator&=(Int value) {
        this->value &= value;
        return this->value;
    }
    int operator|=(int value) {
        this->value |= value;
        return this->value;
    }
    int operator|=(Int value) {
        this->value |= value;
        return this->value;
    }
    int operator^=(int value) {
        this->value ^= value;
        return this->value;
    }
    int operator^=(Int value) {
        this->value ^= value;
        return this->value;
    }
    int operator<<=(int value) {
        this->value <<= value;
        return this->value;
    }
    int operator<<=(Int value) {
        this->value <<= value;
        return this->value;
    }
    int operator>>=(int value) {
        this->value >>= value;
        return this->value;
    }
    int operator>>=(Int value) {
        this->value >>= value;
        return this->value;
    }
    int operator!() const {
        return !this->value;
    }
    int operator&&(int value) const {
        return this->value && value;
    }
    int operator&&(Int value) const {
        return this->value && value;
    }
    int operator||(int value) const {
        return this->value || value;
    }
    int operator||(Int value) const {
        return this->value || value;
    }
    Int* clone() const {
        return new Int(this->value);
    }
    operator int() const {
        return this->value;
    }

    std::string toString() const {
        return std::to_string(this->value);
    }

    void print() const {
        std::cout << this->value << std::endl;
    }
};