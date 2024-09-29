#include <bits/stdc++.h>
using namespace std;

//normal class formation
// class student{
//     public:
//     int age;
//     int marks;
//     char grade;
// };
// int main(){
//     student utkarsh;
//     utkarsh.age=19;
//     utkarsh.marks=100;
//     utkarsh.grade='O';
//     cout<<utkarsh.age<<endl;
//     cout<<utkarsh.marks<<endl;
//     cout<<utkarsh.grade<<endl;
// }

//USIGNG GETTER AND SETTER FUNCTION
class student{
    private:
    int age;
    int marks;
    char grade;

    public:
    //setter
    void setAge(int age){
        this->age =age;
    }
    void setMarks(int marks){
        this->marks=marks;
    }
    void setGrade(char grade){
        this->grade=grade;
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
    student utkarsh;
    utkarsh.setAge(19);
    utkarsh.setGrade('O');
    utkarsh.setMarks(100);
    utkarsh.getAge();
    utkarsh.getMarks();
    utkarsh.getGrade();

}