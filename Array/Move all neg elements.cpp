class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        int b[n];
        int j=0;
        for(int i=0;i<n;i++){
            if(arr[i]>=0)b[j++]=arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]<0)b[j++]=arr[i];
        }
        for(int i=0;i<n;i++){
            arr[i]=b[i];
        }
    }
};
