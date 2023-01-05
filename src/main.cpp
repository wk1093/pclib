#include "pclib/pclib.hpp"

// everything in pclib starts with a capital letter to avoid conflicts

int main(void) {
    Int a = 5;
    Str b = "hello, world";
    Str c = "l";
    Int d = b.count(c);
    List<Int> e = None;
    for in(i, range(len(b))) {
        if (b[i] == c) {
            e.append(i);
        }
    }
    print(d);
    print(e);

    Dict<Str, Int> f = {
        {"a", 1},
        {"b", 2},
        {"c", 3},
        {"d", 4},
        {"e", 5},
    };
    print(f["a"]);
    print(f["e"]);

    Dict<Int, Str> g = {
        {1, "a"},
        {2, "b"},
        {3, "c"},
        {4, "d"},
        {5, "e"},
    };
    print(g[1]);
    print(g[5]);

}