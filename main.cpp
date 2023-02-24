#include <vector>
#include <iostream>
using namespace std;

long  getSum(vector <int> v)
{
    long sum = 0;
    for(int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    return (sum);
}
int main(void)
{
    vector <int> v {1,2,3,4,5,6,7,8,9,10};
    cout << getSum(v) << "\n";
    return (0);
}