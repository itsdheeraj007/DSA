
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {

        int n = a.size();
        int m = b.size();

        vector<int> ans;

        int i = 0;
        int j = 0;

        // Traverse both arrays
        while (i < n && j < m) {

            int currentValue;

            if (a[i] < b[j]) {
                currentValue = a[i];
                i++;
            }
            else if (a[i] > b[j]) {
                currentValue = b[j];
                j++;
            }
            else {
                currentValue = a[i];
                i++;
                j++;
            }

            // Avoid duplicates
            if (ans.empty() || ans.back() != currentValue) {
                ans.push_back(currentValue);
            }
        }

        // Process remaining elements of array a
        while (i < n) {
            if (ans.empty() || ans.back() != a[i]) {
                ans.push_back(a[i]);
            }
            i++;
        }

        // Process remaining elements of array b
        while (j < m) {
            if (ans.empty() || ans.back() != b[j]) {
                ans.push_back(b[j]);
            }
            j++;
        }

        return ans;
    }
};

int main() {

    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {1, 2, 3};

    Solution obj;

    vector<int> result = obj.findUnion(a, b);

    cout << "Union of two arrays: ";

    for (int x : result) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}
