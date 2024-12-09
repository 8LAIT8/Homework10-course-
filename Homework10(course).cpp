/*1)
#include <iostream>
using namespace std;

class SimpleCircle {
public:

    SimpleCircle() = default;
   ~SimpleCircle() = default;

    
    void SetRadius(double r) {
        if (r >= 0) {
            radius = r;
        }
        else {
            cout << "Radius can't be smaller than 0!" << endl;
        }
    }

    
    double GetRadius() const {
        return radius;
    }

private:
    double radius = 0.0; 
};

int main() {
    SimpleCircle circle; 

    circle.SetRadius(38.0); 
    cout << "Radius: " << circle.GetRadius() << endl; 

    return 0;
}
*/
/*2)
#include <iostream>
using namespace std;

class SimpleCircle {
public:
    
    SimpleCircle() : radius(38.0) {}
   ~SimpleCircle() = default;

    
    void SetRadius(double r) {
        if (r >= 0) {
            radius = r;
        }
        else {
            cout << "Radius can't be smaller than 0!" << endl;
        }
    }

    
    double GetRadius() const {
        return radius;
    }

private:
    double radius; 
};

int main() {
    SimpleCircle circle; 
    cout << "Radius: " << circle.GetRadius() << endl;

    return 0;
}
*/
/*3)
#include <iostream>
using namespace std;

class SimpleCircle {
public:
    
    SimpleCircle() : radius(38.0) {}

    SimpleCircle(double r) {
        if (r >= 0) {
            radius = r;
        }
        else {
            cout << "Radius can't be smaller than 0!" << endl;
            radius = 0.0;
        }
    }

    
    ~SimpleCircle() = default;

    
    void SetRadius(double r) {
        if (r >= 0) {
            radius = r;
        }
        else {
            cout << "Radius can't be smaller than 0!" << endl;
        }
    }

    
    double GetRadius() const {
        return radius;
    }

private:
    double radius; 
};

int main() {
    
    SimpleCircle circleDefault;
    cout << "Radius: " << circleDefault.GetRadius() << endl;

    
    SimpleCircle circleParam(100.0);
    cout << "Radius: " << circleParam.GetRadius() << endl;

    
    SimpleCircle circleInvalid(-38.0);
    cout << "Radius: " << circleInvalid.GetRadius() << endl;

    return 0;
}
*/