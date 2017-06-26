
namespace complicate{
    namespace math{
        template<class T> class Vector3;
        template<class T>
        class Point3 {
            T x, y, z;
            public:
            Point3(T x, T y, T z): x(x), y(y), z(z){}
            Point3<T> add(Point3<T> b){
                return Point3<T>(x+b.x, y+b.y, z+b.z);
            }
            Point3<T> add(int val);
            Point3<T> add(Vector3<T> vec);
        };
        typedef Point3<float> Point3f;
        typedef Point3<double> Point3d;
    }
}

int main(int argc, char** argv)
{
    complicate::math::Point3f a(1,0,0);
    complicate::math::Point3d b(0,1,1);
    a.add(b);
}