#ifndef STONEWT_H_
#define STONEWT_H_
enum Mode { FLOATLBS, INTLBS, STONE };
class Stonewt
{
private:
	enum {Lbs_per_stn = 14};	
	Mode state;
	int stone;
	double pds_left;
	double pounds;	
public:
	Stonewt(double lbs, Mode mode = FLOATLBS);
	Stonewt(int lbs, Mode mode = FLOATLBS);
	Stonewt(int stn, double lbs, Mode mode = FLOATLBS);
	Stonewt();
	~Stonewt();
	void SetMode(Mode mode);
	
	Stonewt operator+(const Stonewt & b) const;
	Stonewt operator*(double n) const;
	Stonewt operator-(const Stonewt & b) const;

	friend Stonewt operator*(double n, const Stonewt &a);
	friend std::ostream & operator<<(std::ostream & os, const Stonewt & stn); 
};
#endif	
