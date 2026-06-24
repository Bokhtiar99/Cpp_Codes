/*#include<iostream>

using namespace std;

class Student{

public:

    string Name;

    float CGPA;

};

int main(){

    Student S1; //S1 is an object of class Student

    S1.Name="ABC";

    S1.CGPA=3.77;

    cout<<"Student Name:"<<S1.Name<<endl;

    cout<<"Student CGPA:"<<S1.CGPA<<endl;

}*/


/*#include<iostream>

using namespace std;

class Student{

public:

    string Name;

private:

    float CGPA;

};

int main(){

    Student S1; //S1 is an object of class Student

    S1.Name="ABC";

    S1.CGPA=3.77;

    cout<<"Student Name:"<<S1.Name<<endl;

    cout<<"Student CGPA:"<<S1.CGPA<<endl;

}*/


/*#include<iostream>

using namespace std;

class Student{

public:

    string Name;

protected:

    float CGPA;

};

int main(){

    Student S1; //S1 is an object of class Student

    S1.Name="ABC";

    S1.CGPA=3.77;

    cout<<"Student Name:"<<S1.Name<<endl;

    cout<<"Student CGPA:"<<S1.CGPA<<endl;

}
*/


#include<iostream>

using namespace std;

class Student{

public:

    string Name;

    string ID;

private:

    float cgpa;

protected:

    int age;

public:

    void InputInfo(string NM, string id, float cg, int ag){ //Method

        Name=NM;

        ID=id;

        cgpa=cg;

        age=ag;

    }

    void PrintInfo(){

        cout<<"Student Name:"<<Name<<endl;

        cout<<"Student ID:"<<ID<<endl;

        cout<<"Student CGPA:"<<cgpa<<endl;

        cout<<"Student Age:"<<age<<endl;

    }

};

int main(){

    Student S1;

    S1.InputInfo("ABC","24-3456-3",3.88,22);

    S1.PrintInfo();

}

