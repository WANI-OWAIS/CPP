#include<bits/stdc++.h>
using namespace std;
int myCount = 0;
void print(){
    if(myCount == 3)
        return;
        cout << myCount << endl;
        myCount++;
        print();
}
int main()
{
    print();

  return 0;
}