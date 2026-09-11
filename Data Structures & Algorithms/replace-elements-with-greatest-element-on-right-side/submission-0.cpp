class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        
       for (int i = 0 ; i < arr.size() ; i++){
              int maxx = -1;
             for (int j = i+1 ; j < arr.size() ; j++){

                  if(arr[j]>maxx){
                    maxx = arr[j];
                  };

                  arr[i] = maxx;

             }
            //  arr[i] = maxx;

       }

       arr[arr.size()-1] = -1;
       return arr;

    }

};