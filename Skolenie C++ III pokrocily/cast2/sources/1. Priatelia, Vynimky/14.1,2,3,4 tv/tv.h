// tv.h -- t��dy Tv a Remote
#ifndef TV_H_
#define TV_H_

class Tv
{
public:
	friend class Remote; // t��da Remote m� p��stup k soukr. ��stem Tv
	enum {Off, On};
	enum {MinVal,MaxVal = 20};
	enum {Antenna, Cable};
	enum {TV, VCR};

	Tv(int s = Off, int mc = 100) : state(s), volume(5),
		maxchannel(mc), channel(2), mode(Cable), input(TV) {}
	void onoff() {state = (state == On)? Off : On;}
	bool ison() const {return state == On;}
	bool volup();
	bool voldown();
	void chanup();
	void chandown();
	void set_mode() {mode = (mode == Antenna)? Cable : Antenna;}
	void set_input() {input = (input == TV)? VCR : TV;}
	void settings() const; // v�pis v�ech nastaven�
private:
	int state; 			// zapnuto nebo vypnuto
	int volume; 		// bude digitalizov�na 
	int maxchannel; 	// maxim�ln� po�et program�
	int channel; 		// aktu�ln� nastaven� program�
	int mode; 			// z ant�ny nebo kabelem
	int input; 			// TV nebo VCR
};

class Remote
{
private:
	int mode; // ovl�d�n� TV nebo VCR
public:
	Remote(int m = Tv::TV) : mode(m) {}
	bool volup(Tv & t) { return t.volup();}
	bool voldown(Tv & t) { return t.voldown();}
	void onoff(Tv & t) { t.onoff(); }
	void chanup(Tv & t) {t.chanup();}
	void chandown(Tv & t) {t.chandown();}
	void set_chan(Tv & t, int c) {t.channel = c;}
	void set_mode(Tv & t) {t.set_mode();}
	void set_input(Tv & t) {t.set_input();}
};
#endif
