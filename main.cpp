#include <iostream>
#include "problems/problem_1.cpp"
#include "problems/problem_2.cpp"
#include "problems/problem_3.cpp"
#include "problems/problem_4.cpp"
#include "problems/problem_5.cpp"

using namespace std;

int main() {
    cout << "Problem 1\n";
    float consumed_water;
    cout << "Input consumed water:";
    cin >> consumed_water;
    cout << problemSolution1(consumed_water) << endl;

    cout << "Problem 2\n";
    float i, j, k;
    cout << "Input three values:";
    cin >> i >> j >> k;
    cout << problemSolution2(i, j, k) << endl;

    cout << "Problem 3\n";
    char S;
    float height;
    cout << "Input the first letter of Gender and height:";
    cin >> S >> height;
    cout << problemSolution3(S, height) << endl;

    cout << "Problem 4\n";
    std::string macAddress;
    cout << "Input MacAddress:";
    cin >> macAddress;
    cout << problemSolution4(macAddress) << endl;

    cout << "Problem 5\n";
    float x, y;
    char operation;
    cout << "Input 2 float numbers and the operation:";
    cin >> x >> operation >> y;
    cout << problemSolution5(x, operation, y) << endl;
    return 0;
}