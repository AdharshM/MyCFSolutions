// Solution to the problem Vanya And Fence (Codeforces) 
// Link : https://codeforces.com/contest/677/problem/A

/*				
			***************************************************************************************************************
		
					          ***********		*************************
					         *               *		* 	 *	 *   
					        *	         *		*     	 *	 *
					       *	          *		*     	 * 	 *
					      *	           *		*     	 *	 *
					     *****************		*        	 *	 *	
					    *	             *		* 	 	 *
					   *                           *		*	 	 *
					  *                             *		*	 	 *
					 *                               *	*	 	 *
					*		*	*		 *

			***************************************************************************************************************
*/

#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,h;
    cin>>n>>h;
    int a[n];
    int s1=0,s2=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=h)
            s1++;
        else
            s2+=2;
    }
    cout<<s1+s2<<endl;
    return 0;
}
