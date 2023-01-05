#pragma once
// _pcinc - include file for PCLIB

#include <vector>  // std::vector, the underlying data structure for all pclib lists
#include <string>  // std::string, the underlying data structure for all pclib strings
#include <map>     // std::map, the underlying data structure for all pclib dicts
#include <iostream>

class pObject {
private:
    std::string _ptype;

public:
    pObject(std::string ptype) {
        _ptype = ptype;
    }

    std::string ptype() {
        return _ptype;
    }
    pObject* clone() {
        return new pObject(_ptype);
    }
    std::string toString() {
        return "<" + _ptype + " " + std::to_string((long long)this) + ">";
    }
};

class NoneType : public pObject {
public:
    NoneType() : pObject("NoneType") {}
};

#define None (NoneType())
