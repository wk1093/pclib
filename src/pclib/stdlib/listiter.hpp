#pragma once
#include "../_pcinc.hpp"
#include "../types.hpp"

List<Int> range(Int start, Int stop, Int step=1) {
    Int i = start;
    List<Int> l = None;
    while (i < stop) {
        l.append(i);
        i += step;
    }
    return l;
}
List<Int> range(Int stop) {
    return range(0, stop, 1);
}

#define in(i, l) (Int i = 0; i < len(l); i++)
#define len(l) (l.length())