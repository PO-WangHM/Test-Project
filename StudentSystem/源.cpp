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

//创建各个类的数组用于储存数据
ClassData classdata[100];
CourseData coursedata[100];
ScoreData scoredata[100];
StudentData studentdata[100];







//查阅功能
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
    cout << "学号   " << "姓名   " << "课程号   " << "课程名   " << "成绩" << endl;
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
        cout << " 输入学生选号查询" << endl;
        cin >> sn;
        for (int i = 1; i < ScoreAmount; i++)
        {
            if (scoredata[i].studentNumber == sn)
            {
                if (check != 0)
                {
                    cout << "学号   " << "姓名   " << "课程号   " << "课程名   " << "成绩" << endl;
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
            cout << "未能找到该学号的学生\n输入1重新查找,输入0退出查找";
            cin >> check;
        }
    }

    system("pause");
    system("cls");
}

void InquireFunction()
{
    system("cls");//清屏
    int a;
    do
    {
        cout << "=========================================================\n";
        cout << "                      查阅功能 \n";
        cout << "=========================================================\n";
        cout << "***************** 1.查看所有班级信息 ********************\n";
        cout << "***************** 2.查看所有学生信息 ********************\n";
        cout << "***************** 3.查看所有课程信息 ********************\n";
        cout << "***************** 4.查看所有成绩信息 ********************\n";
        cout << "***************** 5.查看学生成绩信息 ********************\n";
        cout << "***************** 0.返回上级菜单     ********************\n";
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
            cout << "\n 非法输入，请重新输入！" << endl;
            break;
        }
    } while (a);
}


//添加功能
//添加班级
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
    cout << "需要添加几个班级的信息？\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "输入第"<<i+1<<"个添加班级的编号\n";
        cin >> classNumber;
        cout << "输入班级名称\n";
        cin >> className;
        cout << "输入学院名称\n";
        cin >> collegeName;
        cout << "输入年级\n";
        cin >> Grade;
        cout << "输入学生人数\n";
        cin >> studentNumber;
        cd.Add(classNumber, className, collegeName, Grade, studentNumber);
        classdata[ClassAmount + i] = cd;
        ClassAmount++;
    }
    cout << "添加成功！\n";
    system("pause");
    system("cls");
}
//添加学生
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
    cout << "需要添加几个学生的信息？\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "输入第" << i + 1 << "个添加学生的编号\n";
        cin >> studentNumber;
        cout << "输入学生姓名\n";
        cin >> studentName;
        cout << "输入性别\n";
        cin >> Sex;
        cout << "输入出生年月日\n";
        cin >> Birthday;
        cout << "输入籍贯\n";
        cin >> nativePlace;
        cout << "输入民族\n";
        cin >> nation;
        cout << "输入班级编号\n";
        cin >> classNumber;
        sd.Add(studentNumber, studentName, Sex, Birthday, nativePlace, nation, classNumber);
        studentdata[StudentAmount + i] = sd;
        StudentAmount++;
    }
    cout << "添加成功！\n";
    system("pause");
    system("cls");
}
//添加课程
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
    cout << "需要添加几个课程的信息？\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "输入第" << i + 1 << "个添加课程的编号\n";
        cin >> courseNumber;
        cout << "输入课程名称\n";
        cin >> courseName;
        cout << "输入学期\n";
        cin >> Turm;
        cout << "输入学时\n";
        cin >> creditHour;
        cout << "输入学分\n";
        cin >> Credit;
        cd.Add(courseNumber, courseName, Turm, creditHour, Credit);
        coursedata[CourseAmount + i] = cd;
        CourseAmount++;
    }
    cout << "添加成功！\n";
    system("pause");
    system("cls");
}
//添加成绩
void AddScore()
{
    system("cls");
    int n;
    string studentNumber;
    string courseNumber;
    string grade;
    ScoreData sd;
    cout << "需要添加几个成绩的信息？\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "输入第" << i + 1 << "个添加成绩的学生编号\n";
        cin >> studentNumber;
        cout << "输入课程编号\n";
        cin >> courseNumber;
        cout << "输入成绩\n";
        cin >> grade;
        sd.Add(studentNumber, courseNumber, grade);
        scoredata[ScoreAmount + i] = sd;
        ScoreAmount++;
    }
    cout << "添加成功！\n";
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
        cout << "                    添加功能 \n";
        cout << "=================================================\n";
        cout << "***************** 1.添加班级 ********************\n";
        cout << "***************** 2.添加学生 ********************\n";
        cout << "***************** 3.添加课程 ********************\n";
        cout << "***************** 4.添加成绩 ********************\n";
        cout << "***************** 0.返回上级菜单 ****************\n";
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
            cout << "\n 非法输入，请重新输入！" << endl;
            break;
        }
    } while (a);
}



//修改功能
//修改班级信息
void ModifyClass()
{
    string cn;
    int check = 1;
    
    while (check)
    {
        system("cls");
        cout << "输入需要修改班级的班级号\n";
        cin >> cn;
        for (int i = 0; i < ClassAmount; i++)
        {
            if (cn == classdata[i].classNumber)
            {
                check = 0;
                cout << "输入新班级号\n";
                cin >> classdata[i].classNumber;
                cout << "输入班级名称\n";
                cin >> classdata[i].className;
                cout << "输入学院名称\n";
                cin >> classdata[i].collegeName;
                cout << "输入年级\n";
                cin >> classdata[i].Grade;
                cout << "输入学生人数\n";
                cin >> classdata[i].studentNumber;
            }
        }
        if (check != 0)
        {
            cout << "未能找到该班级号的班级\n输入1重新输入,输入0退出修改";
            cin >> check;
        }
        cout << "修改成功！\n";
        system("pause");
        system("cls");
    }
}
//修改学生信息
void ModifyStudent()
{
    string sn;
    int check = 1;
    while (check)
    {
        system("cls");
        cout << "输入修改学生的学号\n";
        cin >> sn;
        for (int i = 0; i < StudentAmount; i++)
        {
            if (sn == studentdata[i].studentNumber)
            {
                check = 0;
                cout << "输入新学生的学号\n";
                cin >> studentdata[i].studentNumber;
                cout << "输入学生姓名\n";
                cin >> studentdata[i].studentName;
                cout << "输入性别\n";
                cin >> studentdata[i].Sex;
                cout << "输入出生年月日\n";
                cin >> studentdata[i].Birthday;
                cout << "输入籍贯\n";
                cin >> studentdata[i].nativePlace;
                cout << "输入民族\n";
                cin >> studentdata[i].nation;
                cout << "输入班级号\n";
                cin >> studentdata[i].classNumber;
            }
        }
        if (check != 0)
        {
            cout << "未能找到该学号的学生\n输入1重新输入,输入0退出修改";
            cin >> check;
        }
    }
    cout << "修改成功！\n";
    system("pause");
    system("cls");
}
//修改课程信息
void ModifyCourse()
{
    string cn;
    int check = 1;
    while (check)
    {
        system("cls");
        cout << "需要修改课程的课程号\n";
        cin >> cn;
        for (int i = 0; i < CourseAmount; i++)
        {
            if (cn == coursedata[i].courseNumber)
            {
                check = 0;
                cout << "输入新课程的课程号\n";
                cin >> coursedata[i].courseNumber;
                cout << "输入课程名称\n";
                cin >> coursedata[i].courseName;
                cout << "输入学期\n";
                cin >> coursedata[i].Turm;
                cout << "输入学时\n";
                cin >> coursedata[i].creditHour;
                cout << "输入学分\n";
                cin >> coursedata[i].Credit;
            }
        }
        if (check != 0)
        {
            cout << "未能找到该课程号的课程\n输入1重新输入,输入0退出修改";
            cin >> check;
        }
    }
    cout << "修改成功！\n";
    system("pause");
    system("cls");
}
//修改成绩信息
void ModifyGrade()
{
    string sn;
    string cn;
    int check = 1;
    while (check)
    {
        system("cls");
        cout << "输入需要修改成绩的学生学号和课程号\n";
        cout << "学号：";
        cin >> sn;
        cout << "课程号：";
        cin >> cn;
        for (int i = 0; i < ScoreAmount; i++)
        {
            if (sn == scoredata[i].studentNumber && cn == scoredata[i].courseNumber)
            {
                check = 0;
                cout << "输入添加成绩的学生编号\n";
                cin >> scoredata[i].studentNumber;
                cout << "输入课程编号\n";
                cin >> scoredata[i].courseNumber;
                cout << "输入成绩\n";
                cin >> scoredata[i].grade;
            }
        }
        if (check != 0)
        {
            cout << "未能找到该学号和课程号的成绩\n输入1重新输入,输入0退出修改";
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
        cout << "                    修改功能 \n";
        cout << "=====================================================\n";
        cout << "***************** 1.修改班级信息 ********************\n";
        cout << "***************** 2.修改学生信息 ********************\n";
        cout << "***************** 3.修改课程信息 ********************\n";
        cout << "***************** 4.修改成绩信息 ********************\n";
        cout << "***************** 0.返回上级菜单 ********************\n";
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
            cout << "\n 非法输入，请重新输入！" << endl;
            break;
        }
    } while (a);
}


//数据读取
void ReadClassData()
{
    ifstream ifs;
    ifs.open("class.dat", ios::in);//打开文件
    if (!ifs.is_open())
    {
        cout << "文件不存在！" << endl;
        ifs.close();
        return;
    }
    char ch;
    ifs >> ch;
    if (ifs.eof())
    {
        cout << "文件内容为空！" << endl;
        ifs.close();
        return;
    }
    int i = 0;
    string classNumber;
    string className;
    string collegeName;
    string Grade;
    string  studentNumber;
    while (ifs >> classNumber && ifs >> className && ifs >> collegeName && ifs >> Grade && ifs >> studentNumber)//读取按行读取文件里数据的并赋值
    {
        ClassData cd;
        cd.Add(classNumber, className, collegeName, Grade, studentNumber);
        classdata[i] = cd;
        i++;
    }
    ClassAmount = i;//班级总数量
    ifs.close();//关闭文件
}
void ReadCourseData()
{
    ifstream ifs;
    ifs.open("course.dat", ios::in);//打开文件
    if (!ifs.is_open())
    {
        cout << "文件不存在！" << endl;
        ifs.close();
        return;
    }
    char ch;
    ifs >> ch;
    if (ifs.eof())
    {
        cout << "文件内容为空！" << endl;
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
    CourseAmount = i;//课程总数量
    ifs.close();//关闭文件
}
void ReadScoreData()
{
    ifstream ifs;
    ifs.open("score.dat", ios::in);//打开文件
    if (!ifs.is_open())
    {
        cout << "文件不存在！" << endl;
        ifs.close();
        return;
    }
    char ch;
    ifs >> ch;
    if (ifs.eof())
    {
        cout << "文件内容为空！" << endl;
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
    ScoreAmount = i;//课程总数量
    ifs.close();//关闭文件
}
void ReadStudentData()
{
    ifstream ifs;
    ifs.open("student.dat", ios::in);//打开文件
    if (!ifs.is_open())
    {
        cout << "文件不存在！" << endl;
        ifs.close();
        return;
    }
    char ch;
    ifs >> ch;
    if (ifs.eof())
    {
        cout << "文件内容为空！" << endl;
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
    StudentAmount = i;//课程总数量
    ifs.close();//关闭文件
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
        cout << "                学生成绩管理系统 \n";
        cout << "=================================================\n";
        cout << "***************** 1.查阅信息 ********************\n";
        cout << "***************** 2.添加信息 ********************\n";
        cout << "***************** 3.修改信息 ********************\n";
        cout << "******************0.退出系统 ********************\n";
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
            cout << "已成功退出，欢迎下次使用！";
            break;
        default:
            system("cls");
            cout << "\n 非法输入，请重新输入！" << endl;
            break;
        }
    } while (a);
}