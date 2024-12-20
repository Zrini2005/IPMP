class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        set<int> s;
        for(int i =0;i<a.size();i++){
            s.insert(a[i]);
        }
        for(int i =0;i<b.size();i++){
            s.insert(b[i]);
        }
        vector<int> ans;
        for (auto it = s.begin(); it != s.end(); ++it) {
            ans.push_back(*it);
        }
        return ans;
    }
};