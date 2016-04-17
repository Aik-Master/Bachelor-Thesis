#include "Shape.h"

class Factory {
public:
    Factory() {}
    ~Factory() {}

    Shape* getInstance(int idx) {
        switch (idx) {
            case 0: return new Circle();
            case 1: return new Triangle();
            case 2: return new Rectangle();
            default: return 0;
        }
    }
};
