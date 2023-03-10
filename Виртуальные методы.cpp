#include <iostream>
#include <string>
using namespace std;
class TDecimal
{
   public:
      enum {SIZE = 100};
   
   protected:
      unsigned char val[SIZE];
      unsigned size;
      
   public:
      TDecimal(unsigned value = 0): size(0)
      {
         *this = value;
      }
      TDecimal(const string& value): size(0)
      {
         *this = value;
      }
      
      TDecimal& operator = (unsigned value)
      {
         size = 0;
         while (value)
         {
            val[size++] = value % 10;
            value /= 10;
         }
         
         return *this;
      }
      TDecimal& operator = (const string& value)
      {
         size = value.size();
         for (unsigned i = 0; i < size; ++i)
         {
            val[i] = value[size-i-1]-48;
         }
         
         return *this;
      }
      
      unsigned operator [] (unsigned i)
      {
         unsigned char digit = 0;
      
         if (i < size)
         {
            digit = val[size-i];
         }
         
         return digit;
      }
      
      TDecimal operator + (const TDecimal& dec)
      {
         TDecimal result;
         
         unsigned mod = 0;
         
         result.size = (size < dec.size) ? dec.size : size;
         
         for (unsigned i = 0; i < result.size; ++i)
         {
            result.val[i] = val[i] + dec.val[i] + mod;
            
            mod = result.val[i] / 10;
            
            result.val[i] %= 10;
         }
         
         if (mod)
         {
            result.val[result.size++] = 1;
         }
         
         return result;
      }
      
      unsigned GetSize() const
      {
         return size;
      }
      
      friend ostream& operator << (ostream& os, const TDecimal& digit)
      {
         for (unsigned i = digit.size-1; i < digit.size; --i)
         {
            os << (unsigned) digit.val[i];
         }
         return os;
      }
};
int main()
{
   TDecimal a(1234567890), b("9234567890");
   
   cout << (a+b) << endl;
   
   return 0;
}