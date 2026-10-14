//week06-4.cpp 學習計畫Simulation第一題
//LeetCode 682. baseball Game
// 5: 陣列裡 5
// 2: 陣列裡 5 2
// C: 陣列裡 5 (刪掉了最後的2)
// D: 陣列裡 5 10 15 (把最後的5變兩倍 塞入)
// +: 陣列裡 5 10 15 (最後兩個數5+10變成15,塞入)
// 答案是, 把所有的數加起來
class Solution {
public:
    int calPoints(vector<string>& operations) {
        //遇到 Simulation 模擬, 就用for 迴圈,一步步數
        //week03 week04 教過 C++進階for迴圈 for (char c : s) for (int num : a)
        vector<int> a;
        for(string s : operations ) {//大資料結構 vector 哩, 裝小資料結構 string
            if (s=="C") {
                a.pop_back();
            } else if (s=="D") {
                a.push_back( a[a.size()-1]*2);
            } else if (s=="+"){
                a.push_back(a[a.size()-2] + a[a.size()-1] );
            } else {
                //a.push_back( stoi(s) );
                //a.push_back( atoi(s.c_str()));
                int now;
                stringstream ss(s);
                ss >> now;
                a.push_back(now);
            }
        }
        int ans = 0;
        for (int num : a) {
            ans+= num;
        }
        return ans;
    }
};
