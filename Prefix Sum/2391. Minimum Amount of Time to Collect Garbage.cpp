class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n = garbage.size();
        int m = travel.size();
        for(int i=1; i<m; i++){
            travel[i] += travel[i-1];
        }
        int G=0, P=0, M=0;
        int Gind=0, Pind=0, Mind=0; 
        for(int i=0; i<n; i++){
            for(int j:garbage[i]){
                if(j == 'G'){
                    G++;
                    Gind = i;
                }
                else if(j == 'P'){
                    P++;
                    Pind = i;
                }
                else if(j == 'M'){
                    M++;
                    Mind = i;
                }
            }
        }
        int sum = G+P+M;

        if(Gind != 0){
            sum += travel[Gind-1];
        }

        if(Pind != 0){
            sum += travel[Pind-1];
        }

        if(Mind != 0){
            sum += travel[Mind-1];
        }

        return sum;

        
    }
};