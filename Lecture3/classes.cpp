#include <string>
using std::string;

class Student {
    public:
    Student(int id, string name): id_{id}, name_{name} {}

    int id() const { //getter function, returns const value so it can be changed
        return id_;
    }

    const string& name() const {return name_;} //getter function, returns const value so it can be changed
    //const after funciton states that this function does not change th object
    // mark all functions that should not change the object as const
    // Ensures that we can pass objects by a const reference and still call their functions
    // substanilly reduces number of errors

    private:
    int id_;
    string name_;
};

int main(int argc, char const* argv[]) {
    Student s1{1, "John"};
    Student s2{2, "Jane"};
    return 0;
}