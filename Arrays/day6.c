// MAJORITY ELEMENT 2

// User function Template for C
int* findMajority(int arr[], int n, int* resSize) {
    // code here
    int ele1=-1, ele2=-1,cnt1=0,cnt2=0;
    
    for(int i=0;i<n;i++){
        int ele=arr[i];
        if(ele1==ele){
            cnt1++;
        }
        else if(ele2==ele){
            cnt2++;
        }
        else if(cnt1==0){
            ele1=ele;
            cnt1=1;
        }
        else if(cnt2==0){
            ele2=ele;
            cnt2=1;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }
    cnt1=0;
    cnt2=0;
    
    for(int i=0; i<n;i++){
        if(arr[i]==ele1)cnt1++;
        else if(arr[i]==ele2)cnt2++;
    }
    int* res= (int*)malloc(2*sizeof(int));
    *resSize=0;
    
    if(cnt1>n/3)res[(*resSize)++]=ele1;
    if(cnt2>n/3)res[(*resSize)++]=ele2;
    
    if(*resSize==2 && res[0]>res[1]){
        int temp=res[0];
        res[0]=res[1];
        res[1]=temp;
    }
    return res;
}