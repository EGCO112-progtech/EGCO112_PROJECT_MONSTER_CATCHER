#include "NODE.h"
#include <iostream>
using namespace std;
NODE::NODE(int Atk ,int Hp,int Or,string name){
          atk=Atk;
          hp=Hp;
          Name=name;
          order=Or;
          nextPtr=NULL;
          pPtr=NULL;
}
NODE::~NODE(){
      cout<<"Killed Monster "<<this->show_order()<<endl;
}
void NODE::Show_NODE(){
    //Print Stats
    cout<<"No."<<order<<endl;
    cout<<"Monster: "<<Name<<endl;
    cout<<"ATK:"<<atk<<endl;
    cout<<"HP: "<<hp<<endl;;
}
NODE* NODE::move_next(){
      return nextPtr;
}
void NODE::set_next(NODE* node){
       nextPtr = node; //set nextPtr to 
}
void NODE::set_back(NODE* node){
       pPtr = node;  //set PreviousPtr to 
}
string NODE::show_name(){
    return Name;
}
NODE* NODE::move_back(){
    return pPtr;
}
int NODE::show_order(){
    return order;
}
void NODE::set_order_node(int n){
      order=n;
}