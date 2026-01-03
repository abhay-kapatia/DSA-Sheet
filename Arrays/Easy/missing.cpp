class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int xori=0;
        for(int i=0;i<arr.size();i++){
            xori=xori ^ arr[i];
        }
        for(int i=1;i<=arr.size()+1;i++){
            xori=xori ^ i;
        }
        return xori;
    }
};
