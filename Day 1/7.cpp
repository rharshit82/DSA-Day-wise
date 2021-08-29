 //Max 2 numbers can appear more than floor(n/3) times as more than 1/3 + more than 1/3 = more than 2/3
 //Using hashmap it will take O(N) space using freq array and O(N) time.
 
 // We use moore voting algorithm. num1 and num2 will store majority elements
 Intuition : whenever c1 = 0 change num1 element same for c2.
 If majority = minority, c1=0. it gets eliminated.
 
 ______ c1=0_______c2=0(_______) last box will be the answer
 
 
 TC: O(N) + O(N)
 SC: O(1)
 
 
 vector<int> majorityElement(vector<int>& nums) {
        int num1=-1, num2=-1, c1=0, c2=0;
        int ele;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==num1){
                c1++;
            } else if(nums[i]==num2){
                c2++;
            }
            else if(c1==0){
                c1++;
                num1=nums[i];
            }
            else if(c2==0){
                c2++; num2=nums[i];
            }
            else{
                c1--;
                c2--;
            }
        }
        vector<int> res;
        c1=count(nums.begin(),nums.end(),num1);
        c2=count(nums.begin(),nums.end(),num2);
        if(c1>nums.size()/3) res.push_back(num1);
        if(c2>nums.size()/3 && num1!=num2) res.push_back(num2);
        return res;
    }
