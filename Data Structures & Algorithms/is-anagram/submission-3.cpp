class Solution {
public:
    bool isAnagram(string s, string t) {
    //     if (s.size() != t.size()){
    //         return false;
    //     }
    //     else{
    //     set<int> setted(s.begin(),s.end());
    //     set<int> setted2(t.begin(),t.end());
    //     if (setted == setted2) return true;
    //     else {
    //         return false;
    // }
    //     }
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if (t == s){ 
        return true;
        }
    else {
        return false;
        }
  }
};
