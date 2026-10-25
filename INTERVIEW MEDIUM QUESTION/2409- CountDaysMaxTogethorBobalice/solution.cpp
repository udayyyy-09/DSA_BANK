/*


class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        //base case
        if(arriveAlice > leaveBob || arriveBob > leaveAlice) return 0;

        int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        auto comp = [&](string date){
            int month = stoi(date.substr(0,2));    //use to fetch month from string and convert it into integer
            int day = stoi(date.substr(3,2));

            for(int i = 0;i<month-1;i++){
                day += days[i];
            }
            return day;
        };

        int alicearrivedays = comp(arriveAlice);
        int bobarrivedays = comp(arriveBob);
        int aliceleavedays = comp(leaveAlice);
        int bobleavedats = comp(leaveBob);

        int maxi = max(alicearrivedays, bobarrivedays);
        int mini = min(aliceleavedays,bobleavedats);

        return abs(maxi - mini) + 1;
    }
};


*/