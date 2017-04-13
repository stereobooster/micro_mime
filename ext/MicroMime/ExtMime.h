/* ANSI-C code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -CD -t --output-file ext/MicroMime/ExtMime.h ext/MicroMime/ExtMime.gperf  */
/* Computed positions: -k'1-4,6,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 27 "ext/MicroMime/ExtMime.gperf"
struct ExtMime {
  const char * extension;
  const char * content_type;
  const char * encoding;
};
/* maximum key range = 7792, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
lookup_by_extension_hash (register const char *str, register unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802,
      7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802,
      7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802,
      7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802,
      7802, 7802, 7802, 7802, 7802,    0, 7802, 7802,   25,  235,
       385,  400,  185,   40,   90,   15,   10,   20, 7802, 7802,
      7802, 7802, 7802, 7802,    5, 7802, 7802,    0, 7802, 7802,
      7802,  505,  365,  355, 1455,    0,   10,   60,    0,    0,
      7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802,
      7802, 7802, 7802, 7802, 7802,   30, 7802, 1120, 1137,   60,
        20, 1575,   65, 1620,  262,  770,  747, 1500,  165,    0,
      1905, 1480,   25,  465,  655,    5,  275,  200, 1055,  135,
       150, 1940,  260,  677,   42,   14,  797, 1340,   60, 1497,
      1660,  755,  617,  572,  590,  850,  962, 1020,    2,   25,
       177,   39, 1782,   50, 1765, 7802, 7802, 7802, 7802, 7802,
      7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802,
      7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802,
      7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802,
      7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802,
      7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802,
      7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802,
      7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802,
      7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802,
      7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802,
      7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802,
      7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802,
      7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802,
      7802, 7802, 7802, 7802, 7802, 7802, 7802, 7802
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]+22];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

const struct ExtMime *
lookup_by_extension_internal (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 1161,
      MIN_WORD_LENGTH = 1,
      MAX_WORD_LENGTH = 11,
      MIN_HASH_VALUE = 10,
      MAX_HASH_VALUE = 7801
    };

  static const struct ExtMime wordlist[] =
    {
#line 562 "ext/MicroMime/ExtMime.gperf"
      {"stm", "application/vnd.sealedmedia.softseal.html", "base64"},
#line 1100 "ext/MicroMime/ExtMime.gperf"
      {"s", "text/x-asm", "quoted-printable"},
#line 1028 "ext/MicroMime/ExtMime.gperf"
      {"mts", "model/vnd.mts", "base64"},
#line 1074 "ext/MicroMime/ExtMime.gperf"
      {"sgm", "text/sgml", "quoted-printable"},
#line 905 "ext/MicroMime/ExtMime.gperf"
      {"dts", "audio/vnd.dts", "base64"},
#line 138 "ext/MicroMime/ExtMime.gperf"
      {"p8", "application/pkcs8", "base64"},
#line 471 "ext/MicroMime/ExtMime.gperf"
      {"mus", "application/vnd.musician", "base64"},
#line 1008 "ext/MicroMime/ExtMime.gperf"
      {"pgm", "image/x-portable-graymap", "base64"},
#line 601 "ext/MicroMime/ExtMime.gperf"
      {"sus", "application/vnd.sus-calendar", "base64"},
#line 428 "ext/MicroMime/ExtMime.gperf"
      {"mfm", "application/vnd.mfmp", "base64"},
#line 594 "ext/MicroMime/ExtMime.gperf"
      {"std", "application/vnd.sun.xml.draw.template", "base64"},
#line 1112 "ext/MicroMime/ExtMime.gperf"
      {"p", "text/x-pascal", "quoted-printable"},
#line 580 "ext/MicroMime/ExtMime.gperf"
      {"sfs", "application/vnd.spotfire.sfs", "base64"},
#line 862 "ext/MicroMime/ExtMime.gperf"
      {"dtd", "application/xml-dtd", "8bit"},
#line 521 "ext/MicroMime/ExtMime.gperf"
      {"mgp", "application/vnd.osgeo.mapguide.package", "base64"},
#line 730 "ext/MicroMime/ExtMime.gperf"
      {"pfm", "application/x-font-type1", "base64"},
#line 944 "ext/MicroMime/ExtMime.gperf"
      {"cgm", "image/cgm", "base64"},
#line 136 "ext/MicroMime/ExtMime.gperf"
      {"p7m", "application/pkcs7-mime", "base64"},
#line 602 "ext/MicroMime/ExtMime.gperf"
      {"susp", "application/vnd.sus-calendar", "base64"},
#line 117 "ext/MicroMime/ExtMime.gperf"
      {"pgp", "application/octet-stream", "base64"},
#line 137 "ext/MicroMime/ExtMime.gperf"
      {"p7s", "application/pkcs7-signature", "base64"},
#line 108 "ext/MicroMime/ExtMime.gperf"
      {"dump", "application/octet-stream", "base64"},
#line 797 "ext/MicroMime/ExtMime.gperf"
      {"pt5", "application/x-pagemaker", "base64"},
#line 691 "ext/MicroMime/ExtMime.gperf"
      {"cfs", "application/x-cfs-compressed", "base64"},
#line 1107 "ext/MicroMime/ExtMime.gperf"
      {"f90", "text/x-fortran", "quoted-printable"},
#line 1054 "ext/MicroMime/ExtMime.gperf"
      {"c", "text/plain", "quoted-printable"},
#line 711 "ext/MicroMime/ExtMime.gperf"
      {"fgd", "application/x-director", "base64"},
#line 592 "ext/MicroMime/ExtMime.gperf"
      {"stc", "application/vnd.sun.xml.calc.template", "base64"},
#line 1105 "ext/MicroMime/ExtMime.gperf"
      {"f", "text/x-fortran", "quoted-printable"},
#line 640 "ext/MicroMime/ExtMime.gperf"
      {"stf", "application/vnd.wt.stf", "base64"},
#line 702 "ext/MicroMime/ExtMime.gperf"
      {"dgc", "application/x-dgc-compressed", "base64"},
#line 1106 "ext/MicroMime/ExtMime.gperf"
      {"f77", "text/x-fortran", "quoted-printable"},
#line 326 "ext/MicroMime/ExtMime.gperf"
      {"fg5", "application/vnd.fujitsu.oasysgp", "base64"},
#line 815 "ext/MicroMime/ExtMime.gperf"
      {"sbs", "application/x-spss", "base64"},
#line 76 "ext/MicroMime/ExtMime.gperf"
      {"mads", "application/mads+xml", "base64"},
#line 204 "ext/MicroMime/ExtMime.gperf"
      {"mwf", "application/vnd.MFER", "base64"},
#line 1113 "ext/MicroMime/ExtMime.gperf"
      {"pas", "text/x-pascal", "quoted-printable"},
#line 812 "ext/MicroMime/ExtMime.gperf"
      {"swf", "application/x-shockwave-flash", "base64"},
#line 1007 "ext/MicroMime/ExtMime.gperf"
      {"pbm", "image/x-portable-bitmap", "base64"},
#line 312 "ext/MicroMime/ExtMime.gperf"
      {"ftc", "application/vnd.fluxtime.clip", "base64"},
#line 1025 "ext/MicroMime/ExtMime.gperf"
      {"dwf", "model/vnd.dwf", "base64"},
#line 135 "ext/MicroMime/ExtMime.gperf"
      {"p7c", "application/pkcs7-mime", "base64"},
#line 534 "ext/MicroMime/ExtMime.gperf"
      {"pbd", "application/vnd.powerbuilder6", "base64"},
#line 603 "ext/MicroMime/ExtMime.gperf"
      {"svd", "application/vnd.svd", "base64"},
#line 975 "ext/MicroMime/ExtMime.gperf"
      {"fbs", "image/vnd.fastbidsheet", "base64"},
#line 1016 "ext/MicroMime/ExtMime.gperf"
      {"xwd", "image/x-xwindowdump", "base64"},
#line 151 "ext/MicroMime/ExtMime.gperf"
      {"cw", "application/prs.cww", "base64"},
#line 685 "ext/MicroMime/ExtMime.gperf"
      {"cb7", "application/x-cbr", "base64"},
#line 367 "ext/MicroMime/ExtMime.gperf"
      {"sfd-hdstx", "application/vnd.hydrostatix.sof-data", "base64"},
#line 610 "ext/MicroMime/ExtMime.gperf"
      {"cap", "application/vnd.tcpdump.pcap", "base64"},
#line 423 "ext/MicroMime/ExtMime.gperf"
      {"lwp", "application/vnd.lotus-wordpro", "base64"},
#line 1048 "ext/MicroMime/ExtMime.gperf"
      {"htm", "text/html", "8bit"},
#line 854 "ext/MicroMime/ExtMime.gperf"
      {"z8", "application/x-zmachine", "base64"},
#line 649 "ext/MicroMime/ExtMime.gperf"
      {"saf", "application/vnd.yamaha.smaf-audio", "base64"},
#line 582 "ext/MicroMime/ExtMime.gperf"
      {"sds", "application/vnd.stardivision.chart", "base64"},
#line 600 "ext/MicroMime/ExtMime.gperf"
      {"stw", "application/vnd.sun.xml.writer.template", "base64"},
#line 1067 "ext/MicroMime/ExtMime.gperf"
      {"md", "text/plain", "quoted-printable"},
#line 792 "ext/MicroMime/ExtMime.gperf"
      {"pac", "application/x-ns-proxy-autoconfig", "base64"},
#line 548 "ext/MicroMime/ExtMime.gperf"
      {"st", "application/vnd.sailingtracker.track", "base64"},
#line 617 "ext/MicroMime/ExtMime.gperf"
      {"ufd", "application/vnd.ufdl", "base64"},
#line 44 "ext/MicroMime/ExtMime.gperf"
      {"cu", "application/cu-seeme", "base64"},
#line 205 "ext/MicroMime/ExtMime.gperf"
      {"daf", "application/vnd.Mobius.DAF", "base64"},
#line 270 "ext/MicroMime/ExtMime.gperf"
      {"wbs", "application/vnd.criticaltools.wbs+xml", "base64"},
#line 321 "ext/MicroMime/ExtMime.gperf"
      {"ltf", "application/vnd.frogans.ltf", "base64"},
#line 851 "ext/MicroMime/ExtMime.gperf"
      {"z5", "application/x-zmachine", "base64"},
#line 1013 "ext/MicroMime/ExtMime.gperf"
      {"xbm", "image/x-xbitmap", "7bit"},
#line 295 "ext/MicroMime/ExtMime.gperf"
      {"svc", "application/vnd.dvb.service", "base64"},
#line 584 "ext/MicroMime/ExtMime.gperf"
      {"sdd", "application/vnd.stardivision.impress", "base64"},
#line 714 "ext/MicroMime/ExtMime.gperf"
      {"wad", "application/x-doom", "base64"},
#line 906 "ext/MicroMime/ExtMime.gperf"
      {"dtshd", "audio/vnd.dts.hd", "base64"},
#line 173 "ext/MicroMime/ExtMime.gperf"
      {"sdp", "application/sdp", "base64"},
#line 829 "ext/MicroMime/ExtMime.gperf"
      {"tfm", "application/x-tex-tfm", "base64"},
#line 328 "ext/MicroMime/ExtMime.gperf"
      {"ddd", "application/vnd.fujixerox.ddd", "base64"},
#line 926 "ext/MicroMime/ExtMime.gperf"
      {"caf", "audio/x-caf", "base64"},
#line 869 "ext/MicroMime/ExtMime.gperf"
      {"xvm", "application/xv+xml", "base64"},
#line 853 "ext/MicroMime/ExtMime.gperf"
      {"z7", "application/x-zmachine", "base64"},
#line 813 "ext/MicroMime/ExtMime.gperf"
      {"xap", "application/x-silverlight-app", "base64"},
#line 985 "ext/MicroMime/ExtMime.gperf"
      {"wbmp", "image/vnd.wap.wbmp", "base64"},
#line 455 "ext/MicroMime/ExtMime.gperf"
      {"stl", "application/vnd.ms-pki.stl", "base64"},
#line 563 "ext/MicroMime/ExtMime.gperf"
      {"stml", "application/vnd.sealedmedia.softseal.html", "base64"},
#line 330 "ext/MicroMime/ExtMime.gperf"
      {"xbd", "application/vnd.fujixerox.docuworks.binder", "base64"},
#line 230 "ext/MicroMime/ExtMime.gperf"
      {"xfdf", "application/vnd.adobe.xfdf", "base64"},
#line 219 "ext/MicroMime/ExtMime.gperf"
      {"twds", "application/vnd.SimTech-MindMapper", "base64"},
#line 588 "ext/MicroMime/ExtMime.gperf"
      {"sgl", "application/vnd.stardivision.writer-global", "base64"},
#line 176 "ext/MicroMime/ExtMime.gperf"
      {"sgml", "application/sgml", "base64"},
#line 218 "ext/MicroMime/ExtMime.gperf"
      {"twd", "application/vnd.SimTech-MindMapper", "base64"},
#line 414 "ext/MicroMime/ExtMime.gperf"
      {"lbd", "application/vnd.llamagraphics.life-balance.desktop", "base64"},
#line 852 "ext/MicroMime/ExtMime.gperf"
      {"z6", "application/x-zmachine", "base64"},
#line 899 "ext/MicroMime/ExtMime.gperf"
      {"s3m", "audio/s3m", "base64"},
#line 800 "ext/MicroMime/ExtMime.gperf"
      {"pfx", "application/x-pkcs12", "base64"},
#line 152 "ext/MicroMime/ExtMime.gperf"
      {"cww", "application/prs.cww", "base64"},
#line 1147 "ext/MicroMime/ExtMime.gperf"
      {"uvm", "video/vnd.dece.mobile", "base64"},
#line 1104 "ext/MicroMime/ExtMime.gperf"
      {"htc", "text/x-component", "8bit"},
#line 581 "ext/MicroMime/ExtMime.gperf"
      {"sdc", "application/vnd.stardivision.calc", "base64"},
#line 1151 "ext/MicroMime/ExtMime.gperf"
      {"uvs", "video/vnd.dece.sd", "base64"},
#line 770 "ext/MicroMime/ExtMime.gperf"
      {"mdf", "application/x-msaccess", "base64"},
#line 908 "ext/MicroMime/ExtMime.gperf"
      {"lvp", "audio/vnd.lucent.voice", "base64"},
#line 203 "ext/MicroMime/ExtMime.gperf"
      {"sdf", "application/vnd.Kinar", "base64"},
#line 726 "ext/MicroMime/ExtMime.gperf"
      {"ttc", "application/x-font-ttf", "base64"},
#line 55 "ext/MicroMime/ExtMime.gperf"
      {"ttf", "application/font-sfnt", "base64"},
#line 608 "ext/MicroMime/ExtMime.gperf"
      {"xdm", "application/vnd.syncml.dm+xml", "base64"},
#line 130 "ext/MicroMime/ExtMime.gperf"
      {"pdf", "application/pdf", "base64"},
#line 278 "ext/MicroMime/ExtMime.gperf"
      {"uvd", "application/vnd.dece.data", "base64"},
#line 1116 "ext/MicroMime/ExtMime.gperf"
      {"uu", "text/x-uuencode", "quoted-printable"},
#line 1149 "ext/MicroMime/ExtMime.gperf"
      {"uvp", "video/vnd.dece.pd", "base64"},
#line 528 "ext/MicroMime/ExtMime.gperf"
      {"paw", "application/vnd.pawaafile", "base64"},
#line 983 "ext/MicroMime/ExtMime.gperf"
      {"wdp", "image/vnd.ms-photo", "base64"},
#line 645 "ext/MicroMime/ExtMime.gperf"
      {"hvs", "application/vnd.yamaha.hv-script", "base64"},
#line 98 "ext/MicroMime/ExtMime.gperf"
      {"cdf", "application/netcdf", "base64"},
#line 308 "ext/MicroMime/ExtMime.gperf"
      {"fdf", "application/vnd.fdf", "base64"},
#line 229 "ext/MicroMime/ExtMime.gperf"
      {"xdp", "application/vnd.adobe.xdp+xml", "base64"},
#line 1121 "ext/MicroMime/ExtMime.gperf"
      {"3gp", "video/3gpp", "base64"},
#line 758 "ext/MicroMime/ExtMime.gperf"
      {"ltx", "application/x-latex", "8bit"},
#line 644 "ext/MicroMime/ExtMime.gperf"
      {"hvd", "application/vnd.yamaha.hv-dic", "base64"},
#line 49 "ext/MicroMime/ExtMime.gperf"
      {"xdssc", "application/dssc+xml", "base64"},
#line 168 "ext/MicroMime/ExtMime.gperf"
      {"sbml", "application/sbml+xml", "base64"},
#line 646 "ext/MicroMime/ExtMime.gperf"
      {"hvp", "application/vnd.yamaha.hv-voice", "base64"},
#line 1122 "ext/MicroMime/ExtMime.gperf"
      {"3gpp", "video/3gpp", "base64"},
#line 434 "ext/MicroMime/ExtMime.gperf"
      {"xul", "application/vnd.mozilla.xul+xml", "base64"},
#line 279 "ext/MicroMime/ExtMime.gperf"
      {"uvf", "application/vnd.dece.data", "base64"},
#line 917 "ext/MicroMime/ExtMime.gperf"
      {"s1m", "audio/vnd.sealedmedia.softseal.mpeg", "base64"},
#line 695 "ext/MicroMime/ExtMime.gperf"
      {"z", "application/x-compressed", "base64"},
#line 1060 "ext/MicroMime/ExtMime.gperf"
      {"h", "text/plain", "quoted-printable"},
#line 713 "ext/MicroMime/ExtMime.gperf"
      {"w3d", "application/x-director", "base64"},
#line 354 "ext/MicroMime/ExtMime.gperf"
      {"hbc", "application/vnd.hbci", "base64"},
#line 536 "ext/MicroMime/ExtMime.gperf"
      {"mgz", "application/vnd.proteus.magazine", "base64"},
#line 586 "ext/MicroMime/ExtMime.gperf"
      {"sdw", "application/vnd.stardivision.writer", "base64"},
#line 856 "ext/MicroMime/ExtMime.gperf"
      {"xdf", "application/xcap-diff+xml", "base64"},
#line 643 "ext/MicroMime/ExtMime.gperf"
      {"xfdl", "application/vnd.xfdl", "base64"},
#line 212 "ext/MicroMime/ExtMime.gperf"
      {"qwd", "application/vnd.Quark.QuarkXPress", "8bit"},
#line 1040 "ext/MicroMime/ExtMime.gperf"
      {"x3d", "model/x3d+xml", "base64"},
#line 1077 "ext/MicroMime/ExtMime.gperf"
      {"t", "text/troff", "8bit"},
#line 823 "ext/MicroMime/ExtMime.gperf"
      {"sv4crc", "application/x-sv4crc", "base64"},
#line 556 "ext/MicroMime/ExtMime.gperf"
      {"s1p", "application/vnd.sealed.ppt", "base64"},
#line 1051 "ext/MicroMime/ExtMime.gperf"
      {"htx", "text/html", "8bit"},
#line 930 "ext/MicroMime/ExtMime.gperf"
      {"wax", "audio/x-ms-wax", "base64"},
#line 242 "ext/MicroMime/ExtMime.gperf"
      {"m3u8", "application/vnd.apple.mpegurl", "base64"},
#line 134 "ext/MicroMime/ExtMime.gperf"
      {"p10", "application/pkcs10", "base64"},
#line 1050 "ext/MicroMime/ExtMime.gperf"
      {"htmlx", "text/html", "8bit"},
#line 247 "ext/MicroMime/ExtMime.gperf"
      {"mpm", "application/vnd.blueice.multipass", "base64"},
#line 163 "ext/MicroMime/ExtMime.gperf"
      {"mft", "application/rpki-manifest", "base64"},
#line 618 "ext/MicroMime/ExtMime.gperf"
      {"ufdl", "application/vnd.ufdl", "base64"},
#line 1049 "ext/MicroMime/ExtMime.gperf"
      {"html", "text/html", "8bit"},
#line 301 "ext/MicroMime/ExtMime.gperf"
      {"qam", "application/vnd.epson.quickanime", "base64"},
#line 633 "ext/MicroMime/ExtMime.gperf"
      {"wbxml", "application/vnd.wap.wbxml", "base64"},
#line 88 "ext/MicroMime/ExtMime.gperf"
      {"mods", "application/mods+xml", "base64"},
#line 817 "ext/MicroMime/ExtMime.gperf"
      {"sps", "application/x-spss", "base64"},
#line 1080 "ext/MicroMime/ExtMime.gperf"
      {"ttl", "text/turtle", "quoted-printable"},
#line 1189 "ext/MicroMime/ExtMime.gperf"
      {"wvx", "video/x-ms-wvx", "base64"},
#line 1009 "ext/MicroMime/ExtMime.gperf"
      {"ppm", "image/x-portable-pixmap", "base64"},
#line 855 "ext/MicroMime/ExtMime.gperf"
      {"xaml", "application/xaml+xml", "base64"},
#line 939 "ext/MicroMime/ExtMime.gperf"
      {"cdx", "chemical/x-cdx", "base64"},
#line 459 "ext/MicroMime/ExtMime.gperf"
      {"ppsm", "application/vnd.ms-powerpoint.slideshow.macroEnabled.12", "base64"},
#line 149 "ext/MicroMime/ExtMime.gperf"
      {"pps", "application/powerpoint", "base64"},
#line 776 "ext/MicroMime/ExtMime.gperf"
      {"com", "application/x-msdos-program", "base64"},
#line 522 "ext/MicroMime/ExtMime.gperf"
      {"dp", "application/vnd.osgi.dp", "base64"},
#line 565 "ext/MicroMime/ExtMime.gperf"
      {"spd", "application/vnd.sealedmedia.softseal.pdf", "base64"},
#line 250 "ext/MicroMime/ExtMime.gperf"
      {"cdxml", "application/vnd.chemdraw+xml", "base64"},
#line 461 "ext/MicroMime/ExtMime.gperf"
      {"mpp", "application/vnd.ms-project", "base64"},
#line 1006 "ext/MicroMime/ExtMime.gperf"
      {"pnm", "image/x-portable-anymap", "base64"},
#line 172 "ext/MicroMime/ExtMime.gperf"
      {"spp", "application/scvp-vp-response", "base64"},
#line 741 "ext/MicroMime/ExtMime.gperf"
      {"hdf", "application/x-hdf", "base64"},
#line 463 "ext/MicroMime/ExtMime.gperf"
      {"docm", "application/vnd.ms-word.document.macroEnabled.12", "base64"},
#line 272 "ext/MicroMime/ExtMime.gperf"
      {"ppd", "application/vnd.cups-ppd", "base64"},
#line 870 "ext/MicroMime/ExtMime.gperf"
      {"xvml", "application/xv+xml", "base64"},
#line 881 "ext/MicroMime/ExtMime.gperf"
      {"snd", "audio/basic", "base64"},
#line 988 "ext/MicroMime/ExtMime.gperf"
      {"3ds", "image/x-3ds", "base64"},
#line 544 "ext/MicroMime/ExtMime.gperf"
      {"cod", "application/vnd.rim.cod", "base64"},
#line 285 "ext/MicroMime/ExtMime.gperf"
      {"uvx", "application/vnd.dece.unspecified", "base64"},
#line 329 "ext/MicroMime/ExtMime.gperf"
      {"xdw", "application/vnd.fujixerox.docuworks", "base64"},
#line 552 "ext/MicroMime/ExtMime.gperf"
      {"sem", "application/vnd.sealed.eml", "base64"},
#line 177 "ext/MicroMime/ExtMime.gperf"
      {"soc", "application/sgml-open-catalog", "base64"},
#line 657 "ext/MicroMime/ExtMime.gperf"
      {"wgt", "application/widget", "base64"},
#line 1057 "ext/MicroMime/ExtMime.gperf"
      {"cpp", "text/plain", "quoted-printable"},
#line 1058 "ext/MicroMime/ExtMime.gperf"
      {"dat", "text/plain", "quoted-printable"},
#line 433 "ext/MicroMime/ExtMime.gperf"
      {"mpc", "application/vnd.mophun.certificate", "base64"},
#line 94 "ext/MicroMime/ExtMime.gperf"
      {"doc", "application/msword", "base64"},
#line 802 "ext/MicroMime/ExtMime.gperf"
      {"spc", "application/x-pkcs7-certificates", "base64"},
#line 1192 "ext/MicroMime/ExtMime.gperf"
      {"xyz", "x-chemical/x-xyz", "base64"},
#line 619 "ext/MicroMime/ExtMime.gperf"
      {"utz", "application/vnd.uiq.theme", "base64"},
#line 569 "ext/MicroMime/ExtMime.gperf"
      {"semd", "application/vnd.semd", "base64"},
#line 650 "ext/MicroMime/ExtMime.gperf"
      {"spf", "application/vnd.yamaha.smaf-phrase", "base64"},
#line 352 "ext/MicroMime/ExtMime.gperf"
      {"hal", "application/vnd.hal+xml", "base64"},
#line 689 "ext/MicroMime/ExtMime.gperf"
      {"cbz", "application/x-cbr", "base64"},
#line 467 "ext/MicroMime/ExtMime.gperf"
      {"wps", "application/vnd.ms-works", "base64"},
#line 1015 "ext/MicroMime/ExtMime.gperf"
      {"xpm", "image/x-xpixmap", "8bit"},
#line 1144 "ext/MicroMime/ExtMime.gperf"
      {"qt", "video/quicktime", "base64"},
#line 454 "ext/MicroMime/ExtMime.gperf"
      {"cat", "application/vnd.ms-pki.seccat", "base64"},
#line 566 "ext/MicroMime/ExtMime.gperf"
      {"spdf", "application/vnd.sealedmedia.softseal.pdf", "base64"},
#line 659 "ext/MicroMime/ExtMime.gperf"
      {"wp", "application/wordperfect5.1", "base64"},
#line 469 "ext/MicroMime/ExtMime.gperf"
      {"xps", "application/vnd.ms-xpsdocument", "8bit"},
#line 725 "ext/MicroMime/ExtMime.gperf"
      {"snf", "application/x-font-snf", "base64"},
#line 929 "ext/MicroMime/ExtMime.gperf"
      {"m3u", "audio/x-mpegurl", "base64"},
#line 590 "ext/MicroMime/ExtMime.gperf"
      {"sm", "application/vnd.stepmania.stepchart", "base64"},
#line 688 "ext/MicroMime/ExtMime.gperf"
      {"cbt", "application/x-cbr", "base64"},
#line 638 "ext/MicroMime/ExtMime.gperf"
      {"wpd", "application/vnd.wordperfect", "base64"},
#line 197 "ext/MicroMime/ExtMime.gperf"
      {"sms", "application/vnd.3gpp.sms", "base64"},
#line 863 "ext/MicroMime/ExtMime.gperf"
      {"xop", "application/xop+xml", "base64"},
#line 1170 "ext/MicroMime/ExtMime.gperf"
      {"uvu", "video/vnd.uvvu.mp4", "base64"},
#line 795 "ext/MicroMime/ExtMime.gperf"
      {"pm", "application/x-pagemaker", "base64"},
#line 549 "ext/MicroMime/ExtMime.gperf"
      {"s1w", "application/vnd.sealed.doc", "base64"},
#line 380 "ext/MicroMime/ExtMime.gperf"
      {"igm", "application/vnd.insors.igm", "base64"},
#line 107 "ext/MicroMime/ExtMime.gperf"
      {"dms", "application/octet-stream", "base64"},
#line 92 "ext/MicroMime/ExtMime.gperf"
      {"mp4s", "application/mp4", "base64"},
#line 167 "ext/MicroMime/ExtMime.gperf"
      {"rtf", "application/rtf", "base64"},
#line 413 "ext/MicroMime/ExtMime.gperf"
      {"lasxml", "application/vnd.las.las+xml", "base64"},
#line 934 "ext/MicroMime/ExtMime.gperf"
      {"ram", "audio/x-pn-realaudio", "base64"},
#line 1156 "ext/MicroMime/ExtMime.gperf"
      {"fvt", "video/vnd.fvt", "base64"},
#line 1020 "ext/MicroMime/ExtMime.gperf"
      {"igs", "model/iges", "base64"},
#line 251 "ext/MicroMime/ExtMime.gperf"
      {"mmd", "application/vnd.chipnuts.karaoke-mmd", "base64"},
#line 805 "ext/MicroMime/ExtMime.gperf"
      {"qtl", "application/x-quicktimeplayer", "base64"},
#line 990 "ext/MicroMime/ExtMime.gperf"
      {"ras", "image/x-cmu-raster", "base64"},
#line 320 "ext/MicroMime/ExtMime.gperf"
      {"fnc", "application/vnd.frogans.fnc", "base64"},
#line 660 "ext/MicroMime/ExtMime.gperf"
      {"wp5", "application/wordperfect5.1", "base64"},
#line 385 "ext/MicroMime/ExtMime.gperf"
      {"qfx", "application/vnd.intu.qfx", "base64"},
#line 740 "ext/MicroMime/ExtMime.gperf"
      {"tgz", "application/x-gtar", "base64"},
#line 918 "ext/MicroMime/ExtMime.gperf"
      {"smp", "audio/vnd.sealedmedia.softseal.mpeg", "base64"},
#line 71 "ext/MicroMime/ExtMime.gperf"
      {"sj", "application/javascript", "8bit"},
#line 571 "ext/MicroMime/ExtMime.gperf"
      {"ifm", "application/vnd.shana.informed.formdata", "base64"},
#line 570 "ext/MicroMime/ExtMime.gperf"
      {"semf", "application/vnd.semf", "base64"},
#line 316 "ext/MicroMime/ExtMime.gperf"
      {"fm", "application/vnd.framemaker", "base64"},
#line 572 "ext/MicroMime/ExtMime.gperf"
      {"itp", "application/vnd.shana.informed.formtemplate", "base64"},
#line 611 "ext/MicroMime/ExtMime.gperf"
      {"dmp", "application/vnd.tcpdump.pcap", "base64"},
#line 1059 "ext/MicroMime/ExtMime.gperf"
      {"def", "text/plain", "quoted-printable"},
#line 1130 "ext/MicroMime/ExtMime.gperf"
      {"mj2", "video/MJ2", "base64"},
#line 89 "ext/MicroMime/ExtMime.gperf"
      {"m21", "application/mp21", "base64"},
#line 539 "ext/MicroMime/ExtMime.gperf"
      {"ptid", "application/vnd.pvi.ptid1", "base64"},
#line 877 "ext/MicroMime/ExtMime.gperf"
      {"l16", "audio/L16", "base64"},
#line 1124 "ext/MicroMime/ExtMime.gperf"
      {"3gpp2", "video/3gpp2", "base64"},
#line 359 "ext/MicroMime/ExtMime.gperf"
      {"les", "application/vnd.hhe.lesson-player", "base64"},
#line 775 "ext/MicroMime/ExtMime.gperf"
      {"cmd", "application/x-msdos-program", "base64"},
#line 1131 "ext/MicroMime/ExtMime.gperf"
      {"mjp2", "video/MJ2", "base64"},
#line 449 "ext/MicroMime/ExtMime.gperf"
      {"chm", "application/vnd.ms-htmlhelp", "base64"},
#line 796 "ext/MicroMime/ExtMime.gperf"
      {"pm5", "application/x-pagemaker", "base64"},
#line 365 "ext/MicroMime/ExtMime.gperf"
      {"hps", "application/vnd.hp-hps", "base64"},
#line 651 "ext/MicroMime/ExtMime.gperf"
      {"cmp", "application/vnd.yellowriver-custom-menu", "base64"},
#line 464 "ext/MicroMime/ExtMime.gperf"
      {"dotm", "application/vnd.ms-word.template.macroEnabled.12", "base64"},
#line 744 "ext/MicroMime/ExtMime.gperf"
      {"php", "application/x-httpd-php", "8bit"},
#line 460 "ext/MicroMime/ExtMime.gperf"
      {"potm", "application/vnd.ms-powerpoint.template.macroEnabled.12", "base64"},
#line 782 "ext/MicroMime/ExtMime.gperf"
      {"m14", "application/x-msmediaview", "base64"},
#line 1163 "ext/MicroMime/ExtMime.gperf"
      {"s14", "video/vnd.sealed.mpeg4", "base64"},
#line 390 "ext/MicroMime/ExtMime.gperf"
      {"jam", "application/vnd.jam", "base64"},
#line 575 "ext/MicroMime/ExtMime.gperf"
      {"mmf", "application/vnd.smaf", "base64"},
#line 1187 "ext/MicroMime/ExtMime.gperf"
      {"wm", "video/x-ms-wm", "base64"},
#line 585 "ext/MicroMime/ExtMime.gperf"
      {"smf", "application/vnd.stardivision.math", "base64"},
#line 457 "ext/MicroMime/ExtMime.gperf"
      {"pptm", "application/vnd.ms-powerpoint.presentation.macroEnabled.12", "base64"},
#line 997 "ext/MicroMime/ExtMime.gperf"
      {"fh7", "image/x-freehand", "base64"},
#line 898 "ext/MicroMime/ExtMime.gperf"
      {"spx", "audio/ogg", "base64"},
#line 287 "ext/MicroMime/ExtMime.gperf"
      {"uvz", "application/vnd.dece.zip", "base64"},
#line 1031 "ext/MicroMime/ExtMime.gperf"
      {"x_t", "model/vnd.parasolid.transmit.text", "quoted-printable"},
#line 1145 "ext/MicroMime/ExtMime.gperf"
      {"uvh", "video/vnd.dece.hd", "base64"},
#line 1062 "ext/MicroMime/ExtMime.gperf"
      {"hpp", "text/plain", "quoted-printable"},
#line 57 "ext/MicroMime/ExtMime.gperf"
      {"woff", "application/font-woff", "base64"},
#line 938 "ext/MicroMime/ExtMime.gperf"
      {"xm", "audio/xm", "base64"},
#line 840 "ext/MicroMime/ExtMime.gperf"
      {"wp6", "application/x-wordperfect6.1", "base64"},
#line 654 "ext/MicroMime/ExtMime.gperf"
      {"zaz", "application/vnd.zzazz.deck+xml", "base64"},
#line 515 "ext/MicroMime/ExtMime.gperf"
      {"ppsx", "application/vnd.openxmlformats-officedocument.presentationml.slideshow", "base64"},
#line 1094 "ext/MicroMime/ExtMime.gperf"
      {"jad", "text/vnd.sun.j2me.app-descriptor", "8bit"},
#line 732 "ext/MicroMime/ExtMime.gperf"
      {"spl", "application/x-futuresplash", "base64"},
#line 282 "ext/MicroMime/ExtMime.gperf"
      {"uvt", "application/vnd.dece.ttml+xml", "base64"},
#line 764 "ext/MicroMime/ExtMime.gperf"
      {"wmd", "application/x-ms-wmd", "base64"},
#line 178 "ext/MicroMime/ExtMime.gperf"
      {"shf", "application/shf+xml", "base64"},
#line 264 "ext/MicroMime/ExtMime.gperf"
      {"cmc", "application/vnd.cosmocaller", "base64"},
#line 996 "ext/MicroMime/ExtMime.gperf"
      {"fh5", "image/x-freehand", "base64"},
#line 738 "ext/MicroMime/ExtMime.gperf"
      {"tbz", "application/x-gtar", "base64"},
#line 519 "ext/MicroMime/ExtMime.gperf"
      {"docx", "application/vnd.openxmlformats-officedocument.wordprocessingml.document", "base64"},
#line 976 "ext/MicroMime/ExtMime.gperf"
      {"fpx", "image/vnd.fpx", "base64"},
#line 1073 "ext/MicroMime/ExtMime.gperf"
      {"rtx", "text/richtext", "8bit"},
#line 91 "ext/MicroMime/ExtMime.gperf"
      {"mp4", "application/mp4", "base64"},
#line 87 "ext/MicroMime/ExtMime.gperf"
      {"mets", "application/mets+xml", "base64"},
#line 941 "ext/MicroMime/ExtMime.gperf"
      {"cmdf", "chemical/x-cmdf", "base64"},
#line 1162 "ext/MicroMime/ExtMime.gperf"
      {"s11", "video/vnd.sealed.mpeg1", "base64"},
#line 998 "ext/MicroMime/ExtMime.gperf"
      {"fhc", "image/x-freehand", "base64"},
#line 742 "ext/MicroMime/ExtMime.gperf"
      {"hep", "application/x-hep", "base64"},
#line 1091 "ext/MicroMime/ExtMime.gperf"
      {"3dml", "text/vnd.in3d.3dml", "quoted-printable"},
#line 378 "ext/MicroMime/ExtMime.gperf"
      {"ivp", "application/vnd.immervision-ivp", "base64"},
#line 847 "ext/MicroMime/ExtMime.gperf"
      {"z1", "application/x-zmachine", "base64"},
#line 82 "ext/MicroMime/ExtMime.gperf"
      {"mathml", "application/mathml+xml", "base64"},
#line 848 "ext/MicroMime/ExtMime.gperf"
      {"z2", "application/x-zmachine", "base64"},
#line 381 "ext/MicroMime/ExtMime.gperf"
      {"xpw", "application/vnd.intercon.formnet", "base64"},
#line 553 "ext/MicroMime/ExtMime.gperf"
      {"seml", "application/vnd.sealed.eml", "base64"},
#line 849 "ext/MicroMime/ExtMime.gperf"
      {"z3", "application/x-zmachine", "base64"},
#line 200 "ext/MicroMime/ExtMime.gperf"
      {"zmm", "application/vnd.HandHeld-Entertainment+xml", "base64"},
#line 786 "ext/MicroMime/ExtMime.gperf"
      {"wmf", "application/x-msmetafile", "base64"},
#line 836 "ext/MicroMime/ExtMime.gperf"
      {"ms", "application/x-troff-ms", "base64"},
#line 639 "ext/MicroMime/ExtMime.gperf"
      {"wqd", "application/vnd.wqd", "base64"},
#line 318 "ext/MicroMime/ExtMime.gperf"
      {"frm", "application/vnd.framemaker", "base64"},
#line 824 "ext/MicroMime/ExtMime.gperf"
      {"t3", "application/x-t3vm-image", "base64"},
#line 561 "ext/MicroMime/ExtMime.gperf"
      {"s1h", "application/vnd.sealedmedia.softseal.html", "base64"},
#line 382 "ext/MicroMime/ExtMime.gperf"
      {"xpx", "application/vnd.intercon.formnet", "base64"},
#line 156 "ext/MicroMime/ExtMime.gperf"
      {"rdf", "application/rdf+xml", "8bit"},
#line 1041 "ext/MicroMime/ExtMime.gperf"
      {"x3dz", "model/x3d+xml", "base64"},
#line 147 "ext/MicroMime/ExtMime.gperf"
      {"ps", "application/postscript", "8bit"},
#line 511 "ext/MicroMime/ExtMime.gperf"
      {"dd2", "application/vnd.oma.dd2+xml", "base64"},
#line 213 "ext/MicroMime/ExtMime.gperf"
      {"qwt", "application/vnd.Quark.QuarkXPress", "8bit"},
#line 468 "ext/MicroMime/ExtMime.gperf"
      {"wpl", "application/vnd.ms-wpl", "base64"},
#line 772 "ext/MicroMime/ExtMime.gperf"
      {"crd", "application/x-mscardfile", "base64"},
#line 810 "ext/MicroMime/ExtMime.gperf"
      {"sh", "application/x-sh", "8bit"},
#line 537 "ext/MicroMime/ExtMime.gperf"
      {"qps", "application/vnd.publishare-delta-tree", "base64"},
#line 1098 "ext/MicroMime/ExtMime.gperf"
      {"wmls", "text/vnd.wap.wmlscript", "quoted-printable"},
#line 864 "ext/MicroMime/ExtMime.gperf"
      {"xpl", "application/xproc+xml", "base64"},
#line 273 "ext/MicroMime/ExtMime.gperf"
      {"curl", "application/vnd.curl", "base64"},
#line 809 "ext/MicroMime/ExtMime.gperf"
      {"rbw", "application/x-ruby", "8bit"},
#line 1178 "ext/MicroMime/ExtMime.gperf"
      {"ivf", "video/x-ivf", "base64"},
#line 699 "ext/MicroMime/ExtMime.gperf"
      {"csm", "application/x-cu-seeme", "base64"},
#line 77 "ext/MicroMime/ExtMime.gperf"
      {"mrc", "application/marc", "base64"},
#line 430 "ext/MicroMime/ExtMime.gperf"
      {"igx", "application/vnd.micrografx.igx", "base64"},
#line 965 "ext/MicroMime/ExtMime.gperf"
      {"psd", "image/vnd.adobe.photoshop", "base64"},
#line 838 "ext/MicroMime/ExtMime.gperf"
      {"src", "application/x-wais-source", "base64"},
#line 1128 "ext/MicroMime/ExtMime.gperf"
      {"h264", "video/H264", "base64"},
#line 1046 "ext/MicroMime/ExtMime.gperf"
      {"css", "text/css", "8bit"},
#line 1001 "ext/MicroMime/ExtMime.gperf"
      {"psp", "image/x-paintshoppro", "base64"},
#line 622 "ext/MicroMime/ExtMime.gperf"
      {"uoml", "application/vnd.uoml+xml", "base64"},
#line 527 "ext/MicroMime/ExtMime.gperf"
      {"prc", "application/vnd.palm", "base64"},
#line 271 "ext/MicroMime/ExtMime.gperf"
      {"pml", "application/vnd.ctc-posml", "base64"},
#line 41 "ext/MicroMime/ExtMime.gperf"
      {"cdmid", "application/cdmi-domain", "base64"},
#line 377 "ext/MicroMime/ExtMime.gperf"
      {"igl", "application/vnd.igloader", "base64"},
#line 991 "ext/MicroMime/ExtMime.gperf"
      {"cmx", "image/x-cmx", "base64"},
#line 133 "ext/MicroMime/ExtMime.gperf"
      {"prf", "application/pics-rules", "base64"},
#line 542 "ext/MicroMime/ExtMime.gperf"
      {"musicxml", "application/vnd.recordare.musicxml+xml", "base64"},
#line 635 "ext/MicroMime/ExtMime.gperf"
      {"wmlsc", "application/vnd.wap.wmlscriptc", "base64"},
#line 994 "ext/MicroMime/ExtMime.gperf"
      {"fh", "image/x-freehand", "base64"},
#line 451 "ext/MicroMime/ExtMime.gperf"
      {"lrm", "application/vnd.ms-lrm", "base64"},
#line 262 "ext/MicroMime/ExtMime.gperf"
      {"csp", "application/vnd.commonspace", "base64"},
#line 96 "ext/MicroMime/ExtMime.gperf"
      {"wrd", "application/msword", "base64"},
#line 462 "ext/MicroMime/ExtMime.gperf"
      {"mpt", "application/vnd.ms-project", "base64"},
#line 95 "ext/MicroMime/ExtMime.gperf"
      {"dot", "application/msword", "base64"},
#line 942 "ext/MicroMime/ExtMime.gperf"
      {"cml", "chemical/x-cml", "base64"},
#line 148 "ext/MicroMime/ExtMime.gperf"
      {"pot", "application/powerpoint", "base64"},
#line 300 "ext/MicroMime/ExtMime.gperf"
      {"msf", "application/vnd.epson.msf", "base64"},
#line 40 "ext/MicroMime/ExtMime.gperf"
      {"cdmic", "application/cdmi-container", "base64"},
#line 303 "ext/MicroMime/ExtMime.gperf"
      {"ssf", "application/vnd.epson.ssf", "base64"},
#line 1072 "ext/MicroMime/ExtMime.gperf"
      {"dsc", "text/prs.lines.tag", "quoted-printable"},
#line 727 "ext/MicroMime/ExtMime.gperf"
      {"afm", "application/x-font-type1", "base64"},
#line 150 "ext/MicroMime/ExtMime.gperf"
      {"ppt", "application/powerpoint", "base64"},
#line 48 "ext/MicroMime/ExtMime.gperf"
      {"dssc", "application/dssc+der", "base64"},
#line 520 "ext/MicroMime/ExtMime.gperf"
      {"dotx", "application/vnd.openxmlformats-officedocument.wordprocessingml.template", "base64"},
#line 606 "ext/MicroMime/ExtMime.gperf"
      {"xsm", "application/vnd.syncml+xml", "base64"},
#line 557 "ext/MicroMime/ExtMime.gperf"
      {"sppt", "application/vnd.sealed.ppt", "base64"},
#line 516 "ext/MicroMime/ExtMime.gperf"
      {"potx", "application/vnd.openxmlformats-officedocument.presentationml.template", "base64"},
#line 723 "ext/MicroMime/ExtMime.gperf"
      {"psf", "application/x-font-linux-psf", "base64"},
#line 634 "ext/MicroMime/ExtMime.gperf"
      {"wmlc", "application/vnd.wap.wmlc", "base64"},
#line 1123 "ext/MicroMime/ExtMime.gperf"
      {"3g2", "video/3gpp2", "base64"},
#line 818 "ext/MicroMime/ExtMime.gperf"
      {"sql", "application/x-sql", "base64"},
#line 74 "ext/MicroMime/ExtMime.gperf"
      {"lostxml", "application/lost+xml", "base64"},
#line 1126 "ext/MicroMime/ExtMime.gperf"
      {"h261", "video/H261", "base64"},
#line 1188 "ext/MicroMime/ExtMime.gperf"
      {"wmx", "video/x-ms-wmx", "base64"},
#line 513 "ext/MicroMime/ExtMime.gperf"
      {"pptx", "application/vnd.openxmlformats-officedocument.presentationml.presentation", "base64"},
#line 350 "ext/MicroMime/ExtMime.gperf"
      {"tpl", "application/vnd.groove-tool-template", "base64"},
#line 759 "ext/MicroMime/ExtMime.gperf"
      {"cpt", "application/x-mac-compactpro", "base64"},
#line 322 "ext/MicroMime/ExtMime.gperf"
      {"fsc", "application/vnd.fsc.weblaunch", "7bit"},
#line 1021 "ext/MicroMime/ExtMime.gperf"
      {"mesh", "model/mesh", "base64"},
#line 370 "ext/MicroMime/ExtMime.gperf"
      {"afp", "application/vnd.ibm.modcap", "base64"},
#line 779 "ext/MicroMime/ExtMime.gperf"
      {"vbs", "application/x-msdos-program", "base64"},
#line 1097 "ext/MicroMime/ExtMime.gperf"
      {"wml", "text/vnd.wap.wml", "quoted-printable"},
#line 58 "ext/MicroMime/ExtMime.gperf"
      {"woff2", "application/font-woff", "base64"},
#line 995 "ext/MicroMime/ExtMime.gperf"
      {"fh4", "image/x-freehand", "base64"},
#line 860 "ext/MicroMime/ExtMime.gperf"
      {"xml", "application/xml", "8bit"},
#line 790 "ext/MicroMime/ExtMime.gperf"
      {"trm", "application/x-msterminal", "base64"},
#line 224 "ext/MicroMime/ExtMime.gperf"
      {"atc", "application/vnd.acucorp", "7bit"},
#line 1052 "ext/MicroMime/ExtMime.gperf"
      {"shtml", "text/html", "8bit"},
#line 936 "ext/MicroMime/ExtMime.gperf"
      {"rpm", "audio/x-pn-realaudio-plugin", "base64"},
#line 84 "ext/MicroMime/ExtMime.gperf"
      {"mscml", "application/mediaservercontrol+xml", "base64"},
#line 1125 "ext/MicroMime/ExtMime.gperf"
      {"dv", "video/DV", "base64"},
#line 828 "ext/MicroMime/ExtMime.gperf"
      {"tex", "application/x-tex", "8bit"},
#line 79 "ext/MicroMime/ExtMime.gperf"
      {"ma", "application/mathematica", "base64"},
#line 675 "ext/MicroMime/ExtMime.gperf"
      {"aam", "application/x-authorware-map", "base64"},
#line 114 "ext/MicroMime/ExtMime.gperf"
      {"lrf", "application/octet-stream", "base64"},
#line 489 "ext/MicroMime/ExtMime.gperf"
      {"rpss", "application/vnd.nokia.radio-presets", "base64"},
#line 746 "ext/MicroMime/ExtMime.gperf"
      {"phtml", "application/x-httpd-php", "8bit"},
#line 676 "ext/MicroMime/ExtMime.gperf"
      {"aas", "application/x-authorware-seg", "base64"},
#line 183 "ext/MicroMime/ExtMime.gperf"
      {"srx", "application/sparql-results+xml", "base64"},
#line 674 "ext/MicroMime/ExtMime.gperf"
      {"x32", "application/x-authorware-bin", "base64"},
#line 554 "ext/MicroMime/ExtMime.gperf"
      {"smh", "application/vnd.sealed.mht", "base64"},
#line 254 "ext/MicroMime/ExtMime.gperf"
      {"rp9", "application/vnd.cloanto.rp9", "base64"},
#line 80 "ext/MicroMime/ExtMime.gperf"
      {"mb", "application/mathematica", "base64"},
#line 1166 "ext/MicroMime/ExtMime.gperf"
      {"sswf", "video/vnd.sealed.swf", "base64"},
#line 34 "ext/MicroMime/ExtMime.gperf"
      {"aw", "application/applixware", "base64"},
#line 1165 "ext/MicroMime/ExtMime.gperf"
      {"ssw", "video/vnd.sealed.swf", "base64"},
#line 1132 "ext/MicroMime/ExtMime.gperf"
      {"ts", "video/MP2T", "base64"},
#line 799 "ext/MicroMime/ExtMime.gperf"
      {"p12", "application/x-pkcs12", "base64"},
#line 292 "ext/MicroMime/ExtMime.gperf"
      {"dfac", "application/vnd.dreamfactory", "base64"},
#line 781 "ext/MicroMime/ExtMime.gperf"
      {"m13", "application/x-msmediaview", "base64"},
#line 154 "ext/MicroMime/ExtMime.gperf"
      {"rnd", "application/prs.nprend", "base64"},
#line 529 "ext/MicroMime/ExtMime.gperf"
      {"str", "application/vnd.pg.format", "base64"},
#line 1061 "ext/MicroMime/ExtMime.gperf"
      {"hh", "text/plain", "quoted-printable"},
#line 694 "ext/MicroMime/ExtMime.gperf"
      {"crx", "application/x-chrome-extension", "base64"},
#line 78 "ext/MicroMime/ExtMime.gperf"
      {"mrcx", "application/marcxml+xml", "base64"},
#line 672 "ext/MicroMime/ExtMime.gperf"
      {"u32", "application/x-authorware-bin", "base64"},
#line 866 "ext/MicroMime/ExtMime.gperf"
      {"xspf", "application/xspf+xml", "base64"},
#line 192 "ext/MicroMime/ExtMime.gperf"
      {"tsd", "application/timestamped-data", "base64"},
#line 954 "ext/MicroMime/ExtMime.gperf"
      {"jpm", "image/jpm", "base64"},
#line 1083 "ext/MicroMime/ExtMime.gperf"
      {"urls", "text/uri-list", "quoted-printable"},
#line 717 "ext/MicroMime/ExtMime.gperf"
      {"res", "application/x-dtbresource+xml", "base64"},
#line 880 "ext/MicroMime/ExtMime.gperf"
      {"au", "audio/basic", "base64"},
#line 379 "ext/MicroMime/ExtMime.gperf"
      {"ivu", "application/vnd.immervision-ivu", "base64"},
#line 209 "ext/MicroMime/ExtMime.gperf"
      {"msl", "application/vnd.Mobius.MSL", "base64"},
#line 314 "ext/MicroMime/ExtMime.gperf"
      {"fb", "application/vnd.framemaker", "base64"},
#line 141 "ext/MicroMime/ExtMime.gperf"
      {"crl", "application/pkix-crl", "base64"},
#line 604 "ext/MicroMime/ExtMime.gperf"
      {"sis", "application/vnd.symbian.install", "base64"},
#line 188 "ext/MicroMime/ExtMime.gperf"
      {"ssml", "application/ssml+xml", "base64"},
#line 892 "ext/MicroMime/ExtMime.gperf"
      {"mp2", "audio/mpeg", "base64"},
#line 276 "ext/MicroMime/ExtMime.gperf"
      {"dart", "application/vnd.dart", "base64"},
#line 641 "ext/MicroMime/ExtMime.gperf"
      {"wv", "application/vnd.wv.csp+wbxml", "base64"},
#line 186 "ext/MicroMime/ExtMime.gperf"
      {"sru", "application/sru+xml", "base64"},
#line 206 "ext/MicroMime/ExtMime.gperf"
      {"dis", "application/vnd.Mobius.DIS", "base64"},
#line 745 "ext/MicroMime/ExtMime.gperf"
      {"pht", "application/x-httpd-php", "8bit"},
#line 452 "ext/MicroMime/ExtMime.gperf"
      {"thmx", "application/vnd.ms-officetheme", "base64"},
#line 922 "ext/MicroMime/ExtMime.gperf"
      {"aac", "audio/x-aac", "base64"},
#line 187 "ext/MicroMime/ExtMime.gperf"
      {"ssdl", "application/ssdl+xml", "base64"},
#line 56 "ext/MicroMime/ExtMime.gperf"
      {"pfr", "application/font-tdpfr", "base64"},
#line 883 "ext/MicroMime/ExtMime.gperf"
      {"mid", "audio/midi", "base64"},
#line 249 "ext/MicroMime/ExtMime.gperf"
      {"rep", "application/vnd.businessobjects", "base64"},
#line 1000 "ext/MicroMime/ExtMime.gperf"
      {"sid", "image/x-mrsid-image", "base64"},
#line 859 "ext/MicroMime/ExtMime.gperf"
      {"xhtml", "application/xhtml+xml", "8bit"},
#line 894 "ext/MicroMime/ExtMime.gperf"
      {"mp3", "audio/mpeg", "base64"},
#line 158 "ext/MicroMime/ExtMime.gperf"
      {"rnc", "application/relax-ng-compact-syntax", "base64"},
#line 803 "ext/MicroMime/ExtMime.gperf"
      {"p7r", "application/x-pkcs7-certreqresp", "base64"},
#line 607 "ext/MicroMime/ExtMime.gperf"
      {"bdm", "application/vnd.syncml.dm+wbxml", "base64"},
#line 416 "ext/MicroMime/ExtMime.gperf"
      {"123", "application/vnd.lotus-1-2-3", "base64"},
#line 288 "ext/MicroMime/ExtMime.gperf"
      {"fe_launch", "application/vnd.denovo.fcselayout-link", "base64"},
#line 545 "ext/MicroMime/ExtMime.gperf"
      {"rm", "application/vnd.rn-realmedia", "base64"},
#line 765 "ext/MicroMime/ExtMime.gperf"
      {"wmz", "application/x-ms-wmz", "base64"},
#line 943 "ext/MicroMime/ExtMime.gperf"
      {"csml", "chemical/x-csml", "base64"},
#line 75 "ext/MicroMime/ExtMime.gperf"
      {"hqx", "application/mac-binhex40", "8bit"},
#line 614 "ext/MicroMime/ExtMime.gperf"
      {"tpt", "application/vnd.trid.tpt", "base64"},
#line 391 "ext/MicroMime/ExtMime.gperf"
      {"rms", "application/vnd.jcp.javame.midlet-rms", "base64"},
#line 240 "ext/MicroMime/ExtMime.gperf"
      {"atx", "application/vnd.antix.game-component", "base64"},
#line 1076 "ext/MicroMime/ExtMime.gperf"
      {"roff", "text/troff", "8bit"},
#line 1035 "ext/MicroMime/ExtMime.gperf"
      {"wrl", "model/vrml", "base64"},
#line 879 "ext/MicroMime/ExtMime.gperf"
      {"adp", "audio/adpcm", "base64"},
#line 1148 "ext/MicroMime/ExtMime.gperf"
      {"uvvm", "video/vnd.dece.mobile", "base64"},
#line 277 "ext/MicroMime/ExtMime.gperf"
      {"rdz", "application/vnd.data-vision.rdz", "base64"},
#line 1167 "ext/MicroMime/ExtMime.gperf"
      {"s1q", "video/vnd.sealedmedia.softseal.mov", "base64"},
#line 1152 "ext/MicroMime/ExtMime.gperf"
      {"uvvs", "video/vnd.dece.sd", "base64"},
#line 116 "ext/MicroMime/ExtMime.gperf"
      {"mar", "application/octet-stream", "base64"},
#line 90 "ext/MicroMime/ExtMime.gperf"
      {"mp21", "application/mp21", "base64"},
#line 739 "ext/MicroMime/ExtMime.gperf"
      {"tbz2", "application/x-gtar", "base64"},
#line 1033 "ext/MicroMime/ExtMime.gperf"
      {"vtu", "model/vnd.vtu", "base64"},
#line 935 "ext/MicroMime/ExtMime.gperf"
      {"rmp", "audio/x-pn-realaudio-plugin", "base64"},
#line 631 "ext/MicroMime/ExtMime.gperf"
      {"sic", "application/vnd.wap.sic", "base64"},
#line 955 "ext/MicroMime/ExtMime.gperf"
      {"jpf", "image/jpx", "base64"},
#line 431 "ext/MicroMime/ExtMime.gperf"
      {"mif", "application/vnd.mif", "base64"},
#line 766 "ext/MicroMime/ExtMime.gperf"
      {"xbap", "application/x-ms-xbap", "base64"},
#line 280 "ext/MicroMime/ExtMime.gperf"
      {"uvvd", "application/vnd.dece.data", "base64"},
#line 1102 "ext/MicroMime/ExtMime.gperf"
      {"dic", "text/x-c", "quoted-printable"},
#line 1150 "ext/MicroMime/ExtMime.gperf"
      {"uvvp", "video/vnd.dece.pd", "base64"},
#line 1005 "ext/MicroMime/ExtMime.gperf"
      {"pic", "image/x-pict", "base64"},
#line 505 "ext/MicroMime/ExtMime.gperf"
      {"ots", "application/vnd.oasis.opendocument.spreadsheet-template", "base64"},
#line 858 "ext/MicroMime/ExtMime.gperf"
      {"xht", "application/xhtml+xml", "8bit"},
#line 861 "ext/MicroMime/ExtMime.gperf"
      {"xsl", "application/xml", "8bit"},
#line 409 "ext/MicroMime/ExtMime.gperf"
      {"skm", "application/vnd.koan", "base64"},
#line 274 "ext/MicroMime/ExtMime.gperf"
      {"car", "application/vnd.curl.car", "base64"},
#line 661 "ext/MicroMime/ExtMime.gperf"
      {"wsdl", "application/wsdl+xml", "base64"},
#line 1180 "ext/MicroMime/ExtMime.gperf"
      {"mks", "video/x-matroska", "base64"},
#line 777 "ext/MicroMime/ExtMime.gperf"
      {"ps1", "application/x-msdos-program", "base64"},
#line 821 "ext/MicroMime/ExtMime.gperf"
      {"srt", "application/x-subrip", "base64"},
#line 1127 "ext/MicroMime/ExtMime.gperf"
      {"h263", "video/H263", "base64"},
#line 687 "ext/MicroMime/ExtMime.gperf"
      {"cbr", "application/x-cbr", "base64"},
#line 171 "ext/MicroMime/ExtMime.gperf"
      {"spq", "application/scvp-vp-request", "base64"},
#line 721 "ext/MicroMime/ExtMime.gperf"
      {"bdf", "application/x-font-bdf", "base64"},
#line 940 "ext/MicroMime/ExtMime.gperf"
      {"cif", "chemical/x-cif", "base64"},
#line 503 "ext/MicroMime/ExtMime.gperf"
      {"otp", "application/vnd.oasis.opendocument.presentation-template", "base64"},
#line 450 "ext/MicroMime/ExtMime.gperf"
      {"ims", "application/vnd.ms-ims", "base64"},
#line 971 "ext/MicroMime/ExtMime.gperf"
      {"djvu", "image/vnd.djvu", "base64"},
#line 668 "ext/MicroMime/ExtMime.gperf"
      {"abw", "application/x-abiword", "base64"},
#line 408 "ext/MicroMime/ExtMime.gperf"
      {"skd", "application/vnd.koan", "base64"},
#line 1022 "ext/MicroMime/ExtMime.gperf"
      {"msh", "model/mesh", "base64"},
#line 596 "ext/MicroMime/ExtMime.gperf"
      {"sti", "application/vnd.sun.xml.impress.template", "base64"},
#line 410 "ext/MicroMime/ExtMime.gperf"
      {"skp", "application/vnd.koan", "base64"},
#line 255 "ext/MicroMime/ExtMime.gperf"
      {"c4d", "application/vnd.clonk.c4group", "base64"},
#line 43 "ext/MicroMime/ExtMime.gperf"
      {"cdmiq", "application/cdmi-queue", "base64"},
#line 960 "ext/MicroMime/ExtMime.gperf"
      {"sgi", "image/sgi", "base64"},
#line 357 "ext/MicroMime/ExtMime.gperf"
      {"pkd", "application/vnd.hbci", "base64"},
#line 281 "ext/MicroMime/ExtMime.gperf"
      {"uvvf", "application/vnd.dece.data", "base64"},
#line 258 "ext/MicroMime/ExtMime.gperf"
      {"c4p", "application/vnd.clonk.c4group", "base64"},
#line 538 "ext/MicroMime/ExtMime.gperf"
      {"pti", "application/vnd.pvi.ptid1", "base64"},
#line 1133 "ext/MicroMime/ExtMime.gperf"
      {"f4p", "video/mp4", "base64"},
#line 841 "ext/MicroMime/ExtMime.gperf"
      {"crt", "application/x-x509-ca-cert", "base64"},
#line 555 "ext/MicroMime/ExtMime.gperf"
      {"smht", "application/vnd.sealed.mht", "base64"},
#line 221 "ext/MicroMime/ExtMime.gperf"
      {"imp", "application/vnd.accpac.simply.imp", "base64"},
#line 947 "ext/MicroMime/ExtMime.gperf"
      {"ief", "image/ief", "base64"},
#line 404 "ext/MicroMime/ExtMime.gperf"
      {"kwd", "application/vnd.kde.kword", "base64"},
#line 756 "ext/MicroMime/ExtMime.gperf"
      {"jnlp", "application/x-java-jnlp-file", "base64"},
#line 244 "ext/MicroMime/ExtMime.gperf"
      {"swi", "application/vnd.aristanetworks.swi", "base64"},
#line 919 "ext/MicroMime/ExtMime.gperf"
      {"smp3", "audio/vnd.sealedmedia.softseal.mpeg", "base64"},
#line 642 "ext/MicroMime/ExtMime.gperf"
      {"xar", "application/vnd.xara", "base64"},
#line 494 "ext/MicroMime/ExtMime.gperf"
      {"otc", "application/vnd.oasis.opendocument.chart-template", "base64"},
#line 698 "ext/MicroMime/ExtMime.gperf"
      {"csh", "application/x-csh", "8bit"},
#line 656 "ext/MicroMime/ExtMime.gperf"
      {"wif", "application/watcherinfo+xml", "base64"},
#line 239 "ext/MicroMime/ExtMime.gperf"
      {"fti", "application/vnd.anser-web-funds-transfer-initiation", "base64"},
#line 54 "ext/MicroMime/ExtMime.gperf"
      {"otf", "application/font-sfnt", "base64"},
#line 986 "ext/MicroMime/ExtMime.gperf"
      {"xif", "image/vnd.xiff", "base64"},
#line 349 "ext/MicroMime/ExtMime.gperf"
      {"gtm", "application/vnd.groove-tool-message", "base64"},
#line 323 "ext/MicroMime/ExtMime.gperf"
      {"oas", "application/vnd.fujitsu.oasys", "base64"},
#line 706 "ext/MicroMime/ExtMime.gperf"
      {"cst", "application/x-director", "base64"},
#line 977 "ext/MicroMime/ExtMime.gperf"
      {"fst", "image/vnd.fst", "base64"},
#line 956 "ext/MicroMime/ExtMime.gperf"
      {"jpx", "image/jpx", "base64"},
#line 1032 "ext/MicroMime/ExtMime.gperf"
      {"xmt_txt", "model/vnd.parasolid.transmit.text", "quoted-printable"},
#line 417 "ext/MicroMime/ExtMime.gperf"
      {"wks", "application/vnd.lotus-1-2-3", "base64"},
#line 256 "ext/MicroMime/ExtMime.gperf"
      {"c4f", "application/vnd.clonk.c4group", "base64"},
#line 873 "ext/MicroMime/ExtMime.gperf"
      {"zip", "application/zip", "base64"},
#line 605 "ext/MicroMime/ExtMime.gperf"
      {"sisx", "application/vnd.symbian.install", "base64"},
#line 1069 "ext/MicroMime/ExtMime.gperf"
      {"text", "text/plain", "quoted-printable"},
#line 364 "ext/MicroMime/ExtMime.gperf"
      {"hpid", "application/vnd.hp-hpid", "base64"},
#line 771 "ext/MicroMime/ExtMime.gperf"
      {"obd", "application/x-msbinder", "base64"},
#line 900 "ext/MicroMime/ExtMime.gperf"
      {"sil", "audio/silk", "base64"},
#line 161 "ext/MicroMime/ExtMime.gperf"
      {"rs", "application/rls-services+xml", "base64"},
#line 166 "ext/MicroMime/ExtMime.gperf"
      {"rss", "application/rss+xml", "base64"},
#line 458 "ext/MicroMime/ExtMime.gperf"
      {"sldm", "application/vnd.ms-powerpoint.slide.macroEnabled.12", "base64"},
#line 45 "ext/MicroMime/ExtMime.gperf"
      {"davmount", "application/davmount+xml", "base64"},
#line 144 "ext/MicroMime/ExtMime.gperf"
      {"pls", "application/pls+xml", "base64"},
#line 290 "ext/MicroMime/ExtMime.gperf"
      {"mlp", "application/vnd.dolby.mlp", "base64"},
#line 165 "ext/MicroMime/ExtMime.gperf"
      {"rsd", "application/rsd+xml", "base64"},
#line 826 "ext/MicroMime/ExtMime.gperf"
      {"tar", "application/x-tar", "base64"},
#line 704 "ext/MicroMime/ExtMime.gperf"
      {"@dxr", "application/x-director", "base64"},
#line 435 "ext/MicroMime/ExtMime.gperf"
      {"cil", "application/vnd.ms-artgalry", "base64"},
#line 373 "ext/MicroMime/ExtMime.gperf"
      {"irm", "application/vnd.ibm.rights-management", "base64"},
#line 284 "ext/MicroMime/ExtMime.gperf"
      {"uvvx", "application/vnd.dece.unspecified", "base64"},
#line 456 "ext/MicroMime/ExtMime.gperf"
      {"ppam", "application/vnd.ms-powerpoint.addin.macroEnabled.12", "base64"},
#line 718 "ext/MicroMime/ExtMime.gperf"
      {"dvi", "application/x-dvi", "base64"},
#line 507 "ext/MicroMime/ExtMime.gperf"
      {"odm", "application/vnd.oasis.opendocument.text-master", "base64"},
#line 963 "ext/MicroMime/ExtMime.gperf"
      {"tif", "image/tiff", "base64"},
#line 504 "ext/MicroMime/ExtMime.gperf"
      {"ods", "application/vnd.oasis.opendocument.spreadsheet", "base64"},
#line 999 "ext/MicroMime/ExtMime.gperf"
      {"3fr", "image/x-hasselblad-3fr", "base64"},
#line 825 "ext/MicroMime/ExtMime.gperf"
      {"gam", "application/x-tads", "base64"},
#line 578 "ext/MicroMime/ExtMime.gperf"
      {"sdkm", "application/vnd.solent.sdkm+xml", "base64"},
#line 353 "ext/MicroMime/ExtMime.gperf"
      {"bpd", "application/vnd.hbci", "base64"},
#line 532 "ext/MicroMime/ExtMime.gperf"
      {"wg", "application/vnd.pmi.widget", "base64"},
#line 773 "ext/MicroMime/ExtMime.gperf"
      {"clp", "application/x-msclip", "base64"},
#line 70 "ext/MicroMime/ExtMime.gperf"
      {"js", "application/javascript", "8bit"},
#line 315 "ext/MicroMime/ExtMime.gperf"
      {"fbdoc", "application/vnd.framemaker", "base64"},
#line 387 "ext/MicroMime/ExtMime.gperf"
      {"irp", "application/vnd.irepository.package+xml", "base64"},
#line 632 "ext/MicroMime/ExtMime.gperf"
      {"slc", "application/vnd.wap.slc", "base64"},
#line 597 "ext/MicroMime/ExtMime.gperf"
      {"sxm", "application/vnd.sun.xml.math", "base64"},
#line 502 "ext/MicroMime/ExtMime.gperf"
      {"odp", "application/vnd.oasis.opendocument.presentation", "base64"},
#line 615 "ext/MicroMime/ExtMime.gperf"
      {"mxs", "application/vnd.triscape.mxs", "base64"},
#line 122 "ext/MicroMime/ExtMime.gperf"
      {"ogx", "application/ogg", "base64"},
#line 982 "ext/MicroMime/ExtMime.gperf"
      {"mdi", "image/vnd.ms-modi", "base64"},
#line 488 "ext/MicroMime/ExtMime.gperf"
      {"rpst", "application/vnd.nokia.radio-preset", "base64"},
#line 957 "ext/MicroMime/ExtMime.gperf"
      {"ktx", "image/ktx", "base64"},
#line 210 "ext/MicroMime/ExtMime.gperf"
      {"plc", "application/vnd.Mobius.PLC", "base64"},
#line 577 "ext/MicroMime/ExtMime.gperf"
      {"sdkd", "application/vnd.solent.sdkm+xml", "base64"},
#line 440 "ext/MicroMime/ExtMime.gperf"
      {"xlm", "application/vnd.ms-excel", "base64"},
#line 964 "ext/MicroMime/ExtMime.gperf"
      {"tiff", "image/tiff", "base64"},
#line 533 "ext/MicroMime/ExtMime.gperf"
      {"plf", "application/vnd.pocketlearn", "base64"},
#line 446 "ext/MicroMime/ExtMime.gperf"
      {"xlsm", "application/vnd.ms-excel.sheet.macroEnabled.12", "base64"},
#line 589 "ext/MicroMime/ExtMime.gperf"
      {"smzip", "application/vnd.stepmania.package", "base64"},
#line 441 "ext/MicroMime/ExtMime.gperf"
      {"xls", "application/vnd.ms-excel", "base64"},
#line 774 "ext/MicroMime/ExtMime.gperf"
      {"bat", "application/x-msdos-program", "base64"},
#line 371 "ext/MicroMime/ExtMime.gperf"
      {"list3820", "application/vnd.ibm.modcap", "base64"},
#line 593 "ext/MicroMime/ExtMime.gperf"
      {"sxd", "application/vnd.sun.xml.draw", "base64"},
#line 1096 "ext/MicroMime/ExtMime.gperf"
      {"sl", "text/vnd.wap.sl", "quoted-printable"},
#line 1171 "ext/MicroMime/ExtMime.gperf"
      {"uvvu", "video/vnd.uvvu.mp4", "base64"},
#line 490 "ext/MicroMime/ExtMime.gperf"
      {"edm", "application/vnd.novadigm.EDM", "base64"},
#line 331 "ext/MicroMime/ExtMime.gperf"
      {"fzs", "application/vnd.fuzzysheet", "base64"},
#line 1039 "ext/MicroMime/ExtMime.gperf"
      {"x3dvz", "model/x3d+vrml", "base64"},
#line 1174 "ext/MicroMime/ExtMime.gperf"
      {"dl", "video/x-dl", "base64"},
#line 246 "ext/MicroMime/ExtMime.gperf"
      {"aep", "application/vnd.audiograph", "base64"},
#line 798 "ext/MicroMime/ExtMime.gperf"
      {"pl", "application/x-perl", "8bit"},
#line 579 "ext/MicroMime/ExtMime.gperf"
      {"dxp", "application/vnd.spotfire.dxp", "base64"},
#line 540 "ext/MicroMime/ExtMime.gperf"
      {"bed", "application/vnd.realvnc.bed", "base64"},
#line 1157 "ext/MicroMime/ExtMime.gperf"
      {"m4u", "video/vnd.mpegurl", "8bit"},
#line 191 "ext/MicroMime/ExtMime.gperf"
      {"tfi", "application/thraud+xml", "base64"},
#line 493 "ext/MicroMime/ExtMime.gperf"
      {"odc", "application/vnd.oasis.opendocument.chart", "base64"},
#line 181 "ext/MicroMime/ExtMime.gperf"
      {"smil", "application/smil+xml", "8bit"},
#line 551 "ext/MicroMime/ExtMime.gperf"
      {"sdoc", "application/vnd.sealed.doc", "base64"},
#line 496 "ext/MicroMime/ExtMime.gperf"
      {"odf", "application/vnd.oasis.opendocument.formula", "base64"},
#line 876 "ext/MicroMime/ExtMime.gperf"
      {"evc", "audio/EVRC", "base64"},
#line 345 "ext/MicroMime/ExtMime.gperf"
      {"gac", "application/vnd.groove-account", "base64"},
#line 1114 "ext/MicroMime/ExtMime.gperf"
      {"etx", "text/x-setext", "quoted-printable"},
#line 372 "ext/MicroMime/ExtMime.gperf"
      {"listafp", "application/vnd.ibm.modcap", "base64"},
#line 865 "ext/MicroMime/ExtMime.gperf"
      {"xslt", "application/xslt+xml", "base64"},
#line 1078 "ext/MicroMime/ExtMime.gperf"
      {"tr", "text/troff", "8bit"},
#line 1027 "ext/MicroMime/ExtMime.gperf"
      {"gtw", "model/vnd.gtw", "base64"},
#line 743 "ext/MicroMime/ExtMime.gperf"
      {"rhtml", "application/x-html+ruby", "8bit"},
#line 819 "ext/MicroMime/ExtMime.gperf"
      {"sit", "application/x-stuffit", "base64"},
#line 227 "ext/MicroMime/ExtMime.gperf"
      {"fxp", "application/vnd.adobe.fxp", "base64"},
#line 850 "ext/MicroMime/ExtMime.gperf"
      {"z4", "application/x-zmachine", "base64"},
#line 105 "ext/MicroMime/ExtMime.gperf"
      {"distz", "application/octet-stream", "base64"},
#line 591 "ext/MicroMime/ExtMime.gperf"
      {"sxc", "application/vnd.sun.xml.calc", "base64"},
#line 933 "ext/MicroMime/ExtMime.gperf"
      {"ra", "audio/x-pn-realaudio", "base64"},
#line 97 "ext/MicroMime/ExtMime.gperf"
      {"mxf", "application/mxf", "base64"},
#line 910 "ext/MicroMime/ExtMime.gperf"
      {"mxmf", "audio/vnd.nokia.mobile-xmf", "base64"},
#line 259 "ext/MicroMime/ExtMime.gperf"
      {"c4u", "application/vnd.clonk.c4group", "base64"},
#line 104 "ext/MicroMime/ExtMime.gperf"
      {"dist", "application/octet-stream", "base64"},
#line 967 "ext/MicroMime/ExtMime.gperf"
      {"uvi", "image/vnd.dece.graphic", "base64"},
#line 820 "ext/MicroMime/ExtMime.gperf"
      {"sitx", "application/x-stuffitx", "base64"},
#line 1037 "ext/MicroMime/ExtMime.gperf"
      {"x3dbz", "model/x3d+binary", "base64"},
#line 673 "ext/MicroMime/ExtMime.gperf"
      {"vox", "application/x-authorware-bin", "base64"},
#line 439 "ext/MicroMime/ExtMime.gperf"
      {"xlc", "application/vnd.ms-excel", "base64"},
#line 83 "ext/MicroMime/ExtMime.gperf"
      {"mbox", "application/mbox", "base64"},
#line 974 "ext/MicroMime/ExtMime.gperf"
      {"dxf", "image/vnd.dxf", "base64"},
#line 1179 "ext/MicroMime/ExtMime.gperf"
      {"mk3d", "video/x-matroska", "base64"},
#line 844 "ext/MicroMime/ExtMime.gperf"
      {"xlf", "application/x-xliff+xml", "base64"},
#line 808 "ext/MicroMime/ExtMime.gperf"
      {"rb", "application/x-ruby", "8bit"},
#line 989 "ext/MicroMime/ExtMime.gperf"
      {"bmp", "image/x-bmp", "base64"},
#line 1082 "ext/MicroMime/ExtMime.gperf"
      {"uris", "text/uri-list", "quoted-printable"},
#line 422 "ext/MicroMime/ExtMime.gperf"
      {"scm", "application/vnd.lotus-screencam", "base64"},
#line 1108 "ext/MicroMime/ExtMime.gperf"
      {"for", "text/x-fortran", "quoted-printable"},
#line 921 "ext/MicroMime/ExtMime.gperf"
      {"webm", "audio/webm", "base64"},
#line 286 "ext/MicroMime/ExtMime.gperf"
      {"uvvz", "application/vnd.dece.zip", "base64"},
#line 170 "ext/MicroMime/ExtMime.gperf"
      {"scs", "application/scvp-cv-response", "base64"},
#line 1146 "ext/MicroMime/ExtMime.gperf"
      {"uvvh", "video/vnd.dece.hd", "base64"},
#line 46 "ext/MicroMime/ExtMime.gperf"
      {"dcm", "application/dicom", "base64"},
#line 560 "ext/MicroMime/ExtMime.gperf"
      {"sxls", "application/vnd.sealed.xls", "base64"},
#line 182 "ext/MicroMime/ExtMime.gperf"
      {"rq", "application/sparql-query", "base64"},
#line 658 "ext/MicroMime/ExtMime.gperf"
      {"hlp", "application/winhlp", "base64"},
#line 425 "ext/MicroMime/ExtMime.gperf"
      {"mcd", "application/vnd.mcd", "base64"},
#line 283 "ext/MicroMime/ExtMime.gperf"
      {"uvvt", "application/vnd.dece.ttml+xml", "base64"},
#line 789 "ext/MicroMime/ExtMime.gperf"
      {"scd", "application/x-msschedule", "base64"},
#line 514 "ext/MicroMime/ExtMime.gperf"
      {"sldx", "application/vnd.openxmlformats-officedocument.presentationml.slide", "base64"},
#line 68 "ext/MicroMime/ExtMime.gperf"
      {"ser", "application/java-serialized-object", "base64"},
#line 399 "ext/MicroMime/ExtMime.gperf"
      {"flw", "application/vnd.kde.kivio", "base64"},
#line 987 "ext/MicroMime/ExtMime.gperf"
      {"webp", "image/webp", "base64"},
#line 751 "ext/MicroMime/ExtMime.gperf"
      {"install", "application/x-install-instructions", "base64"},
#line 374 "ext/MicroMime/ExtMime.gperf"
      {"sc", "application/vnd.ibm.secure-container", "base64"},
#line 807 "ext/MicroMime/ExtMime.gperf"
      {"ris", "application/x-research-info-systems", "base64"},
#line 509 "ext/MicroMime/ExtMime.gperf"
      {"oth", "application/vnd.oasis.opendocument.text-web", "base64"},
#line 842 "ext/MicroMime/ExtMime.gperf"
      {"der", "application/x-x509-ca-cert", "base64"},
#line 535 "ext/MicroMime/ExtMime.gperf"
      {"box", "application/vnd.previewsystems.box", "base64"},
#line 106 "ext/MicroMime/ExtMime.gperf"
      {"dll", "application/octet-stream", "base64"},
#line 355 "ext/MicroMime/ExtMime.gperf"
      {"hbci", "application/vnd.hbci", "base64"},
#line 804 "ext/MicroMime/ExtMime.gperf"
      {"py", "application/x-python", "8bit"},
#line 389 "ext/MicroMime/ExtMime.gperf"
      {"fcs", "application/vnd.isac.fcs", "base64"},
#line 395 "ext/MicroMime/ExtMime.gperf"
      {"ktz", "application/vnd.kahootz", "base64"},
#line 1089 "ext/MicroMime/ExtMime.gperf"
      {"flx", "text/vnd.fmi.flexstor", "quoted-printable"},
#line 508 "ext/MicroMime/ExtMime.gperf"
      {"ott", "application/vnd.oasis.opendocument.text-template", "base64"},
#line 482 "ext/MicroMime/ExtMime.gperf"
      {"ntf", "application/vnd.nitf", "base64"},
#line 664 "ext/MicroMime/ExtMime.gperf"
      {"7z", "application/x-7z-compressed", "base64"},
#line 959 "ext/MicroMime/ExtMime.gperf"
      {"btif", "image/prs.btif", "base64"},
#line 260 "ext/MicroMime/ExtMime.gperf"
      {"c11amc", "application/vnd.cluetrust.cartomobile-config", "base64"},
#line 916 "ext/MicroMime/ExtMime.gperf"
      {"rip", "audio/vnd.rip", "base64"},
#line 140 "ext/MicroMime/ExtMime.gperf"
      {"cer", "application/pkix-cert", "base64"},
#line 388 "ext/MicroMime/ExtMime.gperf"
      {"xpr", "application/vnd.is-xpr", "base64"},
#line 411 "ext/MicroMime/ExtMime.gperf"
      {"skt", "application/vnd.koan", "base64"},
#line 119 "ext/MicroMime/ExtMime.gperf"
      {"so", "application/octet-stream", "base64"},
#line 598 "ext/MicroMime/ExtMime.gperf"
      {"sxw", "application/vnd.sun.xml.writer", "base64"},
#line 1055 "ext/MicroMime/ExtMime.gperf"
      {"cc", "text/plain", "quoted-printable"},
#line 1064 "ext/MicroMime/ExtMime.gperf"
      {"list", "text/plain", "quoted-printable"},
#line 397 "ext/MicroMime/ExtMime.gperf"
      {"chrt", "application/vnd.kde.kchart", "base64"},
#line 978 "ext/MicroMime/ExtMime.gperf"
      {"mmr", "image/vnd.fujixerox.edmics-mmr", "base64"},
#line 356 "ext/MicroMime/ExtMime.gperf"
      {"kom", "application/vnd.hbci", "base64"},
#line 465 "ext/MicroMime/ExtMime.gperf"
      {"wcm", "application/vnd.ms-works", "base64"},
#line 443 "ext/MicroMime/ExtMime.gperf"
      {"xlw", "application/vnd.ms-excel", "base64"},
#line 626 "ext/MicroMime/ExtMime.gperf"
      {"vss", "application/vnd.visio", "base64"},
#line 447 "ext/MicroMime/ExtMime.gperf"
      {"xltm", "application/vnd.ms-excel.template.macroEnabled.12", "base64"},
#line 405 "ext/MicroMime/ExtMime.gperf"
      {"kwt", "application/vnd.kde.kword", "base64"},
#line 724 "ext/MicroMime/ExtMime.gperf"
      {"pcf", "application/x-font-pcf", "base64"},
#line 332 "ext/MicroMime/ExtMime.gperf"
      {"txd", "application/vnd.genomatix.tuxedo", "base64"},
#line 806 "ext/MicroMime/ExtMime.gperf"
      {"rar", "application/x-rar-compressed", "base64"},
#line 637 "ext/MicroMime/ExtMime.gperf"
      {"nbp", "application/vnd.wolfram.player", "base64"},
#line 948 "ext/MicroMime/ExtMime.gperf"
      {"jp2", "image/jp2", "base64"},
#line 541 "ext/MicroMime/ExtMime.gperf"
      {"mxl", "application/vnd.recordare.musicxml", "base64"},
#line 867 "ext/MicroMime/ExtMime.gperf"
      {"mxml", "application/xv+xml", "base64"},
#line 1095 "ext/MicroMime/ExtMime.gperf"
      {"si", "text/vnd.wap.si", "quoted-printable"},
#line 625 "ext/MicroMime/ExtMime.gperf"
      {"vsd", "application/vnd.visio", "base64"},
#line 517 "ext/MicroMime/ExtMime.gperf"
      {"xlsx", "application/vnd.openxmlformats-officedocument.spreadsheetml.sheet", "base64"},
#line 559 "ext/MicroMime/ExtMime.gperf"
      {"sxl", "application/vnd.sealed.xls", "base64"},
#line 1093 "ext/MicroMime/ExtMime.gperf"
      {"ccc", "text/vnd.net2phone.commcenter.command", "quoted-printable"},
#line 157 "ext/MicroMime/ExtMime.gperf"
      {"rif", "application/reginfo+xml", "base64"},
#line 491 "ext/MicroMime/ExtMime.gperf"
      {"edx", "application/vnd.novadigm.EDX", "base64"},
#line 129 "ext/MicroMime/ExtMime.gperf"
      {"xer", "application/patch-ops-error+xml", "base64"},
#line 1099 "ext/MicroMime/ExtMime.gperf"
      {"asm", "text/x-asm", "quoted-printable"},
#line 1101 "ext/MicroMime/ExtMime.gperf"
      {"cxx", "text/x-c", "quoted-printable"},
#line 392 "ext/MicroMime/ExtMime.gperf"
      {"jisp", "application/vnd.jisp", "base64"},
#line 109 "ext/MicroMime/ExtMime.gperf"
      {"dylib", "application/octet-stream", "base64"},
#line 666 "ext/MicroMime/ExtMime.gperf"
      {"wkz", "application/x-Wingz", "base64"},
#line 1115 "ext/MicroMime/ExtMime.gperf"
      {"sfv", "text/x-sfv", "quoted-printable"},
#line 667 "ext/MicroMime/ExtMime.gperf"
      {"wz", "application/x-Wingz", "base64"},
#line 734 "ext/MicroMime/ExtMime.gperf"
      {"ulx", "application/x-glulx", "base64"},
#line 202 "ext/MicroMime/ExtMime.gperf"
      {"knp", "application/vnd.Kinar", "base64"},
#line 868 "ext/MicroMime/ExtMime.gperf"
      {"xhvml", "application/xv+xml", "base64"},
#line 846 "ext/MicroMime/ExtMime.gperf"
      {"xz", "application/x-xz", "base64"},
#line 146 "ext/MicroMime/ExtMime.gperf"
      {"eps", "application/postscript", "8bit"},
#line 1158 "ext/MicroMime/ExtMime.gperf"
      {"mxu", "video/vnd.mpegurl", "8bit"},
#line 334 "ext/MicroMime/ExtMime.gperf"
      {"ggt", "application/vnd.geogebra.tool", "base64"},
#line 1159 "ext/MicroMime/ExtMime.gperf"
      {"pyv", "video/vnd.ms-playready.media.pyv", "base64"},
#line 211 "ext/MicroMime/ExtMime.gperf"
      {"txf", "application/vnd.Mobius.TXF", "base64"},
#line 970 "ext/MicroMime/ExtMime.gperf"
      {"djv", "image/vnd.djvu", "base64"},
#line 67 "ext/MicroMime/ExtMime.gperf"
      {"jar", "application/java-archive", "base64"},
#line 624 "ext/MicroMime/ExtMime.gperf"
      {"vsc", "application/vnd.vidsoft.vidconference", "8bit"},
#line 121 "ext/MicroMime/ExtMime.gperf"
      {"opf", "application/oebps-package+xml", "base64"},
#line 510 "ext/MicroMime/ExtMime.gperf"
      {"xo", "application/vnd.olpc-sugar", "base64"},
#line 731 "ext/MicroMime/ExtMime.gperf"
      {"arc", "application/x-freearc", "base64"},
#line 228 "ext/MicroMime/ExtMime.gperf"
      {"fxpl", "application/vnd.adobe.fxp", "base64"},
#line 630 "ext/MicroMime/ExtMime.gperf"
      {"vsf", "application/vnd.vsf", "base64"},
#line 1026 "ext/MicroMime/ExtMime.gperf"
      {"gdl", "model/vnd.gdl", "base64"},
#line 39 "ext/MicroMime/ExtMime.gperf"
      {"cdmia", "application/cdmi-capability", "base64"},
#line 302 "ext/MicroMime/ExtMime.gperf"
      {"slt", "application/vnd.epson.salt", "base64"},
#line 1014 "ext/MicroMime/ExtMime.gperf"
      {"xcf", "image/x-xcf", "base64"},
#line 1068 "ext/MicroMime/ExtMime.gperf"
      {"rst", "text/plain", "quoted-printable"},
#line 683 "ext/MicroMime/ExtMime.gperf"
      {"boz", "application/x-bzip2", "base64"},
#line 361 "ext/MicroMime/ExtMime.gperf"
      {"plt", "application/vnd.hp-HPGL", "base64"},
#line 573 "ext/MicroMime/ExtMime.gperf"
      {"iif", "application/vnd.shana.informed.interchange", "base64"},
#line 339 "ext/MicroMime/ExtMime.gperf"
      {"g3w", "application/vnd.geospace", "base64"},
#line 814 "ext/MicroMime/ExtMime.gperf"
      {"sav", "application/x-spss", "base64"},
#line 835 "ext/MicroMime/ExtMime.gperf"
      {"me", "application/x-troff-me", "base64"},
#line 338 "ext/MicroMime/ExtMime.gperf"
      {"g2w", "application/vnd.geoplan", "base64"},
#line 86 "ext/MicroMime/ExtMime.gperf"
      {"meta4", "application/metalink4+xml", "base64"},
#line 131 "ext/MicroMime/ExtMime.gperf"
      {"asc", "application/pgp-signature", "base64"},
#line 478 "ext/MicroMime/ExtMime.gperf"
      {"req", "application/vnd.nervana", "base64"},
#line 1003 "ext/MicroMime/ExtMime.gperf"
      {"pcx", "image/x-pcx", "base64"},
#line 436 "ext/MicroMime/ExtMime.gperf"
      {"asf", "application/vnd.ms-asf", "base64"},
#line 845 "ext/MicroMime/ExtMime.gperf"
      {"xpi", "application/x-xpinstall", "base64"},
#line 479 "ext/MicroMime/ExtMime.gperf"
      {"request", "application/vnd.nervana", "base64"},
#line 712 "ext/MicroMime/ExtMime.gperf"
      {"swa", "application/x-director", "base64"},
#line 215 "ext/MicroMime/ExtMime.gperf"
      {"qxd", "application/vnd.Quark.QuarkXPress", "8bit"},
#line 506 "ext/MicroMime/ExtMime.gperf"
      {"odt", "application/vnd.oasis.opendocument.text", "base64"},
#line 362 "ext/MicroMime/ExtMime.gperf"
      {"pcl", "application/vnd.hp-PCL", "base64"},
#line 716 "ext/MicroMime/ExtMime.gperf"
      {"dtb", "application/x-dtbook+xml", "base64"},
#line 311 "ext/MicroMime/ExtMime.gperf"
      {"seed", "application/vnd.fdsn.seed", "base64"},
#line 180 "ext/MicroMime/ExtMime.gperf"
      {"smi", "application/smil+xml", "8bit"},
#line 757 "ext/MicroMime/ExtMime.gperf"
      {"latex", "application/x-latex", "8bit"},
#line 972 "ext/MicroMime/ExtMime.gperf"
      {"sub", "image/vnd.dvb.subtitle", "base64"},
#line 728 "ext/MicroMime/ExtMime.gperf"
      {"pfa", "application/x-font-type1", "base64"},
#line 980 "ext/MicroMime/ExtMime.gperf"
      {"pgb", "image/vnd.globalgraphics.pgb", "base64"},
#line 909 "ext/MicroMime/ExtMime.gperf"
      {"pya", "audio/vnd.ms-playready.media.pya", "base64"},
#line 38 "ext/MicroMime/ExtMime.gperf"
      {"ccxml", "application/ccxml+xml", "base64"},
#line 962 "ext/MicroMime/ExtMime.gperf"
      {"svgz", "image/svg+xml", "8bit"},
#line 788 "ext/MicroMime/ExtMime.gperf"
      {"pub", "application/x-mspublisher", "base64"},
#line 369 "ext/MicroMime/ExtMime.gperf"
      {"emm", "application/vnd.ibm.electronic-media", "base64"},
#line 729 "ext/MicroMime/ExtMime.gperf"
      {"pfb", "application/x-font-type1", "base64"},
#line 628 "ext/MicroMime/ExtMime.gperf"
      {"vsw", "application/vnd.visio", "base64"},
#line 703 "ext/MicroMime/ExtMime.gperf"
      {"@dir", "application/x-director", "base64"},
#line 66 "ext/MicroMime/ExtMime.gperf"
      {"ipfix", "application/ipfix", "base64"},
#line 1034 "ext/MicroMime/ExtMime.gperf"
      {"vrml", "model/vrml", "base64"},
#line 160 "ext/MicroMime/ExtMime.gperf"
      {"rld", "application/resource-lists-diff+xml", "base64"},
#line 497 "ext/MicroMime/ExtMime.gperf"
      {"odft", "application/vnd.oasis.opendocument.formula-template", "base64"},
#line 801 "ext/MicroMime/ExtMime.gperf"
      {"p7b", "application/x-pkcs7-certificates", "base64"},
#line 442 "ext/MicroMime/ExtMime.gperf"
      {"xlt", "application/vnd.ms-excel", "base64"},
#line 1019 "ext/MicroMime/ExtMime.gperf"
      {"iges", "model/iges", "base64"},
#line 945 "ext/MicroMime/ExtMime.gperf"
      {"g3", "image/g3fax", "base64"},
#line 305 "ext/MicroMime/ExtMime.gperf"
      {"et3", "application/vnd.eszigno3+xml", "base64"},
#line 937 "ext/MicroMime/ExtMime.gperf"
      {"wav", "audio/x-wav", "base64"},
#line 324 "ext/MicroMime/ExtMime.gperf"
      {"oa2", "application/vnd.fujitsu.oasys2", "base64"},
#line 518 "ext/MicroMime/ExtMime.gperf"
      {"xltx", "application/vnd.openxmlformats-officedocument.spreadsheetml.template", "base64"},
#line 707 "ext/MicroMime/ExtMime.gperf"
      {"cxt", "application/x-director", "base64"},
#line 1111 "ext/MicroMime/ExtMime.gperf"
      {"opml", "text/x-opml", "quoted-printable"},
#line 629 "ext/MicroMime/ExtMime.gperf"
      {"vis", "application/vnd.visionary", "base64"},
#line 1119 "ext/MicroMime/ExtMime.gperf"
      {"yaml", "text/x-yaml", "8bit"},
#line 426 "ext/MicroMime/ExtMime.gperf"
      {"mc1", "application/vnd.medcalcdata", "base64"},
#line 636 "ext/MicroMime/ExtMime.gperf"
      {"wtb", "application/vnd.webturbo", "base64"},
#line 325 "ext/MicroMime/ExtMime.gperf"
      {"oa3", "application/vnd.fujitsu.oasys3", "base64"},
#line 979 "ext/MicroMime/ExtMime.gperf"
      {"rlc", "image/vnd.fujixerox.edmics-rlc", "base64"},
#line 1185 "ext/MicroMime/ExtMime.gperf"
      {"asx", "video/x-ms-asf", "base64"},
#line 261 "ext/MicroMime/ExtMime.gperf"
      {"c11amz", "application/vnd.cluetrust.cartomobile-config-pkg", "base64"},
#line 363 "ext/MicroMime/ExtMime.gperf"
      {"pclxl", "application/vnd.hp-PCLXL", "base64"},
#line 190 "ext/MicroMime/ExtMime.gperf"
      {"teicorpus", "application/tei+xml", "base64"},
#line 620 "ext/MicroMime/ExtMime.gperf"
      {"umj", "application/vnd.umajin", "base64"},
#line 686 "ext/MicroMime/ExtMime.gperf"
      {"cba", "application/x-cbr", "base64"},
#line 783 "ext/MicroMime/ExtMime.gperf"
      {"mvb", "application/x-msmediaview", "base64"},
#line 115 "ext/MicroMime/ExtMime.gperf"
      {"lzh", "application/octet-stream", "base64"},
#line 915 "ext/MicroMime/ExtMime.gperf"
      {"qcp", "audio/vnd.qcelp", "base64"},
#line 794 "ext/MicroMime/ExtMime.gperf"
      {"oex", "application/x-opera-extension", "base64"},
#line 784 "ext/MicroMime/ExtMime.gperf"
      {"emf", "application/x-msmetafile", "base64"},
#line 437 "ext/MicroMime/ExtMime.gperf"
      {"cab", "application/vnd.ms-cab-compressed", "base64"},
#line 1155 "ext/MicroMime/ExtMime.gperf"
      {"dvb", "video/vnd.dvb.file", "base64"},
#line 1137 "ext/MicroMime/ExtMime.gperf"
      {"m2v", "video/mpeg", "base64"},
#line 196 "ext/MicroMime/ExtMime.gperf"
      {"pvb", "application/vnd.3gpp.pic-bw-var", "base64"},
#line 903 "ext/MicroMime/ExtMime.gperf"
      {"eol", "audio/vnd.digital-winds", "7bit"},
#line 159 "ext/MicroMime/ExtMime.gperf"
      {"rl", "application/resource-lists+xml", "base64"},
#line 344 "ext/MicroMime/ExtMime.gperf"
      {"gqs", "application/vnd.grafeq", "base64"},
#line 1153 "ext/MicroMime/ExtMime.gperf"
      {"uvv", "video/vnd.dece.video", "base64"},
#line 189 "ext/MicroMime/ExtMime.gperf"
      {"tei", "application/tei+xml", "base64"},
#line 767 "ext/MicroMime/ExtMime.gperf"
      {"mda", "application/x-msaccess", "base64"},
#line 583 "ext/MicroMime/ExtMime.gperf"
      {"sda", "application/vnd.stardivision.draw", "base64"},
#line 60 "ext/MicroMime/ExtMime.gperf"
      {"gpx", "application/gpx+xml", "base64"},
#line 1004 "ext/MicroMime/ExtMime.gperf"
      {"pct", "image/x-pict", "base64"},
#line 531 "ext/MicroMime/ExtMime.gperf"
      {"efif", "application/vnd.picsel", "base64"},
#line 692 "ext/MicroMime/ExtMime.gperf"
      {"chat", "application/x-chat", "base64"},
#line 1011 "ext/MicroMime/ExtMime.gperf"
      {"tga", "image/x-targa", "base64"},
#line 484 "ext/MicroMime/ExtMime.gperf"
      {"nns", "application/vnd.noblenet-sealer", "base64"},
#line 768 "ext/MicroMime/ExtMime.gperf"
      {"mdb", "application/x-msaccess", "base64"},
#line 293 "ext/MicroMime/ExtMime.gperf"
      {"kpxx", "application/vnd.ds-keypoint", "base64"},
#line 827 "ext/MicroMime/ExtMime.gperf"
      {"tcl", "application/x-tcl", "8bit"},
#line 346 "ext/MicroMime/ExtMime.gperf"
      {"ghf", "application/vnd.groove-help", "base64"},
#line 705 "ext/MicroMime/ExtMime.gperf"
      {"cct", "application/x-director", "base64"},
#line 525 "ext/MicroMime/ExtMime.gperf"
      {"pdb", "application/vnd.palm", "base64"},
#line 780 "ext/MicroMime/ExtMime.gperf"
      {"msi", "application/x-msdownload", "base64"},
#line 483 "ext/MicroMime/ExtMime.gperf"
      {"nnd", "application/vnd.noblenet-directory", "base64"},
#line 403 "ext/MicroMime/ExtMime.gperf"
      {"ksp", "application/vnd.kde.kspread", "base64"},
#line 42 "ext/MicroMime/ExtMime.gperf"
      {"cdmio", "application/cdmi-object", "base64"},
#line 226 "ext/MicroMime/ExtMime.gperf"
      {"fcdt", "application/vnd.adobe.formscentral.fcdt", "base64"},
#line 216 "ext/MicroMime/ExtMime.gperf"
      {"qxl", "application/vnd.Quark.QuarkXPress", "8bit"},
#line 93 "ext/MicroMime/ExtMime.gperf"
      {"mpg4", "application/mp4", "base64"},
#line 341 "ext/MicroMime/ExtMime.gperf"
      {"kml", "application/vnd.google-earth.kml+xml", "8bit"},
#line 923 "ext/MicroMime/ExtMime.gperf"
      {"aif", "audio/x-aiff", "base64"},
#line 891 "ext/MicroMime/ExtMime.gperf"
      {"m3a", "audio/mpeg", "base64"},
#line 335 "ext/MicroMime/ExtMime.gperf"
      {"gex", "application/vnd.geometry-explorer", "base64"},
#line 343 "ext/MicroMime/ExtMime.gperf"
      {"gqf", "application/vnd.grafeq", "base64"},
#line 35 "ext/MicroMime/ExtMime.gperf"
      {"atom", "application/atom+xml", "8bit"},
#line 890 "ext/MicroMime/ExtMime.gperf"
      {"m2a", "audio/mpeg", "base64"},
#line 1071 "ext/MicroMime/ExtMime.gperf"
      {"txt", "text/plain", "quoted-printable"},
#line 1136 "ext/MicroMime/ExtMime.gperf"
      {"m1v", "video/mpeg", "base64"},
#line 901 "ext/MicroMime/ExtMime.gperf"
      {"uva", "audio/vnd.dece.audio", "base64"},
#line 1029 "ext/MicroMime/ExtMime.gperf"
      {"x_b", "model/vnd.parasolid.transmit.binary", "base64"},
#line 627 "ext/MicroMime/ExtMime.gperf"
      {"vst", "application/vnd.visio", "base64"},
#line 1092 "ext/MicroMime/ExtMime.gperf"
      {"spot", "text/vnd.in3d.spot", "quoted-printable"},
#line 647 "ext/MicroMime/ExtMime.gperf"
      {"osf", "application/vnd.yamaha.openscoreformat", "base64"},
#line 474 "ext/MicroMime/ExtMime.gperf"
      {"bkm", "application/vnd.nervana", "base64"},
#line 1038 "ext/MicroMime/ExtMime.gperf"
      {"x3dv", "model/x3d+vrml", "base64"},
#line 791 "ext/MicroMime/ExtMime.gperf"
      {"wri", "application/x-mswrite", "base64"},
#line 402 "ext/MicroMime/ExtMime.gperf"
      {"kpt", "application/vnd.kde.kpresenter", "base64"},
#line 830 "ext/MicroMime/ExtMime.gperf"
      {"texi", "application/x-texinfo", "8bit"},
#line 924 "ext/MicroMime/ExtMime.gperf"
      {"aifc", "audio/x-aiff", "base64"},
#line 925 "ext/MicroMime/ExtMime.gperf"
      {"aiff", "audio/x-aiff", "base64"},
#line 1053 "ext/MicroMime/ExtMime.gperf"
      {"n3", "text/n3", "quoted-printable"},
#line 1017 "ext/MicroMime/ExtMime.gperf"
      {"eml", "message/rfc822", "8bit"},
#line 1056 "ext/MicroMime/ExtMime.gperf"
      {"conf", "text/plain", "quoted-printable"},
#line 466 "ext/MicroMime/ExtMime.gperf"
      {"wdb", "application/vnd.ms-works", "base64"},
#line 709 "ext/MicroMime/ExtMime.gperf"
      {"dir", "application/x-director", "base64"},
#line 340 "ext/MicroMime/ExtMime.gperf"
      {"gmx", "application/vnd.gmx", "base64"},
#line 243 "ext/MicroMime/ExtMime.gperf"
      {"pkpass", "application/vnd.apple.pkpass", "base64"},
#line 822 "ext/MicroMime/ExtMime.gperf"
      {"sv4cpio", "application/x-sv4cpio", "base64"},
#line 1143 "ext/MicroMime/ExtMime.gperf"
      {"mov", "video/quicktime", "base64"},
#line 750 "ext/MicroMime/ExtMime.gperf"
      {"imap", "application/x-imagemap", "8bit"},
#line 448 "ext/MicroMime/ExtMime.gperf"
      {"eot", "application/vnd.ms-fontobject", "base64"},
#line 1081 "ext/MicroMime/ExtMime.gperf"
      {"uri", "text/uri-list", "quoted-printable"},
#line 327 "ext/MicroMime/ExtMime.gperf"
      {"bh2", "application/vnd.fujitsu.oasysprs", "base64"},
#line 59 "ext/MicroMime/ExtMime.gperf"
      {"gml", "application/gml+xml", "base64"},
#line 376 "ext/MicroMime/ExtMime.gperf"
      {"icm", "application/vnd.iccprofile", "base64"},
#line 1044 "ext/MicroMime/ExtMime.gperf"
      {"ics", "text/calendar", "quoted-printable"},
#line 299 "ext/MicroMime/ExtMime.gperf"
      {"esf", "application/vnd.epson.esf", "base64"},
#line 199 "ext/MicroMime/ExtMime.gperf"
      {"gph", "application/vnd.FloGraphIt", "base64"},
#line 475 "ext/MicroMime/ExtMime.gperf"
      {"ent", "application/vnd.nervana", "base64"},
#line 473 "ext/MicroMime/ExtMime.gperf"
      {"taglet", "application/vnd.mynfc", "base64"},
#line 564 "ext/MicroMime/ExtMime.gperf"
      {"s1a", "application/vnd.sealedmedia.softseal.pdf", "base64"},
#line 722 "ext/MicroMime/ExtMime.gperf"
      {"gsf", "application/x-font-ghostscript", "base64"},
#line 155 "ext/MicroMime/ExtMime.gperf"
      {"pskcxml", "application/pskc+xml", "base64"},
#line 342 "ext/MicroMime/ExtMime.gperf"
      {"kmz", "application/vnd.google-earth.kmz", "8bit"},
#line 653 "ext/MicroMime/ExtMime.gperf"
      {"zirz", "application/vnd.zul", "base64"},
#line 485 "ext/MicroMime/ExtMime.gperf"
      {"nnw", "application/vnd.noblenet-web", "base64"},
#line 984 "ext/MicroMime/ExtMime.gperf"
      {"npx", "image/vnd.net-fpx", "base64"},
#line 217 "ext/MicroMime/ExtMime.gperf"
      {"qxt", "application/vnd.Quark.QuarkXPress", "8bit"},
#line 1036 "ext/MicroMime/ExtMime.gperf"
      {"x3db", "model/x3d+binary", "base64"},
#line 360 "ext/MicroMime/ExtMime.gperf"
      {"hpgl", "application/vnd.hp-HPGL", "base64"},
#line 394 "ext/MicroMime/ExtMime.gperf"
      {"ktr", "application/vnd.kahootz", "base64"},
#line 375 "ext/MicroMime/ExtMime.gperf"
      {"icc", "application/vnd.iccprofile", "base64"},
#line 1190 "ext/MicroMime/ExtMime.gperf"
      {"avi", "video/x-msvideo", "base64"},
#line 524 "ext/MicroMime/ExtMime.gperf"
      {"oprc", "application/vnd.palm", "base64"},
#line 1079 "ext/MicroMime/ExtMime.gperf"
      {"troff", "text/troff", "8bit"},
#line 785 "ext/MicroMime/ExtMime.gperf"
      {"emz", "application/x-msmetafile", "base64"},
#line 1090 "ext/MicroMime/ExtMime.gperf"
      {"gv", "text/vnd.graphviz", "quoted-printable"},
#line 69 "ext/MicroMime/ExtMime.gperf"
      {"class", "application/java-vm", "base64"},
#line 857 "ext/MicroMime/ExtMime.gperf"
      {"xenc", "application/xenc+xml", "base64"},
#line 142 "ext/MicroMime/ExtMime.gperf"
      {"pkipath", "application/pkix-pkipath", "base64"},
#line 878 "ext/MicroMime/ExtMime.gperf"
      {"smv", "audio/SMV", "base64"},
#line 169 "ext/MicroMime/ExtMime.gperf"
      {"scq", "application/scvp-cv-request", "base64"},
#line 289 "ext/MicroMime/ExtMime.gperf"
      {"dna", "application/vnd.dna", "base64"},
#line 1135 "ext/MicroMime/ExtMime.gperf"
      {"mp4v", "video/mp4", "base64"},
#line 233 "ext/MicroMime/ExtMime.gperf"
      {"azs", "application/vnd.airzip.filesecure.azs", "base64"},
#line 185 "ext/MicroMime/ExtMime.gperf"
      {"grxml", "application/srgs+xml", "base64"},
#line 884 "ext/MicroMime/ExtMime.gperf"
      {"midi", "audio/midi", "base64"},
#line 652 "ext/MicroMime/ExtMime.gperf"
      {"zir", "application/vnd.zul", "base64"},
#line 568 "ext/MicroMime/ExtMime.gperf"
      {"sema", "application/vnd.sema", "base64"},
#line 444 "ext/MicroMime/ExtMime.gperf"
      {"xlam", "application/vnd.ms-excel.addin.macroEnabled.12", "base64"},
#line 587 "ext/MicroMime/ExtMime.gperf"
      {"vor", "application/vnd.stardivision.writer", "base64"},
#line 238 "ext/MicroMime/ExtMime.gperf"
      {"cii", "application/vnd.anser-web-certificate-issue-initiation", "base64"},
#line 1010 "ext/MicroMime/ExtMime.gperf"
      {"rgb", "image/x-rgb", "base64"},
#line 882 "ext/MicroMime/ExtMime.gperf"
      {"kar", "audio/midi", "base64"},
#line 885 "ext/MicroMime/ExtMime.gperf"
      {"rmi", "audio/midi", "base64"},
#line 366 "ext/MicroMime/ExtMime.gperf"
      {"jlt", "application/vnd.hp-jlyt", "base64"},
#line 953 "ext/MicroMime/ExtMime.gperf"
      {"jpgm", "image/jpm", "base64"},
#line 347 "ext/MicroMime/ExtMime.gperf"
      {"gim", "application/vnd.groove-identity-message", "base64"},
#line 1086 "ext/MicroMime/ExtMime.gperf"
      {"mcurl", "text/vnd.curl.mcurl", "quoted-printable"},
#line 927 "ext/MicroMime/ExtMime.gperf"
      {"flac", "audio/x-flac", "base64"},
#line 1087 "ext/MicroMime/ExtMime.gperf"
      {"scurl", "text/vnd.curl.scurl", "quoted-printable"},
#line 700 "ext/MicroMime/ExtMime.gperf"
      {"deb", "application/x-debian-package", "base64"},
#line 969 "ext/MicroMime/ExtMime.gperf"
      {"uvvi", "image/vnd.dece.graphic", "base64"},
#line 1085 "ext/MicroMime/ExtMime.gperf"
      {"dcurl", "text/vnd.curl.dcurl", "quoted-printable"},
#line 275 "ext/MicroMime/ExtMime.gperf"
      {"pcurl", "application/vnd.curl.pcurl", "base64"},
#line 298 "ext/MicroMime/ExtMime.gperf"
      {"nml", "application/vnd.enliven", "base64"},
#line 932 "ext/MicroMime/ExtMime.gperf"
      {"wmv", "audio/x-ms-wmv", "base64"},
#line 1117 "ext/MicroMime/ExtMime.gperf"
      {"vcs", "text/x-vcalendar", "8bit"},
#line 63 "ext/MicroMime/ExtMime.gperf"
      {"stk", "application/hyperstudio", "base64"},
#line 294 "ext/MicroMime/ExtMime.gperf"
      {"ait", "application/vnd.dvb.ait", "base64"},
#line 232 "ext/MicroMime/ExtMime.gperf"
      {"azf", "application/vnd.airzip.filesecure.azf", "base64"},
#line 889 "ext/MicroMime/ExtMime.gperf"
      {"mp4a", "audio/mp4", "base64"},
#line 418 "ext/MicroMime/ExtMime.gperf"
      {"apr", "application/vnd.lotus-approach", "base64"},
#line 501 "ext/MicroMime/ExtMime.gperf"
      {"oti", "application/vnd.oasis.opendocument.image-template", "base64"},
#line 1120 "ext/MicroMime/ExtMime.gperf"
      {"yml", "text/x-yaml", "8bit"},
#line 358 "ext/MicroMime/ExtMime.gperf"
      {"upa", "application/vnd.hbci", "base64"},
#line 690 "ext/MicroMime/ExtMime.gperf"
      {"vcd", "application/x-cdlink", "base64"},
#line 696 "ext/MicroMime/ExtMime.gperf"
      {"nsc", "application/x-conference", "base64"},
#line 65 "ext/MicroMime/ExtMime.gperf"
      {"inkml", "application/inkml+xml", "base64"},
#line 420 "ext/MicroMime/ExtMime.gperf"
      {"nsf", "application/vnd.lotus-notes", "base64"},
#line 143 "ext/MicroMime/ExtMime.gperf"
      {"pki", "application/pkixcmp", "base64"},
#line 162 "ext/MicroMime/ExtMime.gperf"
      {"gbr", "application/rpki-ghostbusters", "base64"},
#line 1045 "ext/MicroMime/ExtMime.gperf"
      {"ifb", "text/calendar", "quoted-printable"},
#line 946 "ext/MicroMime/ExtMime.gperf"
      {"gif", "image/gif", "base64"},
#line 530 "ext/MicroMime/ExtMime.gperf"
      {"ei6", "application/vnd.pg.osasli", "base64"},
#line 710 "ext/MicroMime/ExtMime.gperf"
      {"dxr", "application/x-director", "base64"},
#line 526 "ext/MicroMime/ExtMime.gperf"
      {"pqa", "application/vnd.palm", "base64"},
#line 139 "ext/MicroMime/ExtMime.gperf"
      {"ac", "application/pkix-attr-cert", "base64"},
#line 1070 "ext/MicroMime/ExtMime.gperf"
      {"textile", "text/plain", "quoted-printable"},
#line 839 "ext/MicroMime/ExtMime.gperf"
      {"webapp", "application/x-web-app-manifest+json", "base64"},
#line 832 "ext/MicroMime/ExtMime.gperf"
      {"obj", "application/x-tgif", "base64"},
#line 1118 "ext/MicroMime/ExtMime.gperf"
      {"vcf", "text/x-vcard", "8bit"},
#line 931 "ext/MicroMime/ExtMime.gperf"
      {"wma", "audio/x-ms-wma", "base64"},
#line 663 "ext/MicroMime/ExtMime.gperf"
      {"wk", "application/x-123", "base64"},
#line 310 "ext/MicroMime/ExtMime.gperf"
      {"dataless", "application/vnd.fdsn.seed", "base64"},
#line 612 "ext/MicroMime/ExtMime.gperf"
      {"pcap", "application/vnd.tcpdump.pcap", "base64"},
#line 621 "ext/MicroMime/ExtMime.gperf"
      {"unityweb", "application/vnd.unity", "base64"},
#line 153 "ext/MicroMime/ExtMime.gperf"
      {"rct", "application/prs.nprend", "base64"},
#line 263 "ext/MicroMime/ExtMime.gperf"
      {"cdbcmsg", "application/vnd.contact.cmsg", "base64"},
#line 207 "ext/MicroMime/ExtMime.gperf"
      {"mbk", "application/vnd.Mobius.MBK", "base64"},
#line 234 "ext/MicroMime/ExtMime.gperf"
      {"azw", "application/vnd.amazon.ebook", "base64"},
#line 735 "ext/MicroMime/ExtMime.gperf"
      {"gnumeric", "application/x-gnumeric", "base64"},
#line 682 "ext/MicroMime/ExtMime.gperf"
      {"bz", "application/x-bzip", "base64"},
#line 655 "ext/MicroMime/ExtMime.gperf"
      {"vxml", "application/voicexml+xml", "base64"},
#line 47 "ext/MicroMime/ExtMime.gperf"
      {"dbk", "application/docbook+xml", "base64"},
#line 907 "ext/MicroMime/ExtMime.gperf"
      {"plj", "audio/vnd.everad.plj", "base64"},
#line 235 "ext/MicroMime/ExtMime.gperf"
      {"acc", "application/vnd.americandynamics.acc", "base64"},
#line 874 "ext/MicroMime/ExtMime.gperf"
      {"amr", "audio/AMR", "base64"},
#line 1047 "ext/MicroMime/ExtMime.gperf"
      {"csv", "text/csv", "8bit"},
#line 81 "ext/MicroMime/ExtMime.gperf"
      {"nb", "application/mathematica", "base64"},
#line 113 "ext/MicroMime/ExtMime.gperf"
      {"lha", "application/octet-stream", "base64"},
#line 893 "ext/MicroMime/ExtMime.gperf"
      {"mp2a", "audio/mpeg", "base64"},
#line 904 "ext/MicroMime/ExtMime.gperf"
      {"dra", "audio/vnd.dra", "base64"},
#line 550 "ext/MicroMime/ExtMime.gperf"
      {"sdo", "application/vnd.sealed.doc", "base64"},
#line 145 "ext/MicroMime/ExtMime.gperf"
      {"ai", "application/postscript", "8bit"},
#line 811 "ext/MicroMime/ExtMime.gperf"
      {"shar", "application/x-shar", "8bit"},
#line 1160 "ext/MicroMime/ExtMime.gperf"
      {"nim", "video/vnd.nokia.interleaved-multimedia", "base64"},
#line 761 "ext/MicroMime/ExtMime.gperf"
      {"mobi", "application/x-mobipocket-ebook", "base64"},
#line 1175 "ext/MicroMime/ExtMime.gperf"
      {"fli", "video/x-fli", "base64"},
#line 708 "ext/MicroMime/ExtMime.gperf"
      {"dcr", "application/x-director", "base64"},
#line 267 "ext/MicroMime/ExtMime.gperf"
      {"clkp", "application/vnd.crick.clicker.palette", "base64"},
#line 837 "ext/MicroMime/ExtMime.gperf"
      {"ustar", "application/x-ustar", "base64"},
#line 100 "ext/MicroMime/ExtMime.gperf"
      {"ani", "application/octet-stream", "base64"},
#line 500 "ext/MicroMime/ExtMime.gperf"
      {"odi", "application/vnd.oasis.opendocument.image", "base64"},
#line 1183 "ext/MicroMime/ExtMime.gperf"
      {"mjpeg", "video/x-motion-jpeg", "base64"},
#line 1063 "ext/MicroMime/ExtMime.gperf"
      {"in", "text/plain", "quoted-printable"},
#line 623 "ext/MicroMime/ExtMime.gperf"
      {"vcx", "application/vnd.vcx", "base64"},
#line 128 "ext/MicroMime/ExtMime.gperf"
      {"oxps", "application/oxps", "base64"},
#line 973 "ext/MicroMime/ExtMime.gperf"
      {"dwg", "image/vnd.dwg", "base64"},
#line 1024 "ext/MicroMime/ExtMime.gperf"
      {"dae", "model/vnd.collada+xml", "base64"},
#line 195 "ext/MicroMime/ExtMime.gperf"
      {"psb", "application/vnd.3gpp.pic-bw-small", "base64"},
#line 1184 "ext/MicroMime/ExtMime.gperf"
      {"mjpg", "video/x-motion-jpeg", "base64"},
#line 595 "ext/MicroMime/ExtMime.gperf"
      {"sxi", "application/vnd.sun.xml.impress", "base64"},
#line 486 "ext/MicroMime/ExtMime.gperf"
      {"ngdat", "application/vnd.nokia.n-gage.data", "base64"},
#line 110 "ext/MicroMime/ExtMime.gperf"
      {"elc", "application/octet-stream", "base64"},
#line 755 "ext/MicroMime/ExtMime.gperf"
      {"pages", "application/x-iwork-pages-sffpages", "base64"},
#line 609 "ext/MicroMime/ExtMime.gperf"
      {"tao", "application/vnd.tao.intent-module-archive", "base64"},
#line 297 "ext/MicroMime/ExtMime.gperf"
      {"mag", "application/vnd.ecowin.chart", "base64"},
#line 198 "ext/MicroMime/ExtMime.gperf"
      {"tcap", "application/vnd.3gpp2.tcap", "base64"},
#line 304 "ext/MicroMime/ExtMime.gperf"
      {"es3", "application/vnd.eszigno3+xml", "base64"},
#line 401 "ext/MicroMime/ExtMime.gperf"
      {"kpr", "application/vnd.kde.kpresenter", "base64"},
#line 1075 "ext/MicroMime/ExtMime.gperf"
      {"tsv", "text/tab-separated-values", "quoted-printable"},
#line 769 "ext/MicroMime/ExtMime.gperf"
      {"mde", "application/x-msaccess", "base64"},
#line 236 "ext/MicroMime/ExtMime.gperf"
      {"ami", "application/vnd.amiga.ami", "base64"},
#line 831 "ext/MicroMime/ExtMime.gperf"
      {"texinfo", "application/x-texinfo", "8bit"},
#line 961 "ext/MicroMime/ExtMime.gperf"
      {"svg", "image/svg+xml", "8bit"},
#line 833 "ext/MicroMime/ExtMime.gperf"
      {"tbk", "application/x-toolbook", "base64"},
#line 248 "ext/MicroMime/ExtMime.gperf"
      {"bmi", "application/vnd.bmi", "base64"},
#line 875 "ext/MicroMime/ExtMime.gperf"
      {"awb", "audio/AMR-WB", "base64"},
#line 1042 "ext/MicroMime/ExtMime.gperf"
      {"appcache", "text/cache-manifest", "quoted-printable"},
#line 477 "ext/MicroMime/ExtMime.gperf"
      {"kcm", "application/vnd.nervana", "base64"},
#line 1177 "ext/MicroMime/ExtMime.gperf"
      {"gl", "video/x-gl", "base64"},
#line 179 "ext/MicroMime/ExtMime.gperf"
      {"siv", "application/sieve", "base64"},
#line 222 "ext/MicroMime/ExtMime.gperf"
      {"acu", "application/vnd.acucobol", "base64"},
#line 415 "ext/MicroMime/ExtMime.gperf"
      {"lbe", "application/vnd.llamagraphics.life-balance.exchange+xml", "base64"},
#line 164 "ext/MicroMime/ExtMime.gperf"
      {"roa", "application/rpki-roa", "base64"},
#line 616 "ext/MicroMime/ExtMime.gperf"
      {"tra", "application/vnd.trueapp", "base64"},
#line 269 "ext/MicroMime/ExtMime.gperf"
      {"clkw", "application/vnd.crick.clicker.wordbank", "base64"},
#line 265 "ext/MicroMime/ExtMime.gperf"
      {"clkx", "application/vnd.crick.clicker", "base64"},
#line 470 "ext/MicroMime/ExtMime.gperf"
      {"mseq", "application/vnd.mseq", "base64"},
#line 671 "ext/MicroMime/ExtMime.gperf"
      {"aab", "application/x-authorware-bin", "base64"},
#line 61 "ext/MicroMime/ExtMime.gperf"
      {"gxf", "application/gxf", "base64"},
#line 1154 "ext/MicroMime/ExtMime.gperf"
      {"uvvv", "video/vnd.dece.video", "base64"},
#line 816 "ext/MicroMime/ExtMime.gperf"
      {"spo", "application/x-spss", "base64"},
#line 1161 "ext/MicroMime/ExtMime.gperf"
      {"m4v", "video/vnd.objectvideo", "base64"},
#line 384 "ext/MicroMime/ExtMime.gperf"
      {"qbo", "application/vnd.intu.qbo", "base64"},
#line 393 "ext/MicroMime/ExtMime.gperf"
      {"joda", "application/vnd.joost.joda-archive", "base64"},
#line 223 "ext/MicroMime/ExtMime.gperf"
      {"acutc", "application/vnd.acucorp", "7bit"},
#line 33 "ext/MicroMime/ExtMime.gperf"
      {"ez", "application/andrew-inset", "base64"},
#line 1142 "ext/MicroMime/ExtMime.gperf"
      {"ogv", "video/ogg", "base64"},
#line 1181 "ext/MicroMime/ExtMime.gperf"
      {"mkv", "video/x-matroska", "base64"},
#line 966 "ext/MicroMime/ExtMime.gperf"
      {"uvg", "image/vnd.dece.graphic", "base64"},
#line 1134 "ext/MicroMime/ExtMime.gperf"
      {"f4v", "video/mp4", "base64"},
#line 62 "ext/MicroMime/ExtMime.gperf"
      {"gz", "application/gzip", "base64"},
#line 481 "ext/MicroMime/ExtMime.gperf"
      {"nitf", "application/vnd.nitf", "base64"},
#line 558 "ext/MicroMime/ExtMime.gperf"
      {"s1e", "application/vnd.sealed.xls", "base64"},
#line 684 "ext/MicroMime/ExtMime.gperf"
      {"bz2", "application/x-bzip2", "base64"},
#line 902 "ext/MicroMime/ExtMime.gperf"
      {"uvva", "audio/vnd.dece.audio", "base64"},
#line 888 "ext/MicroMime/ExtMime.gperf"
      {"m4a", "audio/mp4", "base64"},
#line 184 "ext/MicroMime/ExtMime.gperf"
      {"gram", "application/srgs", "base64"},
#line 736 "ext/MicroMime/ExtMime.gperf"
      {"gramps", "application/x-gramps-xml", "base64"},
#line 1168 "ext/MicroMime/ExtMime.gperf"
      {"smo", "video/vnd.sealedmedia.softseal.mov", "base64"},
#line 37 "ext/MicroMime/ExtMime.gperf"
      {"atomsvc", "application/atomsvc+xml", "8bit"},
#line 317 "ext/MicroMime/ExtMime.gperf"
      {"frame", "application/vnd.framemaker", "base64"},
#line 949 "ext/MicroMime/ExtMime.gperf"
      {"jpg2", "image/jp2", "base64"},
#line 754 "ext/MicroMime/ExtMime.gperf"
      {"numbers", "application/x-iwork-numbers-sffnumbers", "base64"},
#line 896 "ext/MicroMime/ExtMime.gperf"
      {"oga", "audio/ogg", "base64"},
#line 928 "ext/MicroMime/ExtMime.gperf"
      {"mka", "audio/x-matroska", "base64"},
#line 1139 "ext/MicroMime/ExtMime.gperf"
      {"mpe", "video/mpeg", "base64"},
#line 886 "ext/MicroMime/ExtMime.gperf"
      {"f4a", "audio/mp4", "base64"},
#line 225 "ext/MicroMime/ExtMime.gperf"
      {"air", "application/vnd.adobe.air-application-installer-package+zip", "base64"},
#line 268 "ext/MicroMime/ExtMime.gperf"
      {"clkt", "application/vnd.crick.clicker.template", "base64"},
#line 763 "ext/MicroMime/ExtMime.gperf"
      {"lnk", "application/x-ms-shortcut", "base64"},
#line 887 "ext/MicroMime/ExtMime.gperf"
      {"f4b", "audio/mp4", "base64"},
#line 123 "ext/MicroMime/ExtMime.gperf"
      {"omdoc", "application/omdoc+xml", "base64"},
#line 512 "ext/MicroMime/ExtMime.gperf"
      {"oxt", "application/vnd.openofficeorg.extension", "base64"},
#line 1141 "ext/MicroMime/ExtMime.gperf"
      {"mpg", "video/mpeg", "base64"},
#line 567 "ext/MicroMime/ExtMime.gperf"
      {"see", "application/vnd.seemail", "base64"},
#line 1176 "ext/MicroMime/ExtMime.gperf"
      {"flv", "video/x-flv", "base64"},
#line 1012 "ext/MicroMime/ExtMime.gperf"
      {"dgn", "image/x-vnd.dgn", "base64"},
#line 693 "ext/MicroMime/ExtMime.gperf"
      {"pgn", "application/x-chess-pgn", "base64"},
#line 291 "ext/MicroMime/ExtMime.gperf"
      {"dpg", "application/vnd.dpgraph", "base64"},
#line 1182 "ext/MicroMime/ExtMime.gperf"
      {"mng", "video/x-mng", "base64"},
#line 245 "ext/MicroMime/ExtMime.gperf"
      {"iota", "application/vnd.astraea-software.iota", "base64"},
#line 319 "ext/MicroMime/ExtMime.gperf"
      {"maker", "application/vnd.framemaker", "base64"},
#line 762 "ext/MicroMime/ExtMime.gperf"
      {"application", "application/x-ms-application", "base64"},
#line 193 "ext/MicroMime/ExtMime.gperf"
      {"pwn", "application/vnd.3M.Post-it-Notes", "base64"},
#line 958 "ext/MicroMime/ExtMime.gperf"
      {"png", "image/png", "base64"},
#line 1030 "ext/MicroMime/ExtMime.gperf"
      {"xmt_bin", "model/vnd.parasolid.transmit.binary", "base64"},
#line 747 "ext/MicroMime/ExtMime.gperf"
      {"ibooks", "application/x-ibooks+zip", "base64"},
#line 1186 "ext/MicroMime/ExtMime.gperf"
      {"vob", "video/x-ms-vob", "base64"},
#line 99 "ext/MicroMime/ExtMime.gperf"
      {"nc", "application/netcdf", "base64"},
#line 492 "ext/MicroMime/ExtMime.gperf"
      {"ext", "application/vnd.novadigm.EXT", "base64"},
#line 333 "ext/MicroMime/ExtMime.gperf"
      {"ggb", "application/vnd.geogebra.file", "base64"},
#line 1103 "ext/MicroMime/ExtMime.gperf"
      {"coffee", "text/x-coffescript", "8bit"},
#line 834 "ext/MicroMime/ExtMime.gperf"
      {"man", "application/x-troff-man", "8bit"},
#line 337 "ext/MicroMime/ExtMime.gperf"
      {"gxt", "application/vnd.geonext", "base64"},
#line 194 "ext/MicroMime/ExtMime.gperf"
      {"plb", "application/vnd.3gpp.pic-bw-large", "base64"},
#line 253 "ext/MicroMime/ExtMime.gperf"
      {"cla", "application/vnd.claymore", "base64"},
#line 480 "ext/MicroMime/ExtMime.gperf"
      {"nlu", "application/vnd.neurolanguage.nlu", "base64"},
#line 1191 "ext/MicroMime/ExtMime.gperf"
      {"movie", "video/x-sgi-movie", "base64"},
#line 1065 "ext/MicroMime/ExtMime.gperf"
      {"log", "text/plain", "quoted-printable"},
#line 120 "ext/MicroMime/ExtMime.gperf"
      {"oda", "application/oda", "base64"},
#line 613 "ext/MicroMime/ExtMime.gperf"
      {"tmo", "application/vnd.tmobile-livetv", "base64"},
#line 720 "ext/MicroMime/ExtMime.gperf"
      {"eva", "application/x-eva", "base64"},
#line 125 "ext/MicroMime/ExtMime.gperf"
      {"onetmp", "application/onenote", "base64"},
#line 36 "ext/MicroMime/ExtMime.gperf"
      {"atomcat", "application/atomcat+xml", "8bit"},
#line 495 "ext/MicroMime/ExtMime.gperf"
      {"odb", "application/vnd.oasis.opendocument.database", "base64"},
#line 670 "ext/MicroMime/ExtMime.gperf"
      {"dmg", "application/x-apple-diskimage", "base64"},
#line 1164 "ext/MicroMime/ExtMime.gperf"
      {"smpg", "video/vnd.sealed.mpeg4", "base64"},
#line 993 "ext/MicroMime/ExtMime.gperf"
      {"xcfgz", "image/x-compressed-xcf", "base64"},
#line 438 "ext/MicroMime/ExtMime.gperf"
      {"xla", "application/vnd.ms-excel", "base64"},
#line 737 "ext/MicroMime/ExtMime.gperf"
      {"gtar", "application/x-gtar", "base64"},
#line 992 "ext/MicroMime/ExtMime.gperf"
      {"xcfbz2", "image/x-compressed-xcf", "base64"},
#line 126 "ext/MicroMime/ExtMime.gperf"
      {"onetoc", "application/onenote", "base64"},
#line 445 "ext/MicroMime/ExtMime.gperf"
      {"xlsb", "application/vnd.ms-excel.sheet.binary.macroEnabled.12", "base64"},
#line 306 "ext/MicroMime/ExtMime.gperf"
      {"ez2", "application/vnd.ezpix-album", "base64"},
#line 419 "ext/MicroMime/ExtMime.gperf"
      {"pre", "application/vnd.lotus-freelance", "base64"},
#line 307 "ext/MicroMime/ExtMime.gperf"
      {"ez3", "application/vnd.ezpix-package", "base64"},
#line 715 "ext/MicroMime/ExtMime.gperf"
      {"ncx", "application/x-dtbncx+xml", "base64"},
#line 412 "ext/MicroMime/ExtMime.gperf"
      {"sse", "application/vnd.kodak-descriptor", "base64"},
#line 1109 "ext/MicroMime/ExtMime.gperf"
      {"java", "text/x-java-source", "quoted-printable"},
#line 920 "ext/MicroMime/ExtMime.gperf"
      {"weba", "audio/webm", "base64"},
#line 309 "ext/MicroMime/ExtMime.gperf"
      {"mseed", "application/vnd.fdsn.mseed", "base64"},
#line 252 "ext/MicroMime/ExtMime.gperf"
      {"cdy", "application/vnd.cinderella", "base64"},
#line 911 "ext/MicroMime/ExtMime.gperf"
      {"vbk", "audio/vnd.nortel.vbk", "base64"},
#line 1138 "ext/MicroMime/ExtMime.gperf"
      {"mp3g", "video/mpeg", "base64"},
#line 453 "ext/MicroMime/ExtMime.gperf"
      {"msg", "application/vnd.ms-outlook", "base64"},
#line 749 "ext/MicroMime/ExtMime.gperf"
      {"imagemap", "application/x-imagemap", "8bit"},
#line 701 "ext/MicroMime/ExtMime.gperf"
      {"udeb", "application/x-debian-package", "base64"},
#line 678 "ext/MicroMime/ExtMime.gperf"
      {"torrent", "application/x-bittorrent", "base64"},
#line 85 "ext/MicroMime/ExtMime.gperf"
      {"metalink", "application/metalink+xml", "base64"},
#line 1169 "ext/MicroMime/ExtMime.gperf"
      {"smov", "video/vnd.sealedmedia.softseal.mov", "base64"},
#line 574 "ext/MicroMime/ExtMime.gperf"
      {"ipk", "application/vnd.shana.informed.package", "base64"},
#line 576 "ext/MicroMime/ExtMime.gperf"
      {"teacher", "application/vnd.smart.teacher", "base64"},
#line 383 "ext/MicroMime/ExtMime.gperf"
      {"i2g", "application/vnd.intergeo", "base64"},
#line 697 "ext/MicroMime/ExtMime.gperf"
      {"cpio", "application/x-cpio", "base64"},
#line 64 "ext/MicroMime/ExtMime.gperf"
      {"ink", "application/inkml+xml", "base64"},
#line 127 "ext/MicroMime/ExtMime.gperf"
      {"onetoc2", "application/onenote", "base64"},
#line 432 "ext/MicroMime/ExtMime.gperf"
      {"mpn", "application/vnd.mophun.application", "base64"},
#line 895 "ext/MicroMime/ExtMime.gperf"
      {"mpga", "audio/mpeg", "base64"},
#line 368 "ext/MicroMime/ExtMime.gperf"
      {"mpy", "application/vnd.ibm.MiniPay", "base64"},
#line 1023 "ext/MicroMime/ExtMime.gperf"
      {"silo", "model/mesh", "base64"},
#line 950 "ext/MicroMime/ExtMime.gperf"
      {"jpe", "image/jpeg", "base64"},
#line 760 "ext/MicroMime/ExtMime.gperf"
      {"mie", "application/x-mie", "base64"},
#line 1018 "ext/MicroMime/ExtMime.gperf"
      {"mime", "message/rfc822", "8bit"},
#line 787 "ext/MicroMime/ExtMime.gperf"
      {"mny", "application/x-msmoney", "base64"},
#line 398 "ext/MicroMime/ExtMime.gperf"
      {"kfo", "application/vnd.kde.kformula", "base64"},
#line 1172 "ext/MicroMime/ExtMime.gperf"
      {"viv", "video/vnd.vivo", "base64"},
#line 214 "ext/MicroMime/ExtMime.gperf"
      {"qxb", "application/vnd.Quark.QuarkXPress", "8bit"},
#line 1002 "ext/MicroMime/ExtMime.gperf"
      {"pspimage", "image/x-paintshoppro", "base64"},
#line 51 "ext/MicroMime/ExtMime.gperf"
      {"emma", "application/emma+xml", "base64"},
#line 778 "ext/MicroMime/ExtMime.gperf"
      {"reg", "application/x-msdos-program", "base64"},
#line 952 "ext/MicroMime/ExtMime.gperf"
      {"jpg", "image/jpeg", "base64"},
#line 132 "ext/MicroMime/ExtMime.gperf"
      {"sig", "application/pgp-signature", "base64"},
#line 231 "ext/MicroMime/ExtMime.gperf"
      {"ahead", "application/vnd.ahead.space", "base64"},
#line 52 "ext/MicroMime/ExtMime.gperf"
      {"epub", "application/epub+zip", "base64"},
#line 843 "ext/MicroMime/ExtMime.gperf"
      {"fig", "application/x-xfig", "base64"},
#line 424 "ext/MicroMime/ExtMime.gperf"
      {"portpkg", "application/vnd.macports.portpkg", "base64"},
#line 1043 "ext/MicroMime/ExtMime.gperf"
      {"manifest", "text/cache-manifest", "quoted-printable"},
#line 968 "ext/MicroMime/ExtMime.gperf"
      {"uvvg", "image/vnd.dece.graphic", "base64"},
#line 429 "ext/MicroMime/ExtMime.gperf"
      {"flo", "application/vnd.micrografx.flo", "base64"},
#line 348 "ext/MicroMime/ExtMime.gperf"
      {"grv", "application/vnd.groove-injector", "base64"},
#line 237 "ext/MicroMime/ExtMime.gperf"
      {"apk", "application/vnd.android.package-archive", "base64"},
#line 499 "ext/MicroMime/ExtMime.gperf"
      {"otg", "application/vnd.oasis.opendocument.graphics-template", "base64"},
#line 102 "ext/MicroMime/ExtMime.gperf"
      {"bpk", "application/octet-stream", "base64"},
#line 208 "ext/MicroMime/ExtMime.gperf"
      {"mqy", "application/vnd.Mobius.MQY", "base64"},
#line 897 "ext/MicroMime/ExtMime.gperf"
      {"ogg", "audio/ogg", "base64"},
#line 546 "ext/MicroMime/ExtMime.gperf"
      {"rmvb", "application/vnd.rn-realmedia-vbr", "base64"},
#line 752 "ext/MicroMime/ExtMime.gperf"
      {"iso", "application/x-iso9660-image", "base64"},
#line 257 "ext/MicroMime/ExtMime.gperf"
      {"c4g", "application/vnd.clonk.c4group", "base64"},
#line 118 "ext/MicroMime/ExtMime.gperf"
      {"pkg", "application/octet-stream", "base64"},
#line 103 "ext/MicroMime/ExtMime.gperf"
      {"deploy", "application/octet-stream", "base64"},
#line 1084 "ext/MicroMime/ExtMime.gperf"
      {"vcard", "text/vcard", "quoted-printable"},
#line 523 "ext/MicroMime/ExtMime.gperf"
      {"esa", "application/vnd.osgi.subsystem", "base64"},
#line 175 "ext/MicroMime/ExtMime.gperf"
      {"setreg", "application/set-registration-initiation", "base64"},
#line 174 "ext/MicroMime/ExtMime.gperf"
      {"setpay", "application/set-payment-initiation", "base64"},
#line 53 "ext/MicroMime/ExtMime.gperf"
      {"exi", "application/exi", "base64"},
#line 1110 "ext/MicroMime/ExtMime.gperf"
      {"nfo", "text/x-nfo", "quoted-printable"},
#line 406 "ext/MicroMime/ExtMime.gperf"
      {"htke", "application/vnd.kenameaapp", "base64"},
#line 386 "ext/MicroMime/ExtMime.gperf"
      {"rcprofile", "application/vnd.ipunplugged.rcprofile", "base64"},
#line 748 "ext/MicroMime/ExtMime.gperf"
      {"ica", "application/x-ica", "base64"},
#line 498 "ext/MicroMime/ExtMime.gperf"
      {"odg", "application/vnd.oasis.opendocument.graphics", "base64"},
#line 599 "ext/MicroMime/ExtMime.gperf"
      {"sxg", "application/vnd.sun.xml.writer.global", "base64"},
#line 1129 "ext/MicroMime/ExtMime.gperf"
      {"jpgv", "video/JPEG", "base64"},
#line 680 "ext/MicroMime/ExtMime.gperf"
      {"blb", "application/x-blorb", "base64"},
#line 407 "ext/MicroMime/ExtMime.gperf"
      {"kia", "application/vnd.kidspiration", "base64"},
#line 547 "ext/MicroMime/ExtMime.gperf"
      {"link66", "application/vnd.route66.link66+xml", "base64"},
#line 220 "ext/MicroMime/ExtMime.gperf"
      {"aso", "application/vnd.accpac.simply.aso", "base64"},
#line 472 "ext/MicroMime/ExtMime.gperf"
      {"msty", "application/vnd.muvee.style", "base64"},
#line 296 "ext/MicroMime/ExtMime.gperf"
      {"geo", "application/vnd.dynageo", "base64"},
#line 201 "ext/MicroMime/ExtMime.gperf"
      {"kne", "application/vnd.Kinar", "base64"},
#line 913 "ext/MicroMime/ExtMime.gperf"
      {"ecelp7470", "audio/vnd.nuera.ecelp7470", "base64"},
#line 914 "ext/MicroMime/ExtMime.gperf"
      {"ecelp9600", "audio/vnd.nuera.ecelp9600", "base64"},
#line 241 "ext/MicroMime/ExtMime.gperf"
      {"mpkg", "application/vnd.apple.installer+xml", "base64"},
#line 427 "ext/MicroMime/ExtMime.gperf"
      {"cdkey", "application/vnd.mediastation.cdkey", "base64"},
#line 677 "ext/MicroMime/ExtMime.gperf"
      {"bcpio", "application/x-bcpio", "base64"},
#line 662 "ext/MicroMime/ExtMime.gperf"
      {"wspolicy", "application/wspolicy+xml", "base64"},
#line 1140 "ext/MicroMime/ExtMime.gperf"
      {"mpeg", "video/mpeg", "base64"},
#line 112 "ext/MicroMime/ExtMime.gperf"
      {"gpg", "application/octet-stream", "base64"},
#line 912 "ext/MicroMime/ExtMime.gperf"
      {"ecelp4800", "audio/vnd.nuera.ecelp4800", "base64"},
#line 73 "ext/MicroMime/ExtMime.gperf"
      {"jsonml", "application/jsonml+json", "base64"},
#line 1088 "ext/MicroMime/ExtMime.gperf"
      {"fly", "text/vnd.fly", "quoted-printable"},
#line 719 "ext/MicroMime/ExtMime.gperf"
      {"evy", "application/x-envoy", "base64"},
#line 981 "ext/MicroMime/ExtMime.gperf"
      {"ico", "image/vnd.microsoft.icon", "base64"},
#line 1066 "ext/MicroMime/ExtMime.gperf"
      {"markdown", "text/plain", "quoted-printable"},
#line 421 "ext/MicroMime/ExtMime.gperf"
      {"org", "application/vnd.lotus-organizer", "base64"},
#line 336 "ext/MicroMime/ExtMime.gperf"
      {"gre", "application/vnd.geometry-explorer", "base64"},
#line 50 "ext/MicroMime/ExtMime.gperf"
      {"ecma", "application/ecmascript", "base64"},
#line 733 "ext/MicroMime/ExtMime.gperf"
      {"gca", "application/x-gca-compressed", "base64"},
#line 648 "ext/MicroMime/ExtMime.gperf"
      {"osfpvg", "application/vnd.yamaha.openscoreformat.osfpvg+xml", "base64"},
#line 1193 "ext/MicroMime/ExtMime.gperf"
      {"ice", "x-conference/x-cooltalk", "base64"},
#line 400 "ext/MicroMime/ExtMime.gperf"
      {"kon", "application/vnd.kde.kontour", "base64"},
#line 793 "ext/MicroMime/ExtMime.gperf"
      {"nzb", "application/x-nzb", "base64"},
#line 679 "ext/MicroMime/ExtMime.gperf"
      {"bleep", "application/x-bleeper", "base64"},
#line 543 "ext/MicroMime/ExtMime.gperf"
      {"cryptonote", "application/vnd.rig.cryptonote", "base64"},
#line 753 "ext/MicroMime/ExtMime.gperf"
      {"key", "application/x-iwork-keynote-sffkey", "base64"},
#line 681 "ext/MicroMime/ExtMime.gperf"
      {"blorb", "application/x-blorb", "base64"},
#line 665 "ext/MicroMime/ExtMime.gperf"
      {"bck", "application/x-VMSBACKUP", "base64"},
#line 951 "ext/MicroMime/ExtMime.gperf"
      {"jpeg", "image/jpeg", "base64"},
#line 313 "ext/MicroMime/ExtMime.gperf"
      {"book", "application/vnd.framemaker", "base64"},
#line 669 "ext/MicroMime/ExtMime.gperf"
      {"ace", "application/x-ace-compressed", "base64"},
#line 266 "ext/MicroMime/ExtMime.gperf"
      {"clkk", "application/vnd.crick.clicker.keyboard", "base64"},
#line 351 "ext/MicroMime/ExtMime.gperf"
      {"vcg", "application/vnd.groove-vcard", "base64"},
#line 101 "ext/MicroMime/ExtMime.gperf"
      {"bin", "application/octet-stream", "base64"},
#line 1173 "ext/MicroMime/ExtMime.gperf"
      {"vivo", "video/vnd.vivo", "base64"},
#line 111 "ext/MicroMime/ExtMime.gperf"
      {"exe", "application/octet-stream", "base64"},
#line 124 "ext/MicroMime/ExtMime.gperf"
      {"onepkg", "application/onenote", "base64"},
#line 72 "ext/MicroMime/ExtMime.gperf"
      {"json", "application/json", "8bit"},
#line 872 "ext/MicroMime/ExtMime.gperf"
      {"yin", "application/yin+xml", "base64"},
#line 476 "ext/MicroMime/ExtMime.gperf"
      {"entity", "application/vnd.nervana", "base64"},
#line 871 "ext/MicroMime/ExtMime.gperf"
      {"yang", "application/yang", "base64"},
#line 396 "ext/MicroMime/ExtMime.gperf"
      {"karbon", "application/vnd.kde.karbon", "base64"},
#line 487 "ext/MicroMime/ExtMime.gperf"
      {"n-gage", "application/vnd.nokia.n-gage.symbian.install", "base64"}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = lookup_by_extension_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          register const struct ExtMime *resword;

          if (key < 1912)
            {
              if (key < 1049)
                {
                  switch (key - 10)
                    {
                      case 0:
                        resword = &wordlist[0];
                        goto compare;
                      case 1:
                        resword = &wordlist[1];
                        goto compare;
                      case 5:
                        resword = &wordlist[2];
                        goto compare;
                      case 12:
                        resword = &wordlist[3];
                        goto compare;
                      case 25:
                        resword = &wordlist[4];
                        goto compare;
                      case 27:
                        resword = &wordlist[5];
                        goto compare;
                      case 28:
                        resword = &wordlist[6];
                        goto compare;
                      case 32:
                        resword = &wordlist[7];
                        goto compare;
                      case 33:
                        resword = &wordlist[8];
                        goto compare;
                      case 35:
                        resword = &wordlist[9];
                        goto compare;
                      case 40:
                        resword = &wordlist[10];
                        goto compare;
                      case 41:
                        resword = &wordlist[11];
                        goto compare;
                      case 50:
                        resword = &wordlist[12];
                        goto compare;
                      case 55:
                        resword = &wordlist[13];
                        goto compare;
                      case 57:
                        resword = &wordlist[14];
                        goto compare;
                      case 60:
                        resword = &wordlist[15];
                        goto compare;
                      case 67:
                        resword = &wordlist[16];
                        goto compare;
                      case 78:
                        resword = &wordlist[17];
                        goto compare;
                      case 79:
                        resword = &wordlist[18];
                        goto compare;
                      case 82:
                        resword = &wordlist[19];
                        goto compare;
                      case 88:
                        resword = &wordlist[20];
                        goto compare;
                      case 89:
                        resword = &wordlist[21];
                        goto compare;
                      case 100:
                        resword = &wordlist[22];
                        goto compare;
                      case 105:
                        resword = &wordlist[23];
                        goto compare;
                      case 108:
                        resword = &wordlist[24];
                        goto compare;
                      case 111:
                        resword = &wordlist[25];
                        goto compare;
                      case 112:
                        resword = &wordlist[26];
                        goto compare;
                      case 120:
                        resword = &wordlist[27];
                        goto compare;
                      case 121:
                        resword = &wordlist[28];
                        goto compare;
                      case 130:
                        resword = &wordlist[29];
                        goto compare;
                      case 147:
                        resword = &wordlist[30];
                        goto compare;
                      case 148:
                        resword = &wordlist[31];
                        goto compare;
                      case 152:
                        resword = &wordlist[32];
                        goto compare;
                      case 158:
                        resword = &wordlist[33];
                        goto compare;
                      case 159:
                        resword = &wordlist[34];
                        goto compare;
                      case 162:
                        resword = &wordlist[35];
                        goto compare;
                      case 163:
                        resword = &wordlist[36];
                        goto compare;
                      case 167:
                        resword = &wordlist[37];
                        goto compare;
                      case 168:
                        resword = &wordlist[38];
                        goto compare;
                      case 180:
                        resword = &wordlist[39];
                        goto compare;
                      case 182:
                        resword = &wordlist[40];
                        goto compare;
                      case 198:
                        resword = &wordlist[41];
                        goto compare;
                      case 208:
                        resword = &wordlist[42];
                        goto compare;
                      case 215:
                        resword = &wordlist[43];
                        goto compare;
                      case 218:
                        resword = &wordlist[44];
                        goto compare;
                      case 222:
                        resword = &wordlist[45];
                        goto compare;
                      case 226:
                        resword = &wordlist[46];
                        goto compare;
                      case 233:
                        resword = &wordlist[47];
                        goto compare;
                      case 236:
                        resword = &wordlist[48];
                        goto compare;
                      case 238:
                        resword = &wordlist[49];
                        goto compare;
                      case 247:
                        resword = &wordlist[50];
                        goto compare;
                      case 257:
                        resword = &wordlist[51];
                        goto compare;
                      case 262:
                        resword = &wordlist[52];
                        goto compare;
                      case 263:
                        resword = &wordlist[53];
                        goto compare;
                      case 268:
                        resword = &wordlist[54];
                        goto compare;
                      case 270:
                        resword = &wordlist[55];
                        goto compare;
                      case 272:
                        resword = &wordlist[56];
                        goto compare;
                      case 273:
                        resword = &wordlist[57];
                        goto compare;
                      case 274:
                        resword = &wordlist[58];
                        goto compare;
                      case 275:
                        resword = &wordlist[59];
                        goto compare;
                      case 277:
                        resword = &wordlist[60];
                        goto compare;
                      case 278:
                        resword = &wordlist[61];
                        goto compare;
                      case 288:
                        resword = &wordlist[62];
                        goto compare;
                      case 290:
                        resword = &wordlist[63];
                        goto compare;
                      case 292:
                        resword = &wordlist[64];
                        goto compare;
                      case 293:
                        resword = &wordlist[65];
                        goto compare;
                      case 295:
                        resword = &wordlist[66];
                        goto compare;
                      case 298:
                        resword = &wordlist[67];
                        goto compare;
                      case 303:
                        resword = &wordlist[68];
                        goto compare;
                      case 304:
                        resword = &wordlist[69];
                        goto compare;
                      case 308:
                        resword = &wordlist[70];
                        goto compare;
                      case 310:
                        resword = &wordlist[71];
                        goto compare;
                      case 313:
                        resword = &wordlist[72];
                        goto compare;
                      case 318:
                        resword = &wordlist[73];
                        goto compare;
                      case 320:
                        resword = &wordlist[74];
                        goto compare;
                      case 327:
                        resword = &wordlist[75];
                        goto compare;
                      case 328:
                        resword = &wordlist[76];
                        goto compare;
                      case 329:
                        resword = &wordlist[77];
                        goto compare;
                      case 330:
                        resword = &wordlist[78];
                        goto compare;
                      case 331:
                        resword = &wordlist[79];
                        goto compare;
                      case 333:
                        resword = &wordlist[80];
                        goto compare;
                      case 336:
                        resword = &wordlist[81];
                        goto compare;
                      case 338:
                        resword = &wordlist[82];
                        goto compare;
                      case 342:
                        resword = &wordlist[83];
                        goto compare;
                      case 343:
                        resword = &wordlist[84];
                        goto compare;
                      case 347:
                        resword = &wordlist[85];
                        goto compare;
                      case 348:
                        resword = &wordlist[86];
                        goto compare;
                      case 352:
                        resword = &wordlist[87];
                        goto compare;
                      case 353:
                        resword = &wordlist[88];
                        goto compare;
                      case 360:
                        resword = &wordlist[89];
                        goto compare;
                      case 362:
                        resword = &wordlist[90];
                        goto compare;
                      case 370:
                        resword = &wordlist[91];
                        goto compare;
                      case 377:
                        resword = &wordlist[92];
                        goto compare;
                      case 378:
                        resword = &wordlist[93];
                        goto compare;
                      case 380:
                        resword = &wordlist[94];
                        goto compare;
                      case 383:
                        resword = &wordlist[95];
                        goto compare;
                      case 385:
                        resword = &wordlist[96];
                        goto compare;
                      case 388:
                        resword = &wordlist[97];
                        goto compare;
                      case 390:
                        resword = &wordlist[98];
                        goto compare;
                      case 400:
                        resword = &wordlist[99];
                        goto compare;
                      case 403:
                        resword = &wordlist[100];
                        goto compare;
                      case 408:
                        resword = &wordlist[101];
                        goto compare;
                      case 410:
                        resword = &wordlist[102];
                        goto compare;
                      case 417:
                        resword = &wordlist[103];
                        goto compare;
                      case 420:
                        resword = &wordlist[104];
                        goto compare;
                      case 423:
                        resword = &wordlist[105];
                        goto compare;
                      case 438:
                        resword = &wordlist[106];
                        goto compare;
                      case 442:
                        resword = &wordlist[107];
                        goto compare;
                      case 443:
                        resword = &wordlist[108];
                        goto compare;
                      case 448:
                        resword = &wordlist[109];
                        goto compare;
                      case 453:
                        resword = &wordlist[110];
                        goto compare;
                      case 457:
                        resword = &wordlist[111];
                        goto compare;
                      case 460:
                        resword = &wordlist[112];
                        goto compare;
                      case 472:
                        resword = &wordlist[113];
                        goto compare;
                      case 475:
                        resword = &wordlist[114];
                        goto compare;
                      case 479:
                        resword = &wordlist[115];
                        goto compare;
                      case 482:
                        resword = &wordlist[116];
                        goto compare;
                      case 483:
                        resword = &wordlist[117];
                        goto compare;
                      case 498:
                        resword = &wordlist[118];
                        goto compare;
                      case 500:
                        resword = &wordlist[119];
                        goto compare;
                      case 503:
                        resword = &wordlist[120];
                        goto compare;
                      case 511:
                        resword = &wordlist[121];
                        goto compare;
                      case 515:
                        resword = &wordlist[122];
                        goto compare;
                      case 523:
                        resword = &wordlist[123];
                        goto compare;
                      case 525:
                        resword = &wordlist[124];
                        goto compare;
                      case 527:
                        resword = &wordlist[125];
                        goto compare;
                      case 528:
                        resword = &wordlist[126];
                        goto compare;
                      case 533:
                        resword = &wordlist[127];
                        goto compare;
                      case 536:
                        resword = &wordlist[128];
                        goto compare;
                      case 537:
                        resword = &wordlist[129];
                        goto compare;
                      case 538:
                        resword = &wordlist[130];
                        goto compare;
                      case 541:
                        resword = &wordlist[131];
                        goto compare;
                      case 543:
                        resword = &wordlist[132];
                        goto compare;
                      case 553:
                        resword = &wordlist[133];
                        goto compare;
                      case 557:
                        resword = &wordlist[134];
                        goto compare;
                      case 563:
                        resword = &wordlist[135];
                        goto compare;
                      case 569:
                        resword = &wordlist[136];
                        goto compare;
                      case 573:
                        resword = &wordlist[137];
                        goto compare;
                      case 574:
                        resword = &wordlist[138];
                        goto compare;
                      case 583:
                        resword = &wordlist[139];
                        goto compare;
                      case 585:
                        resword = &wordlist[140];
                        goto compare;
                      case 586:
                        resword = &wordlist[141];
                        goto compare;
                      case 588:
                        resword = &wordlist[142];
                        goto compare;
                      case 593:
                        resword = &wordlist[143];
                        goto compare;
                      case 595:
                        resword = &wordlist[144];
                        goto compare;
                      case 596:
                        resword = &wordlist[145];
                        goto compare;
                      case 598:
                        resword = &wordlist[146];
                        goto compare;
                      case 600:
                        resword = &wordlist[147];
                        goto compare;
                      case 605:
                        resword = &wordlist[148];
                        goto compare;
                      case 608:
                        resword = &wordlist[149];
                        goto compare;
                      case 609:
                        resword = &wordlist[150];
                        goto compare;
                      case 613:
                        resword = &wordlist[151];
                        goto compare;
                      case 614:
                        resword = &wordlist[152];
                        goto compare;
                      case 618:
                        resword = &wordlist[153];
                        goto compare;
                      case 625:
                        resword = &wordlist[154];
                        goto compare;
                      case 627:
                        resword = &wordlist[155];
                        goto compare;
                      case 628:
                        resword = &wordlist[156];
                        goto compare;
                      case 630:
                        resword = &wordlist[157];
                        goto compare;
                      case 633:
                        resword = &wordlist[158];
                        goto compare;
                      case 635:
                        resword = &wordlist[159];
                        goto compare;
                      case 638:
                        resword = &wordlist[160];
                        goto compare;
                      case 645:
                        resword = &wordlist[161];
                        goto compare;
                      case 646:
                        resword = &wordlist[162];
                        goto compare;
                      case 648:
                        resword = &wordlist[163];
                        goto compare;
                      case 651:
                        resword = &wordlist[164];
                        goto compare;
                      case 655:
                        resword = &wordlist[165];
                        goto compare;
                      case 663:
                        resword = &wordlist[166];
                        goto compare;
                      case 665:
                        resword = &wordlist[167];
                        goto compare;
                      case 670:
                        resword = &wordlist[168];
                        goto compare;
                      case 673:
                        resword = &wordlist[169];
                        goto compare;
                      case 675:
                        resword = &wordlist[170];
                        goto compare;
                      case 690:
                        resword = &wordlist[171];
                        goto compare;
                      case 692:
                        resword = &wordlist[172];
                        goto compare;
                      case 693:
                        resword = &wordlist[173];
                        goto compare;
                      case 698:
                        resword = &wordlist[174];
                        goto compare;
                      case 703:
                        resword = &wordlist[175];
                        goto compare;
                      case 705:
                        resword = &wordlist[176];
                        goto compare;
                      case 708:
                        resword = &wordlist[177];
                        goto compare;
                      case 713:
                        resword = &wordlist[178];
                        goto compare;
                      case 715:
                        resword = &wordlist[179];
                        goto compare;
                      case 716:
                        resword = &wordlist[180];
                        goto compare;
                      case 718:
                        resword = &wordlist[181];
                        goto compare;
                      case 720:
                        resword = &wordlist[182];
                        goto compare;
                      case 723:
                        resword = &wordlist[183];
                        goto compare;
                      case 728:
                        resword = &wordlist[184];
                        goto compare;
                      case 733:
                        resword = &wordlist[185];
                        goto compare;
                      case 734:
                        resword = &wordlist[186];
                        goto compare;
                      case 738:
                        resword = &wordlist[187];
                        goto compare;
                      case 739:
                        resword = &wordlist[188];
                        goto compare;
                      case 742:
                        resword = &wordlist[189];
                        goto compare;
                      case 743:
                        resword = &wordlist[190];
                        goto compare;
                      case 745:
                        resword = &wordlist[191];
                        goto compare;
                      case 748:
                        resword = &wordlist[192];
                        goto compare;
                      case 752:
                        resword = &wordlist[193];
                        goto compare;
                      case 753:
                        resword = &wordlist[194];
                        goto compare;
                      case 758:
                        resword = &wordlist[195];
                        goto compare;
                      case 763:
                        resword = &wordlist[196];
                        goto compare;
                      case 765:
                        resword = &wordlist[197];
                        goto compare;
                      case 770:
                        resword = &wordlist[198];
                        goto compare;
                      case 772:
                        resword = &wordlist[199];
                        goto compare;
                      case 773:
                        resword = &wordlist[200];
                        goto compare;
                      case 777:
                        resword = &wordlist[201];
                        goto compare;
                      case 778:
                        resword = &wordlist[202];
                        goto compare;
                      case 779:
                        resword = &wordlist[203];
                        goto compare;
                      case 780:
                        resword = &wordlist[204];
                        goto compare;
                      case 781:
                        resword = &wordlist[205];
                        goto compare;
                      case 783:
                        resword = &wordlist[206];
                        goto compare;
                      case 785:
                        resword = &wordlist[207];
                        goto compare;
                      case 787:
                        resword = &wordlist[208];
                        goto compare;
                      case 788:
                        resword = &wordlist[209];
                        goto compare;
                      case 790:
                        resword = &wordlist[210];
                        goto compare;
                      case 793:
                        resword = &wordlist[211];
                        goto compare;
                      case 795:
                        resword = &wordlist[212];
                        goto compare;
                      case 798:
                        resword = &wordlist[213];
                        goto compare;
                      case 800:
                        resword = &wordlist[214];
                        goto compare;
                      case 802:
                        resword = &wordlist[215];
                        goto compare;
                      case 803:
                        resword = &wordlist[216];
                        goto compare;
                      case 804:
                        resword = &wordlist[217];
                        goto compare;
                      case 805:
                        resword = &wordlist[218];
                        goto compare;
                      case 806:
                        resword = &wordlist[219];
                        goto compare;
                      case 812:
                        resword = &wordlist[220];
                        goto compare;
                      case 815:
                        resword = &wordlist[221];
                        goto compare;
                      case 818:
                        resword = &wordlist[222];
                        goto compare;
                      case 820:
                        resword = &wordlist[223];
                        goto compare;
                      case 823:
                        resword = &wordlist[224];
                        goto compare;
                      case 828:
                        resword = &wordlist[225];
                        goto compare;
                      case 831:
                        resword = &wordlist[226];
                        goto compare;
                      case 843:
                        resword = &wordlist[227];
                        goto compare;
                      case 844:
                        resword = &wordlist[228];
                        goto compare;
                      case 845:
                        resword = &wordlist[229];
                        goto compare;
                      case 848:
                        resword = &wordlist[230];
                        goto compare;
                      case 849:
                        resword = &wordlist[231];
                        goto compare;
                      case 850:
                        resword = &wordlist[232];
                        goto compare;
                      case 853:
                        resword = &wordlist[233];
                        goto compare;
                      case 855:
                        resword = &wordlist[234];
                        goto compare;
                      case 858:
                        resword = &wordlist[235];
                        goto compare;
                      case 861:
                        resword = &wordlist[236];
                        goto compare;
                      case 865:
                        resword = &wordlist[237];
                        goto compare;
                      case 866:
                        resword = &wordlist[238];
                        goto compare;
                      case 868:
                        resword = &wordlist[239];
                        goto compare;
                      case 873:
                        resword = &wordlist[240];
                        goto compare;
                      case 875:
                        resword = &wordlist[241];
                        goto compare;
                      case 878:
                        resword = &wordlist[242];
                        goto compare;
                      case 882:
                        resword = &wordlist[243];
                        goto compare;
                      case 883:
                        resword = &wordlist[244];
                        goto compare;
                      case 884:
                        resword = &wordlist[245];
                        goto compare;
                      case 885:
                        resword = &wordlist[246];
                        goto compare;
                      case 888:
                        resword = &wordlist[247];
                        goto compare;
                      case 890:
                        resword = &wordlist[248];
                        goto compare;
                      case 893:
                        resword = &wordlist[249];
                        goto compare;
                      case 894:
                        resword = &wordlist[250];
                        goto compare;
                      case 895:
                        resword = &wordlist[251];
                        goto compare;
                      case 896:
                        resword = &wordlist[252];
                        goto compare;
                      case 897:
                        resword = &wordlist[253];
                        goto compare;
                      case 898:
                        resword = &wordlist[254];
                        goto compare;
                      case 908:
                        resword = &wordlist[255];
                        goto compare;
                      case 914:
                        resword = &wordlist[256];
                        goto compare;
                      case 915:
                        resword = &wordlist[257];
                        goto compare;
                      case 918:
                        resword = &wordlist[258];
                        goto compare;
                      case 920:
                        resword = &wordlist[259];
                        goto compare;
                      case 923:
                        resword = &wordlist[260];
                        goto compare;
                      case 925:
                        resword = &wordlist[261];
                        goto compare;
                      case 928:
                        resword = &wordlist[262];
                        goto compare;
                      case 935:
                        resword = &wordlist[263];
                        goto compare;
                      case 938:
                        resword = &wordlist[264];
                        goto compare;
                      case 946:
                        resword = &wordlist[265];
                        goto compare;
                      case 948:
                        resword = &wordlist[266];
                        goto compare;
                      case 950:
                        resword = &wordlist[267];
                        goto compare;
                      case 953:
                        resword = &wordlist[268];
                        goto compare;
                      case 956:
                        resword = &wordlist[269];
                        goto compare;
                      case 959:
                        resword = &wordlist[270];
                        goto compare;
                      case 973:
                        resword = &wordlist[271];
                        goto compare;
                      case 975:
                        resword = &wordlist[272];
                        goto compare;
                      case 982:
                        resword = &wordlist[273];
                        goto compare;
                      case 984:
                        resword = &wordlist[274];
                        goto compare;
                      case 990:
                        resword = &wordlist[275];
                        goto compare;
                      case 992:
                        resword = &wordlist[276];
                        goto compare;
                      case 998:
                        resword = &wordlist[277];
                        goto compare;
                      case 1002:
                        resword = &wordlist[278];
                        goto compare;
                      case 1003:
                        resword = &wordlist[279];
                        goto compare;
                      case 1006:
                        resword = &wordlist[280];
                        goto compare;
                      case 1007:
                        resword = &wordlist[281];
                        goto compare;
                      case 1008:
                        resword = &wordlist[282];
                        goto compare;
                      case 1013:
                        resword = &wordlist[283];
                        goto compare;
                      case 1017:
                        resword = &wordlist[284];
                        goto compare;
                      case 1018:
                        resword = &wordlist[285];
                        goto compare;
                      case 1020:
                        resword = &wordlist[286];
                        goto compare;
                      case 1022:
                        resword = &wordlist[287];
                        goto compare;
                      case 1027:
                        resword = &wordlist[288];
                        goto compare;
                      case 1033:
                        resword = &wordlist[289];
                        goto compare;
                      case 1038:
                        resword = &wordlist[290];
                        goto compare;
                    }
                }
              else
                {
                  switch (key - 1049)
                    {
                      case 0:
                        resword = &wordlist[291];
                        goto compare;
                      case 3:
                        resword = &wordlist[292];
                        goto compare;
                      case 4:
                        resword = &wordlist[293];
                        goto compare;
                      case 8:
                        resword = &wordlist[294];
                        goto compare;
                      case 9:
                        resword = &wordlist[295];
                        goto compare;
                      case 16:
                        resword = &wordlist[296];
                        goto compare;
                      case 17:
                        resword = &wordlist[297];
                        goto compare;
                      case 19:
                        resword = &wordlist[298];
                        goto compare;
                      case 20:
                        resword = &wordlist[299];
                        goto compare;
                      case 24:
                        resword = &wordlist[300];
                        goto compare;
                      case 25:
                        resword = &wordlist[301];
                        goto compare;
                      case 29:
                        resword = &wordlist[302];
                        goto compare;
                      case 31:
                        resword = &wordlist[303];
                        goto compare;
                      case 34:
                        resword = &wordlist[304];
                        goto compare;
                      case 36:
                        resword = &wordlist[305];
                        goto compare;
                      case 38:
                        resword = &wordlist[306];
                        goto compare;
                      case 39:
                        resword = &wordlist[307];
                        goto compare;
                      case 41:
                        resword = &wordlist[308];
                        goto compare;
                      case 42:
                        resword = &wordlist[309];
                        goto compare;
                      case 44:
                        resword = &wordlist[310];
                        goto compare;
                      case 49:
                        resword = &wordlist[311];
                        goto compare;
                      case 57:
                        resword = &wordlist[312];
                        goto compare;
                      case 61:
                        resword = &wordlist[313];
                        goto compare;
                      case 64:
                        resword = &wordlist[314];
                        goto compare;
                      case 66:
                        resword = &wordlist[315];
                        goto compare;
                      case 68:
                        resword = &wordlist[316];
                        goto compare;
                      case 69:
                        resword = &wordlist[317];
                        goto compare;
                      case 71:
                        resword = &wordlist[318];
                        goto compare;
                      case 74:
                        resword = &wordlist[319];
                        goto compare;
                      case 76:
                        resword = &wordlist[320];
                        goto compare;
                      case 77:
                        resword = &wordlist[321];
                        goto compare;
                      case 81:
                        resword = &wordlist[322];
                        goto compare;
                      case 84:
                        resword = &wordlist[323];
                        goto compare;
                      case 91:
                        resword = &wordlist[324];
                        goto compare;
                      case 94:
                        resword = &wordlist[325];
                        goto compare;
                      case 96:
                        resword = &wordlist[326];
                        goto compare;
                      case 99:
                        resword = &wordlist[327];
                        goto compare;
                      case 101:
                        resword = &wordlist[328];
                        goto compare;
                      case 104:
                        resword = &wordlist[329];
                        goto compare;
                      case 106:
                        resword = &wordlist[330];
                        goto compare;
                      case 109:
                        resword = &wordlist[331];
                        goto compare;
                      case 114:
                        resword = &wordlist[332];
                        goto compare;
                      case 116:
                        resword = &wordlist[333];
                        goto compare;
                      case 119:
                        resword = &wordlist[334];
                        goto compare;
                      case 120:
                        resword = &wordlist[335];
                        goto compare;
                      case 122:
                        resword = &wordlist[336];
                        goto compare;
                      case 124:
                        resword = &wordlist[337];
                        goto compare;
                      case 125:
                        resword = &wordlist[338];
                        goto compare;
                      case 127:
                        resword = &wordlist[339];
                        goto compare;
                      case 129:
                        resword = &wordlist[340];
                        goto compare;
                      case 130:
                        resword = &wordlist[341];
                        goto compare;
                      case 138:
                        resword = &wordlist[342];
                        goto compare;
                      case 139:
                        resword = &wordlist[343];
                        goto compare;
                      case 140:
                        resword = &wordlist[344];
                        goto compare;
                      case 142:
                        resword = &wordlist[345];
                        goto compare;
                      case 144:
                        resword = &wordlist[346];
                        goto compare;
                      case 145:
                        resword = &wordlist[347];
                        goto compare;
                      case 149:
                        resword = &wordlist[348];
                        goto compare;
                      case 154:
                        resword = &wordlist[349];
                        goto compare;
                      case 159:
                        resword = &wordlist[350];
                        goto compare;
                      case 161:
                        resword = &wordlist[351];
                        goto compare;
                      case 166:
                        resword = &wordlist[352];
                        goto compare;
                      case 169:
                        resword = &wordlist[353];
                        goto compare;
                      case 174:
                        resword = &wordlist[354];
                        goto compare;
                      case 178:
                        resword = &wordlist[355];
                        goto compare;
                      case 186:
                        resword = &wordlist[356];
                        goto compare;
                      case 189:
                        resword = &wordlist[357];
                        goto compare;
                      case 191:
                        resword = &wordlist[358];
                        goto compare;
                      case 196:
                        resword = &wordlist[359];
                        goto compare;
                      case 198:
                        resword = &wordlist[360];
                        goto compare;
                      case 199:
                        resword = &wordlist[361];
                        goto compare;
                      case 201:
                        resword = &wordlist[362];
                        goto compare;
                      case 205:
                        resword = &wordlist[363];
                        goto compare;
                      case 206:
                        resword = &wordlist[364];
                        goto compare;
                      case 208:
                        resword = &wordlist[365];
                        goto compare;
                      case 209:
                        resword = &wordlist[366];
                        goto compare;
                      case 211:
                        resword = &wordlist[367];
                        goto compare;
                      case 215:
                        resword = &wordlist[368];
                        goto compare;
                      case 218:
                        resword = &wordlist[369];
                        goto compare;
                      case 219:
                        resword = &wordlist[370];
                        goto compare;
                      case 221:
                        resword = &wordlist[371];
                        goto compare;
                      case 229:
                        resword = &wordlist[372];
                        goto compare;
                      case 238:
                        resword = &wordlist[373];
                        goto compare;
                      case 239:
                        resword = &wordlist[374];
                        goto compare;
                      case 240:
                        resword = &wordlist[375];
                        goto compare;
                      case 245:
                        resword = &wordlist[376];
                        goto compare;
                      case 247:
                        resword = &wordlist[377];
                        goto compare;
                      case 249:
                        resword = &wordlist[378];
                        goto compare;
                      case 253:
                        resword = &wordlist[379];
                        goto compare;
                      case 254:
                        resword = &wordlist[380];
                        goto compare;
                      case 257:
                        resword = &wordlist[381];
                        goto compare;
                      case 259:
                        resword = &wordlist[382];
                        goto compare;
                      case 266:
                        resword = &wordlist[383];
                        goto compare;
                      case 271:
                        resword = &wordlist[384];
                        goto compare;
                      case 274:
                        resword = &wordlist[385];
                        goto compare;
                      case 276:
                        resword = &wordlist[386];
                        goto compare;
                      case 277:
                        resword = &wordlist[387];
                        goto compare;
                      case 279:
                        resword = &wordlist[388];
                        goto compare;
                      case 280:
                        resword = &wordlist[389];
                        goto compare;
                      case 289:
                        resword = &wordlist[390];
                        goto compare;
                      case 291:
                        resword = &wordlist[391];
                        goto compare;
                      case 292:
                        resword = &wordlist[392];
                        goto compare;
                      case 296:
                        resword = &wordlist[393];
                        goto compare;
                      case 298:
                        resword = &wordlist[394];
                        goto compare;
                      case 301:
                        resword = &wordlist[395];
                        goto compare;
                      case 304:
                        resword = &wordlist[396];
                        goto compare;
                      case 305:
                        resword = &wordlist[397];
                        goto compare;
                      case 306:
                        resword = &wordlist[398];
                        goto compare;
                      case 309:
                        resword = &wordlist[399];
                        goto compare;
                      case 310:
                        resword = &wordlist[400];
                        goto compare;
                      case 314:
                        resword = &wordlist[401];
                        goto compare;
                      case 315:
                        resword = &wordlist[402];
                        goto compare;
                      case 320:
                        resword = &wordlist[403];
                        goto compare;
                      case 321:
                        resword = &wordlist[404];
                        goto compare;
                      case 324:
                        resword = &wordlist[405];
                        goto compare;
                      case 326:
                        resword = &wordlist[406];
                        goto compare;
                      case 327:
                        resword = &wordlist[407];
                        goto compare;
                      case 329:
                        resword = &wordlist[408];
                        goto compare;
                      case 330:
                        resword = &wordlist[409];
                        goto compare;
                      case 331:
                        resword = &wordlist[410];
                        goto compare;
                      case 334:
                        resword = &wordlist[411];
                        goto compare;
                      case 336:
                        resword = &wordlist[412];
                        goto compare;
                      case 339:
                        resword = &wordlist[413];
                        goto compare;
                      case 343:
                        resword = &wordlist[414];
                        goto compare;
                      case 344:
                        resword = &wordlist[415];
                        goto compare;
                      case 346:
                        resword = &wordlist[416];
                        goto compare;
                      case 349:
                        resword = &wordlist[417];
                        goto compare;
                      case 351:
                        resword = &wordlist[418];
                        goto compare;
                      case 354:
                        resword = &wordlist[419];
                        goto compare;
                      case 359:
                        resword = &wordlist[420];
                        goto compare;
                      case 363:
                        resword = &wordlist[421];
                        goto compare;
                      case 364:
                        resword = &wordlist[422];
                        goto compare;
                      case 365:
                        resword = &wordlist[423];
                        goto compare;
                      case 366:
                        resword = &wordlist[424];
                        goto compare;
                      case 369:
                        resword = &wordlist[425];
                        goto compare;
                      case 374:
                        resword = &wordlist[426];
                        goto compare;
                      case 376:
                        resword = &wordlist[427];
                        goto compare;
                      case 377:
                        resword = &wordlist[428];
                        goto compare;
                      case 381:
                        resword = &wordlist[429];
                        goto compare;
                      case 384:
                        resword = &wordlist[430];
                        goto compare;
                      case 387:
                        resword = &wordlist[431];
                        goto compare;
                      case 389:
                        resword = &wordlist[432];
                        goto compare;
                      case 394:
                        resword = &wordlist[433];
                        goto compare;
                      case 397:
                        resword = &wordlist[434];
                        goto compare;
                      case 399:
                        resword = &wordlist[435];
                        goto compare;
                      case 400:
                        resword = &wordlist[436];
                        goto compare;
                      case 410:
                        resword = &wordlist[437];
                        goto compare;
                      case 411:
                        resword = &wordlist[438];
                        goto compare;
                      case 414:
                        resword = &wordlist[439];
                        goto compare;
                      case 419:
                        resword = &wordlist[440];
                        goto compare;
                      case 421:
                        resword = &wordlist[441];
                        goto compare;
                      case 424:
                        resword = &wordlist[442];
                        goto compare;
                      case 425:
                        resword = &wordlist[443];
                        goto compare;
                      case 427:
                        resword = &wordlist[444];
                        goto compare;
                      case 434:
                        resword = &wordlist[445];
                        goto compare;
                      case 437:
                        resword = &wordlist[446];
                        goto compare;
                      case 439:
                        resword = &wordlist[447];
                        goto compare;
                      case 446:
                        resword = &wordlist[448];
                        goto compare;
                      case 451:
                        resword = &wordlist[449];
                        goto compare;
                      case 454:
                        resword = &wordlist[450];
                        goto compare;
                      case 456:
                        resword = &wordlist[451];
                        goto compare;
                      case 459:
                        resword = &wordlist[452];
                        goto compare;
                      case 460:
                        resword = &wordlist[453];
                        goto compare;
                      case 461:
                        resword = &wordlist[454];
                        goto compare;
                      case 469:
                        resword = &wordlist[455];
                        goto compare;
                      case 471:
                        resword = &wordlist[456];
                        goto compare;
                      case 472:
                        resword = &wordlist[457];
                        goto compare;
                      case 474:
                        resword = &wordlist[458];
                        goto compare;
                      case 479:
                        resword = &wordlist[459];
                        goto compare;
                      case 481:
                        resword = &wordlist[460];
                        goto compare;
                      case 484:
                        resword = &wordlist[461];
                        goto compare;
                      case 486:
                        resword = &wordlist[462];
                        goto compare;
                      case 489:
                        resword = &wordlist[463];
                        goto compare;
                      case 490:
                        resword = &wordlist[464];
                        goto compare;
                      case 494:
                        resword = &wordlist[465];
                        goto compare;
                      case 496:
                        resword = &wordlist[466];
                        goto compare;
                      case 498:
                        resword = &wordlist[467];
                        goto compare;
                      case 501:
                        resword = &wordlist[468];
                        goto compare;
                      case 506:
                        resword = &wordlist[469];
                        goto compare;
                      case 509:
                        resword = &wordlist[470];
                        goto compare;
                      case 511:
                        resword = &wordlist[471];
                        goto compare;
                      case 513:
                        resword = &wordlist[472];
                        goto compare;
                      case 516:
                        resword = &wordlist[473];
                        goto compare;
                      case 517:
                        resword = &wordlist[474];
                        goto compare;
                      case 519:
                        resword = &wordlist[475];
                        goto compare;
                      case 521:
                        resword = &wordlist[476];
                        goto compare;
                      case 524:
                        resword = &wordlist[477];
                        goto compare;
                      case 526:
                        resword = &wordlist[478];
                        goto compare;
                      case 527:
                        resword = &wordlist[479];
                        goto compare;
                      case 529:
                        resword = &wordlist[480];
                        goto compare;
                      case 531:
                        resword = &wordlist[481];
                        goto compare;
                      case 533:
                        resword = &wordlist[482];
                        goto compare;
                      case 534:
                        resword = &wordlist[483];
                        goto compare;
                      case 538:
                        resword = &wordlist[484];
                        goto compare;
                      case 540:
                        resword = &wordlist[485];
                        goto compare;
                      case 549:
                        resword = &wordlist[486];
                        goto compare;
                      case 556:
                        resword = &wordlist[487];
                        goto compare;
                      case 558:
                        resword = &wordlist[488];
                        goto compare;
                      case 559:
                        resword = &wordlist[489];
                        goto compare;
                      case 561:
                        resword = &wordlist[490];
                        goto compare;
                      case 566:
                        resword = &wordlist[491];
                        goto compare;
                      case 574:
                        resword = &wordlist[492];
                        goto compare;
                      case 576:
                        resword = &wordlist[493];
                        goto compare;
                      case 579:
                        resword = &wordlist[494];
                        goto compare;
                      case 584:
                        resword = &wordlist[495];
                        goto compare;
                      case 589:
                        resword = &wordlist[496];
                        goto compare;
                      case 591:
                        resword = &wordlist[497];
                        goto compare;
                      case 593:
                        resword = &wordlist[498];
                        goto compare;
                      case 596:
                        resword = &wordlist[499];
                        goto compare;
                      case 599:
                        resword = &wordlist[500];
                        goto compare;
                      case 604:
                        resword = &wordlist[501];
                        goto compare;
                      case 605:
                        resword = &wordlist[502];
                        goto compare;
                      case 607:
                        resword = &wordlist[503];
                        goto compare;
                      case 617:
                        resword = &wordlist[504];
                        goto compare;
                      case 624:
                        resword = &wordlist[505];
                        goto compare;
                      case 629:
                        resword = &wordlist[506];
                        goto compare;
                      case 633:
                        resword = &wordlist[507];
                        goto compare;
                      case 639:
                        resword = &wordlist[508];
                        goto compare;
                      case 640:
                        resword = &wordlist[509];
                        goto compare;
                      case 644:
                        resword = &wordlist[510];
                        goto compare;
                      case 649:
                        resword = &wordlist[511];
                        goto compare;
                      case 664:
                        resword = &wordlist[512];
                        goto compare;
                      case 669:
                        resword = &wordlist[513];
                        goto compare;
                      case 674:
                        resword = &wordlist[514];
                        goto compare;
                      case 680:
                        resword = &wordlist[515];
                        goto compare;
                      case 684:
                        resword = &wordlist[516];
                        goto compare;
                      case 686:
                        resword = &wordlist[517];
                        goto compare;
                      case 687:
                        resword = &wordlist[518];
                        goto compare;
                      case 690:
                        resword = &wordlist[519];
                        goto compare;
                      case 691:
                        resword = &wordlist[520];
                        goto compare;
                      case 694:
                        resword = &wordlist[521];
                        goto compare;
                      case 699:
                        resword = &wordlist[522];
                        goto compare;
                      case 704:
                        resword = &wordlist[523];
                        goto compare;
                      case 706:
                        resword = &wordlist[524];
                        goto compare;
                      case 709:
                        resword = &wordlist[525];
                        goto compare;
                      case 720:
                        resword = &wordlist[526];
                        goto compare;
                      case 721:
                        resword = &wordlist[527];
                        goto compare;
                      case 722:
                        resword = &wordlist[528];
                        goto compare;
                      case 724:
                        resword = &wordlist[529];
                        goto compare;
                      case 725:
                        resword = &wordlist[530];
                        goto compare;
                      case 731:
                        resword = &wordlist[531];
                        goto compare;
                      case 736:
                        resword = &wordlist[532];
                        goto compare;
                      case 739:
                        resword = &wordlist[533];
                        goto compare;
                      case 741:
                        resword = &wordlist[534];
                        goto compare;
                      case 744:
                        resword = &wordlist[535];
                        goto compare;
                      case 746:
                        resword = &wordlist[536];
                        goto compare;
                      case 748:
                        resword = &wordlist[537];
                        goto compare;
                      case 754:
                        resword = &wordlist[538];
                        goto compare;
                      case 755:
                        resword = &wordlist[539];
                        goto compare;
                      case 756:
                        resword = &wordlist[540];
                        goto compare;
                      case 759:
                        resword = &wordlist[541];
                        goto compare;
                      case 760:
                        resword = &wordlist[542];
                        goto compare;
                      case 764:
                        resword = &wordlist[543];
                        goto compare;
                      case 765:
                        resword = &wordlist[544];
                        goto compare;
                      case 769:
                        resword = &wordlist[545];
                        goto compare;
                      case 770:
                        resword = &wordlist[546];
                        goto compare;
                      case 771:
                        resword = &wordlist[547];
                        goto compare;
                      case 774:
                        resword = &wordlist[548];
                        goto compare;
                      case 776:
                        resword = &wordlist[549];
                        goto compare;
                      case 779:
                        resword = &wordlist[550];
                        goto compare;
                      case 781:
                        resword = &wordlist[551];
                        goto compare;
                      case 783:
                        resword = &wordlist[552];
                        goto compare;
                      case 787:
                        resword = &wordlist[553];
                        goto compare;
                      case 789:
                        resword = &wordlist[554];
                        goto compare;
                      case 794:
                        resword = &wordlist[555];
                        goto compare;
                      case 796:
                        resword = &wordlist[556];
                        goto compare;
                      case 798:
                        resword = &wordlist[557];
                        goto compare;
                      case 801:
                        resword = &wordlist[558];
                        goto compare;
                      case 803:
                        resword = &wordlist[559];
                        goto compare;
                      case 806:
                        resword = &wordlist[560];
                        goto compare;
                      case 808:
                        resword = &wordlist[561];
                        goto compare;
                      case 809:
                        resword = &wordlist[562];
                        goto compare;
                      case 811:
                        resword = &wordlist[563];
                        goto compare;
                      case 814:
                        resword = &wordlist[564];
                        goto compare;
                      case 815:
                        resword = &wordlist[565];
                        goto compare;
                      case 820:
                        resword = &wordlist[566];
                        goto compare;
                      case 824:
                        resword = &wordlist[567];
                        goto compare;
                      case 826:
                        resword = &wordlist[568];
                        goto compare;
                      case 829:
                        resword = &wordlist[569];
                        goto compare;
                      case 831:
                        resword = &wordlist[570];
                        goto compare;
                      case 833:
                        resword = &wordlist[571];
                        goto compare;
                      case 840:
                        resword = &wordlist[572];
                        goto compare;
                      case 845:
                        resword = &wordlist[573];
                        goto compare;
                      case 846:
                        resword = &wordlist[574];
                        goto compare;
                      case 848:
                        resword = &wordlist[575];
                        goto compare;
                      case 849:
                        resword = &wordlist[576];
                        goto compare;
                      case 851:
                        resword = &wordlist[577];
                        goto compare;
                      case 853:
                        resword = &wordlist[578];
                        goto compare;
                      case 856:
                        resword = &wordlist[579];
                        goto compare;
                      case 861:
                        resword = &wordlist[580];
                        goto compare;
                    }
                }
            }
          else
            {
              if (key < 2990)
                {
                  switch (key - 1912)
                    {
                      case 0:
                        resword = &wordlist[581];
                        goto compare;
                      case 3:
                        resword = &wordlist[582];
                        goto compare;
                      case 4:
                        resword = &wordlist[583];
                        goto compare;
                      case 6:
                        resword = &wordlist[584];
                        goto compare;
                      case 7:
                        resword = &wordlist[585];
                        goto compare;
                      case 8:
                        resword = &wordlist[586];
                        goto compare;
                      case 12:
                        resword = &wordlist[587];
                        goto compare;
                      case 15:
                        resword = &wordlist[588];
                        goto compare;
                      case 18:
                        resword = &wordlist[589];
                        goto compare;
                      case 21:
                        resword = &wordlist[590];
                        goto compare;
                      case 22:
                        resword = &wordlist[591];
                        goto compare;
                      case 23:
                        resword = &wordlist[592];
                        goto compare;
                      case 29:
                        resword = &wordlist[593];
                        goto compare;
                      case 31:
                        resword = &wordlist[594];
                        goto compare;
                      case 32:
                        resword = &wordlist[595];
                        goto compare;
                      case 33:
                        resword = &wordlist[596];
                        goto compare;
                      case 34:
                        resword = &wordlist[597];
                        goto compare;
                      case 36:
                        resword = &wordlist[598];
                        goto compare;
                      case 38:
                        resword = &wordlist[599];
                        goto compare;
                      case 41:
                        resword = &wordlist[600];
                        goto compare;
                      case 44:
                        resword = &wordlist[601];
                        goto compare;
                      case 46:
                        resword = &wordlist[602];
                        goto compare;
                      case 48:
                        resword = &wordlist[603];
                        goto compare;
                      case 51:
                        resword = &wordlist[604];
                        goto compare;
                      case 54:
                        resword = &wordlist[605];
                        goto compare;
                      case 60:
                        resword = &wordlist[606];
                        goto compare;
                      case 63:
                        resword = &wordlist[607];
                        goto compare;
                      case 71:
                        resword = &wordlist[608];
                        goto compare;
                      case 74:
                        resword = &wordlist[609];
                        goto compare;
                      case 76:
                        resword = &wordlist[610];
                        goto compare;
                      case 77:
                        resword = &wordlist[611];
                        goto compare;
                      case 83:
                        resword = &wordlist[612];
                        goto compare;
                      case 86:
                        resword = &wordlist[613];
                        goto compare;
                      case 91:
                        resword = &wordlist[614];
                        goto compare;
                      case 92:
                        resword = &wordlist[615];
                        goto compare;
                      case 95:
                        resword = &wordlist[616];
                        goto compare;
                      case 96:
                        resword = &wordlist[617];
                        goto compare;
                      case 97:
                        resword = &wordlist[618];
                        goto compare;
                      case 98:
                        resword = &wordlist[619];
                        goto compare;
                      case 100:
                        resword = &wordlist[620];
                        goto compare;
                      case 101:
                        resword = &wordlist[621];
                        goto compare;
                      case 104:
                        resword = &wordlist[622];
                        goto compare;
                      case 105:
                        resword = &wordlist[623];
                        goto compare;
                      case 106:
                        resword = &wordlist[624];
                        goto compare;
                      case 113:
                        resword = &wordlist[625];
                        goto compare;
                      case 116:
                        resword = &wordlist[626];
                        goto compare;
                      case 123:
                        resword = &wordlist[627];
                        goto compare;
                      case 128:
                        resword = &wordlist[628];
                        goto compare;
                      case 130:
                        resword = &wordlist[629];
                        goto compare;
                      case 131:
                        resword = &wordlist[630];
                        goto compare;
                      case 134:
                        resword = &wordlist[631];
                        goto compare;
                      case 136:
                        resword = &wordlist[632];
                        goto compare;
                      case 138:
                        resword = &wordlist[633];
                        goto compare;
                      case 141:
                        resword = &wordlist[634];
                        goto compare;
                      case 143:
                        resword = &wordlist[635];
                        goto compare;
                      case 147:
                        resword = &wordlist[636];
                        goto compare;
                      case 148:
                        resword = &wordlist[637];
                        goto compare;
                      case 150:
                        resword = &wordlist[638];
                        goto compare;
                      case 152:
                        resword = &wordlist[639];
                        goto compare;
                      case 154:
                        resword = &wordlist[640];
                        goto compare;
                      case 156:
                        resword = &wordlist[641];
                        goto compare;
                      case 163:
                        resword = &wordlist[642];
                        goto compare;
                      case 166:
                        resword = &wordlist[643];
                        goto compare;
                      case 171:
                        resword = &wordlist[644];
                        goto compare;
                      case 176:
                        resword = &wordlist[645];
                        goto compare;
                      case 177:
                        resword = &wordlist[646];
                        goto compare;
                      case 180:
                        resword = &wordlist[647];
                        goto compare;
                      case 186:
                        resword = &wordlist[648];
                        goto compare;
                      case 188:
                        resword = &wordlist[649];
                        goto compare;
                      case 191:
                        resword = &wordlist[650];
                        goto compare;
                      case 196:
                        resword = &wordlist[651];
                        goto compare;
                      case 198:
                        resword = &wordlist[652];
                        goto compare;
                      case 203:
                        resword = &wordlist[653];
                        goto compare;
                      case 204:
                        resword = &wordlist[654];
                        goto compare;
                      case 205:
                        resword = &wordlist[655];
                        goto compare;
                      case 206:
                        resword = &wordlist[656];
                        goto compare;
                      case 207:
                        resword = &wordlist[657];
                        goto compare;
                      case 208:
                        resword = &wordlist[658];
                        goto compare;
                      case 211:
                        resword = &wordlist[659];
                        goto compare;
                      case 216:
                        resword = &wordlist[660];
                        goto compare;
                      case 226:
                        resword = &wordlist[661];
                        goto compare;
                      case 228:
                        resword = &wordlist[662];
                        goto compare;
                      case 231:
                        resword = &wordlist[663];
                        goto compare;
                      case 233:
                        resword = &wordlist[664];
                        goto compare;
                      case 234:
                        resword = &wordlist[665];
                        goto compare;
                      case 235:
                        resword = &wordlist[666];
                        goto compare;
                      case 243:
                        resword = &wordlist[667];
                        goto compare;
                      case 248:
                        resword = &wordlist[668];
                        goto compare;
                      case 250:
                        resword = &wordlist[669];
                        goto compare;
                      case 251:
                        resword = &wordlist[670];
                        goto compare;
                      case 258:
                        resword = &wordlist[671];
                        goto compare;
                      case 260:
                        resword = &wordlist[672];
                        goto compare;
                      case 265:
                        resword = &wordlist[673];
                        goto compare;
                      case 266:
                        resword = &wordlist[674];
                        goto compare;
                      case 273:
                        resword = &wordlist[675];
                        goto compare;
                      case 275:
                        resword = &wordlist[676];
                        goto compare;
                      case 276:
                        resword = &wordlist[677];
                        goto compare;
                      case 278:
                        resword = &wordlist[678];
                        goto compare;
                      case 281:
                        resword = &wordlist[679];
                        goto compare;
                      case 283:
                        resword = &wordlist[680];
                        goto compare;
                      case 286:
                        resword = &wordlist[681];
                        goto compare;
                      case 291:
                        resword = &wordlist[682];
                        goto compare;
                      case 292:
                        resword = &wordlist[683];
                        goto compare;
                      case 293:
                        resword = &wordlist[684];
                        goto compare;
                      case 294:
                        resword = &wordlist[685];
                        goto compare;
                      case 296:
                        resword = &wordlist[686];
                        goto compare;
                      case 301:
                        resword = &wordlist[687];
                        goto compare;
                      case 303:
                        resword = &wordlist[688];
                        goto compare;
                      case 306:
                        resword = &wordlist[689];
                        goto compare;
                      case 311:
                        resword = &wordlist[690];
                        goto compare;
                      case 316:
                        resword = &wordlist[691];
                        goto compare;
                      case 320:
                        resword = &wordlist[692];
                        goto compare;
                      case 326:
                        resword = &wordlist[693];
                        goto compare;
                      case 331:
                        resword = &wordlist[694];
                        goto compare;
                      case 336:
                        resword = &wordlist[695];
                        goto compare;
                      case 341:
                        resword = &wordlist[696];
                        goto compare;
                      case 342:
                        resword = &wordlist[697];
                        goto compare;
                      case 346:
                        resword = &wordlist[698];
                        goto compare;
                      case 350:
                        resword = &wordlist[699];
                        goto compare;
                      case 351:
                        resword = &wordlist[700];
                        goto compare;
                      case 353:
                        resword = &wordlist[701];
                        goto compare;
                      case 356:
                        resword = &wordlist[702];
                        goto compare;
                      case 361:
                        resword = &wordlist[703];
                        goto compare;
                      case 371:
                        resword = &wordlist[704];
                        goto compare;
                      case 372:
                        resword = &wordlist[705];
                        goto compare;
                      case 375:
                        resword = &wordlist[706];
                        goto compare;
                      case 378:
                        resword = &wordlist[707];
                        goto compare;
                      case 381:
                        resword = &wordlist[708];
                        goto compare;
                      case 386:
                        resword = &wordlist[709];
                        goto compare;
                      case 387:
                        resword = &wordlist[710];
                        goto compare;
                      case 389:
                        resword = &wordlist[711];
                        goto compare;
                      case 391:
                        resword = &wordlist[712];
                        goto compare;
                      case 393:
                        resword = &wordlist[713];
                        goto compare;
                      case 395:
                        resword = &wordlist[714];
                        goto compare;
                      case 398:
                        resword = &wordlist[715];
                        goto compare;
                      case 404:
                        resword = &wordlist[716];
                        goto compare;
                      case 406:
                        resword = &wordlist[717];
                        goto compare;
                      case 408:
                        resword = &wordlist[718];
                        goto compare;
                      case 414:
                        resword = &wordlist[719];
                        goto compare;
                      case 415:
                        resword = &wordlist[720];
                        goto compare;
                      case 421:
                        resword = &wordlist[721];
                        goto compare;
                      case 432:
                        resword = &wordlist[722];
                        goto compare;
                      case 436:
                        resword = &wordlist[723];
                        goto compare;
                      case 437:
                        resword = &wordlist[724];
                        goto compare;
                      case 438:
                        resword = &wordlist[725];
                        goto compare;
                      case 439:
                        resword = &wordlist[726];
                        goto compare;
                      case 446:
                        resword = &wordlist[727];
                        goto compare;
                      case 447:
                        resword = &wordlist[728];
                        goto compare;
                      case 450:
                        resword = &wordlist[729];
                        goto compare;
                      case 451:
                        resword = &wordlist[730];
                        goto compare;
                      case 461:
                        resword = &wordlist[731];
                        goto compare;
                      case 465:
                        resword = &wordlist[732];
                        goto compare;
                      case 468:
                        resword = &wordlist[733];
                        goto compare;
                      case 471:
                        resword = &wordlist[734];
                        goto compare;
                      case 476:
                        resword = &wordlist[735];
                        goto compare;
                      case 477:
                        resword = &wordlist[736];
                        goto compare;
                      case 483:
                        resword = &wordlist[737];
                        goto compare;
                      case 492:
                        resword = &wordlist[738];
                        goto compare;
                      case 496:
                        resword = &wordlist[739];
                        goto compare;
                      case 497:
                        resword = &wordlist[740];
                        goto compare;
                      case 501:
                        resword = &wordlist[741];
                        goto compare;
                      case 502:
                        resword = &wordlist[742];
                        goto compare;
                      case 506:
                        resword = &wordlist[743];
                        goto compare;
                      case 526:
                        resword = &wordlist[744];
                        goto compare;
                      case 531:
                        resword = &wordlist[745];
                        goto compare;
                      case 534:
                        resword = &wordlist[746];
                        goto compare;
                      case 538:
                        resword = &wordlist[747];
                        goto compare;
                      case 539:
                        resword = &wordlist[748];
                        goto compare;
                      case 540:
                        resword = &wordlist[749];
                        goto compare;
                      case 541:
                        resword = &wordlist[750];
                        goto compare;
                      case 542:
                        resword = &wordlist[751];
                        goto compare;
                      case 545:
                        resword = &wordlist[752];
                        goto compare;
                      case 546:
                        resword = &wordlist[753];
                        goto compare;
                      case 548:
                        resword = &wordlist[754];
                        goto compare;
                      case 551:
                        resword = &wordlist[755];
                        goto compare;
                      case 560:
                        resword = &wordlist[756];
                        goto compare;
                      case 562:
                        resword = &wordlist[757];
                        goto compare;
                      case 566:
                        resword = &wordlist[758];
                        goto compare;
                      case 567:
                        resword = &wordlist[759];
                        goto compare;
                      case 568:
                        resword = &wordlist[760];
                        goto compare;
                      case 570:
                        resword = &wordlist[761];
                        goto compare;
                      case 571:
                        resword = &wordlist[762];
                        goto compare;
                      case 578:
                        resword = &wordlist[763];
                        goto compare;
                      case 583:
                        resword = &wordlist[764];
                        goto compare;
                      case 591:
                        resword = &wordlist[765];
                        goto compare;
                      case 596:
                        resword = &wordlist[766];
                        goto compare;
                      case 601:
                        resword = &wordlist[767];
                        goto compare;
                      case 606:
                        resword = &wordlist[768];
                        goto compare;
                      case 609:
                        resword = &wordlist[769];
                        goto compare;
                      case 619:
                        resword = &wordlist[770];
                        goto compare;
                      case 620:
                        resword = &wordlist[771];
                        goto compare;
                      case 623:
                        resword = &wordlist[772];
                        goto compare;
                      case 625:
                        resword = &wordlist[773];
                        goto compare;
                      case 632:
                        resword = &wordlist[774];
                        goto compare;
                      case 636:
                        resword = &wordlist[775];
                        goto compare;
                      case 638:
                        resword = &wordlist[776];
                        goto compare;
                      case 641:
                        resword = &wordlist[777];
                        goto compare;
                      case 650:
                        resword = &wordlist[778];
                        goto compare;
                      case 651:
                        resword = &wordlist[779];
                        goto compare;
                      case 653:
                        resword = &wordlist[780];
                        goto compare;
                      case 661:
                        resword = &wordlist[781];
                        goto compare;
                      case 663:
                        resword = &wordlist[782];
                        goto compare;
                      case 667:
                        resword = &wordlist[783];
                        goto compare;
                      case 668:
                        resword = &wordlist[784];
                        goto compare;
                      case 672:
                        resword = &wordlist[785];
                        goto compare;
                      case 676:
                        resword = &wordlist[786];
                        goto compare;
                      case 681:
                        resword = &wordlist[787];
                        goto compare;
                      case 686:
                        resword = &wordlist[788];
                        goto compare;
                      case 688:
                        resword = &wordlist[789];
                        goto compare;
                      case 691:
                        resword = &wordlist[790];
                        goto compare;
                      case 694:
                        resword = &wordlist[791];
                        goto compare;
                      case 696:
                        resword = &wordlist[792];
                        goto compare;
                      case 698:
                        resword = &wordlist[793];
                        goto compare;
                      case 706:
                        resword = &wordlist[794];
                        goto compare;
                      case 708:
                        resword = &wordlist[795];
                        goto compare;
                      case 715:
                        resword = &wordlist[796];
                        goto compare;
                      case 716:
                        resword = &wordlist[797];
                        goto compare;
                      case 717:
                        resword = &wordlist[798];
                        goto compare;
                      case 721:
                        resword = &wordlist[799];
                        goto compare;
                      case 725:
                        resword = &wordlist[800];
                        goto compare;
                      case 727:
                        resword = &wordlist[801];
                        goto compare;
                      case 728:
                        resword = &wordlist[802];
                        goto compare;
                      case 731:
                        resword = &wordlist[803];
                        goto compare;
                      case 734:
                        resword = &wordlist[804];
                        goto compare;
                      case 737:
                        resword = &wordlist[805];
                        goto compare;
                      case 747:
                        resword = &wordlist[806];
                        goto compare;
                      case 750:
                        resword = &wordlist[807];
                        goto compare;
                      case 751:
                        resword = &wordlist[808];
                        goto compare;
                      case 759:
                        resword = &wordlist[809];
                        goto compare;
                      case 760:
                        resword = &wordlist[810];
                        goto compare;
                      case 761:
                        resword = &wordlist[811];
                        goto compare;
                      case 766:
                        resword = &wordlist[812];
                        goto compare;
                      case 771:
                        resword = &wordlist[813];
                        goto compare;
                      case 772:
                        resword = &wordlist[814];
                        goto compare;
                      case 773:
                        resword = &wordlist[815];
                        goto compare;
                      case 787:
                        resword = &wordlist[816];
                        goto compare;
                      case 788:
                        resword = &wordlist[817];
                        goto compare;
                      case 793:
                        resword = &wordlist[818];
                        goto compare;
                      case 795:
                        resword = &wordlist[819];
                        goto compare;
                      case 796:
                        resword = &wordlist[820];
                        goto compare;
                      case 801:
                        resword = &wordlist[821];
                        goto compare;
                      case 811:
                        resword = &wordlist[822];
                        goto compare;
                      case 816:
                        resword = &wordlist[823];
                        goto compare;
                      case 825:
                        resword = &wordlist[824];
                        goto compare;
                      case 833:
                        resword = &wordlist[825];
                        goto compare;
                      case 839:
                        resword = &wordlist[826];
                        goto compare;
                      case 841:
                        resword = &wordlist[827];
                        goto compare;
                      case 861:
                        resword = &wordlist[828];
                        goto compare;
                      case 865:
                        resword = &wordlist[829];
                        goto compare;
                      case 866:
                        resword = &wordlist[830];
                        goto compare;
                      case 867:
                        resword = &wordlist[831];
                        goto compare;
                      case 883:
                        resword = &wordlist[832];
                        goto compare;
                      case 886:
                        resword = &wordlist[833];
                        goto compare;
                      case 888:
                        resword = &wordlist[834];
                        goto compare;
                      case 891:
                        resword = &wordlist[835];
                        goto compare;
                      case 894:
                        resword = &wordlist[836];
                        goto compare;
                      case 903:
                        resword = &wordlist[837];
                        goto compare;
                      case 921:
                        resword = &wordlist[838];
                        goto compare;
                      case 928:
                        resword = &wordlist[839];
                        goto compare;
                      case 937:
                        resword = &wordlist[840];
                        goto compare;
                      case 940:
                        resword = &wordlist[841];
                        goto compare;
                      case 941:
                        resword = &wordlist[842];
                        goto compare;
                      case 942:
                        resword = &wordlist[843];
                        goto compare;
                      case 943:
                        resword = &wordlist[844];
                        goto compare;
                      case 944:
                        resword = &wordlist[845];
                        goto compare;
                      case 949:
                        resword = &wordlist[846];
                        goto compare;
                      case 961:
                        resword = &wordlist[847];
                        goto compare;
                      case 966:
                        resword = &wordlist[848];
                        goto compare;
                      case 968:
                        resword = &wordlist[849];
                        goto compare;
                      case 977:
                        resword = &wordlist[850];
                        goto compare;
                      case 986:
                        resword = &wordlist[851];
                        goto compare;
                      case 990:
                        resword = &wordlist[852];
                        goto compare;
                      case 992:
                        resword = &wordlist[853];
                        goto compare;
                      case 1001:
                        resword = &wordlist[854];
                        goto compare;
                      case 1014:
                        resword = &wordlist[855];
                        goto compare;
                      case 1022:
                        resword = &wordlist[856];
                        goto compare;
                      case 1028:
                        resword = &wordlist[857];
                        goto compare;
                      case 1031:
                        resword = &wordlist[858];
                        goto compare;
                      case 1034:
                        resword = &wordlist[859];
                        goto compare;
                      case 1036:
                        resword = &wordlist[860];
                        goto compare;
                      case 1041:
                        resword = &wordlist[861];
                        goto compare;
                      case 1048:
                        resword = &wordlist[862];
                        goto compare;
                      case 1049:
                        resword = &wordlist[863];
                        goto compare;
                      case 1051:
                        resword = &wordlist[864];
                        goto compare;
                      case 1053:
                        resword = &wordlist[865];
                        goto compare;
                      case 1057:
                        resword = &wordlist[866];
                        goto compare;
                      case 1058:
                        resword = &wordlist[867];
                        goto compare;
                      case 1062:
                        resword = &wordlist[868];
                        goto compare;
                      case 1064:
                        resword = &wordlist[869];
                        goto compare;
                      case 1073:
                        resword = &wordlist[870];
                        goto compare;
                    }
                }
              else
                {
                  switch (key - 2990)
                    {
                      case 0:
                        resword = &wordlist[871];
                        goto compare;
                      case 3:
                        resword = &wordlist[872];
                        goto compare;
                      case 13:
                        resword = &wordlist[873];
                        goto compare;
                      case 18:
                        resword = &wordlist[874];
                        goto compare;
                      case 20:
                        resword = &wordlist[875];
                        goto compare;
                      case 23:
                        resword = &wordlist[876];
                        goto compare;
                      case 28:
                        resword = &wordlist[877];
                        goto compare;
                      case 29:
                        resword = &wordlist[878];
                        goto compare;
                      case 33:
                        resword = &wordlist[879];
                        goto compare;
                      case 35:
                        resword = &wordlist[880];
                        goto compare;
                      case 38:
                        resword = &wordlist[881];
                        goto compare;
                      case 43:
                        resword = &wordlist[882];
                        goto compare;
                      case 48:
                        resword = &wordlist[883];
                        goto compare;
                      case 58:
                        resword = &wordlist[884];
                        goto compare;
                      case 67:
                        resword = &wordlist[885];
                        goto compare;
                      case 68:
                        resword = &wordlist[886];
                        goto compare;
                      case 75:
                        resword = &wordlist[887];
                        goto compare;
                      case 93:
                        resword = &wordlist[888];
                        goto compare;
                      case 99:
                        resword = &wordlist[889];
                        goto compare;
                      case 103:
                        resword = &wordlist[890];
                        goto compare;
                      case 108:
                        resword = &wordlist[891];
                        goto compare;
                      case 125:
                        resword = &wordlist[892];
                        goto compare;
                      case 128:
                        resword = &wordlist[893];
                        goto compare;
                      case 132:
                        resword = &wordlist[894];
                        goto compare;
                      case 134:
                        resword = &wordlist[895];
                        goto compare;
                      case 135:
                        resword = &wordlist[896];
                        goto compare;
                      case 137:
                        resword = &wordlist[897];
                        goto compare;
                      case 138:
                        resword = &wordlist[898];
                        goto compare;
                      case 143:
                        resword = &wordlist[899];
                        goto compare;
                      case 144:
                        resword = &wordlist[900];
                        goto compare;
                      case 148:
                        resword = &wordlist[901];
                        goto compare;
                      case 149:
                        resword = &wordlist[902];
                        goto compare;
                      case 152:
                        resword = &wordlist[903];
                        goto compare;
                      case 158:
                        resword = &wordlist[904];
                        goto compare;
                      case 159:
                        resword = &wordlist[905];
                        goto compare;
                      case 163:
                        resword = &wordlist[906];
                        goto compare;
                      case 168:
                        resword = &wordlist[907];
                        goto compare;
                      case 170:
                        resword = &wordlist[908];
                        goto compare;
                      case 174:
                        resword = &wordlist[909];
                        goto compare;
                      case 181:
                        resword = &wordlist[910];
                        goto compare;
                      case 183:
                        resword = &wordlist[911];
                        goto compare;
                      case 192:
                        resword = &wordlist[912];
                        goto compare;
                      case 193:
                        resword = &wordlist[913];
                        goto compare;
                      case 198:
                        resword = &wordlist[914];
                        goto compare;
                      case 203:
                        resword = &wordlist[915];
                        goto compare;
                      case 204:
                        resword = &wordlist[916];
                        goto compare;
                      case 215:
                        resword = &wordlist[917];
                        goto compare;
                      case 229:
                        resword = &wordlist[918];
                        goto compare;
                      case 235:
                        resword = &wordlist[919];
                        goto compare;
                      case 238:
                        resword = &wordlist[920];
                        goto compare;
                      case 242:
                        resword = &wordlist[921];
                        goto compare;
                      case 246:
                        resword = &wordlist[922];
                        goto compare;
                      case 258:
                        resword = &wordlist[923];
                        goto compare;
                      case 263:
                        resword = &wordlist[924];
                        goto compare;
                      case 278:
                        resword = &wordlist[925];
                        goto compare;
                      case 283:
                        resword = &wordlist[926];
                        goto compare;
                      case 284:
                        resword = &wordlist[927];
                        goto compare;
                      case 285:
                        resword = &wordlist[928];
                        goto compare;
                      case 290:
                        resword = &wordlist[929];
                        goto compare;
                      case 293:
                        resword = &wordlist[930];
                        goto compare;
                      case 295:
                        resword = &wordlist[931];
                        goto compare;
                      case 304:
                        resword = &wordlist[932];
                        goto compare;
                      case 308:
                        resword = &wordlist[933];
                        goto compare;
                      case 311:
                        resword = &wordlist[934];
                        goto compare;
                      case 312:
                        resword = &wordlist[935];
                        goto compare;
                      case 318:
                        resword = &wordlist[936];
                        goto compare;
                      case 332:
                        resword = &wordlist[937];
                        goto compare;
                      case 339:
                        resword = &wordlist[938];
                        goto compare;
                      case 340:
                        resword = &wordlist[939];
                        goto compare;
                      case 349:
                        resword = &wordlist[940];
                        goto compare;
                      case 368:
                        resword = &wordlist[941];
                        goto compare;
                      case 375:
                        resword = &wordlist[942];
                        goto compare;
                      case 383:
                        resword = &wordlist[943];
                        goto compare;
                      case 388:
                        resword = &wordlist[944];
                        goto compare;
                      case 399:
                        resword = &wordlist[945];
                        goto compare;
                      case 408:
                        resword = &wordlist[946];
                        goto compare;
                      case 413:
                        resword = &wordlist[947];
                        goto compare;
                      case 418:
                        resword = &wordlist[948];
                        goto compare;
                      case 423:
                        resword = &wordlist[949];
                        goto compare;
                      case 428:
                        resword = &wordlist[950];
                        goto compare;
                      case 434:
                        resword = &wordlist[951];
                        goto compare;
                      case 435:
                        resword = &wordlist[952];
                        goto compare;
                      case 438:
                        resword = &wordlist[953];
                        goto compare;
                      case 445:
                        resword = &wordlist[954];
                        goto compare;
                      case 446:
                        resword = &wordlist[955];
                        goto compare;
                      case 448:
                        resword = &wordlist[956];
                        goto compare;
                      case 453:
                        resword = &wordlist[957];
                        goto compare;
                      case 457:
                        resword = &wordlist[958];
                        goto compare;
                      case 468:
                        resword = &wordlist[959];
                        goto compare;
                      case 473:
                        resword = &wordlist[960];
                        goto compare;
                      case 478:
                        resword = &wordlist[961];
                        goto compare;
                      case 480:
                        resword = &wordlist[962];
                        goto compare;
                      case 490:
                        resword = &wordlist[963];
                        goto compare;
                      case 504:
                        resword = &wordlist[964];
                        goto compare;
                      case 534:
                        resword = &wordlist[965];
                        goto compare;
                      case 539:
                        resword = &wordlist[966];
                        goto compare;
                      case 542:
                        resword = &wordlist[967];
                        goto compare;
                      case 545:
                        resword = &wordlist[968];
                        goto compare;
                      case 556:
                        resword = &wordlist[969];
                        goto compare;
                      case 568:
                        resword = &wordlist[970];
                        goto compare;
                      case 578:
                        resword = &wordlist[971];
                        goto compare;
                      case 588:
                        resword = &wordlist[972];
                        goto compare;
                      case 593:
                        resword = &wordlist[973];
                        goto compare;
                      case 610:
                        resword = &wordlist[974];
                        goto compare;
                      case 612:
                        resword = &wordlist[975];
                        goto compare;
                      case 617:
                        resword = &wordlist[976];
                        goto compare;
                      case 620:
                        resword = &wordlist[977];
                        goto compare;
                      case 630:
                        resword = &wordlist[978];
                        goto compare;
                      case 643:
                        resword = &wordlist[979];
                        goto compare;
                      case 657:
                        resword = &wordlist[980];
                        goto compare;
                      case 664:
                        resword = &wordlist[981];
                        goto compare;
                      case 673:
                        resword = &wordlist[982];
                        goto compare;
                      case 685:
                        resword = &wordlist[983];
                        goto compare;
                      case 686:
                        resword = &wordlist[984];
                        goto compare;
                      case 708:
                        resword = &wordlist[985];
                        goto compare;
                      case 716:
                        resword = &wordlist[986];
                        goto compare;
                      case 728:
                        resword = &wordlist[987];
                        goto compare;
                      case 733:
                        resword = &wordlist[988];
                        goto compare;
                      case 734:
                        resword = &wordlist[989];
                        goto compare;
                      case 737:
                        resword = &wordlist[990];
                        goto compare;
                      case 741:
                        resword = &wordlist[991];
                        goto compare;
                      case 744:
                        resword = &wordlist[992];
                        goto compare;
                      case 747:
                        resword = &wordlist[993];
                        goto compare;
                      case 750:
                        resword = &wordlist[994];
                        goto compare;
                      case 753:
                        resword = &wordlist[995];
                        goto compare;
                      case 773:
                        resword = &wordlist[996];
                        goto compare;
                      case 783:
                        resword = &wordlist[997];
                        goto compare;
                      case 784:
                        resword = &wordlist[998];
                        goto compare;
                      case 795:
                        resword = &wordlist[999];
                        goto compare;
                      case 807:
                        resword = &wordlist[1000];
                        goto compare;
                      case 810:
                        resword = &wordlist[1001];
                        goto compare;
                      case 825:
                        resword = &wordlist[1002];
                        goto compare;
                      case 843:
                        resword = &wordlist[1003];
                        goto compare;
                      case 845:
                        resword = &wordlist[1004];
                        goto compare;
                      case 848:
                        resword = &wordlist[1005];
                        goto compare;
                      case 857:
                        resword = &wordlist[1006];
                        goto compare;
                      case 862:
                        resword = &wordlist[1007];
                        goto compare;
                      case 863:
                        resword = &wordlist[1008];
                        goto compare;
                      case 870:
                        resword = &wordlist[1009];
                        goto compare;
                      case 871:
                        resword = &wordlist[1010];
                        goto compare;
                      case 880:
                        resword = &wordlist[1011];
                        goto compare;
                      case 886:
                        resword = &wordlist[1012];
                        goto compare;
                      case 887:
                        resword = &wordlist[1013];
                        goto compare;
                      case 895:
                        resword = &wordlist[1014];
                        goto compare;
                      case 902:
                        resword = &wordlist[1015];
                        goto compare;
                      case 906:
                        resword = &wordlist[1016];
                        goto compare;
                      case 914:
                        resword = &wordlist[1017];
                        goto compare;
                      case 917:
                        resword = &wordlist[1018];
                        goto compare;
                      case 920:
                        resword = &wordlist[1019];
                        goto compare;
                      case 921:
                        resword = &wordlist[1020];
                        goto compare;
                      case 928:
                        resword = &wordlist[1021];
                        goto compare;
                      case 958:
                        resword = &wordlist[1022];
                        goto compare;
                      case 965:
                        resword = &wordlist[1023];
                        goto compare;
                      case 972:
                        resword = &wordlist[1024];
                        goto compare;
                      case 973:
                        resword = &wordlist[1025];
                        goto compare;
                      case 978:
                        resword = &wordlist[1026];
                        goto compare;
                      case 987:
                        resword = &wordlist[1027];
                        goto compare;
                      case 990:
                        resword = &wordlist[1028];
                        goto compare;
                      case 993:
                        resword = &wordlist[1029];
                        goto compare;
                      case 1003:
                        resword = &wordlist[1030];
                        goto compare;
                      case 1005:
                        resword = &wordlist[1031];
                        goto compare;
                      case 1013:
                        resword = &wordlist[1032];
                        goto compare;
                      case 1014:
                        resword = &wordlist[1033];
                        goto compare;
                      case 1027:
                        resword = &wordlist[1034];
                        goto compare;
                      case 1028:
                        resword = &wordlist[1035];
                        goto compare;
                      case 1039:
                        resword = &wordlist[1036];
                        goto compare;
                      case 1050:
                        resword = &wordlist[1037];
                        goto compare;
                      case 1063:
                        resword = &wordlist[1038];
                        goto compare;
                      case 1066:
                        resword = &wordlist[1039];
                        goto compare;
                      case 1078:
                        resword = &wordlist[1040];
                        goto compare;
                      case 1083:
                        resword = &wordlist[1041];
                        goto compare;
                      case 1103:
                        resword = &wordlist[1042];
                        goto compare;
                      case 1123:
                        resword = &wordlist[1043];
                        goto compare;
                      case 1150:
                        resword = &wordlist[1044];
                        goto compare;
                      case 1153:
                        resword = &wordlist[1045];
                        goto compare;
                      case 1158:
                        resword = &wordlist[1046];
                        goto compare;
                      case 1188:
                        resword = &wordlist[1047];
                        goto compare;
                      case 1191:
                        resword = &wordlist[1048];
                        goto compare;
                      case 1203:
                        resword = &wordlist[1049];
                        goto compare;
                      case 1205:
                        resword = &wordlist[1050];
                        goto compare;
                      case 1213:
                        resword = &wordlist[1051];
                        goto compare;
                      case 1218:
                        resword = &wordlist[1052];
                        goto compare;
                      case 1244:
                        resword = &wordlist[1053];
                        goto compare;
                      case 1273:
                        resword = &wordlist[1054];
                        goto compare;
                      case 1308:
                        resword = &wordlist[1055];
                        goto compare;
                      case 1323:
                        resword = &wordlist[1056];
                        goto compare;
                      case 1354:
                        resword = &wordlist[1057];
                        goto compare;
                      case 1360:
                        resword = &wordlist[1058];
                        goto compare;
                      case 1364:
                        resword = &wordlist[1059];
                        goto compare;
                      case 1373:
                        resword = &wordlist[1060];
                        goto compare;
                      case 1379:
                        resword = &wordlist[1061];
                        goto compare;
                      case 1388:
                        resword = &wordlist[1062];
                        goto compare;
                      case 1394:
                        resword = &wordlist[1063];
                        goto compare;
                      case 1400:
                        resword = &wordlist[1064];
                        goto compare;
                      case 1409:
                        resword = &wordlist[1065];
                        goto compare;
                      case 1413:
                        resword = &wordlist[1066];
                        goto compare;
                      case 1464:
                        resword = &wordlist[1067];
                        goto compare;
                      case 1483:
                        resword = &wordlist[1068];
                        goto compare;
                      case 1484:
                        resword = &wordlist[1069];
                        goto compare;
                      case 1500:
                        resword = &wordlist[1070];
                        goto compare;
                      case 1503:
                        resword = &wordlist[1071];
                        goto compare;
                      case 1504:
                        resword = &wordlist[1072];
                        goto compare;
                      case 1510:
                        resword = &wordlist[1073];
                        goto compare;
                      case 1515:
                        resword = &wordlist[1074];
                        goto compare;
                      case 1518:
                        resword = &wordlist[1075];
                        goto compare;
                      case 1534:
                        resword = &wordlist[1076];
                        goto compare;
                      case 1553:
                        resword = &wordlist[1077];
                        goto compare;
                      case 1584:
                        resword = &wordlist[1078];
                        goto compare;
                      case 1585:
                        resword = &wordlist[1079];
                        goto compare;
                      case 1590:
                        resword = &wordlist[1080];
                        goto compare;
                      case 1598:
                        resword = &wordlist[1081];
                        goto compare;
                      case 1647:
                        resword = &wordlist[1082];
                        goto compare;
                      case 1653:
                        resword = &wordlist[1083];
                        goto compare;
                      case 1658:
                        resword = &wordlist[1084];
                        goto compare;
                      case 1664:
                        resword = &wordlist[1085];
                        goto compare;
                      case 1678:
                        resword = &wordlist[1086];
                        goto compare;
                      case 1686:
                        resword = &wordlist[1087];
                        goto compare;
                      case 1698:
                        resword = &wordlist[1088];
                        goto compare;
                      case 1705:
                        resword = &wordlist[1089];
                        goto compare;
                      case 1723:
                        resword = &wordlist[1090];
                        goto compare;
                      case 1735:
                        resword = &wordlist[1091];
                        goto compare;
                      case 1740:
                        resword = &wordlist[1092];
                        goto compare;
                      case 1743:
                        resword = &wordlist[1093];
                        goto compare;
                      case 1747:
                        resword = &wordlist[1094];
                        goto compare;
                      case 1753:
                        resword = &wordlist[1095];
                        goto compare;
                      case 1763:
                        resword = &wordlist[1096];
                        goto compare;
                      case 1768:
                        resword = &wordlist[1097];
                        goto compare;
                      case 1775:
                        resword = &wordlist[1098];
                        goto compare;
                      case 1783:
                        resword = &wordlist[1099];
                        goto compare;
                      case 1805:
                        resword = &wordlist[1100];
                        goto compare;
                      case 1848:
                        resword = &wordlist[1101];
                        goto compare;
                      case 1868:
                        resword = &wordlist[1102];
                        goto compare;
                      case 1878:
                        resword = &wordlist[1103];
                        goto compare;
                      case 1910:
                        resword = &wordlist[1104];
                        goto compare;
                      case 1920:
                        resword = &wordlist[1105];
                        goto compare;
                      case 1928:
                        resword = &wordlist[1106];
                        goto compare;
                      case 1934:
                        resword = &wordlist[1107];
                        goto compare;
                      case 1963:
                        resword = &wordlist[1108];
                        goto compare;
                      case 1993:
                        resword = &wordlist[1109];
                        goto compare;
                      case 2040:
                        resword = &wordlist[1110];
                        goto compare;
                      case 2081:
                        resword = &wordlist[1111];
                        goto compare;
                      case 2084:
                        resword = &wordlist[1112];
                        goto compare;
                      case 2093:
                        resword = &wordlist[1113];
                        goto compare;
                      case 2106:
                        resword = &wordlist[1114];
                        goto compare;
                      case 2113:
                        resword = &wordlist[1115];
                        goto compare;
                      case 2189:
                        resword = &wordlist[1116];
                        goto compare;
                      case 2270:
                        resword = &wordlist[1117];
                        goto compare;
                      case 2280:
                        resword = &wordlist[1118];
                        goto compare;
                      case 2314:
                        resword = &wordlist[1119];
                        goto compare;
                      case 2319:
                        resword = &wordlist[1120];
                        goto compare;
                      case 2344:
                        resword = &wordlist[1121];
                        goto compare;
                      case 2350:
                        resword = &wordlist[1122];
                        goto compare;
                      case 2367:
                        resword = &wordlist[1123];
                        goto compare;
                      case 2388:
                        resword = &wordlist[1124];
                        goto compare;
                      case 2419:
                        resword = &wordlist[1125];
                        goto compare;
                      case 2463:
                        resword = &wordlist[1126];
                        goto compare;
                      case 2484:
                        resword = &wordlist[1127];
                        goto compare;
                      case 2498:
                        resword = &wordlist[1128];
                        goto compare;
                      case 2618:
                        resword = &wordlist[1129];
                        goto compare;
                      case 2645:
                        resword = &wordlist[1130];
                        goto compare;
                      case 2683:
                        resword = &wordlist[1131];
                        goto compare;
                      case 2693:
                        resword = &wordlist[1132];
                        goto compare;
                      case 2695:
                        resword = &wordlist[1133];
                        goto compare;
                      case 2745:
                        resword = &wordlist[1134];
                        goto compare;
                      case 2769:
                        resword = &wordlist[1135];
                        goto compare;
                      case 2813:
                        resword = &wordlist[1136];
                        goto compare;
                      case 2846:
                        resword = &wordlist[1137];
                        goto compare;
                      case 2873:
                        resword = &wordlist[1138];
                        goto compare;
                      case 2895:
                        resword = &wordlist[1139];
                        goto compare;
                      case 2957:
                        resword = &wordlist[1140];
                        goto compare;
                      case 2987:
                        resword = &wordlist[1141];
                        goto compare;
                      case 3062:
                        resword = &wordlist[1142];
                        goto compare;
                      case 3070:
                        resword = &wordlist[1143];
                        goto compare;
                      case 3084:
                        resword = &wordlist[1144];
                        goto compare;
                      case 3090:
                        resword = &wordlist[1145];
                        goto compare;
                      case 3166:
                        resword = &wordlist[1146];
                        goto compare;
                      case 3203:
                        resword = &wordlist[1147];
                        goto compare;
                      case 3223:
                        resword = &wordlist[1148];
                        goto compare;
                      case 3234:
                        resword = &wordlist[1149];
                        goto compare;
                      case 3248:
                        resword = &wordlist[1150];
                        goto compare;
                      case 3300:
                        resword = &wordlist[1151];
                        goto compare;
                      case 3424:
                        resword = &wordlist[1152];
                        goto compare;
                      case 3520:
                        resword = &wordlist[1153];
                        goto compare;
                      case 3953:
                        resword = &wordlist[1154];
                        goto compare;
                      case 4071:
                        resword = &wordlist[1155];
                        goto compare;
                      case 4103:
                        resword = &wordlist[1156];
                        goto compare;
                      case 4133:
                        resword = &wordlist[1157];
                        goto compare;
                      case 4234:
                        resword = &wordlist[1158];
                        goto compare;
                      case 4253:
                        resword = &wordlist[1159];
                        goto compare;
                      case 4811:
                        resword = &wordlist[1160];
                        goto compare;
                    }
                }
            }
          return 0;
        compare:
          {
            register const char *s = resword->extension;

            if (*str == *s && !strcmp (str + 1, s + 1))
              return resword;
          }
        }
    }
  return 0;
}
