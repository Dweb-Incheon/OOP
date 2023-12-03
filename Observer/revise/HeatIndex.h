#ifndef HEAT_INDEX_H
#define HEAT_INDEX_H

#include "Subject.h"
#include "Observer.h"
#include "DisplayElement.h"
#include <iostream>


double computeHeatIndex(const double &, const double &);

class HeatIndex : public Observer, public DisplayElement {
	public:
		HeatIndex(Subject *wd) : weatherData(wd) { weatherData->registerObserver(this); }
		void update(double t, double h, double p) override;
		void display() const override;
	private:
		double heatIndex = 0.0f; 
		Subject *weatherData;
};

void HeatIndex::update(double t, double h, [[maybe_unused]] double p) {
	heatIndex =  computeHeatIndex(t, h);
	display();
}

void HeatIndex::display() const {

	std::cout << "Heat Index is " << heatIndex << '\n';
}

// non-member function
double computeHeatIndex(const double &t, const double &rh) {
	double index = (double)((16.923 + (0.185212 * t) + (5.37941 * rh) - (0.100254 * t * rh) 
				+ (0.00941695 * (t * t)) + (0.00728898 * (rh * rh)) 
				+ (0.000345372 * (t * t * rh)) - (0.000814971 * (t * rh * rh)) +
				(0.0000102102 * (t * t * rh * rh)) - (0.000038646 * (t * t * t)) + (0.0000291583 * 
					(rh * rh * rh)) + (0.00000142721 * (t * t * t * rh)) + 
				(0.000000197483 * (t * rh * rh * rh)) - (0.0000000218429 * (t * t * t * rh * rh)) +
				0.000000000843296 * (t * t * rh * rh * rh)) - (0.0000000000481975 * (t * t * t * rh * rh * rh)));

	return index;
}

#endif