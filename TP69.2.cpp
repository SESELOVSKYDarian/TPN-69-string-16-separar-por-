#include <iostream>
#include <string>
using namespace std;
string InsertarComa(string f);
int main()
{
    string frase;
    cout<<"Ingrese frase: ";
    getline(cin, frase);
    cout<<InsertarComa(frase)<<endl;
    return 0;
}

string InsertarComa(string f)
{
    string s=",";
    for (int i=1; i<f.size(); i+=2)
    {
        f.insert (i, s);
    }
    return f;
}