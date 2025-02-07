class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        int l=0,r=0;
        long long int ans=0,sum=0;
        int size=arr.size();
        while(size!=r){
            sum+=arr[r];
            if(r-l+1==k){
                ans=max(ans,sum);
                sum-=arr[l];
                l++,r++;
            }
            else r++;
        }
        return ans;
    }
};