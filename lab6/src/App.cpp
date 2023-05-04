#include "App.h"
#include "Fun.h"
int App::start() {
    struct CPoint {
        int x;
        int y;
    };
    std::vector<CPoint> v;
    v.push_back({1, 2});
    v.push_back({2, 4});
    v.push_back({3, 8});
    std::cout << "all_of: " << Fun::allOf(v.begin(), v.end(), [](const CPoint &p) { return p.y % 2 == 0; }) << std::endl;

    std::vector<int> v2;
    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);

    std::cout << "is_sorted: " << Fun::isSorted(v2.begin(), v2.end(), [](int n1, int n2) { return n1 <= n2; }) << std::endl;


    vector<string> v3{"hello", "qqq", "tot"};

    std::cout << "is_palindrome:" << std::endl;
    for (int i = 0; i < v3.size(); i++) {
        std::cout << Fun::is_palindrome(v3[i].begin(), v3[i].end(), [](char c1, char c2) { return c1 == c2; }) << std::endl;
    }
    return 0;
}
