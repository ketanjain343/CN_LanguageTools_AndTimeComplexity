
int FindUnique(int arr[], int size){
    int res=0;
    for(int i=0;i<size;i++)
    {
        res = res ^ arr[i];
    }
    return res;
}