 	
	void PairSum(int *input, int n) {	 
		
	/* Don't write main().
     	* the input array is already passed as function argument.
     	* Don't need to return anything. Print the desired pairs in the function itself.
     	*/
      for(int i=0;i<n-1;i++)
      {
        for(int j=i+1;j<n;j++)
        {
          if(input[i] + input[j]==0)
          {
            cout<<min(input[i],input[j])<<" "<<max(input[i],input[j])<<endl;
          }
        }
      }
 	}

