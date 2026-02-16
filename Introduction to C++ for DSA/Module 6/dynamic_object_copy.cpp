#include<bits/stdc++.h>
using namespace std;
class cricketer
{
    public:
    int jersey;
    string country;
    cricketer(int jersey,string country)
    {
        this->jersey=jersey;
        this->country=country;
    }
};
int main()
{
    cricketer* dhoni =new cricketer(88,"india");
    cricketer* koli = new cricketer(99,"india");

    // dhoni = koli;  //doesn't work

    // dhoni->country = koli->country;
    // dhoni->jersey = koli->jersey;
    *dhoni = *koli;
    delete koli;
    cout << dhoni->jersey << "  " << dhoni->country << endl;
    // cout << koli->jersey << " " << (*koli).country << endl;
    
    return 0;
}