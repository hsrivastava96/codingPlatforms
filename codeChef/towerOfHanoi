#include <iostream>
using namespace std;

void toh(int n, char *s, char *d, char *a)
{
    if (n == 1)
        cout<<"Moving "<<n<<" from "<<s<<" to "<<d<<endl;
    else
    {
        toh(n-1, s, a, d);
        cout<<"Moving "<<n<<" from "<<s<<" to "<<d<<endl;
        toh(n-1, a, d, s);
    }
}

int main() 
{
	// your code goes here
	
	int n;
	cin>>n;
	toh(n, "Source", "Destination", "Auxilary");
	return 0;
}
