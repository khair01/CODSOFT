#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<unordered_map>
#include<algorithm>
#include<limits.h>
using namespace std;
void TasksView(unordered_map<string , int>&Tasks){
    cout<<endl;
    cout<<"-----------------------"<<endl;
    for(auto &task : Tasks){
        cout<<task.first<<" ---- ";
        if(task.second == 0){
            cout<<"Pending"<<endl;
        }
        else
        cout<<"Completed"<<endl;
    }
    cout<<"-----------------------"<<endl;
}
int main(){
    unordered_map<string , int>Tasks;
    int input;

    cout<<"-------- TO - DO LIST -----------"<<endl;

    while(true){
            cout<<endl;
        cout << "1) Add Task" << endl;
        cout << "2) View Tasks" << endl;
        cout << "3) Mark Task as Completed" << endl;
        cout << "4) Remove Task" << endl;
        cout << "5) Exit" << endl;
        cout << "Enter your choice : ";
        cin >> input;
        switch(input)
        {
            case 1:
            {
                    cout<<endl;
                string task;
                cout<<"Enter Task  : ";
                cin.ignore();
                getline(cin,task);
                Tasks[task] = 0;
                cout<<"Task Added !! "<<endl;
                break;
            }
            case 2:
            {
                TasksView(Tasks);
                break;
            }
            case 3:
            {
                    cout<<endl;
                string task;
                cout << "Enter task name to mark as completed: ";
                cin.ignore();
                getline(cin, task);
                if (Tasks.find(task) != Tasks.end()) {
                    Tasks[task] = 1;
                    cout << "Task marked as completed!" << endl;
                } else {
                    cout << "Task not found." << endl;
                }
                break;
            }
            case 4:
            {
                    cout<<endl;
                 string task;
                cout << "Enter task name to remove: ";
                cin.ignore(); 
                getline(cin, task);

              
                if (Tasks.find(task) != Tasks.end()) {
                    Tasks.erase(task);
                    cout << "Task removed!" << endl;
                } else {
                    cout << "Task not found." << endl;
                }
                break;
            }
            case 5:
            {
                return 0;
            }
            default:
            cout<<"Invalid Choice !";
        }
    }

return 0;
}