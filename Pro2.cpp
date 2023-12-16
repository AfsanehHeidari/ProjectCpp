#include <iostream.h>

int main()
{
    short n;
     cout<<"Please enter an integer number : ";
        cin>>n;
          unsigned int result=1;
             for(int fact=n;fact>0;fact--)
                    result*=fact;
      cout<<"\nThe factorial of "<<n<<"is = "<<result<<endl;
    return  0;
}
