
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        // Sort both arrays
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int n = nums1.size();
        int m = nums2.size();

        int i = 0;
        int j = 0;

        vector<int> ans;

        // Two pointer approach
        while (i < n && j < m) {

            if (nums1[i] < nums2[j]) {
                i++;
            }
            else if (nums1[i] > nums2[j]) {
                j++;
            }
            else {
                int currentValue = nums1[i];

                // Avoid duplicates
                if (ans.empty() || ans.back() != currentValue) {
                    ans.push_back(currentValue);
                }

                i++;
                j++;
            }
        }

        return ans;
    }
};

int main() {

    vector<int> nums1 = {1, 2, 2, 3};
    vector<int> nums2 = {2, 2, 3, 4};

    Solution obj;

    vector<int> result = obj.intersection(nums1, nums2);

    cout << "Intersection: ";

    for (int x : result) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}
