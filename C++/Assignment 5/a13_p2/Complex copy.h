/*
   CH-230-A
   Complex.h
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

class Complex
{
    private:
        double rpart;
        double ipart;
    
    public:
        //constructors
        Complex();
        Complex(const Complex& ral);
        Complex(double ral, double img);
        //destructor
        ~Complex();

        //setters
        void setReal(double ral);
        void setImaginary(double img);
        double getReal();
        double getImaginary();
        void disp();

        Complex add(Complex);
        Complex prod(Complex);
        Complex diff(Complex);
        Complex conj();
};
