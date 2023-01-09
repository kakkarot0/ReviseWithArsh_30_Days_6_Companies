class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long>st;
        for(auto t:tokens){
            if(t!="+"&& t!="-"&&t!="*"&&t!="/"){
            st.push(stoi(t));
            }
            else{
                long long a=st.top();
                st.pop();
                long long b=st.top();
                st.pop();
                long long c;
                if(t=="+"){
                    c=a+b;
                }
                else if(t=="-"){
                    c=b-a;
                }
                else if(t=="*"){
                    c=a*b;
                }
                else if(t=="/"){
                    c=b/a;
                }
                st.push(c);
            }
        }
            return (int)st.top();
        }
        // first we are stacking the string and then two string are converted into the integer to perform the function

    
};
