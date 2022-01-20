#include <iostream>
using namespace std;

main()
{

float height, weight, BMI;

cout<<"BMI CALCULATOR"<<endl;
cout<<"What is your height in meters?"<<endl;

while (true)
{
    cin>>height;

    if (height<0.5) {
        cout<<"Children don't need to measure their BMI!"<<endl;
        cout<<"Please input your height in meters again."<<endl; }

    else if (height>=3.0) {
        cout<<"Yer a giant, Harry!"<<endl;
        cout<<"Please input your height in meters again."<<endl; }

    else
        break;
}

if (height>=2.0) {
    cout<<"You're tall!"<<endl; }

cout<<"What is your weight?"<<endl;
    cin>>weight;

BMI=weight/(height*height);

cout<<"Your BMI is: "<<BMI<<endl;

if (BMI<18.5) {
    cout<<"Underweight"<<endl;
    cout<<"Associated health risks: Moderate"<<endl; }
    
if (BMI>=18.5 && BMI<=24.9) {
    cout<<"Normal"<<endl;
    cout<<"Associated health risks: Low"<<endl; }

if (BMI>=25 && BMI<=29.9) {
    cout<<"Overweight"<<endl;
    cout<<"Associated health risks: Moderate"<<endl; }

if (BMI>=30 && BMI<=39.9) {
    cout<<"Obese"<<endl;
    cout<<"Associated health risks: High"<<endl; }

if (BMI>=40) {
    cout<<"Morbidly Obese"<<endl;
    cout<<"Associated health risks: Severe"<<endl; }
}
