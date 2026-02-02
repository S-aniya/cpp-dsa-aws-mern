#include <iostream>
using namespace std;

bool isVowel(char ch)
{
    ch=tolower(ch);
    if(ch=='a' || ch=='e' || ch=='i'|| ch=='o' || ch=='u')
    {
        return true;
    }
    return false;
}
int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    //single character
    if(s.length()==1)
    {
        cout<<s;
        return 0;
    }
    //converting to lowercase for better and easier comparison
    for(char &c : s) 
    {
    c = tolower(c);
    }

    //creating an empty string;
    string e;
    if(isVowel(s[0])) //when first is vowel
    {
        e=s+"yay";
        cout<<e;
        return 0;
    }   

    else if(!isVowel(s[0]))
    {
        if(s[0]=='q' && s[1]=='u') // when first two are qu
        {
            e=s.substr(2)+"qu"+"ay";
            cout<<e;
            return 0;
        }  
        if(s[0]=='y' && !isVowel(s[1])) //when first is y and then is a consonant
        {
            e=s+"yay";
            cout<<e;
            return 0;
        }  

        else //when first is consonant
        {
            e=s.substr(1) + s[0] + "ay";
            cout<<e;
            return 0;
        }
        
        
    }
}