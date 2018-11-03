#pragma once
class Plorg
{
private:
	const size_t NAMELEN = 20;
	char m_name[20];
	int m_CI;
public:
	Plorg(const char *name = "Plorga");
	void AddCI(int change);
	void SubCI(int change);
	void Show() const;
};
