//leetcode questions

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        int n1 = nums1.size();
        
        sort(nums2.begin(),nums2.end());
        auto it = unique(nums2.begin(),nums2.end());
        nums2.resize(distance(nums2.begin(), it));
        
        int n2 = nums2.size();
        
        
        unordered_map<int,int>m;
        vector<int>v;
        
        for(int i=0;i<n1;i++)
        {
            m[nums1[i]]++;
        }
        
        for(int i=0;i<n2;i++)
        {
            if(m.find(nums2[i]) != m.end())
            {
                v.push_back(nums2[i]);
            }
        }
        
        return v;
        
    }
};
