// REVERSE AN ARRAY

void reverseArray(int arr[], int n) {
    // Code here
    //void reverseArray(int arr[], int n) {
    // Code here
    int i,temp;
    for(i=0;i<n/2;i++)
    {
   temp=arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=temp;}


}

