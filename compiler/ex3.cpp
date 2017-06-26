struct Point{
    float x,y,z;
    Point(float x, float y, float z): x(x), y(y), z(z){}

    /*
    Adds two points together and returns result
    */
    Point add(Point b);
};

int main(int argc, char** argv)
{
    Point a(1,1,1);
    Point b(2,2,2);
    Point c = a.add(b);
}