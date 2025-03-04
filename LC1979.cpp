#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>

using namespace std;

int findGCD(vector<int>& v){
  int smallest = *min_element(v.begin(), v.end());
  int greatest = *max_element(v.begin(), v.end());

  return gcd(smallest, greatest);
  // this gcd only support from c++17
  // return gcd(v);
}

int main(){
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i =0;i<n;i++){
    cin>>v[i];
  }

  int result = findGCD(v);

  cout<<"The gcd of the array is: "<<result<<endl;
  return 0;
}