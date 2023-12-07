#include <iostream>
using namespace std;
/*This program is written with an array and the size of the array is 5 */

class queue{
private:
    int front;
    int rear;
    int items[5];
public:
    queue(){
        front=0;
        rear=-1;
    }
    int empty(){
        if(rear<front){
            return 1;
        }else{
            return 0;
        }
    }
    int full(){
        if(rear==5-1){
            return 1;
        }else{
            return 0;
        }
    }
    void addq(int x ,int& overflow){
        if(full()){
            cout<<"queue is full"<<endl;
            overflow=1;
        }else{
            overflow=0;
            items[++rear]=x;
        }
    }
    void delq(int &x,int &underflow){
        if(empty()){
            cout<<"queue is empty"<<endl;
            underflow=1;
        }else{
            underflow=0;
            x=items[front++];
        }
    }
    void retrieveq(int &x , int &underflow){
        if (empty()){
            cout<<"queue is empty"<<endl;
            underflow=1;
        }else{
            underflow=0;
            x=items[front];
        }
    }
    void print(){
        for(int i=front;i<=rear;i++){
            cout<<"items ["<<i<<"] = "<<items[i]<<endl;
        }

    }


};

int main() {
    queue q;
    int delNumber;
    int overflow,underflow;
    q.addq(10,overflow);
    q.addq(175,overflow);
    q.addq(163,overflow);
    q.addq(173,overflow);
    q.addq(168,overflow);
    q.delq(delNumber,underflow);
    q.delq(delNumber,underflow);
    q.print();
    return 0;
}
