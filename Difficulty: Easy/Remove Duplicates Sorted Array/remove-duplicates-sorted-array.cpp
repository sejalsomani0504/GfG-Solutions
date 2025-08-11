class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        int i = 0;
        for (int j = 1; j < arr.size(); j++) {
            if (arr[j] != arr[i]) {
                arr[i + 1] = arr[j];
                i++;
            }
        }
        // return only the unique part of the array
        return vector<int>(arr.begin(), arr.begin() + i + 1);
    }
};
