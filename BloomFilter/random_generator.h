// Copyright 2015, KLND Inc. All Rights Reserved.
// Author: chen zhen <feiyacz@gmail.com>

#ifndef RANDOM_GENERATOR_H
#define RANDOM_GENERATOR_H

#include <vector>

namespace {

class RandomGenerator {

public:
    RandomGenerator(unsigned long ceiling) {
        _ceiling = ceiling;
    }

    virtual ~RandomGenerator() {}

    template <class T>
    std::vector<unsigned long> random_generate(T element) {
        return NULL;
    }

    template <>
    std::vector<unsigned long> random_generate(const std::string& element) {
    }

private:
    unsigned long _ceiling;
}

} // namespace
#endif // RANDOM_GENERATOR_H
