class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m){
            return false;
        }
       
        else{
             string temp = t;
            for(int i=0; i<n;i++){
                bool found=false;
                for(int j=0;j<temp.size();j++){
                    if(s[i]==temp[j]){
                        found=true;
                        temp.erase(temp.begin()+j);
                        break;
                    }
                }
                if(!found)return false;
                
                
                }

                

            }

        return true;
       
        
    }
};
