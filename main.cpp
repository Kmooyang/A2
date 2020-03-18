#include <vector>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

    vector<int> data;
    ifstream file;
    file.open("/Users/kevin/Desktop/Spring 2020/CSC139/Homework/A2/Code/numbers.txt");
    //vector<char> path;
    copy(istream_iterator<int>(file), istream_iterator<int>(), back_inserter(data));

    int pid[20];
    int arrival_time[20];
    int burst_time[20];
    int x=1;
    int index=0;
    while (!data.empty())
    {
        for (auto i = data.begin(); i != data.end(); ++i) {
            switch(x){
                case 1:
                    pid[index]= (int) i ;
                    break;

            }
        }
        index++;
    }


    return 0;
}