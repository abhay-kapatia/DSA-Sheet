// 1st approach using mathematical formulae
class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n = arr.size();
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        long long expected = (long long)(n + 1) * (n + 2) / 2;
        return (int)(expected - sum);
    }
};

//2nd approach using XOR
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
