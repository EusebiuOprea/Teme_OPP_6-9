#include <iostream>
#include <string>
#include <vector>

class Group {
public:
    class Student {
    public:
        Student(std::string name) : name_(name) {}
        std::string getName() const { return name_; }
    private:
        std::string name_;
    };

    Group(std::string name) : name_(name) {}

    void addStudent(const Student& student) {
        students_.push_back(student);
    }

    std::string getName() const { return name_; }
    const std::vector<Student>& getStudents() const { return students_; }

private:
    std::string name_;
    std::vector<Student> students_;
};

int main() {
    Group mathClass("Math Class");
    mathClass.addStudent(Group::Student("Armanda"));
    mathClass.addStudent(Group::Student("Bob"));
    mathClass.addStudent(Group::Student("Cristian"));

    std::cout << "Group: " << mathClass.getName() << std::endl;
    std::cout << "Students:" << std::endl;
    for (const auto& student : mathClass.getStudents()) {
        std::cout << "  " << student.getName() << std::endl;
    }

    return 0;
}
//To display all of the groups with their students, you could use a loop to iterate over a list of Group objects and print out the name of each group and its list of students. Here is an example of how you could do this:
/*std::vector<Group> groups;
groups.push_back(mathClass);
groups.push_back(scienceClass);
groups.push_back(historyClass);

for (const auto& group : groups) {
  std::cout << "Group: " << group.getName() << std::endl;
  std::cout << "Students:" << std::endl;
  for (const auto& student : group.getStudents()) {
    std::cout << "  " << student.getName() << std::endl;
  }
}

*/