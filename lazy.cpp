#include <iostream>
using namespace std;
class Singleton
{
private:
    Singleton(void){ }
    static Singleton* objectp;
public:
    static Singleton& get_object(void)
    {
        if(NULL == objectp)
        {
            objectp = new Singleton;
        }
        return *objectp;
    }
    void show(void)
    {
        cout << "我是对象" << objectp << endl;
    }
};

Singleton* Singleton::objectp;
int main()
{
    Singleton str = Singleton::get_object();
    str.show();
    Singleton str1 = Singleton::get_object();
    str1.show();
}
