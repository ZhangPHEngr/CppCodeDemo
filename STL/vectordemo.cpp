#include<iostream>
#include<vector>
#include<algorithm>
#include <numeric>
using namespace std;

void func1(){
    vector<int> array;
    array.push_back(20);
    array.push_back(24);

    for(vector<int>::iterator it = array.begin(); it != array.end(); it++){
        cout<<(*it)<<endl;
    }
}

void func2(){
    vector<float> tmp;
    for (int i = 1; i<18;i++){
        tmp.push_back(i);
        double sum = std::accumulate(tmp.begin(), tmp.end(), 0.0);
        double mean =  sum / tmp.size(); //均值
        cout<<"avg = "<<mean<<endl;
    }

}
int main(){

    //func1();

    func2();

}
