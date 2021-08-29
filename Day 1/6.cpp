// Since majority element comes more than n/2 times, it will cancel the numbers
//Ever time count=0, majority element gets cancelled

int majorityElement(vector<int>& nums) {
        int count=0, ele=0;
        for(auto i: nums){
            if(count==0){
                ele=i;
            }
            if(i==ele){
                count++;
            }else{
                count--;
            }
        }
        return ele;
    }