class Solution {
public:
    int calPoints(vector<string>& operations) {

        stack<int> p;
        int a,b;
        int sum = 0;

        for(auto &x : operations) {
            if (x == "+") {
                a = p.top();
                p.pop();

                b = p.top();
                p.push(a);

                p.push(a+b);
            }
            else if (x == "D") {
                a = p.top();
                p.push(a*2);
            }
            else if (x == "C") {
                p.pop();
            }
            else{
                p.push(stoi(x)); // had forgotten stoi
            }

        }
       int summ = 0;
        while(!p.empty()){
            
            // p.top();
            summ +=             p.top();

            p.pop();
        }
        return summ;
    }
};