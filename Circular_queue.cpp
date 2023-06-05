#include <iostream>
using namespace std;

class cQueue{
    private:
        int rear, front ;
        int arr[5];

    public:
        cQueue(){
            rear = -1;
            front = -1;
            for(int i = 0;i<5; i++){
                arr[i] = 0;
            }
        }  

       bool isEmpty(){
            if(rear == -1 && front == -1){
                return true;
            }
            else{
                return false;
            }
       }

       bool isFull(){
        if((rear+1)%5==front){
            return true;
        }
        else{
            return false;
        }
       }

       void enqueue(int e){
            if(isFull()){
               cout<<"queue is overflow"<<endl;
            }
            else if(rear == -1 ){
                rear = front = 0;
                arr[rear] = e;
            }
            else{
                rear = (rear +1)%5;
                arr[rear] = e;
            }
       }

       void dequeue(){
        if(isEmpty()){
            cout<<" queue is underflow";
        }
        else if(rear == front){
            arr[front] = 0;
            rear =-1;
            front =-1;
        }
        else{
            arr[front] = 0;
            front = (front+1)%5;
        }
       }

       void display(){
        for(int i =0; i<5;i++){
            cout<<arr[i]<<" ";
        }
       }

};

int main(){
    cQueue cq1;
   cq1.enqueue(1);
     cq1.enqueue(2);
     cq1.enqueue(3);
     cq1.enqueue(4);
 cq1.enqueue(5);
 cq1.enqueue(6);

 cq1.dequeue();
 cq1.dequeue();
 cq1.dequeue();
 cq1.dequeue();
 cq1.enqueue(71);
    cq1.display();
    
    
    
}