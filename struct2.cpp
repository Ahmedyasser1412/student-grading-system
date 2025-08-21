
#include <iostream>

using namespace std;


struct  Student {
	int age;
	string name;
	int grades[3];

};

enum Grades
{
	Excellent,
	verygood,
	good,
	pass,
	fail
};



void printStudentGarde(Grades g) {

	switch (g) {
	case Excellent:cout << " Excellent";
		break;
	case verygood:cout << "verygood";
		break;

	case good: cout << "good";
		break;
	case pass:cout << "pass";
		break;

	case fail: cout << " fail";
		break;
	}
}


	Grades calculateGrade(float avg) {
		if (avg >= 85) return Excellent;
		else if (avg >= 75) return verygood;
		else if (avg >= 65) return good;
		else if (avg >= 50) return pass;
		else return fail;
	}



int main()
{

	Student s1;
	cout << "enter student name :";
	cin >> s1.name;
	cout << "enter student age  :";
	cin >> s1.age;

	float sum=0;
	cout << "enter the dgree of 3 sudjects ";
	for (int i = 0; i < 3; i++) {
		cout << "subject " << i+1;
		cin >> s1.grades[i];
		sum += s1.grades[i];
	}
	sum = (sum / 300)*100;
	cout << sum;
	Grades g = calculateGrade(sum);
	cout << s1.name<<endl;
	cout << s1.age<<endl;
	 printStudentGarde(g);

	return 0;
}
