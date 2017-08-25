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
int qwhatitem(void);
int whatitem(char *);
long readnum(long);
void do_create(void);

/* module: bill.c */

int letter1(void);
int letter2(void);
int letter3(void);
int letter4(void);
int letter5(void);
int letter6(void);
void mailbill(void);

/* module: config.c */


/* module: create.c */

void makeplayer(void);
void newcavelevel(int);
void makemaze(int);
void eat(int, int);
int cannedlevel(int);
void treasureroom(int);
void troom(int, int, int, int, int, int);
void makeobject(int);
void fillmroom(int, int, int);
void froom(int, int, int);
void fillroom(int, int);
int fillmonst(int);
void sethp(int);
void checkgen(void);

/* module: data.c */


/* module: diag.c */

void diag(void);
void diagdrawscreen(void);

/* module: display.c */

void bottomdo(void);
void bottomgold(void);
void bot_spellx(void);
void bot_linex(void);
void bot_hpx(void);
void botside(void);
void bothp(void);
void draws(int, int, int, int);
void drawscreen(void);
void showcell(int, int);
void show1cell(int, int);
void showplayer(void);
int moveplayer(int);
void seemagic(int);
void seepage(void);

/* module: fortune.c */

char *fortune(char *);

/* module: help.c */

void help(void);
void welcome(void);
void retcont(void);
int openhelp(void);

/* module: io.c */

int getcharacter(void);
void newgame(void);
/*VARARGS*/
void lprintf(const char * fmt, ...);
void lprint(long);
void lwrite(char *, int);
long lgetc1(void);
long larnrint();
void lrfill(char *, int);
char *lgetw(void);
char *lgetl(void);
int lcreat(char *);
int lopen(char *);
int lappend(char *);
void lrclose(void);
void lwclose(void);
void lprcat(char *);
void init_term(void);
void cl_up(int, int);
void cl_dn(int, int);
void larnstandout(char *);
void set_score_output(void);
void lflush(void);
int putcharacter(int);
void flush_buf(void);
void tmcapcnv(char *, char *);
char *getword(char *);

/* module: main.c */

int main(int, char **);
void parse(void);
void parse2(void);
extern char * potionname[];
extern char * scrollname[];
/* module: monster.c */

void createmonster(int);
int cgood(int, int, int, int);
void createitem(int, int, int, int);
void cast(void);
void speldamage(int);
void loseint(void);
int isconfuse(void);
int nospell(int, int);
int fullhit(int);
void direct(int, int, char *, int);
void godirect(int, int, char *, int, int);
void ifblind(int, int);
void tdirect(int);
void makewall(int);
void omnidirect(int, int, char *);
int dirsub(int *, int *);
int verifyxy(int *, int *);
void dirpoly(int);
void hitmonster(int, int);
int hitm(int, int, int);
void hitplayer(int, int);
void dropsomething(int, int, int);
void dropgold(int);
void something(int, int, int);
int newobject(int, int *);
int spattack(int, int, int);
void checkloss(int);
void annihilate(void);
void genmonst(void);
int makemonst(int);
void randmonst(void);

/* module: moreobj.c */

void oaltar(void);
void ohear(void);
void othrone(int);
void odeadthrone(void);
void ochest(void);
void ofountain(void);
void fntchange(int);
void fch(int, long *);

/* module: movem.c */

void movemonst(void);
void movemt(int, int);
void mmove(int, int, int, int);
void teleportmonst(int, int, int);

/* module: nap.c */

void nap(int);

/* module: object.c */

void lookforobject(void);
void finditem(int);
void ostairs(int);
void oteleport(int);
void opotion(int);
void quaffpotion(int);
void oscroll(int);
void adjusttime(long);
void read_scroll(int);
void opit(void);
void obottomless(void);
void oelevator(int);
void ostatue(void);
void omirror(void);
void obook(void);
void readbook(int);
void ocookie(void);
void ogold(int);
void ohome(void);
void iopts(void);
void ignore(void);
void closedoor(void);
void copymagics(void);

/* module: player.c */

void raiselevel(void);
void loselevel(void);
void raiseexperience(long);
void loseexperience(long);
void losehp(int);
void losemhp(int);
void raisehp(int);
void raisemhp(int);
void raisespells(int);
void raisemspells(int);
void losespells(int);
void losemspells(int);
void positionplayer(void);
void recalc(void);
void quit(void);
void more(void);
int take(int, int);
int drop_object(int);
void enchantarmor(void);
void enchweapon(void);
int pocketfull(void);
int nearbymonst(void);
int stealsomething(int, int);
int emptyhanded(void);
void creategem(void);
void adjustcvalues(int, int);
char * gettokstr(char *);
int getpassword(void);
int getyn(void);
int packweight(void);

/* module: regen.c */

void regen(void);

/* module: savelev.c */

void savelevel(void);
void getlevel();
int savegame(char *);
void restoregame(char *);
void greedy(void);
void fsorry(void);
void fcheat(void);
void init_cells(void);
void bwrite(int, char *, long);
void bread(int, char *, long);
unsigned int sum(unsigned char *, int);

/* module: scores.c */

int readboard(void);
int writeboard(void);
int makeboard(void);
int hashewon(void);
long paytaxes(long);
int winshou(void);
int shou(int);
void showscores(void);
void showallscores(void);
int sortboard(void);
void newscore(long, char *, int, int);
void new1sub(long, int, char *, long);
void new2sub(long, int, char *, int);
void died(int);
void diedsub(int);
void showscore3(int);
void showscore1(int, char **);

/* module: show.c */

void showstr(void);
void qshowstr(void);
void t_setup(int);
void t_endup(int);
void showwear(void);
void showwield(void);
void showread(void);
void showeat(void);
void showquaff(void);
void show1(int, char **);
void show3(int);

/* module: signal.c */

void s2choose(void);
SIGTYPE cntlc(int);
SIGTYPE sgam(int);
SIGTYPE stop(int);
SIGTYPE sigsetup(void);
void sigsave(void);
void sigreset(void);
SIGTYPE sigpanic(int);

/* module: sphere.c */

void newsphere(int, int, int, int);
void rmsphere(int, int);
void sphboom(int, int);
void movsphere(void);

/* module: store.c */

void dnd_2hed(void);
void dnd_hed(void);
void dndstore(void);
void handsfull(void);
void outofstock(void);
void nogold(void);
void dnditem(int);
void sch_hed(void);
void oschool(void);
void obank(void);
void obank2(void);
void banktitle(char *);
void ointerest(void);
void obanksub(void);
void appraise(int, int);
void otradhead(void);
void otradepost(void);
void cnsitm(void);
void olrs(void);
void nomore(void);
void nocash(void);
void pad_hd(void);
void opad(void);
int snag(int);
void pick_char(int);

/* module: tok.c */

int yylex(void);
void flushall(void);
void sethard(int);
void readopts(void);

/* module: tty.c */

void setctty(void);
void gettty(void);
void settty(void);
void setuptty(void);
void scbr(void);
void sncbr(void);
void setupvt100(void);
void clearvt100(void);



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
extern char nosignal, nobeep,oldx,oldy,playerx,playery, dropflag;
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

