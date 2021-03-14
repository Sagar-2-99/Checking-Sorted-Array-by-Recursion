#include <iostream>

using namespace std;
bool checkingSorted(int b[],int a)
{
    if(a==1 || b==0)
    {
        return 1;
    }
    else if(b[0]>b[1])
    {
        return 0;
    }
    else
    {
        return checkingSorted(b+1,a-1);
    }

}

int main()
{
    while(1)
    {
        int c;
        cout<<"\npress 1 to continue or press 2 or any no. to quit"<<endl;
        cin>>c;
        if (c==1)
        {
            cout<<"Enter the size of the array"<<endl;
            int a;
            cin>>a;
            int b[a];
            for(int i=0; i<a; i++)
            {
                cout<<i+1<<" index element"<<endl;
                cin>>b[i];
            }
            if(checkingSorted(b,a))
            {
                cout<<"\nArray is Sorted!!"<<endl;
            }
            else
            {
                cout<<"\nArray is not Sorted!!"<<endl;
            }
        }
        else
        {
            break;
        }
    }
}
