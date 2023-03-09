#include<iostream>
using namespace std;
class student
{
	public: 
	int sapid;
	int semester;
	string name;
	float gpa;
	bool isfemale;
	student()
	{
		sapid=1;
		semester=1;
		name="";
		gpa=0.0;
		isfemale=true;
	}
	student(int sapid,string name,int semester,float gpa,bool isfemale)
	{
		this->sapid=sapid;
		this->name=name;
		this->semester=semester;
		this->gpa=gpa;
		this->isfemale=isfemale;
	}
	student(int sapid,string name)
	{
		this->sapid=sapid;
		this->name=name;
	}
	student(int sapid,string name,float gpa)
	{
		this->sapid=sapid;
		this->name=name;
		this->gpa=gpa;
	}
	student(int sapid,string name,bool isfemale)
	{
		this ->sapid=sapid;
		this->name=name;
		this->isfemale=isfemale;
	}
	student (student &std)
	{
		sapid=std.sapid;
		name=std.name;
		semester=std.semester;
		gpa=std.gpa;
		
	}
	~student(){
		cout<<"destructor of student is running:"<<endl;
	}
	

void display()
{
	student s1(12345,"Kainat",2,3.78,true);
	student s2(12565,"Kiran",2,3.08,true);
	student s3(12385,"Ahmed",2,3.78,false);
	student s4(12735,"Minal",2,3.93,true);
	cout<<"Details of student 1:"<<endl<<s1.sapid<<endl<<s1.name<<endl<<s1.semester<<endl<<s1.gpa<<endl<<s1.isfemale;
	cout<<"Details of student 2:"<<endl<<s2.sapid<<endl<<s2.name<<endl<<s2.semester<<endl<<s2.gpa<<endl<<s2.isfemale;
	cout<<"Details of student 3:"<<endl<<s3.sapid<<endl<<s3.name<<endl<<s3.semester<<endl<<s3.gpa<<endl<<s3.isfemale;
	cout<<"Details of student 4:"<<endl<<s4.sapid<<endl<<s4.name<<endl<<s4.semester<<endl<<s4.gpa<<endl<<s4.isfemale;
	
}
};
int main()
{
	
	string line;

	ofstream fout;

	

	
	fout.open("student.txt");

	
	while (fout) {

		
		getline(cin, line);

		
		if (line == "-1")
			break;

		
		fout << line << endl;
	}

	
	fout.close();


	
	ifstream fin;

	
	fin.open("student.txt");
	
	int sapID, semester;
	string name;
	float cgpa;
	bool isFemale;
	
	while (fin>>sapID) {
		fin>>name;
		fin>>semester;
		fin>>cgpa;
		char c;
		fin>>c;
		if(c == 'm')
			isFemale = false;
		else
			isFemale = true;
			
		student std(sapid,cgpa,name,semester,isfemale);
		
		std.display();
		cout<<"\n\n";
	}


	fin.close();

	return 0;
}

