#include <bits/stdc++.h> // why we import these all -> becouse in c++ there are lots of library and this <bits/stdc++.h> import lots thing so in interview don't use this becouse it takes time so interview m jo need ho wahi import karo    

using namespace std ;  // it is scope resolution and acess by :: so if you don'nt want use this then  agian and again use namespace std becouse c++ put all these function in namespace std like cout,cin etc;

// namespace raj {
//     int val = 10; 
// int getVal(){
//     return  val*10;
// }
// };  // you can declare with your own 

struct node{   //node self data type
    int num;
    double dub;
    string str;
    char x;  
    //Best way to difing is constructor type 
  node (str_, num_,dub_, x_){
    str =str_;
    num = num_;
    dub = dub_;
    x = x_;
  }

}

// if you define globaly like this it automatic store 0,0,0; and if you define localy like this then auto store garbase 

//Array<int ,3> => // {0,0,0}

int main (){
    double val =50;
    cout<< val << endl ; //print 50
    cout<< raj::val << endl ; //print 10

  //create a data type where you store -> self data type -> struct 
  {string ,int ,double,char}  //you can anything like arg stack etc;

//it work But worng way to defining 
  node raj;
  raj.str ="Ranjeet";
  raj.num = 20;
  raj.dub =521.55; 
 

 
  node raj = new node("Ranjeet" ,25 ,98.56 ,"")



// Container 
//1. Array Genraly int arr [100];

// angother way to defing
Array<int ,3> arr -> //{ ?, ? ,?} // automatic store the garbase  value 
 Array<int ,3> arr ={2,5,8}-> // {2,5,8,0,0}
 Array<int ,3> arr ={1}-> // {1,0,0,0,0} // not the intire array will zero

// functions of contianer 
Array<int ,5>arr;
arr.fill(10) //{10,10,10,10,10,}

for (int i =0,i<5,i++){
    cout<<arr.at(i)<<endl;
}




}