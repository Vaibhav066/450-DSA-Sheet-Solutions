
string reverseWord(string str){
    
  //Your code here
  int i=0,j=str.length()-1;
  while(i<j){
      char temp=str[i];
      str[i]=str[j];
      str[j]=temp;
      i++;j--;
  }
  return str;
}

