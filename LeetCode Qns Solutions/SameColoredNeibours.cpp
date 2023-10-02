//https://leetcode.com/problems/remove-colored-pieces-if-both-neighbors-are-the-same-color/
class Solution {
public:
    bool winnerOfGame0(string colors) {
        int ca = 0, cb = 0, tmp = 0;
        for(int i = 0; i < colors.size(); ++i){
            cout<<i;
            if(colors[i] == 'A'){
                while(i < colors.size() && colors[i] == 'A'){
                    i++; tmp++;
                }
                //cout<<" A i:"<<i<<" tmp:"<<tmp<<endl;
                ca += (tmp > 2)?tmp-2:0;
            } else if(colors[i] == 'B'){
                while(i < colors.size() && colors[i] == 'B'){
                    i++; tmp++;
                }
                //cout<<" B i:"<<i<<" tmp:"<<tmp<<endl;
                cb += (tmp > 2)?tmp-2:0;
            }
            //cout<<"i reset to"<<((i != colors.size())?i-1:i)<<endl;
            if (i != colors.size()) i-=1;
            tmp = 0;
        }
        //cout<<ca<<" "<<cb<<endl;
        return (ca > cb);
    }
	bool winnerOfGame(string colors) {
        int ca = 0, cb = 0, tmp = 0, clr;
        for(int i = 0; i < colors.size(); ++i){
            clr = colors[i];
            while(i < colors.size() && colors[i] == clr){
                i++; tmp++;
            }
            if(tmp > 2)
                (clr == 65)? ca += tmp-2: cb += tmp-2;
            i-=1;
            tmp = 0;
        }
        return (ca > cb);
    }
};