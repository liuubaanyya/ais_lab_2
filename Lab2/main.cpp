#include "test.hpp"
#include "algo.hpp"
#include <iostream>

ll rabinCarpWrapper(const std::string &text, const std::string &pattern)
{
    return rabinCarpSearch(text, pattern);
}

int main()
{

    testReal("warandpeace.txt", "naive search", naiveSearch);
    testReal("warandpeace.txt", "Horspool search", horspoolSearch);
    testReal("warandpeace.txt", "Rabin-Carp search", rabinCarpWrapper);

    // testRandom("naive search", naiveSearch);
    // testRandom("naive search", horspoolSearch);
    // testRandom("naive search", rabinCarpWrapper);
}