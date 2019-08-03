// arr - input array
// size - size of array

int MissingNumber(int arr[], int size){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    int sec[size];
  for(int i=0;i<size;i++)
  {
    sec[i]=0;
  }

  for(int i=0;i<size;i++)
  {
    sec[arr[i]]++;
  }
  
  int res;
  for(int i=0;i<size;i++)
  {
    if(sec[i]==2)
    {
      res=i;
    }
  }
return res;
}
