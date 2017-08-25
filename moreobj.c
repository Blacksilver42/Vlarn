/* moreobj.c
 *
 *	Routines in this file:
 *
 *	oaltar()
 *	othrone()
 *	ochest()
 *	ofountain()
 */
#include "header.h"
#include "player.h"
#include "itm.h"
#include "monst.h"
#include "extern.h"

/*
 *	******
 *	OALTAR
 *	******
 *
 */
void oaltar()
{
	long k;

	lprcat("\nDo you (p) pray  (d) desecrate"); 
	iopts();
	while (1) {
		while (1) switch(getcharacter()) {
		case 'p':	
		     lprcat(" pray\nDo you (m) give money or (j) just pray? ");
			while (1) switch(getcharacter()) {
			case 'j':	
				if (rnd(100)<75 && !wizard) 
					lprcat("\nnothing happens");
				else if (rnd(13)<4) ohear();
				else if (rnd(43) <= 10 || wizard) {
					if (c[WEAR]) 
		lprcat("\nYou feel your armor vibrate for a moment");
					enchantarmor();
					return;
				}
				else if (rnd(43) <= 10) {
					if (c[WIELD]) 
		lprcat("\nYou feel your weapon vibrate for a moment");
					enchweapon(); 
					return;
				}
				else createmonster(makemonst(level+2));
				return;

			case 'm':
donate:
				cursor(1,24);  
				cltoeoln();
				cursor(1,23);  
				cltoeoln();
				lprcat("how much do you donate? ");
				k = readnum(c[GOLD]);
				if (c[GOLD] < k) { 	
					lprcat("You don't have that much!");
					nap(1001);
					goto donate;
				}
				if ( (k==0 || (k<(c[GOLD]/10)) )
				    && rnd(60)<30 && !wizard) {
lprcat("Cheapskate! The Gods are insulted at such a meager offering!");
					forget();
					createmonster(DEMONPRINCE);
					c[AGGRAVATE] += 1500; 
					return;
				}
				c[GOLD] -= k;
				if (k < c[GOLD]/10 || k<rnd(50) && !wizard) { 
					createmonster(makemonst(level+2)); 
					c[AGGRAVATE] += 500; 
				}
				else if (rnd(101) > 50)	{ 
					ohear(); 
					return; 
				}
				else if (rnd(43) >= 33) {
					if (c[WEAR]) 
			lprcat("You feel your armor vibrate...");
					enchantarmor();
					enchantarmor();
					return;
				}
				else if (rnd(43) >= 33 || wizard) {
					if (c[WIELD]) 
			lprcat("You feel your weapon vibrate...");
					enchweapon(); 
					enchweapon(); 
					return;
				}
				else	lprcat("Thank You.");
				bottomline();	
				return;
			} /* end while switch : case j or m */

		case 'd': 
			lprcat(" desecrate");
			if (rnd(100)<60) { 
				createmonster(makemonst(level+3)+8); 
				c[AGGRAVATE] += 2500; 
			}
			else if(rnd(100)<5) raiselevel();
			else if (rnd(101)<30) {
	lprcat("\nThe altar crumbles into a pile of dust before your eyes");
				forget();    /*remember to destroy the altar*/
			}
			else lprcat("\nnothing happens");
			return;

		case 'i':
		case ESC: 
			ignore();
			if (rnd(100)<30) { 
				createmonster(makemonst(level+2)); 
				c[AGGRAVATE] += rnd(450); 
			}
			else	
				lprcat("\nnothing happens");
			return;
		} /* end while switch: pray, des, ignore */
	} /* NOTREACHED */
} /* end oaltar */

/*
	function to cast a +3 protection on the player
 */
void ohear()
{
	lprcat("You have been heard!");
	if (c[ALTPRO]==0) 
		c[MOREDEFENSES]+=5;
	c[ALTPRO] += 800;	/* protection field */
	bottomline();
}

/*
 *	*******
 *	OTHRONE
 *	*******
 *
 */
void othrone(arg)
int arg;
{
	int i,k;

	lprcat("\nDo you (p) pry off jewels, (s) sit down"); 
	iopts();
	while (1) {
		while (1) switch(getcharacter()) {
		case 'p':	
			lprcat(" pry off");  
			k=rnd(101);
			if (k<25) {
				for (i=0; i<rnd(4); i++) 
					creategem(); /*gems pop off the throne*/
				item[playerx][playery]=ODEADTHRONE;
				know[playerx][playery]=0;
			}
			else if (k<40 && arg==0) {
				createmonster(GNOMEKING);
				item[playerx][playery]=OTHRONE2;
				know[playerx][playery]=0;
			}
			else lprcat("\nnothing happens");
			return;

		case 's': 	
			lprcat(" sit down");  
			k=rnd(101);
			if (k<30 && arg==0) {
				createmonster(GNOMEKING);
				item[playerx][playery]=OTHRONE2;
				know[playerx][playery]=0;
			}
			else if (k<35) {
			    lprcat("\nZaaaappp!  You've been teleported!\n"); 
				beep();
				oteleport(0); 
			}
			else lprcat("\nnothing happens");
			return;

		case 'i':
		case ESC: 
			ignore(); 
			return;
		};
	} /* NOTREACHED */
}

void odeadthrone()
{
	int k;

	lprcat("\nDo you (s) sit down"); 
	iopts();
	while (1) {
		while (1) switch(getcharacter()) {
		case 's': 	
			lprcat(" sit down");  
			k=rnd(101);
			if (k<5) raiselevel();
			else if (k<25) {
			      lprcat("\nZaaaappp!  You've been teleported!\n"); 
				beep(); 
				oteleport(0); 
			}
			else lprcat("\nnothing happens");
			return;

		case 'i':
		case ESC: 
			ignore(); 
			return;
		};
	} /* NOTREACHED */
}

/*
 *	******
 *	OCHEST
 *	******
 *
 */
void ochest()
{
	int i,k;

	lprcat("\nDo you (t) take it, (o) try to open it"); 
	iopts();
	while (1) {
		while (1) switch(getcharacter()) {
		case 'o':	
			lprcat(" open it");  
			k=rnd(101);
			if (k<40) {
				lprcat("\nThe chest explodes as you open it"); 
				beep();
				i = rnd(10);  
				lastnum=281;  /* in case he dies */
			lprintf("\nYou suffer %d hit points damage!",(long)i);
				checkloss(i);
				switch(rnd(10))	{
				case 1:	
					c[ITCHING]+= rnd(1000)+100;
		lprcat("\nYou feel an irritation spread over your skin!");
					beep();
					break;

				case 2:	
					c[CLUMSINESS]+= rnd(1600)+200;
			lprcat("\nYou begin to lose hand to eye coordination!");
					beep();
					break;

				case 3:	
					c[HALFDAM]+= rnd(1600)+200;
	lprcat("\nYou suddenly feel sick and BARF all over your shoes!");	
					beep();
					break;
				};
				item[playerx][playery]=know[playerx][playery]=0;
				if (rnd(100)<69) 
					creategem(); /* gems from the chest */
				dropgold(rnd(110*iarg[playerx][playery]+200));
				for (i=0; i<rnd(4); i++) 
					something(playerx, playery, iarg[playerx][playery]+2);
			}
			else lprcat("\nnothing happens");
			return;

		case 't':	
			lprcat(" take");
			if (take(OCHEST,iarg[playerx][playery])==0)
				item[playerx][playery]=know[playerx][playery]=0;
			return;

		case 'i':
		case ESC: 
			ignore(); 
			return;
		};
	} /* NOTREACHED */
}

/*
 *	*********
 *	OFOUNTAIN
 *	*********
 */
void ofountain()
{
	int x;

	cursors();
	lprcat("\nDo you (d) drink, (w) wash yourself"); 
	iopts();
	while (1) switch(getcharacter()) {
	case 'd':	
		lprcat("drink");
		if (rnd(1501)<4) {
		lprcat("\nOH MY GOD!! You have caught the *dreadful sleep*!");
			beep(); 
			lflush();  
			sleep(3);  
			died(280); 
			return;
		}
		x = rnd(100);
		if (x==1) raiselevel();
		else if (x < 11) { 	
			x=rnd((level<<2)+2);
lprintf("\nBleah! The water tasted like stale gatorade! You suffer %d hit points!", (long)x);
			lastnum=273; 
			losehp(x); 
			bottomline();  
			cursors();
		}
		else if (x<14) { 	
			c[HALFDAM] += 200+rnd(200);
			lprcat("\nThe water makes you vomit");
		}
		else if (x<17) 
			quaffpotion(17); /* giant strength */
		else if (x < 45)
			lprcat("\nnothing seems to have happened");
		else if (rnd(3) != 2)
			fntchange(1);	/*change char levels upward*/
		else
			fntchange(-1);	/*change char levels downward*/
		if (rnd(12)<3) {      
			lprcat("\nThe fountains bubbling slowly quiets");
			/* dead fountain */
			item[playerx][playery]=ODEADFOUNTAIN; 
			know[playerx][playery]=0;
		}
		return;

	case 'i':	
	case ESC:
		ignore();  
		return;
	case 'w':	
		lprcat("wash yourself");
		if (rnd(100) < 11) { 	
			x=rnd((level<<2)+2);
lprintf("\nOh no!  The water burns like acid!  You suffer %d hit points!",(long)x);
			lastnum=273; 
			losehp(x); 
			bottomline();  
			cursors();
		}
		else if (rnd(100) < 29)
			lprcat("\nYou are now clean!");
		else if (rnd(100) < 31)
		  lprcat("\nThis water needs soap!  The dirt didn't come off!");
		else if (rnd(100) < 34)
			createmonster(WATERLORD); 
		else lprcat("\nnothing seems to have happened");
		return;
	}
}

/*
	a subroutine to raise or lower character levels
	if how > 0 they are raised   if how < 0 they are lowered
 */
void fntchange(how)
int how;
{
	long j;

	lprc('\n');
	switch(rnd(9)) {
	case 1:	
		lprcat("Your strength");	
		fch(how,&c[0]);	
		break;
	case 2:	
		lprcat("Your intelligence");	
		fch(how,&c[1]);	
		break;
	case 3:	
		lprcat("Your wisdom");
		fch(how,&c[2]);	
		break;
	case 4:	
		lprcat("Your constitution");
		fch(how,&c[3]);	
		break;
	case 5:	
		lprcat("Your dexterity");
		fch(how,&c[4]);	
		break;
	case 6:	
		lprcat("Your charm");
		fch(how,&c[5]);	
		break;
	case 7:	
		j=rnd(level+1);
		if (how < 0) { 	
			lprintf("You lose %d hit point",(long)j);  
			if (j>1) lprcat("s!"); 
			else {
				lprc('!'); 
			}
			losemhp((int)j); 
		}
		else { 	
			lprintf("You gain %d hit point",(long)j);  
			if (j>1) lprcat("s!"); 
			else {
				lprc('!'); 
			}
			raisemhp((int)j); 
		}
		bottomline();		
		break;
	case 8:	
		j=rnd(level+1);
		if (how > 0) { 	
			lprintf("You just gained %d spell",(long)j);  
			raisemspells((int)j);
			if (j>1) lprcat("s!"); 
			else { lprc('!'); }
		}
		else { 	
			lprintf("You just lost %d spell",(long)j);
			losemspells((int)j);
			if (j>1) lprcat("s!"); 
			else { lprc('!'); }
		}
		bottomline();	
		break;
	case 9:	
		j = 5*rnd((level+1)*(level+1));
		if (how < 0) { 	
			lprintf("You just lost %d experience point",(long)j);
			if (j>1) lprcat("s!"); 
			else { lprc('!');  }
			loseexperience((long)j);
		}
		else { 	
			lprintf("You just gained %d experience point",(long)j);
			if (j>1) lprcat("s!"); 
			else { lprc('!');  }
			raiseexperience((long)j);
		}
		break;
	}
	cursors();
}

/*
 *	***
 *	FCH
 *	***
 *
 *	process an up/down of a character attribute for ofountain
 */
void fch(how,x)
int how;
long *x;
{
	if (how < 0 )	 { 	
		if (*x > 3) {
			lprcat(" went down by one!");	
			--(*x); 
		} else
			lprcat(" remained unchanged!");
	} 
	else {
		lprcat(" went up by one!");	
		(*x)++; 
	}
	bottomline();
}
