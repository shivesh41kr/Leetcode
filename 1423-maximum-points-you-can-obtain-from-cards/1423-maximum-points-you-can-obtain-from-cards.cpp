class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size()-1;
        int sumL=0,sumR=0,total=0;
        int left=0,right=n;
         if(k-1==n){
           for(int i=0;i<k;i++){
           sumL+=cardPoints[i];
        }  
             return sumL;
         }
        for(int i=0;i<k;i++){
                sumL+=cardPoints[i];
               
            }
        int runner=k;
        total=sumL;
        sumR=sumL;
       while(k-1){
           sumR+=cardPoints[right]-cardPoints[k-1];
           right--;
          
           total=max(total,sumR);
           
           k--;
       }
        right=n;
        sumR=0;
         while(runner){
                sumR+=cardPoints[right];
        right--;
               runner--;
            }
          total=max(total,max(sumL,sumR));
        
        return total;
    }
};