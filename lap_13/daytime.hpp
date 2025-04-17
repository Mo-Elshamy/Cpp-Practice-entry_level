#ifndef DAYTIME_HPP
#define DAYTIME_HPP


class Daytime
{
private:
    int hour , minute, second;
public:
    Daytime():hour(0),minute(0),second(0){}
    Daytime(int h , int min , int sec):hour(h),minute(min),second(sec){}
    ~Daytime() {}
    int getHour() const {return hour;}
    int getMinute() const{return minute;}
    int getSecond() const{return second;}
    int asSeconds() const {
        return (hour*60*60)+(minute*60)+second;
    }
    Daytime operator ++(){
        second++;
        if (second==60)
        {
            minute++;
            second-=60;
        }
        if (minute==60)
        {
            hour++;
            minute-=60;
        }
        return Daytime(hour,minute,second);
    }
    Daytime operator --(){
        --minute;
        if (minute==-1)
        {
            --hour;
            minute=59;
        }
        return Daytime(hour,minute,second);
    }
};

#endif