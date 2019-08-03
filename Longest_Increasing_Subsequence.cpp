vector<int> longestSubsequence(int *arr, int n){

    int* sec = new int[100001];
    
    for(int i=0;i<100001;i++)
    {
        sec[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        sec[arr[i]]++;
    }
    
    int maxSize = 1;
    int lastpos=1;
    int counter=0;
    for(int i=1;i<100001;i++)
    {
        if(sec[i] !=0)
        {
            counter++;
        }
        else
        {
            counter=0;
        }
        if(counter > maxSize)
        {
            maxSize = counter;
        }
    }
    
    vector<int> v2;
    counter=0;
    for(int i=0;i<100001;i++)
    {
        if(sec[i] !=0)
        {
            counter++;
        }
        else
        {
            counter=0;
        }
        if(counter == maxSize)
        {
            v2.push_back(i-maxSize+1);            
        }
    }
    
    int starting=-1;
    for(int i=0;i<n;i++)
    {
        int j;
        for(j=0;j<v2.size();j++)
        {
            if(arr[i]==v2[j])
            {
                break;
            }
        }
        if(j<v2.size())
        {
            starting = v2[j];
            break;
        }
    }
    
    v2.clear();
    vector<int> v1;
    for(int i=starting ;i<starting+maxSize;i++)
    {
        v1.push_back(i);
    }
    
    return v1;
}
