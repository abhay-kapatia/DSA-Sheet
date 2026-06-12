//Brute Force Or when arrays are unsorted
class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        set<int> s;
        for(int i = 0; i<a.size();i++){
            s.insert(a[i]);
        }
        for(int i = 0; i<b.size(); i++){
            s.insert(b[i]);
        }
        vector<int> temp(s.begin(), s.end());
        return temp;
    }
};

//Optimal 2 - pointer must be sorted arrays
class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int i = 0;
        int j = 0;
        vector<int> temp;
        // 2 - pointer approach O(N)
        while(i<a.size()&&j<b.size()){
            if(a[i]==b[j]){
                if (temp.empty() || temp.back() != a[i])
                    temp.push_back(a[i]);
                
                i++;
                j++;
            }else if(a[i]<b[j]){
                if (temp.empty() || temp.back() != a[i])
                    temp.push_back(a[i]);
                
                i++;
            }else{
                if (temp.empty() || temp.back() != b[j])
                    temp.push_back(b[j]);
               
                j++;
            }
        }
        // inserting the remaining from a
        while(i<a.size()){
            if (temp.empty() || temp.back() != a[i])
                    temp.push_back(a[i]);
            
            i++;
        }
        // inserting the remaining from a
        while(j<b.size()){
            if (temp.empty() || temp.back() != b[j])
                    temp.push_back(b[j]);
            
            j++;
        }
        return temp;
    }
};
