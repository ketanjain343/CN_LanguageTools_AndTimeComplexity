// arr - input array
// size - size of array
// d - array to be rotated by d elements

void Rotate(int arr[], int d, int size) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output.
     * Taking input and printing the output is handled automatically.
     */
	int sec[d];
  for(int i=0;i<d;i++)
  {
    sec[i]=arr[i];
  }
  for(int i=d;i<size;i++)
  {
    arr[i-d]=arr[i];
  }
  for(int i=0;i<d;i++)
  {
    arr[size-d+i]=sec[i];
  }
}	
