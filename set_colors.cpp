class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> mem;
        int flag=0;
        
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            mem[nums[i]]++;
        }
        
        for(int i=0;i<n;)
        {
            while(mem[flag]>0)
            {
                nums[i]=flag;
                i++;
                mem[flag]--;
            }
            flag++;
        }
    }
};
