#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pos = 0; // position for next non-zero element

        for (int num : nums) {
            if (num != 0)
                nums[pos++] = num;
        }

        while (pos < nums.size())
            nums[pos++] = 0;
    }
};

int main() {
    Solution s;
    vector<int> nums = {0, 1, 0, 3, 12};

    s.moveZeroes(nums);

    cout << "Result: ";
    for (int x : nums)
        cout << x << " ";
    cout << endl;

    return 0;
}
