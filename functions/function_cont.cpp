#include<iostream>
using namespace std;


int result(int n)
{
    int arr[n];
    int sum = 0;
    cout<<"Enter marks: \n";
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    sum+=arr[i];
}

return sum;

}

int main()
{
    int n;
    cout<<"Enter how many subjects: ";
    cin>>n;

   result(n);
    return 0;
}