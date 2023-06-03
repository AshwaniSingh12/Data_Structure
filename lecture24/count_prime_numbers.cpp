#include<iostream>
using namespace std;
bool prime(int n)
{
    if(n<=1) return false;
        
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int count=0;
    for(int i=2;i<n;i++)
    {
        if(prime(i))
        {
            count++;
        }
    }
    cout<<count<<endl;
        
}


/* Sieve of Eratosthenes -->
    in this we let all the number as prime then start from 2 and mark 2 as prime
    then all the number is non prime which is lies in the table of two the increse
    the value 2 to 3 and so on.....

    class Solution {
    public:
    int countPrimes(int n) {
        int count = 0;
        vector<bool> prime(n+1 , true);
        prime[0] = prime[1] = false;
        for(int i=2;i<n;i++)
        {
            if(prime[i])
            {
                count++;
            
                for(int j=2*i;j<n;j=j+i)
                {
                    prime[j]=0;
                }
            }
        }
        return count;
    }
};

*/