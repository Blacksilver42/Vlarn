/* config.h
 * This file was produced by running the config.h.SH script, which
 * gets its values from config.sh, which is generally produced by
 * running Configure.
 *
 * Feel free to modify any of this as the need arises.  Note, however,
 * that running config.h.SH again will wipe out any changes you've made.
 * For a more permanent change edit config.sh and rerun config.h.SH.
 */


/* EUNICE:
 *	This symbol, if defined, indicates that the program is being compiled
 *	under the EUNICE package under VMS.  The program will need to handle
 *	things like files that don't go away the first time you unlink them,
 *	due to version numbering.  It will also need to compensate for lack
 *	of a respectable link() command.
 */
/* VMS:
 *	This symbol, if defined, indicates that the program is running under
 *	VMS.  It is currently only set in conjunction with the EUNICE symbol.
 */
/*#undef	EUNICE		// */
/*#undef	VMS		// */

/* CPPSTDIN:
 *	This symbol contains the first part of the string which will invoke
 *	the C preprocessor on the standard input and produce to standard
 *	output.	 Typical value of "cc -E" or "/lib/cpp".
 */
/* CPPMINUS:
 *	This symbol contains the second part of the string which will invoke
 *	the C preprocessor on the standard input and produce to standard
 *	output.  This symbol will have the value "-" if CPPSTDIN needs a minus
 *	to specify standard input, otherwise the value is "".
 */
#define CPPSTDIN "/usr/bin/cpp"
#define CPPMINUS ""

/* FTIMER:
 *	This symbol, if defined, indicates that the ftime() routine exists.
 */
#define	FTIMER		/**/

/* GETOPT:
 *	This symbol, if defined, indicates that the getopt() routine exists.
 */
#define	GETOPT		/**/

/* index:
 *	This preprocessor symbol is defined, along with rindex, if the system
 *	uses the strchr and strrchr routines instead.
 */
/* rindex:
 *	This preprocessor symbol is defined, along with index, if the system
 *	uses the strchr and strrchr routines instead.
 */
/*#undef	index strchr	// cultural     */
/*#undef	rindex strrchr	// differences? */

/* TERMIO:
 *	This symbol, if defined, indicates that the program should include
 *	termio.h rather than sgtty.h.  There are also differences in the
 *	ioctl() calls that depend on the value of this symbol.
 */
#define	TERMIO		/**/

/* VOIDSIG:
 *	This symbol is defined if this system declares "void (*signal())()" in
 *	signal.h.  The old way was to declare it as "int (*signal())()".  It
 *	is up to the package author to declare things correctly based on the
 *	symbol.
 */
#define	VOIDSIG 	/**/

/* BINDIR:
 *     This symbol indicates where the executable binaries will reside.
 */
#define BINDIR "/usr/games"          /**/

/* DRAND48:
 *	This symbol,if defined, indicates that the drand48 routines
 *	are availible.
 */
#define	DRAND48		/**/

/* HAVETERMLIB:
 *	This symbol, when defined, indicates that termlib-style routines
 *	are available.  There is nothing to include.
 */
/*#undef	HAVETERMLIB	// */

/* ITIMER:
 *	This symbol, if defined, indicates that the setitimer() routine exists.
 */
/* SYSTIME:
 *	This symbol is the include file which contains the struct timeval and
 *	itimer definitions.
 */
#define	ITIMER		/**/

#define	SYSTIME	<sys/time.h>	/**/

/* RANDOM:
 *	This symbol,if defined, indicates that the random routine is availible.
 */
/*#undef	RANDOM		// */

/* DEF_COMPRESS:
 *	This symbol,if defined, indicates that the save files should
 *	be compressed by default.
 */
#define	DEF_COMPRESS		// */

/* LIBDIR:
 *     This symbol indicates where the data files will reside.
 */
#define LIBDIR "/usr/games/lib/Ularn"          // */

/* COMPRESS
 *	This symbol contains the command to do compression from stdin
 *	to stdout.
 */
#define	COMPRESS	"gzip -c"

/* UNCOMPRESS
 *	This symbol contains the command to do uncompression from stdin
 *	to stdout.
 */
#define	UNCOMPRESS	"gunzip -c"

