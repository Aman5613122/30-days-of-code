//leetcode questions

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      int i=0,j=0;
        vector<int>v;
        while((m != i) && (n != j))
        {
            if(nums1[i] > nums2[j])
            {
                v.push_back(nums2[j]);
                j++;
            }
            else{
                v.push_back(nums1[i]);
                i++;
            }
        }
        
        if(m != i)
        {
            for(int k=i;k<m;k++)
            {
                v.push_back(nums1[k]);
            }
        }
        else if(n != j)
        {
            for(int k=j;k<n;k++)
            {
                v.push_back(nums2[k]);
            }
        }
        
        nums1.clear();
        copy(v.begin(),v.end(),back_inserter(nums1));
    }
};
