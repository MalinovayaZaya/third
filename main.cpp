#include <iostream>
using namespace std;
struct data{
    char name[30];
    char surname[30];
    char patronymic[30];
    short int m1;
    short int m2;
    short int m3;
    short int m4;
    short int m5;
    short int m6;
float avg(short int m1,short int m2,short int m3,short int m4,short int m5,short int m6){
float s =(m1 + m2 + m3 + m4 + m5 + m6);
return s/6;
}

int stip(short int m1,short int m2,short int m3,short int m4,short int m5,short int m6){
if (m1 > 3 && m2 > 3 && m3 > 3 && m4 > 3 && m5 > 3 && m6 > 3) cout << "accrue a scholarship" << endl;
else cout << "don't accrue a scholarship" << endl;
return 0;
}

int dolg (short int m1,short int m2,short int m3,short int m4,short int m5,short int m6){
if (m1==2 || m2==2 || m3==2 || m4==2 || m5==2 || m6==2)  cout << "student has got debts" << endl;
else cout << " student hasn't got debts" << endl;
return 0;
}

};
float srs (data student[], int n){
float s[n];
float max1,max2,min1,min2,srs1;
for (int i=0; i<n; i++){
s[i]=student[i].m1 + student[i].m2 + student[i].m3 + student[i].m4 + student[i].m5 + student[i].m6;
s[i]=s[i]/6;
}
max1=s[0];
for (int i=0; i<n; i++){
if (s[i] > max1) max1=s[i];
}
cout << " max1= " << max1;
max2=s[0];
for (int i=0; i<n; i++){
if (s[i] > max2&& s[i] < max1) max2=s[i];
}
cout << " max2= " << max2;
min1=s[0];
for (int i=0; i<n; i++){
if (s[i] < min1) min1=s[i];
}
cout << " min1= " << min1;
min2=s[0];
for (int i=0; i<n; i++){
if (s[i] < min2&& s[i] < min1) min2=s[i];
}
cout << " min2= " << min2 << endl;
srs1=0;
for (int i=0; i<n; i++) {
if(s[i]!=max1 || s[i]!=max2 || s[i]!=min1 || s[i]!=min2)
srs1+=s[i];
}
return srs1/n;
}
int accr (data student[], int n){
int k=0;
for (int i=0; i<n; i++){
if (student[i].m1>3 && student[i].m2>3 && student[i].m3>3 && student[i].m4>3 && student[i].m5>3 && student[i].m6>3) k+=1;
}
return k;
}
int debts (data student[], int n){
int p=0;
for (int i=0; i<n; i++){
if (student[i].m1==2 || student[i].m2==2 || student[i].m3==2 || student[i].m4==2 || student[i].m5==2 || student[i].m6==2)  p=p+1;
}
return p;
}
int exp (data student[], int n) {
int std=0;
for (int i=0;i<n;i++){
int debt=0;
if (student[i].m1 < 3) debt++;
if (student[i].m2 < 3) debt++;
if (student[i].m3 < 3) debt++;
if (student[i].m4 < 3) debt++;
if (student[i].m5 < 3) debt++;
if (student[i].m6 < 3) debt++;
if (debt>1) std++;
}
cout << std << " expelled students" << endl;
return 0;
}
int main(){
int n;
cout << "Enter the number of students  " << endl;
cin >> n;
data student[n] = {};
for (int i=0; i<n; i++){
cout << "Data of  " << i+1 << "  student" << endl;
cout << "Name:  ";
cin >> student[i].name >> student[i].surname >> student[i].patronymic;
cout << "Marks for 6 exams:  " << " ";
cin >> student[i].m1 >> student[i].m2 >> student[i].m3 >> student[i].m4 >> student[i].m5 >> student[i].m6;
data A;
cout << "average value= " << A.avg(student[i].m1,student[i].m2,student[i].m3,student[i].m4,student[i].m5,student[i].m6) << endl;
cout << A.stip (student[i].m1,student[i].m2,student[i].m3,student[i].m4,student[i].m5,student[i].m6) << endl;
cout << A.dolg (student[i].m1,student[i].m2,student[i].m3,student[i].m4,student[i].m5,student[i].m6) << endl;
}
cout << exp (student, n) << endl;
cout << "GPA in the group = " << srs (student, n) << endl;
cout << debts(student, n) << " students with debts" << endl;
cout << accr (student, n) << " approved students for a scholarship" << endl;
return 0;
}
