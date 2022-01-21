#include <iostream>
#include <limits>
using namespace std;

main()
{

float height, weight, BMI;

cout<<"BMI CALCULATOR\n"<<endl;
cout<<"Disclaimer: BMI is not an accurate measure of a person's health nor does it determine whether one has a health issue. It merely serves as a general guideline. Please consult a medical professional if there are any concerns regarding your health for more information."<<endl;
cout<<"What is your height in meters?"<<endl;

while (true)
{
    cin>>height;

    if(!cin) {
        cout <<endl<<"Invalid value. Please input a valid number for your height."<<endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); }

    else if (height<0.5) {
        cout<<endl<<"Children don't need to measure their BMI!"<<endl;
        cout<<"Please input your height in meters again."<<endl; }

    else if (height>=3.0) {
        cout<<endl<<"Yer a giant, Harry!"<<endl;
        cout<<"Please input your height in meters again."<<endl; }

    else
        break;
}

if (height>=2.0) {
    cout<<endl<<"You're tall!"<<endl; }

cout<<endl<<"What is your weight?"<<endl;

    while (true) {
        cin>>weight;

        if (!cin) {
            cout<<endl<<"Invalid value. Please input a valid number for your weight."<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); }

        else
            break;
   }

BMI=weight/(height*height);

cout<<endl<<"Your BMI is: "<<BMI<<endl;

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
