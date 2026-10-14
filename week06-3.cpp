//week06-3 學習計畫 simulation 第二題
//leetcode 657. robot return to origin
//機器人 往上U 往下D 往左L 往右R, 問題是否會回到原來位子
class Solution {
public:
    bool judgeCircle(string moves){
        //程式在中間, 上面三行不要動 下面兩行不要動
    int x = 0, y = 0;//
    for (char c : moves){
        if(c=='U') y++;
        if(c=='D') y--;
        if(c=='L') x--;
        if(c=='R') x++;
    }
    if (x==0 && y==0) return true;
    else return false;
    }
};
