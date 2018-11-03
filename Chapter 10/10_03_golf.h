class Golf
{
private:
	static const int Len = 40;
	char m_fullname[Len];
	int m_handicap;
public:
	Golf(const char * name = "FOO", int hc = 100500);
	int setgolf();
	void sethandicap();
	void showgolf() const;
};
