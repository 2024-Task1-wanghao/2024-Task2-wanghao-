#include <iostream>

using namespace std;

class Person {
private:
    char* name;
    int id;
public:
    // 构造函数
    Person(const char* m = "", int n = 0);
    // 拷贝构造函数
    Person(const Person& other);
    void displayPerson();
    ~Person();
};

// 构造函数实现，手动拷贝字符串
Person::Person(const char* m, int n) {
    if (m == nullptr) {
        m = "";
    }
    int len = 0;
    while (m[len]!= '\0') {
        len++;
    }
    name = new char[len + 1];
    for (int i = 0; i < len; i++) {
        name[i] = m[i];
    }
    name[len] = '\0';
    id = n;
}

// 拷贝构造函数实现，手动拷贝字符串，实现深拷贝
Person::Person(const Person& other) {
    int len = 0;
    while (other.name[len]!= '\0') {
        len++;
    }
    name = new char[len + 1];
    for (int i = 0; i < len; i++) {
        name[i] = other.name[i];
    }
    name[len] = '\0';
    id = other.id;
}

// 显示函数
void Person::displayPerson() {
    cout << name << " " << id << endl;
}

// 析构函数
Person::Person::~Person() {
    delete[] name;
}

int main() {
    char m[100];
    int n;
    cin >> m >> n;
    Person p1(m, n);
    Person p2 = p1;
    p1.displayPerson();
    p2.displayPerson();
    return 0;
}
