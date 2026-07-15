class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
          int n1 = nums1.size();
          int n2 = nums2.size();
          if(n1>n2){
            return findMedianSortedArrays(nums2,nums1);
          }
          int l = 0;
          int h = n1;
          int l1;
          int l2;
          int r1;
          int r2;
          while(l<=h){
              l1 = -1e9;
           l2 = -1e9;
         r1 =  1e9;
           r2 = 1e9;
            int mid1 = (l+h)/2;
            int mid2 = ((n1+n2 + 1)/2) - mid1;
            if(mid1>0){
                l1 = nums1[mid1-1];
            }
            if(mid2>0){
                l2 = nums2[mid2-1];
            }
            if(mid1<n1){
                r1 = nums1[mid1];
            }
            if(mid2<n2){
                r2 = nums2[mid2];
            }
            if(l1<=r2 && l2<=r1){
                break;

            }else if(l1>r2){
                h = mid1-1;
            }else{
                l = mid1+1;
            }

          }
          if((n1+n2)%2==0){
            return (max(l1,l2) + min(r1,r2))/2.0;
          }
          return (double)max(l1,l2);
    }
};