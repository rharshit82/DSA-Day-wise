 * 1. a max number has the property of decreasing in every digit: 9876
 * 2. find the first non-max substring from the right; ex. in 1234(59876), 59876 is the first non-max substring from the right
 * 3. sort the max part of 5(9876), by reverse, becames 5(6789);
 * 4. flip 5,6, becames 65789; because 6 is the next smallest digit than 5, in 56789;
 * 5. incase of 66789, you got flip 6 with 7 to make it 76689, to make it bigger.
 */

int nextGreaterElement(int n) {
        string s = to_string(n);
        int i = s.size()-2;
        while(i>=0 and s[i]>=s[i+1]){
            i--;
        }
        if(i==-1) return i;
        int j = s.size()-1;
        while(j>i and s[j]<=s[i]) j--;
        swap(s[i],s[j]);
        reverse(s.begin()+i+1, s.end());
        long ans = stol(s);
        return ans==n or ans>INT_MAX ? -1: ans;
    }
