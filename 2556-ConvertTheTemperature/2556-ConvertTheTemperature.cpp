// Last updated: 3/26/2026, 1:25:24 PM
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double K = celsius+273.15;

        double F = (celsius*1.8)+32;
        return {K,F};
    }
};