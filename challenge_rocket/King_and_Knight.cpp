/*
ByteDance Security Engineer Recruitment Challenge
Given the position of a number of knights on the board, determine if the king is in checkmate
*/

#include <iostream>
#include <vector>

using namespace std;
bool allPossibleKnightChecks(int a, int b,int x, int y){//add  case if its on the same position
    if(a == x && b == y){
        cout<<"on pos ";
        return true;
    }else if(a == x+1){
        if(b == y+2 || b == y-2)
            return true;
        else
            return false;
    }
    else if(a == x-1){
        if(b == y+2 || b == y-2)
            return true;
        else
            return false;
    }
    else if(a == x+2){
        if(b == y+1 || b == y-1)
            return true;
        else
            return false;
    }
    else if(a == x-2){
        if(b == y+1 || b == y-1)
            return true;
        else
            return false;
    }
    else{return false;}
};

bool isChecked(int x , int y , const vector<int> &vecs){//check that x and y position against all the knights
    for(int i =0 ; i< vecs.size() ; i+=2){
        if(allPossibleKnightChecks(x , y ,vecs[i],vecs[i+1])){
            cout<<"position "<<x<<" "<<y<<" is under check by "<<vecs[i]<<" "<<vecs[i+1]<<"\n";
            return true;
        }
    }
    cout<<"position "<<x<<" "<<y<<" is not under check\n";
    return false;
};
bool checkmate(int x , int y , const vector<int> &vecs){//run a for all loop ofr the kings position and all its possible movement and check isChecked
    if(isChecked(x , y , vecs) != true)//king is not check
        return false;

    cout<<"king is on check\n"; //delete

    int xtemp ,ytemp;
    int counter =0;
    xtemp = x -1;
    ytemp = y -1;
    for(int i = 0 ; i <9 ; i++){
        if(isChecked(xtemp , ytemp , vecs) != true)//checking all the possible places where the king can ove to
            return false;
        ytemp++;
        counter++;
        if(counter == 3){
            counter  = 0;
            xtemp++;
            ytemp = y-1;
        }
    }
    return true;
};
int main()
{
    int temp , a , b;
    vector<int> vec;

    cin>>temp;

    for(int i =0 ; i < temp ; i++){
        cin>>a>>b;
        vec.push_back(a);
        vec.push_back(b);
    };
    int answer[2];
    cin>>answer[0]>>answer[1];

    if(checkmate(answer[0] , answer[1] , vec))
        cout<<"1 \n";
    else
        cout<<"0\n";

};
/*
possible knight moves
x+2 y+1
x+2 y-1

x-2 y+1
x-2 y-1

x+1 y+2
x+1 y-2

x-1 y-2
x-1 y+2
*/


/*
possible king moves
x y
x y+1
x y-1

x+1 y
x+1 y+1
x+1 y-1

x-1 y
x-1 y+1
x-1 y-1

*/


