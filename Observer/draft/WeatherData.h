#ifndef SUBJECT_H
#define SUBJECT_H

class WeatherData{
private:
    float temp;
    float humidity;
    float pressure;
public:
    float getTemparature(){ return temp; }
    float getHumidity(){ return humidity; }
    float getPressure(){ return pressure; }
};

class CurrentConditionDisplay{
public:
    void updateDisplay(float temp, float humidity, float pressure){ /*~   ~*/};
    void updateStatistics(float temp, float humidity, float pressure){ /*~   ~*/};
};

class Weather{
private:
    WeatherData* data;
    CurrentConditionDisplay* currentConditionDisplay;
public:
    float temp, humidity, pressure;
    Weather(){
        temp = data->getTemparature();
        humidity = data->getHumidity();
        pressure = data->getPressure();
    }
    void updateDisplay(){ currentConditionDisplay->updateDisplay(temp, humidity, pressure); }
    void updateStatistics(){ currentConditionDisplay->updateStatistics(temp, humidity, pressure); }
};

#endif