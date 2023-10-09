# include<iostream>
# include<cstring>
# include<vector>
using namespace std;
/*
INTUTION
1.adding every element once in empty string and removing it from main string
2. when main string becomes zero we have our answer 
3. we want permutations of every first character , so instead of passing left+right substring just pass the index of that character 

*/
vector<string> permute(string &s,vector<string> &ans,string e="",int i=0){
   if(i==s.size()){
    ans.push_back(e);
    return ans;
   }
   for(int j=i;j<s.size();j++){
    swap(s[i],s[j]); 
    permute(s,ans,e+s[i],i+1); 
    swap(s[i],s[j]); 
   } 
   return ans;
}

int main(){

string a="abc";
vector<string> temp;
permute(a,temp);
for(int i=0;i<temp.size();i++){
    cout<<temp[i]<<endl;
}



return 0;
}