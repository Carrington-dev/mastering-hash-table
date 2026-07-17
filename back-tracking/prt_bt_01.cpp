void generate(string current, int n) {

    if (current.length() == n) {
        cout << current << endl;
        return;
    }

    generate(current + "0", n);

    generate(current + "1", n);
}