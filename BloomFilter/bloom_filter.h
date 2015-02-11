// Copyright 2015, KLND Inc. All Rights Reserved.
// Author: chen zhen <feiyacz@gmail.com>

#ifndef BLOOM_FITER_H
#define BLOOM_FITER_H

namespace {

class BloomFilter {

    static unsigned long s_length = 10000000;

public:
    BloomFilter() {}
    virtual ~BloomFilter() {}

    static void set_length(unsigned long length) {
        s_length = length;
    }

    template <class T>
    void add_element(T element) {
    }

    template <class T>
    bool is_exist(T element) {
    }

private:
    std::bitset<s_length> _bits;
}

} // namespace
#endif // BLOOM_FITER_H
