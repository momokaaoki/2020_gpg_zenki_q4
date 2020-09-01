#include <iostream>
using namespace std;


struct Student
{
    char name[16];
    int japanese;
    int society;
    int math;
};

//表示させる関数
void show(Student *st) {
    cout << st->name << ":" << st->japanese << "," << st->society << "," << st->math << endl;
}
int main()
{
    Student sd[3];
    sd[0] = { "田中",100,100,100 };
    sd[1] = { "佐藤", 90, 90, 90 };
    sd[2] = { "鈴木", 80, 80, 80 };

    for (int i = 0; i < 3; ++i) {
        show(&sd[i]);
    }
}


