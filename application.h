#ifndef APPLICATION_H
#define APPLICATION_H


class Application
{
public:
    Application()=default;
    int exec();
private:
    void menu();

    template <typename T>
    T input_number();
};

#endif // APPLICATION_H
