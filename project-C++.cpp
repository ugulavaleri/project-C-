#include<iostream>

using namespace std;

int arr[10] = {1,3,5,7,9,11,13,15,17,19};

void delete_by_place();
void delete_by_number();

void input();
void finder();
void arr_add();
void arr_delete();
void all_array_elements();

int main(){
    input();
    return 0;
}
void input(){
    int a = 0;
    cout<<"Enter number which you want\n"<<endl;
    while(a != 4){
        cout<<"1 - Find   ";
        cout<<"2 - Add   ";
        cout<<"3 - Delete   ";
        cout<<"4 - display all element   ";
        cout<<"5 - Exit."<<endl;
        cin>>a;
        if(a == 1)
            finder();
        else if(a == 2)
            arr_add();
        else if(a == 3)
            arr_delete();
        else if(a == 4)
            all_array_elements();
        else if(a == 5)
            exit(1);
        else
            cout<<"Please enter only 1, 2, 3, 4 or 5 numbers!"<<endl;
    }
}
void finder(){
    int find = 0,ip = 0;
    cout<<"Enter number to found: ";
    cin>>find;
    for(int i = 0;i < 10;i++){
        if(arr[i] == find){
            ip++;
            cout<<i<<" ";
        }
    }
    cout<<"on these place are your finder number"<<endl;
    cout<<"sum there are "<<ip<<" amount of number!"<<endl;
}
void arr_add(){
    int add_number, add_place;
    cout<<"where do you want to add number?";
    cin>>add_place;
    while(add_place > 10){
        cout<<"please enter number between 10!"<<endl;
        cout<<"enter again: ";
        cin>>add_place;
    }
    cout<<"what number do you want to add?";
    cin>>add_number;
    arr[add_place] = add_number;
    for(int i = 0;i < 10;i++){
        cout<<arr[i]<<", ";
    }
}
void delete_by_place(){         // ესაა delete-ს ქვეფუნქცია.
    int place,num;
    cout<<"Enter place: ";
    cin>>place;
    cout<<"Enter num: ";
    cin>>num;
    arr[place] = num;
    for(int i = 0;i < 10;i++){
        cout<<arr[i]<<", ";
    }
}
void delete_by_number(){        // ესაა delete-ს ქვეფუნქცია.
    int num1,num2;
    cout<<"Enter number: ";
    cin>>num1;
    cout<<"Enter changer number: ";
    cin>>num2;
    for(int i = 0;i < 10;i++){
        if(arr[i] == num1){
            arr[i] = num2;
            cout<<"number is changed! (first) "<<endl;
        }
    }
    for(int i = 0;i < 10;i++){
        cout<<arr[i]<<", ";
    }
}
void arr_delete(){
    int del;
    cout<<"delete by"<<endl;
    cout<<"1 - place\t2 - number"<<endl;
    cin>>del;
    while(del > 2){
        cout<<"please enter 1 or 2!"<<endl;
        cout<<"try again: ";
        cin>>del;
    }
    if(del == 1)
        delete_by_place();
    else if(del == 2)
        delete_by_number();
}
void all_array_elements(){
    cout<<"{ ";
    for(int i = 0;i < 10;i++){
        cout<<arr[i]<<", ";
    }
    cout<<"}"<<endl;
}
