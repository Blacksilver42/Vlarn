#include "header.h"


/* module: action.c */

void run(int dir);
void wield(void);
void ydhi(char);
void ycwi(char);
void wear(void);
void dropobj(void);
void readscr(void);
void eatcookie(void);
void quaff(void);
int  qwhatitem(void);
int  whatitem(char *);
int  readnum(int);
void do_create(void);

/* module: bill.c */

int  letter1(void);
int  letter2(void);
int  letter3(void);
int  letter4(void);
int  letter5(void);
int  letter6(void);
void mailbill(void);

/* module: config.c */


/* module: create.c */

int makeplayer(void);
int newcavelevel(int);
int makemaze(int);
int eat(int, int);
int cannedlevel(int);
int treasureroom(int);
int troom(int, int, int, int, int, int);
int makeobject(int);
int fillmroom(int, int, int);
int froom(int, int, int);
int fillroom(int, int);
int fillmonst(int);
int sethp(int);
int checkgen(void);

/* module: data.c */


/* module: diag.c */

int diag(void);
int diagdrawscreen(void);

/* module: display.c */

int bottomdo(void);
int bottomgold(void);
int bot_spellx(void);
int bot_linex(void);
int bot_hpx(void);
int botside(void);
int bothp(void);
int draws(int, int, int, int);
int drawscreen(void);
int showcell(int, int);
int show1cell(int, int);
int showplayer(void);
int moveplayer(int);
int seemagic(int);
int seepage(void);

/* module: fortune.c */

char *fortune(char *);

/* module: help.c */

int help(void);
int welcome(void);
int retcont(void);
int openhelp(void);

/* module: io.c */

int getcharacter(void);
int newgame(void);
/*VARARGS*/
void lprintf(const char * fmt, ...);
int lprint(long);
int lwrite(char *, int);
long lgetc1(void);
long larnrint();
int lrfill(char *, int);
char *lgetw(void);
char *lgetl(void);
int lcreat(char *);
int lopen(char *);
int lappend(char *);
int lrclose(void);
int lwclose(void);
int lprcat(char *);
int init_term(void);
int cl_up(int, int);
int cl_dn(int, int);
int standout(char *);
int set_score_output(void);
int lflush(void);
int putcharacter(int);
int flush_buf(void);
int tmcapcnv(char *, char *);
char *getword(char *);

/* module: main.c */

int main(int, char **);
int parse(void);
int parse2(void);
extern char * potionname[];
extern char * scrollname[];
/* module: monster.c */

int createmonster(int);
int cgood(int, int, int, int);
int createitem(int, int, int, int);
int cast(void);
int speldamage(int);
int loseint(void);
int isconfuse(void);
int nospell(int, int);
int fullhit(int);
int direct(int, int, char *, int);
int godirect(int, int, char *, int, int);
int ifblind(int, int);
int tdirect(int);
int makewall(int);
int omnidirect(int, int, char *);
int dirsub(int *, int *);
int verifyxy(int *, int *);
int dirpoly(int);
int hitmonster(int, int);
int hitm(int, int, int);
int hitplayer(int, int);
int dropsomething(int, int, int);
int dropgold(int);
int something(int, int, int);
int newobject(int, int *);
int spattack(int, int, int);
int checkloss(int);
int annihilate(void);
int genmonst(void);
int makemonst(int);
int randmonst(void);

/* module: moreobj.c */

int oaltar(void);
int ohear(void);
int othrone(int);
int odeadthrone(void);
int ochest(void);
int ofountain(void);
int fntchange(int);
int fch(int, long *);

/* module: movem.c */

int movemonst(void);
int movemt(int, int);
int mmove(int, int, int, int);
int teleportmonst(int, int, int);

/* module: nap.c */

int nap(int);
int napms(int);

/* module: object.c */

int lookforobject(void);
int finditem(int);
int ostairs(int);
int oteleport(int);
int opotion(int);
int quaffpotion(int);
int oscroll(int);
int adjusttime(long);
int read_scroll(int);
int opit(void);
int obottomless(void);
int oelevator(int);
int ostatue(void);
int omirror(void);
int obook(void);
int readbook(int);
int ocookie(void);
int ogold(int);
int ohome(void);
int iopts(void);
int ignore(void);
int closedoor(void);

/* module: player.c */

int raiselevel(void);
int loselevel(void);
int raiseexperience(long);
int loseexperience(long);
int losehp(int);
int losemhp(int);
int raisehp(int);
int raisemhp(int);
int raisespells(int);
int raisemspells(int);
int losespells(int);
int losemspells(int);
int positionplayer(void);
int recalc(void);
int quit(void);
int more(void);
int take(int, int);
int drop_object(int);
int enchantarmor(void);
int enchweapon(void);
int pocketfull(void);
int nearbymonst(void);
int stealsomething(int, int);
int emptyhanded(void);
int creategem(void);
int adjustcvalues(int, int);
int gettokstr(char *);
int getpassword(void);
int getyn(void);
int packweight(void);

/* module: regen.c */

int regen(void);

/* module: savelev.c */

int savelevel(void);
int getlevel();
int savegame(char *);
int restoregame(char *);
int greedy(void);
int fsorry(void);
int fcheat(void);
int init_cells(void);
int bwrite(int, char *, long);
int bread(int, char *, long);
unsigned int sum(unsigned char *, int);

/* module: scores.c */

int readboard(void);
int writeboard(void);
int makeboard(void);
int hashewon(void);
long paytaxes(long);
int winshou(void);
int shou(int);
int showscores(void);
int showallscores(void);
int sortboard(void);
int newscore(long, char *, int, int);
int new1sub(long, int, char *, long);
int new2sub(long, int, char *, int);
int died(int);
int diedsub(int);
int showscore3(int);
int showscore1(int, char **);

/* module: show.c */

int showstr(void);
int qshowstr(void);
int t_setup(int);
int t_endup(int);
int showwear(void);
int showwield(void);
int showread(void);
int showeat(void);
int showquaff(void);
int show1(int, char **);
int show3(int);

/* module: signal.c */

int s2choose(void);
SIGTYPE cntlc(int);
SIGTYPE sgam(int);
SIGTYPE stop(int);
SIGTYPE sigsetup(void);
int sigsave(void);
int sigreset(void);
SIGTYPE sigpanic(int);

/* module: sphere.c */

int newsphere(int, int, int, int);
int rmsphere(int, int);
int sphboom(int, int);
int movsphere(void);

/* module: store.c */

int dnd_2hed(void);
int dnd_hed(void);
int dndstore(void);
int handsfull(void);
int outofstock(void);
int nogold(void);
int dnditem(int);
int sch_hed(void);
int oschool(void);
int obank(void);
int obank2(void);
int banktitle(char *);
int ointerest(void);
int obanksub(void);
int appraise(int, int);
int otradhead(void);
int otradepost(void);
int cnsitm(void);
int olrs(void);
int nomore(void);
int nocash(void);
int pad_hd(void);
int opad(void);
int snag(int);
int pick_char(int);

/* module: tok.c */

int yylex(void);
int flushall(void);
int sethard(int);
int readopts(void);

/* module: tty.c */

int setctty(void);
int gettty(void);
int settty(void);
int setuptty(void);
int scbr(void);
int sncbr(void);
int setupvt100(void);
int clearvt100(void);



	/************** extern decls for all data items **********/

extern char *tempfilename, *libdir;
extern char bot1f,bot2f,bot3f;	/* in display.c */
extern char ckpfile[], monstnamelist[];
extern char larnlevels[],lastmonst[];
extern char savefilename[],scorefile[], beenhere[];
extern char objnamelist[],optsfile[],*potiondata[],stealth[MAXX][MAXY];
extern char *scrolldata[],*spelcode[],*speldescript[];
extern char *class[],course[],diagfile[],fortfile[],helpfile[];
extern char *inbuffer,drug[], know[MAXX][MAXY], item[MAXX][MAXY];
extern char *levelname[],loginname[],logname[],*lpbuf,*lpend;
/* extern char *lpnt, *password, mitem[MAXX][MAXY], moved[MAXX][MAXY];  */
extern char *lpnt, *password, moved[MAXX][MAXY]; 
extern char *objectname[], *spelname[],*spelmes[],char_class[], iven[];
extern char nosignal, nobeep, oldx, oldy, dropflag;
extern int playerx, playery;
extern char restorflag,nomove, srcount, char_picked;
extern char nowelcome, level, cheat, enable_scroll;
extern char nch[], ndgg[], ckpflag, monstlevel[];
extern char nlpts[], nplt[],nsw[], mail,boldon, splev[];
extern char potprob[], predostuff, scprob[], spelknow[], do_fork, sex;
extern char spelweird[MAXMONST+8][SPNUM], wizard;
extern char diroffx[],diroffy[],hitflag,hit2flag,hit3flag;
extern char rmst, lasthx,lasthy,lastpx,lastpy;
extern char ramboflag, compress;

extern short hitp[MAXX][MAXY], ivenarg[], screen[MAXX][MAXY];
extern short iarg[MAXX][MAXY], lastnum;	/* must be short for gold piles */

extern int yrepcount,userid;
extern int ipoint, iepoint;

extern long initialtime,outstanding_taxes,skill[],gtime,c[],cbak[];
extern long lasttime;

