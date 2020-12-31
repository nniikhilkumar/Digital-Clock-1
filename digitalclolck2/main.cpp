#include<iostream>
#include<stdlib.h>
#include<unistd.h>
using namespace std;
int main(){
    int h,m,s;
    cin>>h>>m>>s;
    for(int i=0;i>=0;++i){
            system("cls");

        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t"<<h<<" : "<<m<<" : " <<s<<endl;
    s++;
    if(s==60){
        m++;
        s=0;
            }
    if(m==60){
        h++;
        m=0;
    }
    if(h==24){
        h=0;
    }
    sleep(1);
    }

return 0;
}
