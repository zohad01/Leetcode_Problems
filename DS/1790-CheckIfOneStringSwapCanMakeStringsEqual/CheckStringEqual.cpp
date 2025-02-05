class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
       if(s1 == s2) return true;
       vector<int> diffIndex;
       for(int i = 0; i < s1.size(); i++){
        if(s1[i] != s2[i]){
            diffIndex.push_back(i);
        }
        if(diffIndex.size() == 2){
            int i = diffIndex[0] , j = diffIndex[1];
            swap(s2[i], s2[j]);
            return s1 == s2;
        }
       }
       return false;
    }
};