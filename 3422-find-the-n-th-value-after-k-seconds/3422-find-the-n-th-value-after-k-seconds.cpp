class Solution {
public:
long M = 1000000007;
   void sum(long arr[],int n){
        long sum=arr[0];
        for(int i=1;i<n;i++){
            int num=arr[i];
             arr[i]=(sum+arr[i]) % M;
             sum+=num % M; 
        }
   }
    int valueAfterKSeconds(int n, int k) {
        long arr[n];
         for(int i=0;i<n;i++){
            arr[i]=1;
         }
         while(k>0){
            sum(arr,n);
            k--;
         }
        long ans=arr[n-1];
         
     return ans;   

    }
};