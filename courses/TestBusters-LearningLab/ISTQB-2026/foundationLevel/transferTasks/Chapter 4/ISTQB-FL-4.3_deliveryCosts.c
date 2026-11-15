
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct DeliveryResult {
    double deliveryCost;
    double totalCost;
    bool deliveryAvailable;
    string message;
};

DeliveryResult calculateDelivery(
    string country,
    double cartValue,
    double discount
) {
    DeliveryResult result = {0.0, 0.0, true, ""};

    // Validate cart value and discount
    if (cartValue <= 0) {
        result.deliveryAvailable = false;
        result.message = "Shopping cart is empty or invalid";
        return result;
    }

    if (discount < 0 || discount > cartValue) {
        result.deliveryAvailable = false;
        result.message = "Invalid discount";
        return result;
    }

    // Calculate order value after discount
    double orderValue = cartValue - discount;

    // Determine delivery costs
    if (country == "Austria") {
        if (orderValue >= 100.0) {
            result.deliveryCost = 0.0;
            result.message = "Free Delivery";
        } else {
            result.deliveryCost = 5.90;
            result.message = "Standard Delivery";
        }
    }
    else if (country == "Germany") {
        if (orderValue >= 100.0) {
            result.deliveryCost = 0.0;
            result.message = "Free Delivery";
        } else {
            result.deliveryCost = 9.90;
            result.message = "Standard Delivery";
        }
    }
    else if (
        country == "France" ||
        country == "Italy" ||
        country == "Spain" ||
        country == "Netherlands"
    ) {
        result.deliveryCost = 14.90;
        result.message = "EU Delivery";
    }
    else {
        result.deliveryAvailable = false;
        result.message = "Delivery to this country is not available";
        return result;
    }

    // Calculate total order cost
    result.totalCost = orderValue + result.deliveryCost;

    return result;
}

int main() {
    string country;
    double cartValue;
    double discount;

    cout << "Delivery Cost Calculator" << endl;

    cout << "Enter delivery country: ";
    cin >> country;

    cout << "Enter shopping cart value: ";
    cin >> cartValue;

    cout << "Enter discount: ";
    cin >> discount;

    DeliveryResult result =
        calculateDelivery(country, cartValue, discount);

    if (result.deliveryAvailable) {
        cout << fixed << setprecision(2);
        cout << "Delivery: " << result.deliveryCost << " EUR" << endl;
        cout << "Total: " << result.totalCost << " EUR" << endl;
    }

    cout << result.message << endl;

    return 0;
}
