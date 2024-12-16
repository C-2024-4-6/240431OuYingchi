#include <iostream>
#include <string>
#include <vector>


class Student {
public:
    std::string studentID; 
    double score;          

    Student(std::string id, double score) : studentID(id), score(score) {}
};
class GradeBook {
private:
    std::vector<Student> students; // ѧ�����������

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }
    void findMax() {
        if (students.empty()) {
            std::cout << "û��ѧ����¼��" << std::endl;
            return;
        }

        auto highest = students.begin();
        for (auto it = std::next(students.begin()); it != students.end(); ++it) {
            if (it->score > highest->score) {
                highest = it; 
            }
        }
        std::cout << "��߳ɼ���ѧ��ѧ����: " << highest->studentID << "���ɼ���: " << highest->score << std::endl;
    }
};

int main() {
    GradeBook gradeBook; 
    gradeBook.addStudent(Student("8209240421", 85));
    gradeBook.addStudent(Student("8209240431", 92));
    gradeBook.addStudent(Student("8206415664", 78));
    gradeBook.addStudent(Student("4865465464", 95));
    gradeBook.addStudent(Student("6845646546", 88));
    gradeBook.findMax();

    return 0;
}
