/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <iostream>
#include <string>
#include <vector>

bool isPalindrome(std::string &member){
    int size = member.size();
    for(int i = 0 ; i < (size / 2) ; i++ ){
        if(member[i] != member[(size-1) - i])
            return false;
    }
    return true;
}

void rearrange(std::string &member){
    int size = member.size();
    int forward = (size % 2 == 0) ?(size/2)-1 : size/2 ; 
    int back = size/2 ;
    char temp;
    if(size == 2){
        member = "-1";
        return;
    }
    while(true){
        if(member[forward] != member[forward - 1]){
            temp = member[forward];
            member[forward] = member[forward-1];
            member[forward -1] = temp;
            return;
        }else if(member[back] != member[back+1]){
            temp =  member[back];
            member[back] = member[back+1];
            member[back+1] = temp;
            return;
        }

        if(forward-1 == 0 || back + 1 == size -1)
            break;
        forward--;
        back++;
    }
    member = "-1";
};

void antiPalindromeTest(std::vector<std::string> &vec){
    for(auto member : vec){
        if(isPalindrome(member))
            rearrange(member);
        std::cout<<member<<"\n";
    }    
}

int main(){
    int a;
    std::string temp;
    std::vector<std::string> vec;
    std::cin>>a;
    for(int i =0; i < a; i++){
        std::cin>>temp;
        vec.push_back(temp);
    }
    antiPalindromeTest(vec);
};
