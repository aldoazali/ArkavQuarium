#include "../Global.hpp"
#include "../Coin/Coin.hpp"

#ifndef SNAIL_HPP
#define SNAIL_HPP

class Snail {
    private:
        Location location;
        int currentCoin; //Banyaknya koin sekarang yang ditampung Snail
        Coin* coin;     //Buat nyimpen koin(?) (MARK)
    public:
        Snail();
        ~Snail();
        Snail& operator=(const Snail&);//4 sekawan, untuk operator assignment
        Coin* getCoins()const; //(MARK)
        void insertCoin(const Coin*); //Aggregation (MARK)
        /* KASUS I  = Kalau ada koin dia didekatnya, dia gerak ke lokasi koin
         * KASUS II = Kalau ga ada koin, dia diem
        */
        void Move(); 
    
        /*Get & Set currentCoin*/
        void setCurrentCoin(int);
        int getCurrentCoin()const;
};
#endif
