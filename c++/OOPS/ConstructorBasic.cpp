#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int marks;
    char grade;
    int age;


//constructor 
    student(string name,int marks,char grade,int age){
        this->name=name;
        this->marks=marks;
        this->grade=grade;
        this->age=age;
    }


    void getDetail(){
        cout<<name<<" "<<age<<" "<<marks<<" "<<grade<<endl;
    }
    void getName(){
        cout<<name<<endl;
    }
    void getAge(){
        cout<<age<<endl;
    }
    void getMarks(){
        cout<<marks<<endl;
    } 
    void getGrade(){
        cout<<grade<<endl;
    }

};



int main(){
    student utkarsh("utkarsh",100,'A',19);
    student naman("naman",0,'D',19); 
    utkarsh.getDetail();
    naman.getDetail();

}