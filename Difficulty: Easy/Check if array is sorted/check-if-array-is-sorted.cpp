class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        for(int i=1;i<arr.size();i++){
            if (arr[i]>=arr[i-1]){
                
            }
            else{
                return false;
            }
        }
        return true;
    }
};