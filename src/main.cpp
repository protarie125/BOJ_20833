#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto ans = int{ n * n * n };
	while (0 < (n--)) {
		ans += n * n * n;
	}

	cout << ans;

	return 0;
}