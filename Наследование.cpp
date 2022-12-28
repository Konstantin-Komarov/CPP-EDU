#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
class TCar
{
   protected:
      string name;
      unsigned cylinder;
      unsigned power;
   public:
      TCar(const string& theName, unsigned theCiliners,
           unsigned thePower) throw (const char*)
      : name(theName), cylinder(theCiliners), power(thePower)
      {
         if (name.empty())
         {
            throw "name is empty";
         }
         if (cylinder == 0)
         {
            throw "count cylinder can not be zero";
         }
         if (power == 0)
         {
            throw "power can not be zero";
         }
      }
      void SetPower(unsigned thePower) throw (const char*)
      {
         if (thePower == 0)
         {
            throw "power can not be zero";
         }
         power = thePower;
      }
      unsigned GetPower() const
      {
         return power;
      }
};
class TLorry: public TCar
{
   protected:
      unsigned carrying;
   public:
      TLorry(const string& theName, unsigned theCiliners,
             unsigned thePower, unsigned theCarrying) throw (const char*)
      : TCar(theName, theCiliners, thePower), carrying(theCarrying)
      {
         if (carrying == 0)
         {
            throw "carrying can not be zero";
         }
      }
      void SetName(const string& theName) throw (const char*)
      {
         if (theName.empty())
         {
            throw "name is empty";
         }
         name = theName;
      }
      const string& GetName() const
      {
         return name;
      }
      void SetCarrying(unsigned theCarrying) throw (const char*)
      {
         if (theCarrying == 0)
         {
            throw "carrying can not be zero";
         }
         carrying = theCarrying;
      }
      unsigned GetCarrying() const
      {
         return carrying;
      }
      friend ostream& operator << (ostream& theOS, const TLorry& theLorry)
      {
         theOS << "name: " << theLorry.name     << endl;
         theOS << "cyl:  " << theLorry.cylinder << endl;
         theOS << "pow:  " << theLorry.power    << endl;
         theOS << "carr: " << theLorry.carrying << endl;
         return theOS;
      }
};
TLorry* GreateLorry()
{
   const char* CName[] = {"Honda", "Isuzu", "Volvo", "Kenworth", "SolexAuto"};
   const unsigned CSizeName = sizeof(CName) / sizeof(*CName);
   TLorry* lorry = new TLorry(CName[::rand() % CSizeName],
                              ::rand() % 6 * 2 + 2,
                              ::rand() % 1000 + 100,
                              ::rand() % 1000 + 100);
   return lorry;
}
int main()
{
   ::srand(::time(NULL));
   const unsigned CLorryCount = 5;
   TLorry* lorry[CLorryCount];
   try
   {
      for (unsigned i = 0; i < CLorryCount; ++i)
         lorry[i] = GreateLorry();
      lorry[0]->SetName("unknow");
      lorry[0]->SetPower(1000);
      lorry[0]->SetCarrying(1000);
      for (unsigned i = 0; i < CLorryCount; ++i)
         cout << *lorry[i] << endl;
      for (unsigned i = 0; i < CLorryCount; ++i)
         delete lorry[i];
   }
   catch (const char* err)
   {
      cout << "error: " << err << endl;
   }
   return 0;
}