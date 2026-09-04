class Solution {
    public boolean uniformArray(int[] nums1) {

       int n  = nums1.length;
       int smallODD = Integer.MAX_VALUE;
       int smallEVEN = Integer.MAX_VALUE;

       for (int i=0; i < n; i++ ){
        if (nums1[i] %2 !=0)
        smallODD = Math.min(smallODD, nums1[i]);

        else 
        smallEVEN = Math.min(smallEVEN, nums1[i]);
       }

       if (smallODD == Integer.MAX_VALUE)
       return true;

       else if (smallEVEN < smallODD)
       return false;
       
       else 
       return true;
        
    }
}
