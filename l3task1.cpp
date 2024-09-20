#include <bits/stdc++.h>
using namespace std;
class Counter{
    private:
        int count;
        int increament;
    public:
        int l;
        Counter(): count(0),increament(1){l = 100;}
        void increment_step(int step){
            increament = step;
        }
        Counter(int a , int b): count(a) ,increament(5){}
        int get_count(){
            return count;
        }
        void increment(){
            count += increament;
        }
        void res_count(){
            count =0;
        }
};
int main()
{
    Counter c,c2(3,5);
    c.increment();
    cout << c.get_count()<< endl;
    c.res_count();
    cout << c.get_count()<< endl;
    c.increment_step(7);
    c.increment();
    cout << c.get_count()<< endl;
    cout << c2.get_count()<< endl;
    c2.increment();
    cout << c2.get_count()<< endl;
    cout << c.l<< endl;
}