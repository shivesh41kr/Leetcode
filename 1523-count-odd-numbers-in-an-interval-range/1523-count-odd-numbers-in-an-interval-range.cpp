class Solution {
public:
    int countOdds(int low, int high){
       int numcount=(high-low)+1;
        if(low%2!=0 && high%2!=0){
           return (numcount+1)/2;
        }
      
            return numcount/2;
    }
};