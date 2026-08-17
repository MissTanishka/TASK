#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;

long long actualSum=0;
for(int i=0;i<n;i++){
int x;
cin>>x;
actualSum +=x;
}

long long expectedSum = (long long) (n+1)*(n+2)/2;
cout<< expectedSum - actualSum<< endl;
return 0;

}
