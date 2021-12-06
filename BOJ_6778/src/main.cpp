#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    auto mayTroyMartian = bool{ true };
    auto mayVladSaturnian = bool{ true };
    auto mayGraemeMercurian = bool{ true };

    int a, e;
    cin >> a >> e;

    if (a < 3 || 4 < e) {
        mayTroyMartian = false;
    }

    if (6 < a || e < 2) {
        mayVladSaturnian = false;
    }

    if (2 < a || 3 < e) {
        mayGraemeMercurian = false;
    }

    if (mayTroyMartian)
        cout << "TroyMartian\n";

    if (mayVladSaturnian)
        cout << "VladSaturnian\n";

    if (mayGraemeMercurian)
        cout << "GraemeMercurian\n";

    return 0;
}