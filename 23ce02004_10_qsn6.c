#include<stdio.h>
#include<string.h>



union Packet {
    struct controlmsg{
        int opcode;
        int status_code;
    }c;

    char data_payload[50];
};

struct DataPacket {
    int flag ;
    union Packet p;
    
};

void access_control(struct DataPacket d[] ,int opcode , int status_code,int i  ){
         (d+i)->flag=1;
         (d+i)->p.c.opcode=opcode;
         (d+i)->p.c.status_code=status_code;



}

void access_data(struct DataPacket d[],char a[],int i){
  (d+i)->flag=0;
  strcpy((d+i)->p.data_payload,a);

}

void print_data(struct DataPacket d[],int i){
    if((d+i)->flag==1){
        printf("control message : \n ");
        printf("op code : %d\n",(d+i)->p.c.opcode);
        printf("status code : %d\n",(d+i)->p.c.status_code);
    }

    else if ((d+i)->flag==0){
        printf("data pay load : \n");
        printf("%s",(d+i)->p.data_payload);
    }
}

int main() {
struct DataPacket d[3];
access_control(d,100,304,0);
access_control(d,110,404,1);
char a[]="this is a data payload";
access_data(d,a,2);
int res;

printf("please enter a value : ");
scanf("%d",&res);
for(int i=0;i<3;i++){
    if(i==res){
        print_data(d,i);
    }
}




    return 0;
}