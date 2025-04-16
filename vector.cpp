#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec={1,2};
    vec.push_back(25);
    vec.pop_back();
    cout<<"size= "<< vec.size() <<endl;
    for(int val: vec)
    {
        cout<<vec.at(0)<<endl;
    }
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
  return 0;
}
