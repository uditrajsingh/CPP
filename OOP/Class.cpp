#include<iostream>
#include <cmath>
using namespace std;

class Coordinate{

private:
    int x;
    int y;

public:
    Coordinate(int first, int second){
        x = first;
        y = second;
    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
    float distance(Coordinate other){
        return sqrt(pow((other.getX()-x),2)+pow((other.getY()-y), 2));
    }
};

int main(){

    Coordinate c1 = Coordinate(6, 8);
    Coordinate c2 = Coordinate(4, 0);

    cout << "Distance: " << c1.distance(c2) << "\n";

    return 0;
}
