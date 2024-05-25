#include<iostream>
using namespace std;

// Grades Calculator

string coursegrade(float course){

if(course<50){
    return "F";
} else if(course>=50 && course<=54){
    return "D";
} else if(course>=55 && course<=59){
    return "D+";
} else if(course>=60 && course<=64){
    return "C";
} else if(course>=65 && course<=69){
    return "C+";
} else if(course>=70 && course<=74){
    return "B";
} else if(course>=75 && course<=79){
    return "B+";
} else if(course>=80 && course<=84){
    return "A-";
} else if(course>=85 && course<=100){
    return "A";
}

}

// Points calculator for GPA

float coursepoints(float course){

if(course<50){
    return 0.00;
} else if(course>=50 && course<=54){
    return 1.00;
} else if(course>=55 && course<=59){
    return 1.50;
} else if(course>=60 && course<=64){
    return 2.00;
} else if(course>=65 && course<=69){
    return 2.50;
} else if(course>=70 && course<=74){
    return 3.00;
} else if(course>=75 && course<=79){
    return 3.50;
} else if(course>=80 && course<=84){
    return 3.75;
} else if(course>=85 && course<=100){
    return 4.00;
}

}

float percentage(float a,float b,float c,float d,float e,float f){
   
   float percentage = ((a+b+c+d+e+f)/600) * 100;

    return percentage;
}


double GPA_CALCULATOR(float c1,float c2, float c3,float c4, float c5, float c6, int h1, int h2, int h3, int h4, int h5, int h6){

float sum_of_points = ((c1*h1)+(c2*h2)+(c3*h3)+(c4*h4)+(c5*h5)+(c6*h6)) ;
float total_credit_hours = h1+h2+h3+h4+h5+h6;
double gpa = sum_of_points/total_credit_hours;

return gpa;
    
}



void result(long long SAP[],string first_name[], string last_name[], int size, float course1[], float course2[], float course3[], float course4[], float course5[], float course6[],int c1[], int c2[], int c3[], int c4[], int c5[], int c6[]){

    
    cout<<endl<<endl;

    for(int i = 0; i < size ; i++){


        cout<<"SAP ID: "<<SAP[i]<<endl;
        cout<<"Name: "<<first_name[i]<<" "<<last_name[i]<<endl;
        cout<<"Course 1: "<<course1[i]<<" Grade: "<<coursegrade(course1[i])<<" Grade Points: "<<coursepoints(course1[i])<<endl;
        cout<<"Course 2: "<<course2[i]<<" Grade: "<<coursegrade(course2[i])<<" Grade Points: "<<coursepoints(course2[i])<<endl;
        cout<<"Course 3: "<<course3[i]<<" Grade: "<<coursegrade(course3[i])<<" Grade Points: "<<coursepoints(course3[i])<<endl;
        cout<<"Course 4: "<<course4[i]<<" Grade: "<<coursegrade(course4[i])<<" Grade Points: "<<coursepoints(course4[i])<<endl;
        cout<<"Course 5: "<<course5[i]<<" Grade: "<<coursegrade(course5[i])<<" Grade Points: "<<coursepoints(course5[i])<<endl;
        cout<<"Course 6: "<<course6[i]<<" Grade: "<<coursegrade(course6[i])<<" Grade Points: "<<coursepoints(course6[i])<<endl;
        cout<<"Overall Percentage: "<<percentage(course1[i],course2[i],course3[i],course4[i],course5[i],course6[i])<<endl;
        cout<<"GPA: "<<GPA_CALCULATOR(coursepoints(course1[i]),coursepoints(course2[i]),coursepoints(course3[i]),coursepoints(course4[i]),coursepoints(course5[i]),coursepoints(course6[i]),c1[i],c2[i],c3[i],c4[i],c5[i],c6[i])<<endl;

        cout<<endl<<endl<<endl;
    }

    

}



int main (){


    int n;
    cout<<"Enter no. of Students: "<<endl;
    cin>>n;

    long long SAPID[n];
    string firstname[n];
    string lastname[n];

    float course1[n];
    float course2[n];
    float course3[n];
    float course4[n];
    float course5[n];
    float course6[n];

    int credit_hours_cr1[n];
    int credit_hours_cr2[n];
    int credit_hours_cr3[n];
    int credit_hours_cr4[n];
    int credit_hours_cr5[n];
    int credit_hours_cr6[n];



    for (int i = 0; i < n ; i++)
    {
        cout<<"Enter your SAP ID:"<<endl;
        cin>>SAPID[i];


        cout<<"Enter your first name: "<<endl;
        cin>>firstname[i];
        cout<<"Enter your last name: "<<endl;
        cin>>lastname[i];

        cout<<endl;
        
        cout<<"Enter your course no.1 obtained marks: ";
        cin>>course1[i];
        cout<<"Enter course credit hours:";
        cin>>credit_hours_cr1[i];

        cout<<endl;


        cout<<"Enter your course no.2 obtained marks: ";
        cin>>course2[i];
        cout<<"Enter course credit hours:";
        cin>>credit_hours_cr2[i];

        cout<<endl;

        cout<<"Enter your course no.3 obtained marks: ";
        cin>>course3[i];
        cout<<"Enter course credit hours:";
        cin>>credit_hours_cr3[i];

        cout<<endl;

        cout<<"Enter your course no.4 obtained marks: ";
        cin>>course4[i];
        cout<<"Enter course credit hours:";
        cin>>credit_hours_cr4[i];

        cout<<endl;

        cout<<"Enter your course no.5 obtained marks: ";
        cin>>course5[i];
        cout<<"Enter course credit hours:";
        cin>>credit_hours_cr5[i];

        cout<<endl;

        cout<<"Enter your course no.6 obtained marks: ";
        cin>>course6[i];
        cout<<"Enter course credit hours:";
        cin>>credit_hours_cr6[i];

        cout<<endl;
    }

    result(SAPID,firstname,lastname,n,course1,course2,course3,course4,course5,course6,credit_hours_cr1,credit_hours_cr2,credit_hours_cr3,credit_hours_cr4,credit_hours_cr5,credit_hours_cr6);

    cout<<endl<<endl;

    cout<<"Program written by: Muhammad Ammar Qaisar "<<endl<<endl;

    cout<<endl<<endl;

    return 0;
}