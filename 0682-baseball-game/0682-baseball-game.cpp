class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        int sum=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                s.pop();
            }
            else if(operations[i]=="D"){
                int val = s.top()*2;
                s.push(val);
            }
            else if(operations[i]=="+"){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.push(a);
                s.push(a+b);
            }
            else{
                s.push(stoi(operations[i]));
            }
        }
        while(!s.empty()){
            sum += s.top();
            s.pop();
        }
        return sum;
    }
};