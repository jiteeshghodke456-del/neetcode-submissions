class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // stack<int> p;
        vector<int> p;

        for (int i = 0; i < nums.size()-1; i++){
            for (int j = i+1; j < nums.size(); j++){

                if (target == (nums[i] + nums[j])){
                     p.push_back(i);
                     p.push_back(j);
                     return p; //cant return stack !! only vector 

                }
                

            }
        }
        
    }
};
