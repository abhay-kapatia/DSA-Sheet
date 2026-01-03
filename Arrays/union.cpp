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
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // Two pointer approach requires sorted arrays
    
        int i = 0, j = 0;
        int sa = a.size(), sb = b.size();
        vector<int> uni;

        while (i < sa && j < sb) {
            if (a[i] == b[j]) {
                if (uni.empty() || uni.back() != a[i])
                    uni.push_back(a[i]);
                i++;
                j++;
            }
            else if (a[i] < b[j]) {
                if (uni.empty() || uni.back() != a[i])
                    uni.push_back(a[i]);
                i++;
            }
            else {
                if (uni.empty() || uni.back() != b[j])
                    uni.push_back(b[j]);
                j++;
            }
        }

        // Remaining elements of a[]
        while (i < sa) {
            if (uni.empty() || uni.back() != a[i])
                uni.push_back(a[i]);
            i++;
        }

        // Remaining elements of b[]
        while (j < sb) {
            if (uni.empty() || uni.back() != b[j])
                uni.push_back(b[j]);
            j++;
        }

        return uni;
    }
};

