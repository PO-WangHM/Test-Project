#include <iostream>
#include <cstdio>
#include <fstream>
using namespace std;


int ClassAmount = 0;
int CourseAmount = 0;
int ScoreAmount = 0;
int StudentAmount = 0;

class ClassData
{
public:
    string classNumber;
    string className;
    string collegeName;
    string Grade;
    string  studentNumber;
    ClassData()
    {
        classNumber = "NULL";
        className = "NULL";
        collegeName = "NULL";
        Grade = "NULL";
        studentNumber = "NULL";
    }
    void Add(string cnumber, string cname, string coname, string g, string snumber)
    {
        classNumber = cnumber;
        className = cname;
        collegeName = coname;
        Grade = g;
        studentNumber = snumber;
    }
    void showData()
    {
        cout << classNumber << "   ";
        cout << className << "   ";
        cout << collegeName << "   ";
        cout << Grade << "   ";
        cout << studentNumber << endl;
    }
};

class CourseData
{
public:
    string courseNumber;
    string courseName;
    string Turm;
    string creditHour;
    string Credit;
    CourseData()
    {
        courseNumber = "NULL";
        courseName = "NULL";
        Turm = "NULL";
        creditHour = "NULL";
        Credit = "NULL";
    }
    void Add(string cnumber, string cname, string turm, string chour, string credit)
    {
        courseNumber = cnumber;
        courseName = cname;
        Turm = turm;
        creditHour = chour;
        Credit = credit;
    }
    void showData()
    {
        cout << courseNumber << "   " << courseName << "   " << Turm << "   " << creditHour << "   " << Credit << endl;
    }
};

class ScoreData
{
public:
    string studentNumber;
    string courseNumber;
    string grade;
    ScoreData()
    {
        studentNumber = "NULL";
        courseNumber = "NULL";
        grade = "NULL";
    }
    void Add(string snumber, string cnumber, string g)
    {
        studentNumber = snumber;
        courseNumber = cnumber;
        grade = g;
    }
    void showData()
    {
        cout << studentNumber << "   " << courseNumber << "   " << grade << endl;
    }
};

class StudentData
{
public:
    string studentNumber;
    string studentName;
    string Sex;
    string Birthday;
    string nativePlace;
    string nation;
    string classNumber;
    StudentData()
    {
        studentNumber = "NULL";
        studentName = "NULL";
        Sex = "NULL";
        Birthday = "NULL";
        nativePlace = "NULL";
        nation = "NULL";
        classNumber = "NULL";
    }
    void Add(string snumber,string sname,string sex,string birthday,string nplace,string n,string cnumber)
    {
        studentNumber = snumber;
        studentName = sname;
        Sex = sex;
        Birthday = birthday;
        nativePlace = nplace;
        nation = n;
        classNumber = cnumber;
    }
    void showData()
    {
        cout << studentNumber << "   " << studentName << "   " << Sex << "   " << Birthday << "   " << nativePlace << "   " << nation << "   " << classNumber << endl;
    }
};

//������������������ڴ�������
ClassData classdata[100];
CourseData coursedata[100];
ScoreData scoredata[100];
StudentData studentdata[100];







//���Ĺ���
void showClassData()
{
    system("cls");
    for (int i = 0; i < ClassAmount; i++)
    {
        classdata[i].showData();
    }
    system("pause");
    system("cls");
}
void showCourseData()
{
    system("cls");
    for (int i = 0; i < CourseAmount; i++)
    {
        coursedata[i].showData();
    }
    system("pause");
    system("cls");
}
void showScoreData()
{
    system("cls");
    cout << "ѧ��   " << "����   " << "�γ̺�   " << "�γ���   " << "�ɼ�" << endl;
    for (int i = 1; i < ScoreAmount; i++)
    {
        cout << scoredata[i].studentNumber << "   ";
        for (int x = 1; x < StudentAmount; x++)
        {
            if (studentdata[x].studentNumber == scoredata[i].studentNumber)
            {
                cout << studentdata[x].studentName << "   ";
            }
        }
        cout << scoredata[i].courseNumber << "   ";
        for (int y = 1; y < CourseAmount; y++)
        {
            if (coursedata[y].courseNumber == scoredata[i].courseNumber)
            {
                cout << coursedata[y].courseName << "   ";
            }
        }
        cout << scoredata[i].grade << endl;
    }
    system("pause");
    system("cls");
}
void showStudentData()
{
    system("cls");
    for (int i = 0; i < StudentAmount; i++)
    {
        studentdata[i].showData();
    }
    system("pause");
    system("cls");
}
void findStudentData()
{
    int check = 1;
    while (check)
    {
        system("cls");
        string sn = "";
        cout << " ����ѧ��ѡ�Ų�ѯ" << endl;
        cin >> sn;
        for (int i = 1; i < ScoreAmount; i++)
        {
            if (scoredata[i].studentNumber == sn)
            {
                if (check != 0)
                {
                    cout << "ѧ��   " << "����   " << "�γ̺�   " << "�γ���   " << "�ɼ�" << endl;
                }
                check = 0;
                cout << scoredata[i].studentNumber << "   ";
                for (int x = 1; x < StudentAmount; x++)
                {
                    if (studentdata[x].studentNumber == scoredata[i].studentNumber)
                    {
                        cout << studentdata[x].studentName << "   ";
                    }
                }
                cout << scoredata[i].courseNumber << "   ";
                for (int y = 1; y < CourseAmount; y++)
                {
                    if (coursedata[y].courseNumber == scoredata[i].courseNumber)
                    {
                        cout << coursedata[y].courseName << "   ";
                    }
                }
                cout << scoredata[i].grade << endl;
            }
        }
        if (check != 0)
        {
            cout << "δ���ҵ���ѧ�ŵ�ѧ��\n����1���²���,����0�˳�����";
            cin >> check;
        }
    }

    system("pause");
    system("cls");
}

void InquireFunction()
{
    system("cls");//����
    int a;
    do
    {
        cout << "=========================================================\n";
        cout << "                      ���Ĺ��� \n";
        cout << "=========================================================\n";
        cout << "***************** 1.�鿴���а༶��Ϣ ********************\n";
        cout << "***************** 2.�鿴����ѧ����Ϣ ********************\n";
        cout << "***************** 3.�鿴���пγ���Ϣ ********************\n";
        cout << "***************** 4.�鿴���гɼ���Ϣ ********************\n";
        cout << "***************** 5.�鿴ѧ���ɼ���Ϣ ********************\n";
        cout << "***************** 0.�����ϼ��˵�     ********************\n";
        cout << "=========================================================\n";
        cin >> a;
        switch (a)
        {
        case 1:
            showClassData();
            break;

        case 2:
            showStudentData();
            break;
        case 3:
            showCourseData();
            break;
        case 4:
            showScoreData();
            break;
        case 5:
            findStudentData();
            break;
        case 0:
            system("cls");
            break;
        default:
            system("cls");
            cout << "\n �Ƿ����룬���������룡" << endl;
            break;
        }
    } while (a);
}


//��ӹ���
//��Ӱ༶
void AddClass()
{
    system("cls");
    int n;
    string classNumber;
    string className;
    string collegeName;
    string Grade;
    string  studentNumber;
    ClassData cd;
    cout << "��Ҫ��Ӽ����༶����Ϣ��\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "�����"<<i+1<<"����Ӱ༶�ı��\n";
        cin >> classNumber;
        cout << "����༶����\n";
        cin >> className;
        cout << "����ѧԺ����\n";
        cin >> collegeName;
        cout << "�����꼶\n";
        cin >> Grade;
        cout << "����ѧ������\n";
        cin >> studentNumber;
        cd.Add(classNumber, className, collegeName, Grade, studentNumber);
        classdata[ClassAmount + i] = cd;
        ClassAmount++;
    }
    cout << "��ӳɹ���\n";
    system("pause");
    system("cls");
}
//���ѧ��
void AddStudent()
{
    system("cls");
    int n;
    string studentNumber;
    string studentName;
    string Sex;
    string Birthday;
    string nativePlace;
    string nation;
    string classNumber;
    StudentData sd;
    cout << "��Ҫ��Ӽ���ѧ������Ϣ��\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "�����" << i + 1 << "�����ѧ���ı��\n";
        cin >> studentNumber;
        cout << "����ѧ������\n";
        cin >> studentName;
        cout << "�����Ա�\n";
        cin >> Sex;
        cout << "�������������\n";
        cin >> Birthday;
        cout << "���뼮��\n";
        cin >> nativePlace;
        cout << "��������\n";
        cin >> nation;
        cout << "����༶���\n";
        cin >> classNumber;
        sd.Add(studentNumber, studentName, Sex, Birthday, nativePlace, nation, classNumber);
        studentdata[StudentAmount + i] = sd;
        StudentAmount++;
    }
    cout << "��ӳɹ���\n";
    system("pause");
    system("cls");
}
//��ӿγ�
void AddCourse()
{
    system("cls");
    int n;
    string courseNumber;
    string courseName;
    string Turm;
    string creditHour;
    string Credit;
    CourseData cd;
    cout << "��Ҫ��Ӽ����γ̵���Ϣ��\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "�����" << i + 1 << "����ӿγ̵ı��\n";
        cin >> courseNumber;
        cout << "����γ�����\n";
        cin >> courseName;
        cout << "����ѧ��\n";
        cin >> Turm;
        cout << "����ѧʱ\n";
        cin >> creditHour;
        cout << "����ѧ��\n";
        cin >> Credit;
        cd.Add(courseNumber, courseName, Turm, creditHour, Credit);
        coursedata[CourseAmount + i] = cd;
        CourseAmount++;
    }
    cout << "��ӳɹ���\n";
    system("pause");
    system("cls");
}
//��ӳɼ�
void AddScore()
{
    system("cls");
    int n;
    string studentNumber;
    string courseNumber;
    string grade;
    ScoreData sd;
    cout << "��Ҫ��Ӽ����ɼ�����Ϣ��\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "�����" << i + 1 << "����ӳɼ���ѧ�����\n";
        cin >> studentNumber;
        cout << "����γ̱��\n";
        cin >> courseNumber;
        cout << "����ɼ�\n";
        cin >> grade;
        sd.Add(studentNumber, courseNumber, grade);
        scoredata[ScoreAmount + i] = sd;
        ScoreAmount++;
    }
    cout << "��ӳɹ���\n";
    system("pause");
    system("cls");
}


void AddFunction()
{
    system("cls");
    int a;
    do
    {
        cout << "=================================================\n";
        cout << "                    ��ӹ��� \n";
        cout << "=================================================\n";
        cout << "***************** 1.��Ӱ༶ ********************\n";
        cout << "***************** 2.���ѧ�� ********************\n";
        cout << "***************** 3.��ӿγ� ********************\n";
        cout << "***************** 4.��ӳɼ� ********************\n";
        cout << "***************** 0.�����ϼ��˵� ****************\n";
        cout << "=================================================\n";
        cin >> a;
        switch (a)
        {
        case 1:
            AddClass();
            break;

        case 2:
            AddStudent();
            break;
        case 3:
            AddScore();
            break;
        case 4:
            AddScore();
            break;
        case 0:
            system("cls");
            break;
        default:
            system("cls");
            cout << "\n �Ƿ����룬���������룡" << endl;
            break;
        }
    } while (a);
}



//�޸Ĺ���
//�޸İ༶��Ϣ
void ModifyClass()
{
    string cn;
    int check = 1;
    
    while (check)
    {
        system("cls");
        cout << "������Ҫ�޸İ༶�İ༶��\n";
        cin >> cn;
        for (int i = 0; i < ClassAmount; i++)
        {
            if (cn == classdata[i].classNumber)
            {
                check = 0;
                cout << "�����°༶��\n";
                cin >> classdata[i].classNumber;
                cout << "����༶����\n";
                cin >> classdata[i].className;
                cout << "����ѧԺ����\n";
                cin >> classdata[i].collegeName;
                cout << "�����꼶\n";
                cin >> classdata[i].Grade;
                cout << "����ѧ������\n";
                cin >> classdata[i].studentNumber;
            }
        }
        if (check != 0)
        {
            cout << "δ���ҵ��ð༶�ŵİ༶\n����1��������,����0�˳��޸�";
            cin >> check;
        }
        cout << "�޸ĳɹ���\n";
        system("pause");
        system("cls");
    }
}
//�޸�ѧ����Ϣ
void ModifyStudent()
{
    string sn;
    int check = 1;
    while (check)
    {
        system("cls");
        cout << "�����޸�ѧ����ѧ��\n";
        cin >> sn;
        for (int i = 0; i < StudentAmount; i++)
        {
            if (sn == studentdata[i].studentNumber)
            {
                check = 0;
                cout << "������ѧ����ѧ��\n";
                cin >> studentdata[i].studentNumber;
                cout << "����ѧ������\n";
                cin >> studentdata[i].studentName;
                cout << "�����Ա�\n";
                cin >> studentdata[i].Sex;
                cout << "�������������\n";
                cin >> studentdata[i].Birthday;
                cout << "���뼮��\n";
                cin >> studentdata[i].nativePlace;
                cout << "��������\n";
                cin >> studentdata[i].nation;
                cout << "����༶��\n";
                cin >> studentdata[i].classNumber;
            }
        }
        if (check != 0)
        {
            cout << "δ���ҵ���ѧ�ŵ�ѧ��\n����1��������,����0�˳��޸�";
            cin >> check;
        }
    }
    cout << "�޸ĳɹ���\n";
    system("pause");
    system("cls");
}
//�޸Ŀγ���Ϣ
void ModifyCourse()
{
    string cn;
    int check = 1;
    while (check)
    {
        system("cls");
        cout << "��Ҫ�޸Ŀγ̵Ŀγ̺�\n";
        cin >> cn;
        for (int i = 0; i < CourseAmount; i++)
        {
            if (cn == coursedata[i].courseNumber)
            {
                check = 0;
                cout << "�����¿γ̵Ŀγ̺�\n";
                cin >> coursedata[i].courseNumber;
                cout << "����γ�����\n";
                cin >> coursedata[i].courseName;
                cout << "����ѧ��\n";
                cin >> coursedata[i].Turm;
                cout << "����ѧʱ\n";
                cin >> coursedata[i].creditHour;
                cout << "����ѧ��\n";
                cin >> coursedata[i].Credit;
            }
        }
        if (check != 0)
        {
            cout << "δ���ҵ��ÿγ̺ŵĿγ�\n����1��������,����0�˳��޸�";
            cin >> check;
        }
    }
    cout << "�޸ĳɹ���\n";
    system("pause");
    system("cls");
}
//�޸ĳɼ���Ϣ
void ModifyGrade()
{
    string sn;
    string cn;
    int check = 1;
    while (check)
    {
        system("cls");
        cout << "������Ҫ�޸ĳɼ���ѧ��ѧ�źͿγ̺�\n";
        cout << "ѧ�ţ�";
        cin >> sn;
        cout << "�γ̺ţ�";
        cin >> cn;
        for (int i = 0; i < ScoreAmount; i++)
        {
            if (sn == scoredata[i].studentNumber && cn == scoredata[i].courseNumber)
            {
                check = 0;
                cout << "������ӳɼ���ѧ�����\n";
                cin >> scoredata[i].studentNumber;
                cout << "����γ̱��\n";
                cin >> scoredata[i].courseNumber;
                cout << "����ɼ�\n";
                cin >> scoredata[i].grade;
            }
        }
        if (check != 0)
        {
            cout << "δ���ҵ���ѧ�źͿγ̺ŵĳɼ�\n����1��������,����0�˳��޸�";
            cin >> check;
        }
    }
}

void ModifyFunction()
{
    system("cls");
    int a;
    do
    {
        cout << "=====================================================\n";
        cout << "                    �޸Ĺ��� \n";
        cout << "=====================================================\n";
        cout << "***************** 1.�޸İ༶��Ϣ ********************\n";
        cout << "***************** 2.�޸�ѧ����Ϣ ********************\n";
        cout << "***************** 3.�޸Ŀγ���Ϣ ********************\n";
        cout << "***************** 4.�޸ĳɼ���Ϣ ********************\n";
        cout << "***************** 0.�����ϼ��˵� ********************\n";
        cout << "=====================================================\n";
        cin >> a;
        switch (a)
        {
        case 1:
            ModifyClass();
            break;

        case 2:
            ModifyStudent();
            break;
        case 3:
            
            ModifyCourse();
            break;
        case 4:
            ModifyGrade();
            break;
        case 0:
            break;
        default:
            system("cls");
            cout << "\n �Ƿ����룬���������룡" << endl;
            break;
        }
    } while (a);
}


//���ݶ�ȡ
void ReadClassData()
{
    ifstream ifs;
    ifs.open("class.dat", ios::in);//���ļ�
    if (!ifs.is_open())
    {
        cout << "�ļ������ڣ�" << endl;
        ifs.close();
        return;
    }
    char ch;
    ifs >> ch;
    if (ifs.eof())
    {
        cout << "�ļ�����Ϊ�գ�" << endl;
        ifs.close();
        return;
    }
    int i = 0;
    string classNumber;
    string className;
    string collegeName;
    string Grade;
    string  studentNumber;
    while (ifs >> classNumber && ifs >> className && ifs >> collegeName && ifs >> Grade && ifs >> studentNumber)//��ȡ���ж�ȡ�ļ������ݵĲ���ֵ
    {
        ClassData cd;
        cd.Add(classNumber, className, collegeName, Grade, studentNumber);
        classdata[i] = cd;
        i++;
    }
    ClassAmount = i;//�༶������
    ifs.close();//�ر��ļ�
}
void ReadCourseData()
{
    ifstream ifs;
    ifs.open("course.dat", ios::in);//���ļ�
    if (!ifs.is_open())
    {
        cout << "�ļ������ڣ�" << endl;
        ifs.close();
        return;
    }
    char ch;
    ifs >> ch;
    if (ifs.eof())
    {
        cout << "�ļ�����Ϊ�գ�" << endl;
        ifs.close();
        return;
    }
    int i = 0;
    string courseNumber;
    string courseName;
    string Turm;
    string creditHour;
    string Credit;
    while (ifs >> courseNumber && ifs >> courseName && ifs >> Turm && ifs >> creditHour && ifs >> Credit)
    {
        CourseData cd;
        cd.Add(courseNumber, courseName, Turm, creditHour, Credit);
        coursedata[i] = cd;
        i++;
    }
    CourseAmount = i;//�γ�������
    ifs.close();//�ر��ļ�
}
void ReadScoreData()
{
    ifstream ifs;
    ifs.open("score.dat", ios::in);//���ļ�
    if (!ifs.is_open())
    {
        cout << "�ļ������ڣ�" << endl;
        ifs.close();
        return;
    }
    char ch;
    ifs >> ch;
    if (ifs.eof())
    {
        cout << "�ļ�����Ϊ�գ�" << endl;
        ifs.close();
        return;
    }
    int i = 0;
    string studentNumber;
    string courseNumber;
    string grade;
    while (ifs >> studentNumber && ifs >> courseNumber && ifs >> grade)
    {
        ScoreData sd;
        sd.Add(studentNumber, courseNumber, grade);
        scoredata[i] = sd;
        i++;
    }
    ScoreAmount = i;//�γ�������
    ifs.close();//�ر��ļ�
}
void ReadStudentData()
{
    ifstream ifs;
    ifs.open("student.dat", ios::in);//���ļ�
    if (!ifs.is_open())
    {
        cout << "�ļ������ڣ�" << endl;
        ifs.close();
        return;
    }
    char ch;
    ifs >> ch;
    if (ifs.eof())
    {
        cout << "�ļ�����Ϊ�գ�" << endl;
        ifs.close();
        return;
    }
    int i = 0;
    string studentNumber;
    string studentName;
    string Sex;
    string Birthday;
    string nativePlace;
    string nation;
    string classNumber;
    while (ifs >> studentNumber && ifs >> studentName && ifs >> Sex && ifs >> Birthday && ifs >> nativePlace && ifs >> nation && ifs >> classNumber)
    {
        StudentData sd;
        sd.Add(studentNumber, studentName, Sex, Birthday, nativePlace, nation, classNumber);
        studentdata[i] = sd;
        i++;
    }
    StudentAmount = i;//�γ�������
    ifs.close();//�ر��ļ�
}


void main()
{
    ReadClassData();
    ReadCourseData();
    ReadScoreData();
    ReadStudentData();
    int a;
    do
    {
        cout << "=================================================\n";
        cout << "                ѧ���ɼ�����ϵͳ \n";
        cout << "=================================================\n";
        cout << "***************** 1.������Ϣ ********************\n";
        cout << "***************** 2.�����Ϣ ********************\n";
        cout << "***************** 3.�޸���Ϣ ********************\n";
        cout << "******************0.�˳�ϵͳ ********************\n";
        cout << "=================================================\n";
        cin >> a;
        switch (a)
        {
        case 1:
            InquireFunction();
            break;
        
        case 2:
            AddFunction();
            break;
        case 3:
            ModifyFunction();
            break;
        case 0:
            cout << "�ѳɹ��˳�����ӭ�´�ʹ�ã�";
            break;
        default:
            system("cls");
            cout << "\n �Ƿ����룬���������룡" << endl;
            break;
        }
    } while (a);
}