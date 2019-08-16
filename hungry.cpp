#include <iostream>
using namespace std;
class Singleton
{
private://阻止创建
    Singleton(void)
    {

    }
    static Singleton object;
public:
    static Singleton& get_object(void)//未实例化前给外部调用
    {
        return object;
    }
    void show(void)
    {   
        cout << "我是对象" << &object << endl;
    }
};

Singleton Singleton::object;

int main()
{
    Singleton sig = Singleton::get_object();
    sig.show();
    Singleton sig1 = Singleton::get_object();
    sig1.show();

}
