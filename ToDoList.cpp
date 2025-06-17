#include<iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    vector<string> vectask;
    cout<<"Welcome USER\n";
    int choice;
    string input;
    //choices are-
    cout<<"\n1)Add Task\n2)Delete Task\n3)Show Tasks\n4)STOP/TERMINATE Session";
    while(true){
    cout<<"\nEnter Your Choice :";
    getline(cin,input);
    if(input=="1"){choice=1;}
    else if(input=="2"){choice=2;}
    else if(input=="3"){choice=3;}
    else if(input=="4"){choice=4;}
    else{
        cout<<"YOU CAN ONLY TYPE NUMBERS BETWEEN 1-4\n";
        cout<<"PLEASE TRY AGAIN";
        continue;
    }

    string task;
    if(choice==1){
        cout<<"Write Task : ";
        getline(cin,task);
        vectask.push_back(task);
        cout<<"\nTask Added\n";
    }
    else if(choice==2){
        if(vectask.empty()){
            cout<<"No TAsks to delete\n";
        }
        else{
            string numInput;
            cout<<"Enter Task Number TO Delete";
            getline(cin,numInput);
            bool ok=true;
            for(int i=0;i<numInput.length();i++){
                if(!isdigit(numInput[i])){
                    ok=false;
                    break;
                }
            }

            if(!ok){
                cout<<"ONLY NUMBERS ARE ALLOWED\n";
                continue;
            }
            int num = stoi(numInput);
            if(num>=1 && num<=vectask.size()){
                string temp=vectask[num-1];
                vectask.erase(vectask.begin()+num-1);
                cout<<"Task Number "<<num<<" that is "<<temp <<" has been deleted. ";
            }
            else{
                cout<<"Invalid Choice\n";
            }
        }
    }
    else if(choice==3){
        if(vectask.empty()){
            cout<<"No TAsks \n";
        }
        else{
            for(int i=0;i<vectask.size();i++){
                cout<<i+1<<"."<<vectask[i]<<endl;
            }
        }
    }
    else if(choice==4){
        cout<<"EXITING................................";
        break;
    }
  


    }
}