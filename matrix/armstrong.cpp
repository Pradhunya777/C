#include <iostream>

class ArmstrongNoCheck{
   public : void armstrongcheck(int n){
     int temp=n,rem,rev=0;
     while(n>0){
        rem=n%10;
        rev+=rem*rem*rem;
        n/=10;
     }
     (temp==rev)?std::cout<<"armstrong no":std::cout<<"not armstrong";
   };
};

int main(){
    ArmstrongNoCheck am;
    am.armstrongcheck(153);
    return 0;
}
