class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int p = -1;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i]==0){
                p = i;
                break;
            }
        }
        if(p==-1) return;
        for(int i=p+1; i<arr.size(); i++){
            if(arr[i]!=0){
                swap(arr[i],arr[p]);
                p++;
            }
        }   
    }
};
