//02 march 2021
//rithesh singh
//fibonicci member 
#include <stdio.h>
#include <stdbool.h>
bool checkMember(int n){

  int pre=1 , current=2 , sum =0;
	for (int i=0; sum<=n; i++)
    {
        sum = pre + current;
        pre =current;
        current =sum ;
        if (sum == n)
        {
            return true;
        }
    }
    return false;
}
int main() {
int n;
scanf("%d",&n);
bool check = checkMember(n);
if (check)
printf("true");
else
printf("false");
}

