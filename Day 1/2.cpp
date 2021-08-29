 // Double reverse makes it Forward
// Reverse first n-k-1 part, and its forward part
// if k=10 it only needs to be rotated  times (n=7)
//Then rotate n-k to last
//then reverse whole
 void reverse(vector<int>&nums,int a, int b){
        while(a<b){
            swap(nums[a],nums[b]);
            a++;
            b--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums,0,n-k-1);
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-1);
    }