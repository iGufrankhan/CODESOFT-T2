#include<iostream>
using namespace std;
                 


int main(){
    int k;

   
do{
               cout<<"\n\t\t\t..........Simple Calculator................"<<endl;
            cout<<"\n\t\t\t\t\tloading......"<<endl;
            cout<<"\t\t\t\t\t...."<<endl;


double num1,num2;
char op;
cout<<endl;
cout<<"Enter the value of number1: ";

cin>>num1;
cout<<endl;
cout<<"Enter the value of number2: ";

cin>>num2;
cout<<endl;
cout<<"Enter the operator (+ - * /) : ";

cin>>op;



switch(op){


    case '+':
    cout<<"The addition of nums1 and nums2 is  ";
    cout<<num1<<op<<num2<<"="<<num1 + num2<<endl<<endl;
    break;
    case '-':
     cout<<"The substraction of num1 and nums2 is   ";
    cout<<num1<<op<<num2<<"="<<num1 - num2<<endl<<endl;
    break;
    case '*':
     cout<<"The multiplication of nums1 and nums2 is    ";
    cout<<num1<<op<<num2<<"="<<num1 * num2<<endl<<endl;
    break;
    case '/':
    if(num2==0.0){
        cout<<" Error! Divide by Zero! situation"<<endl<<endl;
    }
    else {
         cout<<"The division of num1 and nums2 is    ";
    cout<<num1<<op<<num2<<"="<<num1/num2<<endl<<endl;
    }
    break;


    default :
    cout<<"Invalid operator.."<<endl;
    cout<<"Please select a valid operator"<<endl;
    
}

cout<<"\n\t\t\t..................................................."<<endl<<endl;
cout<<"Press 1 for continue : "<<endl;
cout<<"press 0 for exit :"<<endl;
cout<<"\n\t\tDo you want to continue  to use or not(1/0) : ";
cin>>k;




}while(k);

cout<<"\n\t\t\t................Thank You For Using This calculator....."<<endl<<endl;



}