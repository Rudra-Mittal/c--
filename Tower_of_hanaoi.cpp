# include<iostream>
using namespace std;
//INTUTIION
/*
1.breaking into sub problems
2. put n-1 disks on helper disk
3. move bigger/last one to destination
4. put the (n-1)disks of helper disk on destination
*/
void tower(int n,char s,char h,char d){// n is no. of disk, s->source,h->helper,d->destination rod
if(n==0)return;
// putting n-1 disks on helper
tower(n-1,s,d,h);//here destination becomes the helper rod by taking help of destination rod(becomes helper rod)
// now move last disk to destination
cout<<s<<"->"<<d<<endl;
// now move the n-1 disks on destination using sorce rod as helper rod
tower(n-1,h,s,d);
}
int main(){
    int n;
    cout<<"enter NO. of disks"<<endl;
    cin>>n;
    tower(n,'A','B','C');

return 0;
}