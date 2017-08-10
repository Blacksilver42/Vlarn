/* itm.h */
struct _itm {
	long	price;
	char	**mem;
	char	obj;
	char	arg;
	char	qty;
};

extern struct _itm itm[];

	/************* Defines for the objects in the game ************/

#define OALTAR 1
#define OTHRONE 2
#define OORB 3		/* orb of enlightement - gives expanded awareness
			  	as long as held */
#define OPIT 4
#define OSTAIRSUP 5
#define OELEVATORUP 6
#define OFOUNTAIN 7
#define OSTATUE 8
#define OTELEPORTER 9
#define OSCHOOL 10
#define OMIRROR 11
#define ODNDSTORE 12
#define OSTAIRSDOWN 13
#define OELEVATORDOWN 14
#define OBANK2 15
#define OBANK 16
#define ODEADFOUNTAIN 17
#define OMAXGOLD 70
#define OGOLDPILE 18
#define OOPENDOOR 19
#define OCLOSEDDOOR 20
#define OWALL 21
#define OTRAPARROW 66
#define OTRAPARROWIV 67

#define OLARNEYE 22	/* The Eye of Larn - enables you to see demons */

/* armor */
#define OPLATE 23
#define OCHAIN 24
#define OLEATHER 25
#define ORING 60
#define OSTUDLEATHER 61
#define OSPLINT 62
#define OPLATEARMOR 63
#define OSSPLATE 64
#define OSHIELD 68

/* weapons */
#define OSWORDofSLASHING 26	/* impervious to rust, light, strong */
#define OHAMMER 27		/* Bessman's Flailing Hammer */
#define OSWORD 28
#define O2SWORD 29		/* 2 handed sword */
#define OSPEAR 30
#define ODAGGER 31
#define OBATTLEAXE 57
#define OLONGSWORD 58
#define OFLAIL 59
#define OLANCE 65

/* rings */
#define ORINGOFEXTRA 32
#define OREGENRING 33
#define OPROTRING 34
#define OENERGYRING 35
#define ODEXRING 36
#define OSTRRING 37
#define OCLEVERRING 38
#define ODAMRING 39

#define OBELT 40

#define OSCROLL 41
#define OPOTION 42
#define OBOOK 43
#define OCHEST 44

#define OAMULET 45
#define OORBOFDRAGON 46
#define OSPIRITSCARAB 47
#define OCUBEofUNDEAD 48
#define ONOTHEFT 49

/* gems */
#define ODIAMOND 50
#define ORUBY 51
#define OEMERALD 52
#define OSAPPHIRE 53

#define OENTRANCE 54
#define OVOLDOWN 55
#define OVOLUP 56
#define OHOME 69

#define OKGOLD 71
#define ODGOLD 72
#define OIVDARTRAP 73
#define ODARTRAP 74
#define OTRAPDOOR 75
#define OIVTRAPDOOR 76
#define OTRADEPOST 77
#define OIVTELETRAP 78
#define ODEADTHRONE 79
#define OANNIHILATION 80		/* sphere of annihilation */
#define OTHRONE2 81			/* dead throne */
#define OLRS 82				/* Larn Revenue Service */
#define OCOOKIE 83
#define OURN 84			/* golden urn - not implemented */
#define OBRASSLAMP 85	/* brass lamp - genie pops up and offers spell */
#define OHANDofFEAR 86		/* hand of fear - scare monster spell lasts
				   twice as long if have this */
#define OSPHTALISMAN 87		/* talisman of the sphere */
#define OWWAND 88	/* wand of wonder - cant fall in trap doors/pits */
#define OPSTAFF 89		/* staff of power - cancels drain life attack*/

#define OVORPAL 90	/* ? - not implemented */
#define OSLAYER 91	/* magical sword - increases intelligence by 10,
			   halves damage caused by demons, demon prince 
			   and lucifer - strong as lance of death against them*/

#define OELVENCHAIN 92		/* elven chain - strong and light, 
				   impervious to rust */
#define OSPEED 93		
#define OACID 94
#define OHASH 95
#define OSHROOMS 96
#define OCOKE 97
#define OPAD 98		/* Dealer McDope's Pad */
/* used up to 98 */
