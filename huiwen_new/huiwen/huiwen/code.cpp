#include <iostream>
#include <string>

using namespace std;

int main() {
string code;
cin >> code;
int cnt = 0;
int maxCnt = 0;

for (int i=0; i<code.size(); i++) 
{
for (int j=code.size()-1; j>i; j--) 
{
if (code[i] == code[j]) 
{
int n=i;
int m=j;
int cnt = 0;
for (;n<m ; n++, m--) 
{
if (code[n] != code[m]) 
{
break;
} 
else 
{
cnt ++;
}
}
if (n-m == 1) 
{
cnt *= 2;
}
else if(n == m)
{
cnt = cnt * 2 + 1;
}
else
{
cnt = 0;
}

if (cnt > maxCnt)
{
maxCnt = cnt;
}
}
}
}
cout << ((maxCnt == 0) ? 1 :maxCnt) << endl;
}