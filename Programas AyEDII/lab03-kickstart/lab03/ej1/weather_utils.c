#include <stdio.h>
#include "weather_utils.h"
#include "weather_table.h"
#include "weather.h"

int min_hist_temp(WeatherTable table){
    int res;
    res = table[0][0][0]._min_temp;
    for (unsigned int year = 0u; year < YEARS; ++year){
        for (month_t month; month<MONTHS; month++){
            for (unsigned int day = 0u; day < DAYS; ++day){
                if (table[year][month][day]._min_temp<res){
                    res = table[year][month][day]._min_temp;
                }
            }
        }
    }
    return res;
}

void maxhightemp(WeatherTable a, int output[YEARS]){
    
}