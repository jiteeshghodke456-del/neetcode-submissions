class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    //     int ans = 0;
    //     for (int i = 0; i <= nums.size() ; i++){
            
    //         if ((nums[i] ^ nums[i+1]) == true && nums[i] == 1){
    //             ans += 1;
    //         }
    //         else{
    //             continue;
    //         }

    //     }
    //  return ans+1;
        
    // }
    int maxx=0;
    int counter=0;
    for (int i = 0; i < nums.size() ; i++) {
        if (nums[i] == 1) {
            counter++;
            if (maxx <= counter) maxx = counter;
        }
        if (nums[i] == 0) {
            counter = 0;
        }

    }
    
    return maxx;
    }
};