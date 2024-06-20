#ifndef EXAMPLE_CLASS_H
#define EXAMPLE_CLASS_H

class ExampleClass {
private:
    int val;
public:
    ExampleClass() : val(0) {}
    void setVal(int v);
    int getVal() const;
};

#endif // EXAMPLE_CLASS_H

