class Solution {
public:

    uint32_t reverseBits(uint32_t n) {

        
        uint32_t ans = 0;
        int i=31;
        
        while(n){
            ans += (n%2) * (1<<i);
            n/=2;
            i--;
        }

        return ans;
    }
};
