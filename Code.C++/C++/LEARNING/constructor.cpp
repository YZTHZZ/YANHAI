#include<iostream>
using namespace std;
class test_car{
private:
    string color, brand, model;
public:
    test_car() {
        color = "红色 ";
        brand = "宝马牌 ";
        model = "X6 ";
    }
    test_car(string a,string b,string c) {
        color = a;
        brand = b;
        model = c;
    }
    string getColor() const { return color; }
    string getBrand() const { return brand; }
    string getModel() const { return model; }
};
int main() {
    string color,brand,model;;
    test_car car1;
    cout<< "我有一辆车:" << car1.getColor() << car1.getBrand() << car1.getModel();

    test_car car2("黑色"," 奥迪牌"," A6");
    cout<< "我有一辆车:" << car2.getColor() << car2.getBrand() << car2.getModel();
    return 0;

}
