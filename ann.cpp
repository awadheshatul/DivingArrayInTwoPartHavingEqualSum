#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{

    ofstream out;
    out.open("book");
    out<<"c++";
    out<<"JAVA";
    out.close();
    ifstream in;
//    in.open()
char dis[100];
in.open("book");
cout<<"BOOK DETails";
while(in)
{
gets(dis);

    cout<<dis;

}
in.close();
return 0;
}
