class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int count=0;
        for(auto i=nums.begin();i!=nums.end();i++)
        {
           
           
            
          if(*i==-999)
          {
              continue;
          }
            
            for(auto j=i+1;j!=nums.end();j++)
            {
                
                if(*i==*j)
                {
                   *j=-999;
                    count++;
                }
                else{
                    break;
                }
            }
            
            
        }
        
         sort(nums.begin(),nums.end());
        nums.erase(nums.begin(),nums.begin()+count);
        
        
        return nums.size();

        
    }
    
};
//we can also use two pointer approach to minimize time complexitiy
