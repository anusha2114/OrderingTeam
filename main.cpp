#include <iostream>

using namespace std;

int main()
{
    int t,s1,s2,s3;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>s1>>s2>>s3;
        if(s1<s2 && s1<s3 && s2<s3)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;

    }


    return 0;
}
