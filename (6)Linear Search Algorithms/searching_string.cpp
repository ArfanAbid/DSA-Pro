
#include <iostream>
#include <string>
using namespace std;

static int linear_search(string st , char target,int length);

int main(){
string st = "arfan_abid";
char target ='f';
int length=st.length();

int ans=linear_search(st,target,length);
cout<<ans;
}
static int linear_search(string st , char target,int length){
if (length==0){
    return -1;
}
for (int index=0;index<length;index++){
    // check for every index if it is a target
    char element =st[index];
    if(element==target){
        return index;
        }


}
//  this line will execute if the target is not found
return -1;

}