int countAsterisks(char * s){
        int count=0,ast=0;
        while(*s){
                if(*s=='|')
                        count++;
                if(count%2==0)
                        if(*s=='*')
                                ast++;
                s++;
                
        }
        return ast;
}