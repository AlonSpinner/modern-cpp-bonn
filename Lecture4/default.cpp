class MyClass {
    public:
    MyClass() = default; // default constructor
    MyClass(const MyClass& var) = default; // copy constructor
    MyClass(MyClass&& var) = default; // move constructor
    MyClass& operator=(const MyClass& var) = default; // copy assignment
    MyClass& operator=(MyClass&& var) = default; // move assignment
};

//rule of all or nothing. Implement none, or all (and then they are autogeneterd)

// DON'T DO:
//void SomeFunc(...) = delete;