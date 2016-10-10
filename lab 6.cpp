#include <iostream>
using namespace std;

class Figure
{
protected:
        int x,y,alpha,m;
        int i,j;
public:
        virtual void show()=0;
        virtual void del()=0;
        virtual void turn(int n)=0;
        virtual void go(int i, int y)=0;
};

class Pr: public Figure
{
public:
        Pr(int x, int y)
        {
                this->x=x;
                this->y=y;
        }
        void show()
        {
                cout<<"Pryamoygolnik with coordinates of center:  ("<<x<<", "<<y<<")"<<endl;
        }
        void del()
        {
            cout<<"deleting Pryamoygolnik whis this parameters: x= "<<x<<" y= "<<y<<" alpha= "<<alpha<<" vector ("<<i<<", "<<j<<")"<<endl;
                x=0;
                y=0;
                alpha=0;
                i=0;
                j=0;
        }
        void turn(int n)
        {
                alpha=n;
                cout<<"Pryamoygolnik was rotated for 30 degrees"<<endl;
        }
        void go(int i, int j)
        {
                this->i=i;
                this->j=j;
                cout<<"Pryamoygolnik was moved by the vector:  ("<<i<<", "<<j<<")"<<endl;
        }
};

int main()
{
        Figure *p;
        p= new Pr(50,100);
        p->show();
        p->turn(30);
        p->go(25,10);
        p->del();
        delete p;
        return 0;
}
//I see

