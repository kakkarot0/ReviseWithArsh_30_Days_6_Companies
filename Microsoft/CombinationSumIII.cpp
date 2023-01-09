class Solution {
public:
    void f(vector<int>&nums,vector<vector<int>>&ans,int n, int k, int start){
        if(n==0 && k==0){
            ans.push_back(nums);
            return;
        }
        if(k==0)return;
        for(int i=start;i<=9;++i){
            nums.push_back(i);
            f(nums,ans,n-i,k-1,i+1);// as start=1, so n=n-i i.e., 4, as we have consider an element so k=k-1 i.e., 1, and i=i+1 cuz we had taken i=1 into our account , so for finding combinations for 1 we have to take 2, 3, 4...9 into consideration, we cannot take 1 again into consideration
            nums.pop_back();// we have to find all combinations which are starting i i.e., intial i which was 1, now we have to find all combinations from next i i.e., i+1 i.e.,2, so we have  to pop 1
        //Now current vector is empty
        //now this process continuous further for 2, 3....9
        }
        return;
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>nums;
        vector<vector<int>>ans;
        f(nums,ans,n,k,1);
        return ans;
    }
};
