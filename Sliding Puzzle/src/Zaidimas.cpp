#include "Zaidimas.h"
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <algorithm>

Zaidimas::Zaidimas(){}

void Zaidimas::Ismaisyti(){
    srand(time(NULL));
    for(int i=0;i<100;i++)
    {
        swap(grid[rand()%3][rand()%3],grid[rand()%3][rand()%3]);
    }
}

void Zaidimas::Zaisti(){
    Ismaisyti();
    while((grid[0][0]!="1") || (grid[0][1]!="2") || (grid[0][2]!="3") || (grid[1][0]!="4") || (grid[1][1]!="5") || (grid[1][2]!="6") || (grid[2][0]!="7") || (grid[2][1]!="8") || (grid[2][2]!=" "))
        {
            for(int i = 0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                    {
                        std::cout << grid[i][j]<< " ";
                        if (grid[i][j]==" ")
                        {
                            tarpox=i;
                            tarpoy=j;
                        }
                    }
                std::cout << std::endl;
            }
            Pajudinti();
        }
        std::cout << "Puzle iveikta";
}

void Zaidimas::Pajudinti(){
    std::cout << std::endl <<"Iveskite kuri skaiciu norite pajudinti i tuscia langeli" << std::endl;
            std::cin >> x;
            if (x == "1" || x == "2" || x == "3" || x == "4" || x == "5" || x == "6" || x == "7" || x == "8")
            {
                for(int i = 0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                    {
                        if(grid[i][j]==x)
                        {
                            skaiciausx=i;
                            skaiciausy=j;
                        }
                    }
            }
            }

            else {std::cout << std::endl << "Turite ivesti skaiciu nuo 1 iki 8" << std::endl;}

            if((tarpox-1==skaiciausx && tarpoy==skaiciausy) || (tarpox+1==skaiciausx && tarpoy==skaiciausy) || (tarpox==skaiciausx && tarpoy-1==skaiciausy) || (tarpox==skaiciausx && tarpoy+1==skaiciausy) )
            {x=grid[skaiciausx][skaiciausy];grid[tarpox][tarpoy]=x;grid[skaiciausx][skaiciausy]=" ";}
            else {std::cout << "Sie skaiciai negali buti apkeisti vietomis." << std::endl;}
}
