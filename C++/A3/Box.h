/*
   CH-230-A
   Box.h
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */

class Volbox
{
    double l, b, h;
    double V;

    public:
        double Vol(double l, double b, double h);
        void disp();
        void setlength(double ln);
        void setbreadth(double br);
        void setheight(double ht);
       

        double getlength(double ln);
        double getbreadth(double br);
        double getheight(double ht);
};