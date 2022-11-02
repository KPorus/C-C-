ostream& operator <<(ostream& COUT, test& ob)
{
    COUT << "NAME:" << ob.Name << "\n";
    COUT << "Count:" << ob.Count << "\n";
    return COUT;
}