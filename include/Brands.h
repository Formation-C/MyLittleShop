#ifndef BRANDS_H
#define BRANDS_H

#include <iostream>

class Brands
{
    public:
        Brands();
        virtual ~Brands();

        int  GetId()                    {return id;}
        void SetId(int val)             {id = val;}
        std::string GetName()           {return name;}
        void SetName(std::string val)   {name = val;}
        std::string GetLogo()           {return logo;}
        void SetLogo(std::string val)   {logo=val;}

    protected:

    private:
        int     id;
        std::string  name;
        std::string  logo;
};

#endif // BRANDS_H
