#ifndef CONCURRENTCOMPUTINGLABS_LCG_GENERATOR_H
#define CONCURRENTCOMPUTINGLABS_LCG_GENERATOR_H

#include <cstdint>

class LCG {
public:
    uint32_t CurrentValue;

    LCG(uint32_t m, uint32_t a, uint32_t b, uint32_t seed) : m(m), a(a), b(b), seed(seed) {}

    uint32_t Next() {
        if (CurrentValue == 0) CurrentValue = seed;

        CurrentValue = (a * CurrentValue + b) % m;
        return CurrentValue;
    }

private:
    unsigned int m, a, b, seed;
};
#endif //CONCURRENTCOMPUTINGLABS_LCG_GENERATOR_H
