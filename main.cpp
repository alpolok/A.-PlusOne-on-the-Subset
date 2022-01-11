#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0; i<n; i++)
            cin>>ar[i];
        int sum=0;
        sort(ar,ar+n);
        int maxi=*max_element(ar,ar+n);
        int i=0,m=0;
        while(i<n)
        {
            sum=maxi-ar[i];
            if(sum>m)
            {
                m=sum;
            }
            i++;

        }

        cout <<m<< endl;



    }
}
