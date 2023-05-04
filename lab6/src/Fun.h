#include <iostream>
#include <vector>
using namespace std;

template <class Iterator, class Predicate>
bool allOf(Iterator begin, Iterator end, Predicate predicate) {
    for (Iterator it = begin; it != end; it++) {
        if (!predicate(*it))
            return false;
    }
    return true;
}

template <class Iterator, class Criteria>
bool isSorted(Iterator begin, Iterator end, Criteria criteria) {
    if (begin == end)
        return false;
    Iterator current = begin;
    Iterator prev = current;
    while (++current != end) {
        if (!criteria(*prev, *current))
            return false;
        prev = current;
    }
    return true;
}


template <class Iterator, class Condition>
bool is_palindrome(Iterator begin, Iterator end, Condition condition) {
    Iterator left = begin;
    Iterator right = end;
    right--;

    while (left < right) {
        if (!condition(*left, *right))
            return false;
        left++;
        right--;
    }

    return true;
}