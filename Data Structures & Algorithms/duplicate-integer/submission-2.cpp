class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    //     int left = 0;
    //     int right = nums.size() - 1;

    //     if(nums.size() == 2){
    //         if(nums[0] == nums[1]){
    //         return true;
    //         }
    //     }   
    //       else{
    //         return false;
    //       }   
        
    //     while(left == (nums.size() - 2)){
            
    //         if(nums[left] == nums[right]){

    //              return true; 
    //              break;
    //         }

    //         else if (right > left){
    //             right--;

    //         }
    //         else {
    //             right = nums.size()-1;
    //             left++;
    //         }
    //     }
    //       if(nums[nums.size()-2]==nums[nums.size()-1]){
    //         return true;
    //       }        
    //       else{
    //         return false;
    //       }

        
    // }
    set<int> hehe(nums.begin(),nums.end());
    if (hehe.size() != nums.size()){
        return true;
    }
    return false;
    }
};