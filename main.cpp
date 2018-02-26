#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution {
public:
  /*  int findMin(vector<int> &num) {
        if(num.empty())
            return 0;
        vector<int>::iterator iter = min_element(num.begin(), num.end());
        return *iter;

};*/
class Solution {
public:
    int findMin(vector<int> &num) {
        if(num.size() == 0) return 0;
        if(num.size() == 1) return num[0];
        else{
           int i;
           for(i = 1;i < num.size();i++)
           {
               cout << "num[i] :" << num[i] <<endl;
               if(num[i] < num[i - 1]) return num[i];
           }
           return num[0];
        }
    }
};
int main()
{
    Solution solve;
    cout << "Hello world!" << endl;
    vector<int> test;
    test.push_back(1);
    test.push_back(1);
   /* test.push_back(6);
    test.push_back(7);
    test.push_back(0);
    test.push_back(1);
    test.push_back(2);*/

    int res = solve.findMin(test);
    cout << "res: "<<res <<endl;
    return 0;
}
