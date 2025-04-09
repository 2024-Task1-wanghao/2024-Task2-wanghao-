#include <iostream>
#include <string>

using namespace std;


bool F(const string& str) {
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        if (str[left]!= str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(F(arr[i]))
        {
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}
