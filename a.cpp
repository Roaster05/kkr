#include <bits/stdc++.h>
using namespace std;
struct Node{
    int value=0;
};
long long int mode(long long int piesAte[], long long int size)
{
	long long int counter = 1;
	long long int max = 0;
	long long int modePie = piesAte[0];

	for (long long int i = 0; i < size - 1; i++)
	{
		if (piesAte[i] == piesAte[i+1])
		{
			counter++;
			if (counter > max)
			{
				max = counter;
				modePie = piesAte[i];
			}
		
		}
		else
			counter = 1;
	}

	return modePie;
}
int main()
{
    
        long long int n;
        cin>>n;
        map<int,Node> map;
        long long int a[n],k=0,u;
        cin>>a[0];
        map[a[0]].value++;
        cout<<a[0]<<endl;
        for(long long int j=1;j<n;j++)
        {
            long long int x;
            cin>>x;
            
            a[j]=a[j-1]+x;
            map[a[j]].value++;
            if(k<map[a[j]].value)
            {
            k=map[a[j]].value;
            u=a[j];
            }
            cout<<a[j]<<endl;
        }
        if(u!=0)
        cout<<k-1<<endl;
        else
        {
            int s=0;
            if(a[0]==0)
            s++;
            if(a[n-1]==0)
            s++;
            cout<<k+1-s<<endl;
        }
    

    return 0;
}