#include <iostream>
using namespace std;

main() {

float height, weight, BMI;

cout<<"BMI CALCULATOR"<<endl;
cout<<"What is your height in meters?"<<endl;

cin>>height;

if (height<0.5) {
    cout<<"Children don't need to measure their BMI!"<<endl;
    cout<<"Please input your height in meters again."<<endl;
    cin>>height; }

else if (height>=3.0) {
    cout<<"Yer a giant, Harry!"<<endl;
    cout<<"Please input your height in meters again."<<endl;
    cin>>height; }

else if (height>=2.0) {
    cout<<"You're tall!"<<endl; }


cout<<"What is your weight?"<<endl;
cin>>weight;

BMI=weight/(height*height);

cout<<"Your BMI is: "<<BMI<<endl;
}
