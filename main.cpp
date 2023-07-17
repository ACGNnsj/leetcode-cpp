#include <iostream>
#include "[39]组合总和.cpp"



int main() {
    Solution solution;
    std::vector<int> candidates = {1, 2, 3, 4, 5, 6, 7, 10, 11, 14, 15, 16};
    int target = 17;
    auto res = solution.combinationSum(candidates, target);
    for (auto &vec : res) {
        for (auto &num : vec) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
