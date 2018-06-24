#include<iostream>
#include<map>
#include<vector>
#include<string>
using namespace std;

int main()
{
    string s1 = "This is a string";
    string s2 = "This is a different string";
    string s3 = "This is a string";

    if(s1 == s2)
        cout<<"s1 and s2 are equal"<<endl;
    else
        cout<<"s1 and s2 are not equal"<<endl;

    if(s1 == s3)
        cout<<"s1 and s3 are equal"<<endl;
    else
        cout<<"s1 and s3 are not equal"<<endl;

    return 0;

}