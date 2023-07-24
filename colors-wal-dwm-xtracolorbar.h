static  char normfgcolor[]     = "#7070FF";  /*  periwink  */
static  char normbgcolor[]     = "#0B0B0B";  /*  black  */
static  char normbordercolor[] = "#548f9f";  /*  dark turqoise  */

static  char selfgcolor[]      = "#79cde4";  /*  light blue  */
static  char selbgcolor[]      = "#BA4443";  /*  burnt red  */
static  char selbordercolor[]  = "#79cde4";  /*  light blue  */

static  char col_urgborder[]   = "#D3252B";  /*  fire red  */
static  char unusedcolor[]     = "#000000";  /*  null color  */
static  char statusfgcolor[]   = "#a200ff";  /*  purple  */
static  char statusbgcolor[]   = "#0B0B0B";  /*  black  */
static  char tagselfgcolor[]   = "#BA4443";  /*  burnt red  */  
static  char tagsselbgcolor[]  = "#89c0f2";  /*  light blue  */
/*  static  char tagsselbgcolor[]  = "#351c75";    purple-blue  */
static  char tagsnormfgcolor[] = "#BA4443";  /*  burnt red  */
static  char tagsnormbgcolor[] = "#0B0B0B";  /*  black  */  
static  char infoselfgolor[]   = "#f06708";  /*  orange  */
static  char infoselbgcolor[]  = "#0B0B0B";  /*  black  */ 
static  char infonormfgcolor[] = "#f06708";  /*  orange  */
static  char infonormbgcolor[] = "#0B0B0B";  /*  black  */

static  char *colors[][3] = {
       /*               fg           bg           border   */
       [SchemeNorm] = { normfgcolor, normbgcolor, normbordercolor },  /*  defines mblocks status  */
       [SchemeSel]  = { selfgcolor,  selbgcolor,  selbordercolor  },
       [SchemeUrg] = { selfgcolor, selbgcolor, col_urgborder },
       [SchemeStatus] = { statusfgcolor, statusbgcolor, unusedcolor },  /*  not used with mblocks  */
       [SchemeTagsSel] = { tagselfgcolor, tagsselbgcolor, unusedcolor },
       [SchemeTagsNorm] = { tagsnormfgcolor, tagsnormbgcolor, unusedcolor }, 
       [SchemeInfoSel] = { infoselfgolor, infoselbgcolor, unusedcolor },
       [SchemeInfoNorm] = { infonormfgcolor, infonormbgcolor, unusedcolor },
};
