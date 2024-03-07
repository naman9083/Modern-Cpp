#include <iostream>
#include <memory>
class SingleTon
{

    SingleTon()
    {
        std::cout << "SingleTon constructor" << std::endl;
    }

    static std::shared_ptr<SingleTon> instance;
    int a{0};

public:
    ~SingleTon()
    {
        std::cout << "SingleTon destructor" << std::endl;
    }
    SingleTon(const SingleTon &) = delete;
    SingleTon &operator=(const SingleTon &) = delete;
    SingleTon(SingleTon &&) = delete;
    SingleTon &operator=(SingleTon &&) = delete;
    static std::shared_ptr<SingleTon> getInstance()
    {
        if (instance == nullptr)
        {
            // instance = std::shared_ptr<SingleTon>(new SingleTon());
            instance.reset(new SingleTon());
        }
        return instance;
    }
    void print()
    {
        std::cout << "SingleTon print" << std::endl;
    }

    int getA() const { return a; }
    void setA(int a_) { a = a_; }
};
std::shared_ptr<SingleTon> SingleTon::instance = nullptr;
int main()
{
    std::shared_ptr<SingleTon> s1 = SingleTon::getInstance();
    s1->print();
    s1->setA(10);
    std::shared_ptr<SingleTon> s2 = SingleTon::getInstance();
    std::cout << s2->getA() << "\n";
    s2->print();
    return 0;
}