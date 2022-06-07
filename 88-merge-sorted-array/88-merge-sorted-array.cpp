class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         int n1=(m+n)-1;
         int n2=m-1;
         int n3=n-1;
        while(n2>=0 && n3>=0){
            if(nums1[n2]>nums2[n3]){
                nums1[n1]=nums1[n2];
                n1--;
                n2--;
            }
        
        else{
            nums1[n1]=nums2[n3];
            n1--;
            n3--;
        }
        }
        while(n3>=0){
            nums1[n1]=nums2[n3];
            n1--;
            n3--;
        }
    }
};