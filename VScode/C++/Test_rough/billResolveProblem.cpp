#include <iostream>

class Electricity {
protected:
    int units;
public:
    Electricity(int u) : units(u) {}

    virtual double bill() {
        double cost = 0;
        if (units <= 100) {
            cost = units * 0.50;
        } else if (units > 100 && units <= 300) {
            cost = 100 * 0.50 + (units - 100) * 0.60;
        } else {
            cost = 100 * 0.50 + 200 * 0.60 + (units - 300) * 0.60;
        }
        return cost;
    }
};

class More_Electricity : public Electricity {
public:
    More_Electricity(int u) : Electricity(u) {}

    double bill() override {
        double cost = Electricity::bill();
        if (cost > 250) {
            double surcharge = (cost - 250) * 0.15;
            cost += surcharge;
        }
        return cost;
    }
};

int main() {
    int units_consumed = 350;
    More_Electricity electricity_bill(units_consumed);
    double total_cost = electricity_bill.bill();
    std::cout << "Total cost for " << units_consumed << " units: Rs. " << total_cost << std::endl;

    return 0;
}