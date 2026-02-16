#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="hello world";
    string s2="hi";

    // change specific index value

    // s[3]='#';
    // //but can't increase the string size
    // s[15]='$';

    //adding 2 strings
    // s=s+s2;
    // s+=s2;
    // s.append(s2);
    // s.append(" bye");

    //add something at the end 
    // s.push_back('a');// only one character
    // s+="Akg";

    // remove the last index
    // s.pop_back();
    // s.pop_back(); // one at a time

    // assign string
    // s="kajdnv";
    // s=s2;
    // s.assign(s2);
    // s.assign("ajnc");

    //erase from string
    // s.erase(5);// erase everything after index 5
    // s.erase(5,2); // erase 2 index from index 5; 

    // //replaceing from string
    // s.replace(5,2,"hi");// replace 2 values from index 5 with "--"

    // //inserting in string
    // s.insert(4,"no need");// onsert without deleting anything
    s.replace(5,0,"no need");

    cout << s << endl;
    return 0;
}