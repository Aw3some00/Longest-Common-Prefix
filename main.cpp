#include <iostream>
#include <vector>
#include <string>
std::string LCP(std::vector<std::string> vec){
    if(vec.size()==0){
        return 0;
    }
    
    if(vec.size()==1){
        return vec[0];
    }
    
    std::string start=vec[0];
    for (int i = 1; i < vec.size(); i++){
        std::string process=vec[i];
        int readed=0;
        int last=0;
        while(readed<start.size()&&readed<process.size()){
            if(start[readed] == process[readed]){
                last++;
            }
            else{
                break;
            }
            readed++;
        }
        
        start=start.substr(0,last);
        
        
    }
    return start;
    
}



int main(){
    std::vector<std::string> strs = {"flower", "flight", "eflicker"};
    std::string result = LCP(strs);
    std::cout<<result<<"\n";
    
    
    
    
    
    
    
    
    
    

    
    
    
    
    
}
