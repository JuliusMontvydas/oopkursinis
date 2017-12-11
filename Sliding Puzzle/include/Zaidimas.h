#ifndef ZAIDIMAS_H
#define ZAIDIMAS_H
#include <string>

class Zaidimas
{
    public:
        Zaidimas();
        void Zaisti();

    protected:

    private:
        void Ismaisyti();
        void Pajudinti();
        std::string grid[3][3] = {"1","2","3","4","5","6","7","8"," "};
        int tarpox;
        int tarpoy;
        int skaiciausx;
        int skaiciausy;
        std::string x;
};

#endif // ZAIDIMAS_H
