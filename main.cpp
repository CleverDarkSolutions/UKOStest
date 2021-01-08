#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>

using namespace std;

void triangle(int height)
{
    char items[] = {'*','&','#','@'};
    srand(time(NULL));
    for(int i=1; i<=height; i++)
    {
        for(int k=height-i; k>=0; k--)
        {
            cout<<"  ";
        }
        for(int j=0; j<i; j++)
        {
            int random = rand()% 4;
            char popoga = items[random];
            cout<<"**"<<popoga<<"*";
        }

        cout<<endl;
    }
}

void christmasTree(int height)
{
    triangle(height);
    triangle(height);
    triangle(height);
    cout<<"WESOLYCH SWIAT";
}

int main()
{
    christmasTree(8);
    return 0;
}
