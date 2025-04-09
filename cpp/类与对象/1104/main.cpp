#include <iostream>

using namespace std;

class Person {
private:
    char* name;
    int id;
public:
    // ���캯��
    Person(const char* m = "", int n = 0);
    // �������캯��
    Person(const Person& other);
    void displayPerson();
    ~Person();
};

// ���캯��ʵ�֣��ֶ������ַ���
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

// �������캯��ʵ�֣��ֶ������ַ�����ʵ�����
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

// ��ʾ����
void Person::displayPerson() {
    cout << name << " " << id << endl;
}

// ��������
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
