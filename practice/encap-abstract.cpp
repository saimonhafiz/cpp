#include <iostream>

using namespace std;

//Private
class ExampleEncap{
    private:
    // Can not be accessed without getter and setter function
    int num;
    char c;
    public:
    int getNum() const {
        return num;
    }
    char getCh() const {
        return c;
    }
    void setNum(int num) {
        this->num = num;
    }
    void setCh(char c) {
        this->c = c;
    }
};
int main() {
    ExampleEncap obj;
    obj.setNum(100);
    obj.setCh('A');
    cout << obj.getNum() << endl;
    cout << obj.getCh() << endl;
    return 0;
}