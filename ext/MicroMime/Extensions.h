/* ANSI-C code produced by gperf version 3.0.4 */
/* Command-line: gperf -CD -t --output-file Extensions.h Extensions.gperf  */
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

#line 7 "Extensions.gperf"
struct ContentTypeExtension {
	const char * extension;
	const char * content_type;
};
/* maximum key range = 7801, duplicates = 0 */

#if (defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || defined(__cplusplus) || defined(__GNUC_STDC_INLINE__)
inline
#elif defined(__GNUC__)
__inline
#endif
static unsigned int
content_type_extension_hash (register const char *str, register unsigned int len)
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
         0, 7802, 7802, 7802, 7802,   30, 7802, 1120, 1137,   60,
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
  register int hval = len;

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

#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct ContentTypeExtension *
lookup_content_type_by_extension (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 1162,
      MIN_WORD_LENGTH = 1,
      MAX_WORD_LENGTH = 11,
      MIN_HASH_VALUE = 1,
      MAX_HASH_VALUE = 7801
    };

  static const struct ContentTypeExtension wordlist[] =
    {
#line 685 "Extensions.gperf"
      {"Z", "application/x-compressed"},
#line 552 "Extensions.gperf"
      {"stm", "application/vnd.sealedmedia.softseal.html"},
#line 1081 "Extensions.gperf"
      {"s", "text/x-asm"},
#line 1012 "Extensions.gperf"
      {"mts", "model/vnd.mts"},
#line 1058 "Extensions.gperf"
      {"sgm", "text/sgml"},
#line 888 "Extensions.gperf"
      {"dts", "audio/vnd.dts"},
#line 131 "Extensions.gperf"
      {"p8", "application/pkcs8"},
#line 455 "Extensions.gperf"
      {"mus", "application/vnd.musician"},
#line 995 "Extensions.gperf"
      {"pgm", "image/x-portable-graymap"},
#line 593 "Extensions.gperf"
      {"sus", "application/vnd.sus-calendar"},
#line 407 "Extensions.gperf"
      {"mfm", "application/vnd.mfmp"},
#line 586 "Extensions.gperf"
      {"std", "application/vnd.sun.xml.draw.template"},
#line 1093 "Extensions.gperf"
      {"p", "text/x-pascal"},
#line 572 "Extensions.gperf"
      {"sfs", "application/vnd.spotfire.sfs"},
#line 845 "Extensions.gperf"
      {"dtd", "text/xml"},
#line 505 "Extensions.gperf"
      {"mgp", "application/vnd.osgeo.mapguide.package"},
#line 720 "Extensions.gperf"
      {"pfm", "application/x-font-type1"},
#line 930 "Extensions.gperf"
      {"cgm", "image/cgm"},
#line 128 "Extensions.gperf"
      {"p7m", "application/pkcs7-mime"},
#line 594 "Extensions.gperf"
      {"susp", "application/vnd.sus-calendar"},
#line 99 "Extensions.gperf"
      {"pgp", "application/pgp-encrypted"},
#line 130 "Extensions.gperf"
      {"p7s", "application/pkcs7-signature"},
#line 108 "Extensions.gperf"
      {"dump", "application/octet-stream"},
#line 778 "Extensions.gperf"
      {"pt5", "application/x-pagemaker"},
#line 680 "Extensions.gperf"
      {"cfs", "application/x-cfs-compressed"},
#line 1088 "Extensions.gperf"
      {"f90", "text/x-fortran"},
#line 1039 "Extensions.gperf"
      {"c", "text/x-c"},
#line 701 "Extensions.gperf"
      {"fgd", "application/x-director"},
#line 584 "Extensions.gperf"
      {"stc", "application/vnd.sun.xml.calc.template"},
#line 1086 "Extensions.gperf"
      {"f", "text/x-fortran"},
#line 632 "Extensions.gperf"
      {"stf", "application/vnd.wt.stf"},
#line 692 "Extensions.gperf"
      {"dgc", "application/x-dgc-compressed"},
#line 1087 "Extensions.gperf"
      {"f77", "text/x-fortran"},
#line 302 "Extensions.gperf"
      {"fg5", "application/vnd.fujitsu.oasysgp"},
#line 795 "Extensions.gperf"
      {"sbs", "application/x-spss"},
#line 68 "Extensions.gperf"
      {"mads", "application/mads+xml"},
#line 406 "Extensions.gperf"
      {"mwf", "application/vnd.MFER"},
#line 1094 "Extensions.gperf"
      {"pas", "text/x-pascal"},
#line 792 "Extensions.gperf"
      {"swf", "application/x-shockwave-flash"},
#line 994 "Extensions.gperf"
      {"pbm", "image/x-portable-bitmap"},
#line 288 "Extensions.gperf"
      {"ftc", "application/vnd.fluxtime.clip"},
#line 928 "Extensions.gperf"
      {"dwf", "x-drawing/dwf"},
#line 129 "Extensions.gperf"
      {"p7c", "application/pkcs7-mime"},
#line 518 "Extensions.gperf"
      {"pbd", "application/vnd.powerbuilder6"},
#line 595 "Extensions.gperf"
      {"svd", "application/vnd.svd"},
#line 963 "Extensions.gperf"
      {"fbs", "image/vnd.fastbidsheet"},
#line 1001 "Extensions.gperf"
      {"xwd", "image/x-xwindowdump"},
#line 144 "Extensions.gperf"
      {"cw", "application/prs.cww"},
#line 674 "Extensions.gperf"
      {"cb7", "application/x-cbr"},
#line 344 "Extensions.gperf"
      {"sfd-hdstx", "application/vnd.hydrostatix.sof-data"},
#line 602 "Extensions.gperf"
      {"cap", "application/vnd.tcpdump.pcap"},
#line 402 "Extensions.gperf"
      {"lwp", "application/vnd.lotus-wordpro"},
#line 1033 "Extensions.gperf"
      {"htm", "text/html"},
#line 837 "Extensions.gperf"
      {"z8", "application/x-zmachine"},
#line 641 "Extensions.gperf"
      {"saf", "application/vnd.yamaha.smaf-audio"},
#line 574 "Extensions.gperf"
      {"sds", "application/vnd.stardivision.chart"},
#line 592 "Extensions.gperf"
      {"stw", "application/vnd.sun.xml.writer.template"},
#line 1052 "Extensions.gperf"
      {"md", "text/plain"},
#line 773 "Extensions.gperf"
      {"pac", "application/x-ns-proxy-autoconfig"},
#line 538 "Extensions.gperf"
      {"st", "application/vnd.sailingtracker.track"},
#line 609 "Extensions.gperf"
      {"ufd", "application/vnd.ufdl"},
#line 28 "Extensions.gperf"
      {"cu", "application/x-cu-seeme"},
#line 411 "Extensions.gperf"
      {"daf", "application/vnd.Mobius.DAF"},
#line 245 "Extensions.gperf"
      {"wbs", "application/vnd.criticaltools.wbs+xml"},
#line 297 "Extensions.gperf"
      {"ltf", "application/vnd.frogans.ltf"},
#line 834 "Extensions.gperf"
      {"z5", "application/x-zmachine"},
#line 998 "Extensions.gperf"
      {"xbm", "image/x-xbm"},
#line 270 "Extensions.gperf"
      {"svc", "application/vnd.dvb.service"},
#line 576 "Extensions.gperf"
      {"sdd", "application/vnd.stardivision.impress"},
#line 704 "Extensions.gperf"
      {"wad", "application/x-doom"},
#line 889 "Extensions.gperf"
      {"dtshd", "audio/vnd.dts.hd"},
#line 167 "Extensions.gperf"
      {"sdp", "application/sdp"},
#line 809 "Extensions.gperf"
      {"tfm", "application/x-tex-tfm"},
#line 304 "Extensions.gperf"
      {"ddd", "application/vnd.fujixerox.ddd"},
#line 909 "Extensions.gperf"
      {"caf", "audio/x-caf"},
#line 852 "Extensions.gperf"
      {"xvm", "application/xv+xml"},
#line 836 "Extensions.gperf"
      {"z7", "application/x-zmachine"},
#line 793 "Extensions.gperf"
      {"xap", "application/x-silverlight-app"},
#line 973 "Extensions.gperf"
      {"wbmp", "image/vnd.wap.wbmp"},
#line 439 "Extensions.gperf"
      {"stl", "application/vnd.ms-pki.stl"},
#line 551 "Extensions.gperf"
      {"stml", "application/vnd.sealedmedia.softseal.html"},
#line 306 "Extensions.gperf"
      {"xbd", "application/vnd.fujixerox.docuworks.binder"},
#line 205 "Extensions.gperf"
      {"xfdf", "application/vnd.adobe.xfdf"},
#line 566 "Extensions.gperf"
      {"twds", "application/vnd.SimTech-MindMapper"},
#line 580 "Extensions.gperf"
      {"sgl", "application/vnd.stardivision.writer-global"},
#line 170 "Extensions.gperf"
      {"sgml", "text/sgml"},
#line 565 "Extensions.gperf"
      {"twd", "application/vnd.SimTech-MindMapper"},
#line 394 "Extensions.gperf"
      {"lbd", "application/vnd.llamagraphics.life-balance.desktop"},
#line 835 "Extensions.gperf"
      {"z6", "application/x-zmachine"},
#line 881 "Extensions.gperf"
      {"s3m", "audio/s3m"},
#line 781 "Extensions.gperf"
      {"pfx", "application/x-pkcs12"},
#line 145 "Extensions.gperf"
      {"cww", "application/prs.cww"},
#line 1130 "Extensions.gperf"
      {"uvm", "video/vnd.dece.mobile"},
#line 1085 "Extensions.gperf"
      {"htc", "text/x-component"},
#line 573 "Extensions.gperf"
      {"sdc", "application/vnd.stardivision.calc"},
#line 1134 "Extensions.gperf"
      {"uvs", "video/vnd.dece.sd"},
#line 12 "Extensions.gperf"
      {"mdf", "application/x-msaccess"},
#line 891 "Extensions.gperf"
      {"lvp", "audio/vnd.lucent.voice"},
#line 387 "Extensions.gperf"
      {"sdf", "application/vnd.stardivision.math"},
#line 716 "Extensions.gperf"
      {"ttc", "application/x-font-ttf"},
#line 41 "Extensions.gperf"
      {"ttf", "application/x-font-ttf"},
#line 600 "Extensions.gperf"
      {"xdm", "application/vnd.syncml.dm+xml"},
#line 123 "Extensions.gperf"
      {"pdf", "application/pdf"},
#line 253 "Extensions.gperf"
      {"uvd", "application/vnd.dece.data"},
#line 1097 "Extensions.gperf"
      {"uu", "text/x-uuencode"},
#line 1132 "Extensions.gperf"
      {"uvp", "video/vnd.dece.pd"},
#line 512 "Extensions.gperf"
      {"paw", "application/vnd.pawaafile"},
#line 971 "Extensions.gperf"
      {"wdp", "image/vnd.ms-photo"},
#line 637 "Extensions.gperf"
      {"hvs", "application/vnd.yamaha.hv-script"},
#line 92 "Extensions.gperf"
      {"cdf", "application/x-netcdf"},
#line 283 "Extensions.gperf"
      {"fdf", "application/vnd.fdf"},
#line 204 "Extensions.gperf"
      {"xdp", "application/vnd.adobe.xdp+xml"},
#line 1102 "Extensions.gperf"
      {"3gp", "video/3gpp"},
#line 743 "Extensions.gperf"
      {"ltx", "application/x-latex"},
#line 636 "Extensions.gperf"
      {"hvd", "application/vnd.yamaha.hv-dic"},
#line 33 "Extensions.gperf"
      {"xdssc", "application/dssc+xml"},
#line 162 "Extensions.gperf"
      {"sbml", "application/sbml+xml"},
#line 638 "Extensions.gperf"
      {"hvp", "application/vnd.yamaha.hv-voice"},
#line 1103 "Extensions.gperf"
      {"3gpp", "video/3gpp"},
#line 420 "Extensions.gperf"
      {"xul", "application/vnd.mozilla.xul+xml"},
#line 254 "Extensions.gperf"
      {"uvf", "application/vnd.dece.data"},
#line 902 "Extensions.gperf"
      {"s1m", "audio/vnd.sealedmedia.softseal.mpeg"},
#line 684 "Extensions.gperf"
      {"z", "application/x-compressed"},
#line 1041 "Extensions.gperf"
      {"h", "text/x-c"},
#line 703 "Extensions.gperf"
      {"w3d", "application/x-director"},
#line 331 "Extensions.gperf"
      {"hbc", "application/vnd.hbci"},
#line 520 "Extensions.gperf"
      {"mgz", "application/vnd.proteus.magazine"},
#line 578 "Extensions.gperf"
      {"sdw", "application/vnd.stardivision.writer"},
#line 839 "Extensions.gperf"
      {"xdf", "application/xcap-diff+xml"},
#line 635 "Extensions.gperf"
      {"xfdl", "application/vnd.xfdl"},
#line 526 "Extensions.gperf"
      {"qwd", "application/vnd.Quark.QuarkXPress"},
#line 1024 "Extensions.gperf"
      {"x3d", "model/x3d+xml"},
#line 813 "Extensions.gperf"
      {"t", "text/troff"},
#line 803 "Extensions.gperf"
      {"sv4crc", "application/x-sv4crc"},
#line 547 "Extensions.gperf"
      {"s1p", "application/vnd.sealed.ppt"},
#line 1036 "Extensions.gperf"
      {"htx", "text/html"},
#line 913 "Extensions.gperf"
      {"wax", "audio/x-ms-wax"},
#line 217 "Extensions.gperf"
      {"m3u8", "application/vnd.apple.mpegurl"},
#line 127 "Extensions.gperf"
      {"p10", "application/pkcs10"},
#line 1034 "Extensions.gperf"
      {"htmlx", "text/html"},
#line 222 "Extensions.gperf"
      {"mpm", "application/vnd.blueice.multipass"},
#line 157 "Extensions.gperf"
      {"mft", "application/rpki-manifest"},
#line 610 "Extensions.gperf"
      {"ufdl", "application/vnd.ufdl"},
#line 1032 "Extensions.gperf"
      {"html", "text/html"},
#line 276 "Extensions.gperf"
      {"qam", "application/vnd.epson.quickanime"},
#line 625 "Extensions.gperf"
      {"wbxml", "application/vnd.wap.wbxml"},
#line 81 "Extensions.gperf"
      {"mods", "application/mods+xml"},
#line 796 "Extensions.gperf"
      {"sps", "application/x-spss"},
#line 1061 "Extensions.gperf"
      {"ttl", "text/turtle"},
#line 1170 "Extensions.gperf"
      {"wvx", "video/x-ms-wvx"},
#line 996 "Extensions.gperf"
      {"ppm", "image/x-portable-pixmap"},
#line 838 "Extensions.gperf"
      {"xaml", "application/xaml+xml"},
#line 922 "Extensions.gperf"
      {"cdx", "chemical/x-cdx"},
#line 443 "Extensions.gperf"
      {"ppsm", "application/vnd.ms-powerpoint.slideshow.macroEnabled.12"},
#line 142 "Extensions.gperf"
      {"pps", "application/vnd.ms-powerpoint"},
#line 757 "Extensions.gperf"
      {"com", "application/x-msdownload"},
#line 506 "Extensions.gperf"
      {"dp", "application/vnd.osgi.dp"},
#line 555 "Extensions.gperf"
      {"spd", "application/vnd.sealedmedia.softseal.pdf"},
#line 225 "Extensions.gperf"
      {"cdxml", "application/vnd.chemdraw+xml"},
#line 445 "Extensions.gperf"
      {"mpp", "application/vnd.ms-project"},
#line 993 "Extensions.gperf"
      {"pnm", "image/x-portable-anymap"},
#line 166 "Extensions.gperf"
      {"spp", "application/x-spss"},
#line 730 "Extensions.gperf"
      {"hdf", "application/x-hdf"},
#line 447 "Extensions.gperf"
      {"docm", "application/vnd.ms-word.document.macroEnabled.12"},
#line 247 "Extensions.gperf"
      {"ppd", "application/vnd.cups-ppd"},
#line 853 "Extensions.gperf"
      {"xvml", "application/xv+xml"},
#line 861 "Extensions.gperf"
      {"snd", "audio/basic"},
#line 976 "Extensions.gperf"
      {"3ds", "image/x-3ds"},
#line 534 "Extensions.gperf"
      {"cod", "application/vnd.rim.cod"},
#line 260 "Extensions.gperf"
      {"uvx", "application/vnd.dece.unspecified"},
#line 305 "Extensions.gperf"
      {"xdw", "application/vnd.fujixerox.docuworks"},
#line 543 "Extensions.gperf"
      {"sem", "application/vnd.sealed.eml"},
#line 171 "Extensions.gperf"
      {"soc", "application/sgml-open-catalog"},
#line 649 "Extensions.gperf"
      {"wgt", "application/widget"},
#line 1043 "Extensions.gperf"
      {"cpp", "text/x-c"},
#line 1045 "Extensions.gperf"
      {"dat", "text/plain"},
#line 419 "Extensions.gperf"
      {"mpc", "application/vnd.mophun.certificate"},
#line 87 "Extensions.gperf"
      {"doc", "text/plain"},
#line 783 "Extensions.gperf"
      {"spc", "application/x-pkcs7-certificates"},
#line 927 "Extensions.gperf"
      {"xyz", "x-chemical/x-xyz"},
#line 611 "Extensions.gperf"
      {"utz", "application/vnd.uiq.theme"},
#line 559 "Extensions.gperf"
      {"semd", "application/vnd.semd"},
#line 642 "Extensions.gperf"
      {"spf", "application/vnd.yamaha.smaf-phrase"},
#line 328 "Extensions.gperf"
      {"hal", "application/vnd.hal+xml"},
#line 678 "Extensions.gperf"
      {"cbz", "application/x-cbr"},
#line 451 "Extensions.gperf"
      {"wps", "application/vnd.ms-works"},
#line 1000 "Extensions.gperf"
      {"xpm", "image/x-xpixmap"},
#line 1126 "Extensions.gperf"
      {"qt", "video/quicktime"},
#line 438 "Extensions.gperf"
      {"cat", "application/vnd.ms-pki.seccat"},
#line 554 "Extensions.gperf"
      {"spdf", "application/vnd.sealedmedia.softseal.pdf"},
#line 651 "Extensions.gperf"
      {"wp", "application/x-wordperfect"},
#line 453 "Extensions.gperf"
      {"xps", "application/vnd.ms-xpsdocument"},
#line 715 "Extensions.gperf"
      {"snf", "application/x-font-snf"},
#line 912 "Extensions.gperf"
      {"m3u", "audio/x-mpegurl"},
#line 582 "Extensions.gperf"
      {"sm", "application/vnd.stepmania.stepchart"},
#line 677 "Extensions.gperf"
      {"cbt", "application/x-cbr"},
#line 630 "Extensions.gperf"
      {"wpd", "application/x-wordperfectd"},
#line 192 "Extensions.gperf"
      {"sms", "application/vnd.3gpp.sms"},
#line 846 "Extensions.gperf"
      {"xop", "application/xop+xml"},
#line 1153 "Extensions.gperf"
      {"uvu", "video/vnd.uvvu.mp4"},
#line 776 "Extensions.gperf"
      {"pm", "application/x-perl"},
#line 541 "Extensions.gperf"
      {"s1w", "application/vnd.sealed.doc"},
#line 357 "Extensions.gperf"
      {"igm", "application/vnd.insors.igm"},
#line 94 "Extensions.gperf"
      {"dms", "application/octet-stream"},
#line 86 "Extensions.gperf"
      {"mp4s", "application/mp4"},
#line 161 "Extensions.gperf"
      {"rtf", "text/x-rtf"},
#line 393 "Extensions.gperf"
      {"lasxml", "application/vnd.las.las+xml"},
#line 917 "Extensions.gperf"
      {"ram", "audio/x-pn-realaudio"},
#line 1139 "Extensions.gperf"
      {"fvt", "video/vnd.fvt"},
#line 1004 "Extensions.gperf"
      {"igs", "model/iges"},
#line 226 "Extensions.gperf"
      {"mmd", "application/vnd.chipnuts.karaoke-mmd"},
#line 149 "Extensions.gperf"
      {"qtl", "application/x-quicktimeplayer"},
#line 977 "Extensions.gperf"
      {"ras", "image/x-cmu-raster"},
#line 296 "Extensions.gperf"
      {"fnc", "application/vnd.frogans.fnc"},
#line 652 "Extensions.gperf"
      {"wp5", "application/wordperfect5.1"},
#line 362 "Extensions.gperf"
      {"qfx", "application/vnd.intu.qfx"},
#line 727 "Extensions.gperf"
      {"tgz", "application/x-gtar"},
#line 901 "Extensions.gperf"
      {"smp", "audio/vnd.sealedmedia.softseal.mpeg"},
#line 61 "Extensions.gperf"
      {"sj", "application/javascript"},
#line 561 "Extensions.gperf"
      {"ifm", "application/vnd.shana.informed.formdata"},
#line 560 "Extensions.gperf"
      {"semf", "application/vnd.semf"},
#line 292 "Extensions.gperf"
      {"fm", "application/x-maker"},
#line 562 "Extensions.gperf"
      {"itp", "application/vnd.shana.informed.formtemplate"},
#line 603 "Extensions.gperf"
      {"dmp", "application/vnd.tcpdump.pcap"},
#line 1047 "Extensions.gperf"
      {"def", "text/plain"},
#line 1113 "Extensions.gperf"
      {"mj2", "video/MJ2"},
#line 82 "Extensions.gperf"
      {"m21", "application/mp21"},
#line 523 "Extensions.gperf"
      {"ptid", "application/vnd.pvi.ptid1"},
#line 863 "Extensions.gperf"
      {"l16", "audio/L16"},
#line 1105 "Extensions.gperf"
      {"3gpp2", "video/3gpp2"},
#line 336 "Extensions.gperf"
      {"les", "application/vnd.hhe.lesson-player"},
#line 755 "Extensions.gperf"
      {"cmd", "application/x-msdownload"},
#line 1114 "Extensions.gperf"
      {"mjp2", "video/MJ2"},
#line 433 "Extensions.gperf"
      {"chm", "application/vnd.ms-htmlhelp"},
#line 777 "Extensions.gperf"
      {"pm5", "application/x-pagemaker"},
#line 340 "Extensions.gperf"
      {"hps", "application/vnd.hp-hps"},
#line 643 "Extensions.gperf"
      {"cmp", "application/vnd.yellowriver-custom-menu"},
#line 448 "Extensions.gperf"
      {"dotm", "application/vnd.ms-word.template.macroEnabled.12"},
#line 734 "Extensions.gperf"
      {"php", "application/x-httpd-php"},
#line 444 "Extensions.gperf"
      {"potm", "application/vnd.ms-powerpoint.template.macroEnabled.12"},
#line 763 "Extensions.gperf"
      {"m14", "application/x-msmediaview"},
#line 1147 "Extensions.gperf"
      {"s14", "video/vnd.sealed.mpeg4"},
#line 367 "Extensions.gperf"
      {"jam", "application/vnd.jam"},
#line 567 "Extensions.gperf"
      {"mmf", "application/vnd.smaf"},
#line 1168 "Extensions.gperf"
      {"wm", "video/x-ms-wm"},
#line 577 "Extensions.gperf"
      {"smf", "application/vnd.stardivision.math"},
#line 441 "Extensions.gperf"
      {"pptm", "application/vnd.ms-powerpoint.presentation.macroEnabled.12"},
#line 984 "Extensions.gperf"
      {"fh7", "image/x-freehand"},
#line 880 "Extensions.gperf"
      {"spx", "audio/ogg"},
#line 262 "Extensions.gperf"
      {"uvz", "application/vnd.dece.zip"},
#line 1015 "Extensions.gperf"
      {"x_t", "model/vnd.parasolid.transmit.text"},
#line 1128 "Extensions.gperf"
      {"uvh", "video/vnd.dece.hd"},
#line 1044 "Extensions.gperf"
      {"hpp", "text/plain"},
#line 43 "Extensions.gperf"
      {"woff", "application/font-woff"},
#line 921 "Extensions.gperf"
      {"xm", "audio/xm"},
#line 653 "Extensions.gperf"
      {"wp6", "application/x-wordperfect6.1"},
#line 646 "Extensions.gperf"
      {"zaz", "application/vnd.zzazz.deck+xml"},
#line 499 "Extensions.gperf"
      {"ppsx", "application/vnd.openxmlformats-officedocument.presentationml.slideshow"},
#line 1075 "Extensions.gperf"
      {"jad", "text/vnd.sun.j2me.app-descriptor"},
#line 45 "Extensions.gperf"
      {"spl", "application/x-futuresplash"},
#line 257 "Extensions.gperf"
      {"uvt", "application/vnd.dece.ttml+xml"},
#line 749 "Extensions.gperf"
      {"wmd", "application/x-ms-wmd"},
#line 172 "Extensions.gperf"
      {"shf", "application/shf+xml"},
#line 239 "Extensions.gperf"
      {"cmc", "application/vnd.cosmocaller"},
#line 983 "Extensions.gperf"
      {"fh5", "image/x-freehand"},
#line 729 "Extensions.gperf"
      {"tbz", "application/x-gtar"},
#line 503 "Extensions.gperf"
      {"docx", "application/vnd.openxmlformats-officedocument.wordprocessingml.document"},
#line 964 "Extensions.gperf"
      {"fpx", "image/vnd.fpx"},
#line 1057 "Extensions.gperf"
      {"rtx", "text/richtext"},
#line 84 "Extensions.gperf"
      {"mp4", "video/vnd.objectvideo"},
#line 80 "Extensions.gperf"
      {"mets", "application/mets+xml"},
#line 924 "Extensions.gperf"
      {"cmdf", "chemical/x-cmdf"},
#line 1145 "Extensions.gperf"
      {"s11", "video/vnd.sealed.mpeg1"},
#line 985 "Extensions.gperf"
      {"fhc", "image/x-freehand"},
#line 50 "Extensions.gperf"
      {"hep", "application/x-hep"},
#line 1072 "Extensions.gperf"
      {"3dml", "text/vnd.in3d.3dml"},
#line 355 "Extensions.gperf"
      {"ivp", "application/vnd.immervision-ivp"},
#line 830 "Extensions.gperf"
      {"z1", "application/x-zmachine"},
#line 75 "Extensions.gperf"
      {"mathml", "application/mathml+xml"},
#line 831 "Extensions.gperf"
      {"z2", "application/x-zmachine"},
#line 358 "Extensions.gperf"
      {"xpw", "application/vnd.intercon.formnet"},
#line 542 "Extensions.gperf"
      {"seml", "application/vnd.sealed.eml"},
#line 832 "Extensions.gperf"
      {"z3", "application/x-zmachine"},
#line 329 "Extensions.gperf"
      {"zmm", "application/vnd.HandHeld-Entertainment+xml"},
#line 767 "Extensions.gperf"
      {"wmf", "application/x-msmetafile"},
#line 818 "Extensions.gperf"
      {"ms", "text/troff"},
#line 631 "Extensions.gperf"
      {"wqd", "application/vnd.wqd"},
#line 289 "Extensions.gperf"
      {"frm", "application/x-maker"},
#line 804 "Extensions.gperf"
      {"t3", "application/x-t3vm-image"},
#line 553 "Extensions.gperf"
      {"s1h", "application/vnd.sealedmedia.softseal.html"},
#line 359 "Extensions.gperf"
      {"xpx", "application/vnd.intercon.formnet"},
#line 150 "Extensions.gperf"
      {"rdf", "application/rdf+xml"},
#line 1025 "Extensions.gperf"
      {"x3dz", "model/x3d+xml"},
#line 140 "Extensions.gperf"
      {"ps", "application/postscript"},
#line 495 "Extensions.gperf"
      {"dd2", "application/vnd.oma.dd2+xml"},
#line 527 "Extensions.gperf"
      {"qwt", "application/vnd.Quark.QuarkXPress"},
#line 452 "Extensions.gperf"
      {"wpl", "application/vnd.ms-wpl"},
#line 753 "Extensions.gperf"
      {"crd", "application/x-mscardfile"},
#line 790 "Extensions.gperf"
      {"sh", "application/x-sh"},
#line 521 "Extensions.gperf"
      {"qps", "application/vnd.publishare-delta-tree"},
#line 1079 "Extensions.gperf"
      {"wmls", "text/vnd.wap.wmlscript"},
#line 847 "Extensions.gperf"
      {"xpl", "application/xproc+xml"},
#line 248 "Extensions.gperf"
      {"curl", "text/vnd.curl"},
#line 789 "Extensions.gperf"
      {"rbw", "application/x-ruby"},
#line 1159 "Extensions.gperf"
      {"ivf", "video/x-ivf"},
#line 689 "Extensions.gperf"
      {"csm", "application/x-cu-seeme"},
#line 69 "Extensions.gperf"
      {"mrc", "application/marc"},
#line 409 "Extensions.gperf"
      {"igx", "application/vnd.micrografx.igx"},
#line 952 "Extensions.gperf"
      {"psd", "image/vnd.adobe.photoshop"},
#line 820 "Extensions.gperf"
      {"src", "application/x-wais-source"},
#line 1111 "Extensions.gperf"
      {"h264", "video/H264"},
#line 1031 "Extensions.gperf"
      {"css", "text/css"},
#line 988 "Extensions.gperf"
      {"psp", "image/x-paintshoppro"},
#line 614 "Extensions.gperf"
      {"uoml", "application/vnd.uoml+xml"},
#line 508 "Extensions.gperf"
      {"prc", "application/x-mobipocket-ebook"},
#line 246 "Extensions.gperf"
      {"pml", "application/vnd.ctc-posml"},
#line 25 "Extensions.gperf"
      {"cdmid", "application/cdmi-domain"},
#line 354 "Extensions.gperf"
      {"igl", "application/vnd.igloader"},
#line 978 "Extensions.gperf"
      {"cmx", "image/x-cmx"},
#line 126 "Extensions.gperf"
      {"prf", "application/pics-rules"},
#line 532 "Extensions.gperf"
      {"musicxml", "application/vnd.recordare.musicxml+xml"},
#line 627 "Extensions.gperf"
      {"wmlsc", "application/vnd.wap.wmlscriptc"},
#line 981 "Extensions.gperf"
      {"fh", "image/x-freehand"},
#line 435 "Extensions.gperf"
      {"lrm", "application/vnd.ms-lrm"},
#line 237 "Extensions.gperf"
      {"csp", "application/vnd.commonspace"},
#line 89 "Extensions.gperf"
      {"wrd", "application/x-msword"},
#line 446 "Extensions.gperf"
      {"mpt", "application/vnd.ms-project"},
#line 88 "Extensions.gperf"
      {"dot", "application/x-word"},
#line 925 "Extensions.gperf"
      {"cml", "chemical/x-cml"},
#line 143 "Extensions.gperf"
      {"pot", "application/vnd.ms-powerpoint"},
#line 275 "Extensions.gperf"
      {"msf", "application/vnd.epson.msf"},
#line 24 "Extensions.gperf"
      {"cdmic", "application/cdmi-container"},
#line 278 "Extensions.gperf"
      {"ssf", "application/vnd.epson.ssf"},
#line 1056 "Extensions.gperf"
      {"dsc", "text/prs.lines.tag"},
#line 717 "Extensions.gperf"
      {"afm", "application/x-font-type1"},
#line 141 "Extensions.gperf"
      {"ppt", "application/vnd.ms-powerpoint"},
#line 32 "Extensions.gperf"
      {"dssc", "application/dssc+der"},
#line 504 "Extensions.gperf"
      {"dotx", "application/vnd.openxmlformats-officedocument.wordprocessingml.template"},
#line 598 "Extensions.gperf"
      {"xsm", "application/vnd.syncml+xml"},
#line 546 "Extensions.gperf"
      {"sppt", "application/vnd.sealed.ppt"},
#line 500 "Extensions.gperf"
      {"potx", "application/vnd.openxmlformats-officedocument.presentationml.template"},
#line 713 "Extensions.gperf"
      {"psf", "application/x-font-linux-psf"},
#line 626 "Extensions.gperf"
      {"wmlc", "application/vnd.wap.wmlc"},
#line 1104 "Extensions.gperf"
      {"3g2", "video/3gpp2"},
#line 798 "Extensions.gperf"
      {"sql", "application/x-sql"},
#line 64 "Extensions.gperf"
      {"lostxml", "application/lost+xml"},
#line 1109 "Extensions.gperf"
      {"h261", "video/H261"},
#line 1169 "Extensions.gperf"
      {"wmx", "video/x-ms-wmx"},
#line 497 "Extensions.gperf"
      {"pptx", "application/vnd.openxmlformats-officedocument.presentationml.presentation"},
#line 326 "Extensions.gperf"
      {"tpl", "application/vnd.groove-tool-template"},
#line 67 "Extensions.gperf"
      {"cpt", "application/x-mac-compactpro"},
#line 298 "Extensions.gperf"
      {"fsc", "application/vnd.fsc.weblaunch"},
#line 1007 "Extensions.gperf"
      {"mesh", "model/mesh"},
#line 347 "Extensions.gperf"
      {"afp", "application/vnd.ibm.modcap"},
#line 760 "Extensions.gperf"
      {"vbs", "application/x-msdownload"},
#line 1078 "Extensions.gperf"
      {"wml", "text/vnd.wap.wml"},
#line 44 "Extensions.gperf"
      {"woff2", "application/font-woff"},
#line 982 "Extensions.gperf"
      {"fh4", "image/x-freehand"},
#line 843 "Extensions.gperf"
      {"xml", "text/xml"},
#line 771 "Extensions.gperf"
      {"trm", "application/x-msterminal"},
#line 198 "Extensions.gperf"
      {"atc", "application/vnd.acucorp"},
#line 1035 "Extensions.gperf"
      {"shtml", "text/html"},
#line 919 "Extensions.gperf"
      {"rpm", "audio/x-pn-realaudio-plugin"},
#line 77 "Extensions.gperf"
      {"mscml", "application/mediaservercontrol+xml"},
#line 1107 "Extensions.gperf"
      {"dv", "video/x-dv"},
#line 808 "Extensions.gperf"
      {"tex", "application/x-tex"},
#line 72 "Extensions.gperf"
      {"ma", "application/mathematica"},
#line 665 "Extensions.gperf"
      {"aam", "application/x-authorware-map"},
#line 110 "Extensions.gperf"
      {"lrf", "application/octet-stream"},
#line 473 "Extensions.gperf"
      {"rpss", "application/vnd.nokia.radio-presets"},
#line 732 "Extensions.gperf"
      {"phtml", "application/x-httpd-php"},
#line 666 "Extensions.gperf"
      {"aas", "application/x-authorware-seg"},
#line 177 "Extensions.gperf"
      {"srx", "application/sparql-results+xml"},
#line 664 "Extensions.gperf"
      {"x32", "application/x-authorware-bin"},
#line 545 "Extensions.gperf"
      {"smh", "application/vnd.sealed.mht"},
#line 229 "Extensions.gperf"
      {"rp9", "application/vnd.cloanto.rp9"},
#line 73 "Extensions.gperf"
      {"mb", "application/mathematica"},
#line 1148 "Extensions.gperf"
      {"sswf", "video/vnd.sealed.swf"},
#line 17 "Extensions.gperf"
      {"aw", "application/applixware"},
#line 1149 "Extensions.gperf"
      {"ssw", "video/vnd.sealed.swf"},
#line 1115 "Extensions.gperf"
      {"ts", "video/MP2T"},
#line 780 "Extensions.gperf"
      {"p12", "application/x-pkcs12"},
#line 267 "Extensions.gperf"
      {"dfac", "application/vnd.dreamfactory"},
#line 762 "Extensions.gperf"
      {"m13", "application/x-msmediaview"},
#line 146 "Extensions.gperf"
      {"rnd", "application/prs.nprend"},
#line 513 "Extensions.gperf"
      {"str", "application/vnd.pg.format"},
#line 1042 "Extensions.gperf"
      {"hh", "text/x-c"},
#line 683 "Extensions.gperf"
      {"crx", "application/x-chrome-extension"},
#line 70 "Extensions.gperf"
      {"mrcx", "application/marcxml+xml"},
#line 662 "Extensions.gperf"
      {"u32", "application/x-authorware-bin"},
#line 849 "Extensions.gperf"
      {"xspf", "application/xspf+xml"},
#line 186 "Extensions.gperf"
      {"tsd", "application/timestamped-data"},
#line 939 "Extensions.gperf"
      {"jpm", "video/jpm"},
#line 1064 "Extensions.gperf"
      {"urls", "text/uri-list"},
#line 707 "Extensions.gperf"
      {"res", "application/x-dtbresource+xml"},
#line 860 "Extensions.gperf"
      {"au", "audio/basic"},
#line 356 "Extensions.gperf"
      {"ivu", "application/vnd.immervision-ivu"},
#line 415 "Extensions.gperf"
      {"msl", "application/vnd.Mobius.MSL"},
#line 293 "Extensions.gperf"
      {"fb", "application/x-maker"},
#line 134 "Extensions.gperf"
      {"crl", "application/pkix-crl"},
#line 596 "Extensions.gperf"
      {"sis", "application/vnd.symbian.install"},
#line 182 "Extensions.gperf"
      {"ssml", "application/ssml+xml"},
#line 873 "Extensions.gperf"
      {"mp2", "video/mpeg"},
#line 251 "Extensions.gperf"
      {"dart", "application/vnd.dart"},
#line 633 "Extensions.gperf"
      {"wv", "application/vnd.wv.csp+wbxml"},
#line 180 "Extensions.gperf"
      {"sru", "application/sru+xml"},
#line 412 "Extensions.gperf"
      {"dis", "application/vnd.Mobius.DIS"},
#line 733 "Extensions.gperf"
      {"pht", "application/x-httpd-php"},
#line 436 "Extensions.gperf"
      {"thmx", "application/vnd.ms-officetheme"},
#line 905 "Extensions.gperf"
      {"aac", "audio/x-aac"},
#line 181 "Extensions.gperf"
      {"ssdl", "application/ssdl+xml"},
#line 42 "Extensions.gperf"
      {"pfr", "application/font-tdpfr"},
#line 865 "Extensions.gperf"
      {"mid", "audio/x-midi"},
#line 224 "Extensions.gperf"
      {"rep", "application/vnd.businessobjects"},
#line 987 "Extensions.gperf"
      {"sid", "image/x-mrsid-image"},
#line 842 "Extensions.gperf"
      {"xhtml", "application/xhtml+xml"},
#line 874 "Extensions.gperf"
      {"mp3", "audio/mpeg"},
#line 152 "Extensions.gperf"
      {"rnc", "application/relax-ng-compact-syntax"},
#line 784 "Extensions.gperf"
      {"p7r", "application/x-pkcs7-certreqresp"},
#line 599 "Extensions.gperf"
      {"bdm", "application/vnd.syncml.dm+wbxml"},
#line 396 "Extensions.gperf"
      {"123", "application/vnd.lotus-1-2-3"},
#line 263 "Extensions.gperf"
      {"fe_launch", "application/vnd.denovo.fcselayout-link"},
#line 535 "Extensions.gperf"
      {"rm", "application/vnd.rn-realmedia"},
#line 750 "Extensions.gperf"
      {"wmz", "application/x-msmetafile"},
#line 926 "Extensions.gperf"
      {"csml", "chemical/x-csml"},
#line 66 "Extensions.gperf"
      {"hqx", "application/mac-binhex40"},
#line 606 "Extensions.gperf"
      {"tpt", "application/vnd.trid.tpt"},
#line 368 "Extensions.gperf"
      {"rms", "application/vnd.jcp.javame.midlet-rms"},
#line 215 "Extensions.gperf"
      {"atx", "application/vnd.antix.game-component"},
#line 815 "Extensions.gperf"
      {"roff", "text/troff"},
#line 1018 "Extensions.gperf"
      {"wrl", "x-world/x-vrml"},
#line 857 "Extensions.gperf"
      {"adp", "audio/adpcm"},
#line 1131 "Extensions.gperf"
      {"uvvm", "video/vnd.dece.mobile"},
#line 252 "Extensions.gperf"
      {"rdz", "application/vnd.data-vision.rdz"},
#line 1152 "Extensions.gperf"
      {"s1q", "video/vnd.sealedmedia.softseal.mov"},
#line 1135 "Extensions.gperf"
      {"uvvs", "video/vnd.dece.sd"},
#line 111 "Extensions.gperf"
      {"mar", "application/octet-stream"},
#line 83 "Extensions.gperf"
      {"mp21", "application/mp21"},
#line 728 "Extensions.gperf"
      {"tbz2", "application/x-gtar"},
#line 1017 "Extensions.gperf"
      {"vtu", "model/vnd.vtu"},
#line 918 "Extensions.gperf"
      {"rmp", "audio/x-pn-realaudio-plugin"},
#line 623 "Extensions.gperf"
      {"sic", "application/vnd.wap.sic"},
#line 942 "Extensions.gperf"
      {"jpf", "image/jpx"},
#line 410 "Extensions.gperf"
      {"mif", "application/x-mif"},
#line 751 "Extensions.gperf"
      {"xbap", "application/x-ms-xbap"},
#line 255 "Extensions.gperf"
      {"uvvd", "application/vnd.dece.data"},
#line 1083 "Extensions.gperf"
      {"dic", "text/x-c"},
#line 1133 "Extensions.gperf"
      {"uvvp", "video/vnd.dece.pd"},
#line 992 "Extensions.gperf"
      {"pic", "image/x-pict"},
#line 489 "Extensions.gperf"
      {"ots", "application/vnd.oasis.opendocument.spreadsheet-template"},
#line 841 "Extensions.gperf"
      {"xht", "application/xhtml+xml"},
#line 844 "Extensions.gperf"
      {"xsl", "application/xml"},
#line 389 "Extensions.gperf"
      {"skm", "application/x-koan"},
#line 249 "Extensions.gperf"
      {"car", "application/vnd.curl.car"},
#line 654 "Extensions.gperf"
      {"wsdl", "application/wsdl+xml"},
#line 1161 "Extensions.gperf"
      {"mks", "video/x-matroska"},
#line 759 "Extensions.gperf"
      {"ps1", "application/x-msdownload"},
#line 801 "Extensions.gperf"
      {"srt", "application/x-subrip"},
#line 1110 "Extensions.gperf"
      {"h263", "video/H263"},
#line 676 "Extensions.gperf"
      {"cbr", "application/x-cbr"},
#line 165 "Extensions.gperf"
      {"spq", "application/scvp-vp-request"},
#line 711 "Extensions.gperf"
      {"bdf", "application/x-font-bdf"},
#line 923 "Extensions.gperf"
      {"cif", "chemical/x-cif"},
#line 487 "Extensions.gperf"
      {"otp", "application/vnd.oasis.opendocument.presentation-template"},
#line 434 "Extensions.gperf"
      {"ims", "application/vnd.ms-ims"},
#line 958 "Extensions.gperf"
      {"djvu", "image/vnd.djvu"},
#line 658 "Extensions.gperf"
      {"abw", "application/x-abiword"},
#line 388 "Extensions.gperf"
      {"skd", "application/x-koan"},
#line 1006 "Extensions.gperf"
      {"msh", "model/mesh"},
#line 588 "Extensions.gperf"
      {"sti", "application/vnd.sun.xml.impress.template"},
#line 390 "Extensions.gperf"
      {"skp", "application/x-koan"},
#line 230 "Extensions.gperf"
      {"c4d", "application/vnd.clonk.c4group"},
#line 27 "Extensions.gperf"
      {"cdmiq", "application/cdmi-queue"},
#line 946 "Extensions.gperf"
      {"sgi", "image/sgi"},
#line 334 "Extensions.gperf"
      {"pkd", "application/vnd.hbci"},
#line 256 "Extensions.gperf"
      {"uvvf", "application/vnd.dece.data"},
#line 233 "Extensions.gperf"
      {"c4p", "application/vnd.clonk.c4group"},
#line 522 "Extensions.gperf"
      {"pti", "application/vnd.pvi.ptid1"},
#line 1117 "Extensions.gperf"
      {"f4p", "video/mp4"},
#line 824 "Extensions.gperf"
      {"crt", "application/x-x509-ca-cert"},
#line 544 "Extensions.gperf"
      {"smht", "application/vnd.sealed.mht"},
#line 196 "Extensions.gperf"
      {"imp", "application/vnd.accpac.simply.imp"},
#line 933 "Extensions.gperf"
      {"ief", "image/ief"},
#line 381 "Extensions.gperf"
      {"kwd", "application/vnd.kde.kword"},
#line 742 "Extensions.gperf"
      {"jnlp", "application/x-java-jnlp-file"},
#line 219 "Extensions.gperf"
      {"swi", "application/vnd.aristanetworks.swi"},
#line 900 "Extensions.gperf"
      {"smp3", "audio/vnd.sealedmedia.softseal.mpeg"},
#line 634 "Extensions.gperf"
      {"xar", "application/vnd.xara"},
#line 478 "Extensions.gperf"
      {"otc", "application/vnd.oasis.opendocument.chart-template"},
#line 688 "Extensions.gperf"
      {"csh", "application/x-csh"},
#line 648 "Extensions.gperf"
      {"wif", "application/watcherinfo+xml"},
#line 214 "Extensions.gperf"
      {"fti", "application/vnd.anser-web-funds-transfer-initiation"},
#line 40 "Extensions.gperf"
      {"otf", "application/x-font-otf"},
#line 974 "Extensions.gperf"
      {"xif", "image/vnd.xiff"},
#line 325 "Extensions.gperf"
      {"gtm", "application/vnd.groove-tool-message"},
#line 299 "Extensions.gperf"
      {"oas", "application/vnd.fujitsu.oasys"},
#line 697 "Extensions.gperf"
      {"cst", "application/x-director"},
#line 965 "Extensions.gperf"
      {"fst", "image/vnd.fst"},
#line 941 "Extensions.gperf"
      {"jpx", "image/jpx"},
#line 1016 "Extensions.gperf"
      {"xmt_txt", "model/vnd.parasolid.transmit.text"},
#line 65 "Extensions.gperf"
      {"wks", "application/x-lotus-123"},
#line 231 "Extensions.gperf"
      {"c4f", "application/vnd.clonk.c4group"},
#line 856 "Extensions.gperf"
      {"zip", "application/zip"},
#line 597 "Extensions.gperf"
      {"sisx", "application/vnd.symbian.install"},
#line 1054 "Extensions.gperf"
      {"text", "text/plain"},
#line 339 "Extensions.gperf"
      {"hpid", "application/vnd.hp-hpid"},
#line 752 "Extensions.gperf"
      {"obd", "application/x-msbinder"},
#line 882 "Extensions.gperf"
      {"sil", "audio/silk"},
#line 155 "Extensions.gperf"
      {"rs", "application/rls-services+xml"},
#line 160 "Extensions.gperf"
      {"rss", "application/rss+xml"},
#line 442 "Extensions.gperf"
      {"sldm", "application/vnd.ms-powerpoint.slide.macroEnabled.12"},
#line 29 "Extensions.gperf"
      {"davmount", "application/davmount+xml"},
#line 137 "Extensions.gperf"
      {"pls", "application/pls+xml"},
#line 265 "Extensions.gperf"
      {"mlp", "application/vnd.dolby.mlp"},
#line 159 "Extensions.gperf"
      {"rsd", "application/rsd+xml"},
#line 806 "Extensions.gperf"
      {"tar", "application/x-tar"},
#line 695 "Extensions.gperf"
      {"@dxr", "application/x-director"},
#line 421 "Extensions.gperf"
      {"cil", "application/vnd.ms-artgalry"},
#line 350 "Extensions.gperf"
      {"irm", "application/vnd.ibm.rights-management"},
#line 259 "Extensions.gperf"
      {"uvvx", "application/vnd.dece.unspecified"},
#line 440 "Extensions.gperf"
      {"ppam", "application/vnd.ms-powerpoint.addin.macroEnabled.12"},
#line 708 "Extensions.gperf"
      {"dvi", "application/x-dvi"},
#line 491 "Extensions.gperf"
      {"odm", "application/vnd.oasis.opendocument.text-master"},
#line 951 "Extensions.gperf"
      {"tif", "image/tiff"},
#line 488 "Extensions.gperf"
      {"ods", "application/vnd.oasis.opendocument.spreadsheet"},
#line 986 "Extensions.gperf"
      {"3fr", "image/x-hasselblad-3fr"},
#line 805 "Extensions.gperf"
      {"gam", "application/x-tads"},
#line 570 "Extensions.gperf"
      {"sdkm", "application/vnd.solent.sdkm+xml"},
#line 335 "Extensions.gperf"
      {"bpd", "application/vnd.hbci"},
#line 516 "Extensions.gperf"
      {"wg", "application/vnd.pmi.widget"},
#line 754 "Extensions.gperf"
      {"clp", "application/x-msclip"},
#line 60 "Extensions.gperf"
      {"js", "text/javascript"},
#line 295 "Extensions.gperf"
      {"fbdoc", "application/x-maker"},
#line 364 "Extensions.gperf"
      {"irp", "application/vnd.irepository.package+xml"},
#line 624 "Extensions.gperf"
      {"slc", "application/vnd.wap.slc"},
#line 589 "Extensions.gperf"
      {"sxm", "application/vnd.sun.xml.math"},
#line 486 "Extensions.gperf"
      {"odp", "application/vnd.oasis.opendocument.presentation"},
#line 607 "Extensions.gperf"
      {"mxs", "application/vnd.triscape.mxs"},
#line 115 "Extensions.gperf"
      {"ogx", "application/ogg"},
#line 970 "Extensions.gperf"
      {"mdi", "image/vnd.ms-modi"},
#line 472 "Extensions.gperf"
      {"rpst", "application/vnd.nokia.radio-preset"},
#line 943 "Extensions.gperf"
      {"ktx", "image/ktx"},
#line 416 "Extensions.gperf"
      {"plc", "application/vnd.Mobius.PLC"},
#line 569 "Extensions.gperf"
      {"sdkd", "application/vnd.solent.sdkm+xml"},
#line 426 "Extensions.gperf"
      {"xlm", "application/vnd.ms-excel"},
#line 950 "Extensions.gperf"
      {"tiff", "image/tiff"},
#line 517 "Extensions.gperf"
      {"plf", "application/vnd.pocketlearn"},
#line 430 "Extensions.gperf"
      {"xlsm", "application/vnd.ms-excel.sheet.macroEnabled.12"},
#line 581 "Extensions.gperf"
      {"smzip", "application/vnd.stepmania.package"},
#line 37 "Extensions.gperf"
      {"xls", "application/vnd.ms-excel"},
#line 756 "Extensions.gperf"
      {"bat", "application/x-msdownload"},
#line 348 "Extensions.gperf"
      {"list3820", "application/vnd.ibm.modcap"},
#line 585 "Extensions.gperf"
      {"sxd", "application/vnd.sun.xml.draw"},
#line 1077 "Extensions.gperf"
      {"sl", "text/vnd.wap.sl"},
#line 1154 "Extensions.gperf"
      {"uvvu", "video/vnd.uvvu.mp4"},
#line 474 "Extensions.gperf"
      {"edm", "application/vnd.novadigm.EDM"},
#line 307 "Extensions.gperf"
      {"fzs", "application/vnd.fuzzysheet"},
#line 1023 "Extensions.gperf"
      {"x3dvz", "model/x3d+vrml"},
#line 1106 "Extensions.gperf"
      {"dl", "video/x-dl"},
#line 221 "Extensions.gperf"
      {"aep", "application/vnd.audiograph"},
#line 779 "Extensions.gperf"
      {"pl", "application/x-perl"},
#line 571 "Extensions.gperf"
      {"dxp", "application/vnd.spotfire.dxp"},
#line 530 "Extensions.gperf"
      {"bed", "application/vnd.realvnc.bed"},
#line 1141 "Extensions.gperf"
      {"m4u", "video/vnd.mpegurl"},
#line 185 "Extensions.gperf"
      {"tfi", "application/thraud+xml"},
#line 477 "Extensions.gperf"
      {"odc", "application/vnd.oasis.opendocument.chart-template"},
#line 175 "Extensions.gperf"
      {"smil", "application/smil+xml"},
#line 539 "Extensions.gperf"
      {"sdoc", "application/vnd.sealed.doc"},
#line 480 "Extensions.gperf"
      {"odf", "application/vnd.oasis.opendocument.formula-template"},
#line 862 "Extensions.gperf"
      {"evc", "audio/EVRC"},
#line 321 "Extensions.gperf"
      {"gac", "application/vnd.groove-account"},
#line 1095 "Extensions.gperf"
      {"etx", "text/x-setext"},
#line 349 "Extensions.gperf"
      {"listafp", "application/vnd.ibm.modcap"},
#line 848 "Extensions.gperf"
      {"xslt", "application/xslt+xml"},
#line 814 "Extensions.gperf"
      {"tr", "text/troff"},
#line 1011 "Extensions.gperf"
      {"gtw", "model/vnd.gtw"},
#line 731 "Extensions.gperf"
      {"rhtml", "application/x-html+ruby"},
#line 799 "Extensions.gperf"
      {"sit", "application/x-stuffit"},
#line 202 "Extensions.gperf"
      {"fxp", "application/vnd.adobe.fxp"},
#line 833 "Extensions.gperf"
      {"z4", "application/x-zmachine"},
#line 107 "Extensions.gperf"
      {"distz", "application/octet-stream"},
#line 583 "Extensions.gperf"
      {"sxc", "application/vnd.sun.xml.calc"},
#line 916 "Extensions.gperf"
      {"ra", "audio/x-realaudio"},
#line 90 "Extensions.gperf"
      {"mxf", "application/mxf"},
#line 893 "Extensions.gperf"
      {"mxmf", "audio/vnd.nokia.mobile-xmf"},
#line 234 "Extensions.gperf"
      {"c4u", "application/vnd.clonk.c4group"},
#line 106 "Extensions.gperf"
      {"dist", "application/octet-stream"},
#line 954 "Extensions.gperf"
      {"uvi", "image/vnd.dece.graphic"},
#line 800 "Extensions.gperf"
      {"sitx", "application/x-stuffitx"},
#line 1021 "Extensions.gperf"
      {"x3dbz", "model/x3d+binary"},
#line 663 "Extensions.gperf"
      {"vox", "application/x-authorware-bin"},
#line 425 "Extensions.gperf"
      {"xlc", "application/vnd.ms-excel"},
#line 76 "Extensions.gperf"
      {"mbox", "application/mbox"},
#line 962 "Extensions.gperf"
      {"dxf", "image/vnd.dxf"},
#line 1160 "Extensions.gperf"
      {"mk3d", "video/x-matroska"},
#line 827 "Extensions.gperf"
      {"xlf", "application/x-xliff+xml"},
#line 788 "Extensions.gperf"
      {"rb", "application/x-ruby"},
#line 929 "Extensions.gperf"
      {"bmp", "image/x-ms-bmp"},
#line 1063 "Extensions.gperf"
      {"uris", "text/uri-list"},
#line 401 "Extensions.gperf"
      {"scm", "application/vnd.lotus-screencam"},
#line 1089 "Extensions.gperf"
      {"for", "text/x-fortran"},
#line 904 "Extensions.gperf"
      {"webm", "video/webm"},
#line 261 "Extensions.gperf"
      {"uvvz", "application/vnd.dece.zip"},
#line 164 "Extensions.gperf"
      {"scs", "application/scvp-cv-response"},
#line 1129 "Extensions.gperf"
      {"uvvh", "video/vnd.dece.hd"},
#line 30 "Extensions.gperf"
      {"dcm", "application/dicom"},
#line 548 "Extensions.gperf"
      {"sxls", "application/vnd.sealed.xls"},
#line 176 "Extensions.gperf"
      {"rq", "application/sparql-query"},
#line 650 "Extensions.gperf"
      {"hlp", "text/plain"},
#line 71 "Extensions.gperf"
      {"mcd", "application/x-mathcad"},
#line 258 "Extensions.gperf"
      {"uvvt", "application/vnd.dece.ttml+xml"},
#line 770 "Extensions.gperf"
      {"scd", "application/x-msschedule"},
#line 498 "Extensions.gperf"
      {"sldx", "application/vnd.openxmlformats-officedocument.presentationml.slide"},
#line 58 "Extensions.gperf"
      {"ser", "application/x-java-serialized-object"},
#line 376 "Extensions.gperf"
      {"flw", "application/vnd.kde.kivio"},
#line 975 "Extensions.gperf"
      {"webp", "image/webp"},
#line 737 "Extensions.gperf"
      {"install", "application/x-install-instructions"},
#line 351 "Extensions.gperf"
      {"sc", "application/vnd.ibm.secure-container"},
#line 787 "Extensions.gperf"
      {"ris", "application/x-research-info-systems"},
#line 493 "Extensions.gperf"
      {"oth", "application/vnd.oasis.opendocument.text-web"},
#line 825 "Extensions.gperf"
      {"der", "application/x-x509-ca-cert"},
#line 519 "Extensions.gperf"
      {"box", "application/vnd.previewsystems.box"},
#line 102 "Extensions.gperf"
      {"dll", "application/x-msdownload"},
#line 330 "Extensions.gperf"
      {"hbci", "application/vnd.hbci"},
#line 785 "Extensions.gperf"
      {"py", "application/x-python"},
#line 366 "Extensions.gperf"
      {"fcs", "application/vnd.isac.fcs"},
#line 372 "Extensions.gperf"
      {"ktz", "application/vnd.kahootz"},
#line 1070 "Extensions.gperf"
      {"flx", "text/vnd.fmi.flexstor"},
#line 492 "Extensions.gperf"
      {"ott", "application/vnd.oasis.opendocument.text-template"},
#line 466 "Extensions.gperf"
      {"ntf", "application/vnd.nitf"},
#line 657 "Extensions.gperf"
      {"7z", "application/x-7z-compressed"},
#line 945 "Extensions.gperf"
      {"btif", "image/prs.btif"},
#line 235 "Extensions.gperf"
      {"c11amc", "application/vnd.cluetrust.cartomobile-config"},
#line 899 "Extensions.gperf"
      {"rip", "audio/vnd.rip"},
#line 133 "Extensions.gperf"
      {"cer", "application/pkix-cert"},
#line 365 "Extensions.gperf"
      {"xpr", "application/vnd.is-xpr"},
#line 391 "Extensions.gperf"
      {"skt", "application/x-koan"},
#line 101 "Extensions.gperf"
      {"so", "application/octet-stream"},
#line 590 "Extensions.gperf"
      {"sxw", "application/vnd.sun.xml.writer"},
#line 1040 "Extensions.gperf"
      {"cc", "text/x-c"},
#line 1049 "Extensions.gperf"
      {"list", "text/plain"},
#line 374 "Extensions.gperf"
      {"chrt", "application/vnd.kde.kchart"},
#line 966 "Extensions.gperf"
      {"mmr", "image/vnd.fujixerox.edmics-mmr"},
#line 332 "Extensions.gperf"
      {"kom", "application/vnd.hbci"},
#line 449 "Extensions.gperf"
      {"wcm", "application/vnd.ms-works"},
#line 427 "Extensions.gperf"
      {"xlw", "application/vnd.ms-excel"},
#line 620 "Extensions.gperf"
      {"vss", "application/vnd.visio"},
#line 431 "Extensions.gperf"
      {"xltm", "application/vnd.ms-excel.template.macroEnabled.12"},
#line 382 "Extensions.gperf"
      {"kwt", "application/vnd.kde.kword"},
#line 714 "Extensions.gperf"
      {"pcf", "application/x-font-pcf"},
#line 308 "Extensions.gperf"
      {"txd", "application/vnd.genomatix.tuxedo"},
#line 786 "Extensions.gperf"
      {"rar", "application/x-rar-compressed"},
#line 629 "Extensions.gperf"
      {"nbp", "application/vnd.wolfram.player"},
#line 934 "Extensions.gperf"
      {"jp2", "image/jp2"},
#line 531 "Extensions.gperf"
      {"mxl", "application/vnd.recordare.musicxml"},
#line 850 "Extensions.gperf"
      {"mxml", "application/xv+xml"},
#line 1076 "Extensions.gperf"
      {"si", "text/vnd.wap.si"},
#line 617 "Extensions.gperf"
      {"vsd", "application/vnd.visio"},
#line 501 "Extensions.gperf"
      {"xlsx", "application/vnd.openxmlformats-officedocument.spreadsheetml.sheet"},
#line 549 "Extensions.gperf"
      {"sxl", "application/vnd.sealed.xls"},
#line 1074 "Extensions.gperf"
      {"ccc", "text/vnd.net2phone.commcenter.command"},
#line 151 "Extensions.gperf"
      {"rif", "application/reginfo+xml"},
#line 475 "Extensions.gperf"
      {"edx", "application/vnd.novadigm.EDX"},
#line 122 "Extensions.gperf"
      {"xer", "application/patch-ops-error+xml"},
#line 1080 "Extensions.gperf"
      {"asm", "text/x-asm"},
#line 1082 "Extensions.gperf"
      {"cxx", "text/x-c"},
#line 369 "Extensions.gperf"
      {"jisp", "application/vnd.jisp"},
#line 103 "Extensions.gperf"
      {"dylib", "application/octet-stream"},
#line 823 "Extensions.gperf"
      {"wkz", "application/x-Wingz"},
#line 1096 "Extensions.gperf"
      {"sfv", "text/x-sfv"},
#line 822 "Extensions.gperf"
      {"wz", "application/x-Wingz"},
#line 723 "Extensions.gperf"
      {"ulx", "application/x-glulx"},
#line 386 "Extensions.gperf"
      {"knp", "application/vnd.Kinar"},
#line 851 "Extensions.gperf"
      {"xhvml", "application/xv+xml"},
#line 829 "Extensions.gperf"
      {"xz", "application/x-xz"},
#line 139 "Extensions.gperf"
      {"eps", "application/postscript"},
#line 1140 "Extensions.gperf"
      {"mxu", "video/vnd.mpegurl"},
#line 310 "Extensions.gperf"
      {"ggt", "application/vnd.geogebra.tool"},
#line 1142 "Extensions.gperf"
      {"pyv", "video/vnd.ms-playready.media.pyv"},
#line 417 "Extensions.gperf"
      {"txf", "application/vnd.Mobius.TXF"},
#line 959 "Extensions.gperf"
      {"djv", "image/vnd.djvu"},
#line 57 "Extensions.gperf"
      {"jar", "application/x-java-archive"},
#line 616 "Extensions.gperf"
      {"vsc", "application/vnd.vidsoft.vidconference"},
#line 114 "Extensions.gperf"
      {"opf", "application/oebps-package+xml"},
#line 494 "Extensions.gperf"
      {"xo", "application/vnd.olpc-sugar"},
#line 721 "Extensions.gperf"
      {"arc", "application/x-freearc"},
#line 203 "Extensions.gperf"
      {"fxpl", "application/vnd.adobe.fxp"},
#line 622 "Extensions.gperf"
      {"vsf", "application/vnd.vsf"},
#line 1010 "Extensions.gperf"
      {"gdl", "model/vnd.gdl"},
#line 23 "Extensions.gperf"
      {"cdmia", "application/cdmi-capability"},
#line 277 "Extensions.gperf"
      {"slt", "application/vnd.epson.salt"},
#line 999 "Extensions.gperf"
      {"xcf", "image/x-xcf"},
#line 1053 "Extensions.gperf"
      {"rst", "text/prs.fallenstein.rst"},
#line 672 "Extensions.gperf"
      {"boz", "application/x-bzip2"},
#line 337 "Extensions.gperf"
      {"plt", "application/vnd.hp-HPGL"},
#line 563 "Extensions.gperf"
      {"iif", "application/vnd.shana.informed.interchange"},
#line 315 "Extensions.gperf"
      {"g3w", "application/vnd.geospace"},
#line 794 "Extensions.gperf"
      {"sav", "application/x-spss"},
#line 817 "Extensions.gperf"
      {"me", "text/troff"},
#line 314 "Extensions.gperf"
      {"g2w", "application/vnd.geoplan"},
#line 79 "Extensions.gperf"
      {"meta4", "application/metalink4+xml"},
#line 124 "Extensions.gperf"
      {"asc", "text/plain"},
#line 460 "Extensions.gperf"
      {"req", "application/vnd.nervana"},
#line 990 "Extensions.gperf"
      {"pcx", "image/x-pcx"},
#line 422 "Extensions.gperf"
      {"asf", "video/x-ms-asf"},
#line 828 "Extensions.gperf"
      {"xpi", "application/x-xpinstall"},
#line 461 "Extensions.gperf"
      {"request", "application/vnd.nervana"},
#line 702 "Extensions.gperf"
      {"swa", "application/x-director"},
#line 524 "Extensions.gperf"
      {"qxd", "application/vnd.Quark.QuarkXPress"},
#line 490 "Extensions.gperf"
      {"odt", "application/vnd.oasis.opendocument.text"},
#line 342 "Extensions.gperf"
      {"pcl", "application/vnd.hp-PCL"},
#line 706 "Extensions.gperf"
      {"dtb", "application/x-dtbook+xml"},
#line 286 "Extensions.gperf"
      {"seed", "application/vnd.fdsn.seed"},
#line 174 "Extensions.gperf"
      {"smi", "application/smil+xml"},
#line 744 "Extensions.gperf"
      {"latex", "application/x-latex"},
#line 960 "Extensions.gperf"
      {"sub", "text/vnd.dvb.subtitle"},
#line 718 "Extensions.gperf"
      {"pfa", "application/x-font-type1"},
#line 968 "Extensions.gperf"
      {"pgb", "image/vnd.globalgraphics.pgb"},
#line 892 "Extensions.gperf"
      {"pya", "audio/vnd.ms-playready.media.pya"},
#line 22 "Extensions.gperf"
      {"ccxml", "application/ccxml+xml"},
#line 948 "Extensions.gperf"
      {"svgz", "image/svg+xml"},
#line 769 "Extensions.gperf"
      {"pub", "application/x-mspublisher"},
#line 345 "Extensions.gperf"
      {"emm", "application/vnd.ibm.electronic-media"},
#line 719 "Extensions.gperf"
      {"pfb", "application/x-font-type1"},
#line 619 "Extensions.gperf"
      {"vsw", "application/vnd.visio"},
#line 694 "Extensions.gperf"
      {"@dir", "application/x-director"},
#line 56 "Extensions.gperf"
      {"ipfix", "application/ipfix"},
#line 1019 "Extensions.gperf"
      {"vrml", "x-world/x-vrml"},
#line 154 "Extensions.gperf"
      {"rld", "application/resource-lists-diff+xml"},
#line 481 "Extensions.gperf"
      {"odft", "application/vnd.oasis.opendocument.formula-template"},
#line 782 "Extensions.gperf"
      {"p7b", "application/x-pkcs7-certificates"},
#line 38 "Extensions.gperf"
      {"xlt", "application/vnd.ms-excel"},
#line 1005 "Extensions.gperf"
      {"iges", "model/iges"},
#line 931 "Extensions.gperf"
      {"g3", "image/g3fax"},
#line 280 "Extensions.gperf"
      {"et3", "application/vnd.eszigno3+xml"},
#line 920 "Extensions.gperf"
      {"wav", "audio/x-wav"},
#line 300 "Extensions.gperf"
      {"oa2", "application/vnd.fujitsu.oasys2"},
#line 502 "Extensions.gperf"
      {"xltx", "application/vnd.openxmlformats-officedocument.spreadsheetml.template"},
#line 698 "Extensions.gperf"
      {"cxt", "application/x-director"},
#line 1092 "Extensions.gperf"
      {"opml", "text/x-opml"},
#line 621 "Extensions.gperf"
      {"vis", "application/vnd.visionary"},
#line 1100 "Extensions.gperf"
      {"yaml", "text/x-yaml"},
#line 404 "Extensions.gperf"
      {"mc1", "application/vnd.medcalcdata"},
#line 628 "Extensions.gperf"
      {"wtb", "application/vnd.webturbo"},
#line 301 "Extensions.gperf"
      {"oa3", "application/vnd.fujitsu.oasys3"},
#line 967 "Extensions.gperf"
      {"rlc", "image/vnd.fujixerox.edmics-rlc"},
#line 1166 "Extensions.gperf"
      {"asx", "video/x-ms-asf"},
#line 236 "Extensions.gperf"
      {"c11amz", "application/vnd.cluetrust.cartomobile-config-pkg"},
#line 343 "Extensions.gperf"
      {"pclxl", "application/vnd.hp-PCLXL"},
#line 184 "Extensions.gperf"
      {"teicorpus", "application/tei+xml"},
#line 612 "Extensions.gperf"
      {"umj", "application/vnd.umajin"},
#line 675 "Extensions.gperf"
      {"cba", "application/x-cbr"},
#line 764 "Extensions.gperf"
      {"mvb", "application/x-msmediaview"},
#line 96 "Extensions.gperf"
      {"lzh", "application/x-lzh-compressed"},
#line 898 "Extensions.gperf"
      {"qcp", "audio/vnd.qcelp"},
#line 775 "Extensions.gperf"
      {"oex", "application/x-opera-extension"},
#line 765 "Extensions.gperf"
      {"emf", "application/x-msmetafile"},
#line 423 "Extensions.gperf"
      {"cab", "application/vnd.ms-cab-compressed"},
#line 1138 "Extensions.gperf"
      {"dvb", "video/vnd.dvb.file"},
#line 1124 "Extensions.gperf"
      {"m2v", "video/mpeg"},
#line 191 "Extensions.gperf"
      {"pvb", "application/vnd.3gpp.pic-bw-var"},
#line 886 "Extensions.gperf"
      {"eol", "audio/vnd.digital-winds"},
#line 153 "Extensions.gperf"
      {"rl", "application/resource-lists+xml"},
#line 320 "Extensions.gperf"
      {"gqs", "application/vnd.grafeq"},
#line 1136 "Extensions.gperf"
      {"uvv", "video/vnd.dece.video"},
#line 183 "Extensions.gperf"
      {"tei", "application/tei+xml"},
#line 13 "Extensions.gperf"
      {"mda", "application/x-msaccess"},
#line 575 "Extensions.gperf"
      {"sda", "application/vnd.stardivision.draw"},
#line 47 "Extensions.gperf"
      {"gpx", "application/gpx+xml"},
#line 991 "Extensions.gperf"
      {"pct", "image/x-pict"},
#line 515 "Extensions.gperf"
      {"efif", "application/vnd.picsel"},
#line 681 "Extensions.gperf"
      {"chat", "application/x-chat"},
#line 949 "Extensions.gperf"
      {"tga", "image/x-tga"},
#line 468 "Extensions.gperf"
      {"nns", "application/vnd.noblenet-sealer"},
#line 14 "Extensions.gperf"
      {"mdb", "application/x-msaccess"},
#line 268 "Extensions.gperf"
      {"kpxx", "application/vnd.ds-keypoint"},
#line 807 "Extensions.gperf"
      {"tcl", "application/x-tcl"},
#line 322 "Extensions.gperf"
      {"ghf", "application/vnd.groove-help"},
#line 696 "Extensions.gperf"
      {"cct", "application/x-director"},
#line 509 "Extensions.gperf"
      {"pdb", "x-chemical/x-pdb"},
#line 761 "Extensions.gperf"
      {"msi", "application/x-msdownload"},
#line 467 "Extensions.gperf"
      {"nnd", "application/vnd.noblenet-directory"},
#line 380 "Extensions.gperf"
      {"ksp", "application/vnd.kde.kspread"},
#line 26 "Extensions.gperf"
      {"cdmio", "application/cdmi-object"},
#line 201 "Extensions.gperf"
      {"fcdt", "application/vnd.adobe.formscentral.fcdt"},
#line 528 "Extensions.gperf"
      {"qxl", "application/vnd.Quark.QuarkXPress"},
#line 85 "Extensions.gperf"
      {"mpg4", "video/mp4"},
#line 317 "Extensions.gperf"
      {"kml", "application/vnd.google-earth.kml+xml"},
#line 906 "Extensions.gperf"
      {"aif", "audio/x-aiff"},
#line 876 "Extensions.gperf"
      {"m3a", "audio/mpeg"},
#line 311 "Extensions.gperf"
      {"gex", "application/vnd.geometry-explorer"},
#line 319 "Extensions.gperf"
      {"gqf", "application/vnd.grafeq"},
#line 18 "Extensions.gperf"
      {"atom", "application/atom+xml"},
#line 875 "Extensions.gperf"
      {"m2a", "audio/mpeg"},
#line 1038 "Extensions.gperf"
      {"txt", "text/plain"},
#line 1123 "Extensions.gperf"
      {"m1v", "video/mpeg"},
#line 884 "Extensions.gperf"
      {"uva", "audio/vnd.dece.audio"},
#line 1013 "Extensions.gperf"
      {"x_b", "model/vnd.parasolid.transmit.binary"},
#line 618 "Extensions.gperf"
      {"vst", "application/vnd.visio"},
#line 1073 "Extensions.gperf"
      {"spot", "text/vnd.in3d.spot"},
#line 639 "Extensions.gperf"
      {"osf", "application/vnd.yamaha.openscoreformat"},
#line 462 "Extensions.gperf"
      {"bkm", "application/vnd.nervana"},
#line 1022 "Extensions.gperf"
      {"x3dv", "model/x3d+vrml"},
#line 772 "Extensions.gperf"
      {"wri", "application/x-mswrite"},
#line 379 "Extensions.gperf"
      {"kpt", "application/vnd.kde.kpresenter"},
#line 811 "Extensions.gperf"
      {"texi", "application/x-texinfo"},
#line 907 "Extensions.gperf"
      {"aifc", "audio/x-aiff"},
#line 908 "Extensions.gperf"
      {"aiff", "audio/x-aiff"},
#line 1037 "Extensions.gperf"
      {"n3", "text/n3"},
#line 1002 "Extensions.gperf"
      {"eml", "message/rfc822"},
#line 1046 "Extensions.gperf"
      {"conf", "text/plain"},
#line 450 "Extensions.gperf"
      {"wdb", "application/vnd.ms-works"},
#line 699 "Extensions.gperf"
      {"dir", "application/x-director"},
#line 316 "Extensions.gperf"
      {"gmx", "application/vnd.gmx"},
#line 218 "Extensions.gperf"
      {"pkpass", "application/vnd.apple.pkpass"},
#line 802 "Extensions.gperf"
      {"sv4cpio", "application/x-sv4cpio"},
#line 1127 "Extensions.gperf"
      {"mov", "video/quicktime"},
#line 53 "Extensions.gperf"
      {"imap", "application/x-imagemap"},
#line 432 "Extensions.gperf"
      {"eot", "application/vnd.ms-fontobject"},
#line 1062 "Extensions.gperf"
      {"uri", "text/uri-list"},
#line 303 "Extensions.gperf"
      {"bh2", "application/vnd.fujitsu.oasysprs"},
#line 46 "Extensions.gperf"
      {"gml", "application/gml+xml"},
#line 353 "Extensions.gperf"
      {"icm", "application/vnd.iccprofile"},
#line 1028 "Extensions.gperf"
      {"ics", "text/calendar"},
#line 274 "Extensions.gperf"
      {"esf", "application/vnd.epson.esf"},
#line 287 "Extensions.gperf"
      {"gph", "application/vnd.FloGraphIt"},
#line 458 "Extensions.gperf"
      {"ent", "application/vnd.nervana"},
#line 457 "Extensions.gperf"
      {"taglet", "application/vnd.mynfc"},
#line 556 "Extensions.gperf"
      {"s1a", "application/vnd.sealedmedia.softseal.pdf"},
#line 712 "Extensions.gperf"
      {"gsf", "application/x-font-ghostscript"},
#line 148 "Extensions.gperf"
      {"pskcxml", "application/pskc+xml"},
#line 318 "Extensions.gperf"
      {"kmz", "application/vnd.google-earth.kmz"},
#line 645 "Extensions.gperf"
      {"zirz", "application/vnd.zul"},
#line 469 "Extensions.gperf"
      {"nnw", "application/vnd.noblenet-web"},
#line 972 "Extensions.gperf"
      {"npx", "image/vnd.net-fpx"},
#line 525 "Extensions.gperf"
      {"qxt", "application/vnd.Quark.QuarkXPress"},
#line 1020 "Extensions.gperf"
      {"x3db", "model/x3d+binary"},
#line 338 "Extensions.gperf"
      {"hpgl", "application/vnd.hp-HPGL"},
#line 371 "Extensions.gperf"
      {"ktr", "application/vnd.kahootz"},
#line 352 "Extensions.gperf"
      {"icc", "application/vnd.iccprofile"},
#line 1171 "Extensions.gperf"
      {"avi", "video/x-msvideo"},
#line 511 "Extensions.gperf"
      {"oprc", "application/vnd.palm"},
#line 1060 "Extensions.gperf"
      {"troff", "text/troff"},
#line 766 "Extensions.gperf"
      {"emz", "application/x-msmetafile"},
#line 1071 "Extensions.gperf"
      {"gv", "text/vnd.graphviz"},
#line 59 "Extensions.gperf"
      {"class", "application/x-java-vm"},
#line 840 "Extensions.gperf"
      {"xenc", "application/xenc+xml"},
#line 135 "Extensions.gperf"
      {"pkipath", "application/pkix-pkipath"},
#line 883 "Extensions.gperf"
      {"smv", "video/x-smv"},
#line 163 "Extensions.gperf"
      {"scq", "application/scvp-cv-request"},
#line 264 "Extensions.gperf"
      {"dna", "application/vnd.dna"},
#line 1118 "Extensions.gperf"
      {"mp4v", "video/mp4"},
#line 208 "Extensions.gperf"
      {"azs", "application/vnd.airzip.filesecure.azs"},
#line 179 "Extensions.gperf"
      {"grxml", "application/srgs+xml"},
#line 866 "Extensions.gperf"
      {"midi", "audio/x-midi"},
#line 644 "Extensions.gperf"
      {"zir", "application/vnd.zul"},
#line 558 "Extensions.gperf"
      {"sema", "application/vnd.sema"},
#line 428 "Extensions.gperf"
      {"xlam", "application/vnd.ms-excel.addin.macroEnabled.12"},
#line 579 "Extensions.gperf"
      {"vor", "application/vnd.stardivision.writer"},
#line 213 "Extensions.gperf"
      {"cii", "application/vnd.anser-web-certificate-issue-initiation"},
#line 997 "Extensions.gperf"
      {"rgb", "image/x-rgb"},
#line 864 "Extensions.gperf"
      {"kar", "audio/x-midi"},
#line 867 "Extensions.gperf"
      {"rmi", "audio/midi"},
#line 341 "Extensions.gperf"
      {"jlt", "application/vnd.hp-jlyt"},
#line 940 "Extensions.gperf"
      {"jpgm", "video/jpm"},
#line 323 "Extensions.gperf"
      {"gim", "application/vnd.groove-identity-message"},
#line 1067 "Extensions.gperf"
      {"mcurl", "text/vnd.curl.mcurl"},
#line 910 "Extensions.gperf"
      {"flac", "audio/x-flac"},
#line 1068 "Extensions.gperf"
      {"scurl", "text/vnd.curl.scurl"},
#line 690 "Extensions.gperf"
      {"deb", "application/x-debian-package"},
#line 956 "Extensions.gperf"
      {"uvvi", "image/vnd.dece.graphic"},
#line 1066 "Extensions.gperf"
      {"dcurl", "text/vnd.curl.dcurl"},
#line 250 "Extensions.gperf"
      {"pcurl", "application/vnd.curl.pcurl"},
#line 273 "Extensions.gperf"
      {"nml", "application/vnd.enliven"},
#line 915 "Extensions.gperf"
      {"wmv", "video/x-ms-wmv"},
#line 1098 "Extensions.gperf"
      {"vcs", "text/x-vcalendar"},
#line 51 "Extensions.gperf"
      {"stk", "application/hyperstudio"},
#line 269 "Extensions.gperf"
      {"ait", "application/vnd.dvb.ait"},
#line 207 "Extensions.gperf"
      {"azf", "application/vnd.airzip.filesecure.azf"},
#line 870 "Extensions.gperf"
      {"mp4a", "audio/mp4"},
#line 397 "Extensions.gperf"
      {"apr", "application/vnd.lotus-approach"},
#line 485 "Extensions.gperf"
      {"oti", "application/vnd.oasis.opendocument.image-template"},
#line 1101 "Extensions.gperf"
      {"yml", "text/x-yaml"},
#line 333 "Extensions.gperf"
      {"upa", "application/vnd.hbci"},
#line 679 "Extensions.gperf"
      {"vcd", "application/x-cdlink"},
#line 686 "Extensions.gperf"
      {"nsc", "application/x-conference"},
#line 55 "Extensions.gperf"
      {"inkml", "application/inkml+xml"},
#line 399 "Extensions.gperf"
      {"nsf", "application/vnd.lotus-notes"},
#line 136 "Extensions.gperf"
      {"pki", "application/pkixcmp"},
#line 156 "Extensions.gperf"
      {"gbr", "application/rpki-ghostbusters"},
#line 1029 "Extensions.gperf"
      {"ifb", "text/calendar"},
#line 932 "Extensions.gperf"
      {"gif", "image/gif"},
#line 514 "Extensions.gperf"
      {"ei6", "application/vnd.pg.osasli"},
#line 700 "Extensions.gperf"
      {"dxr", "application/x-director"},
#line 510 "Extensions.gperf"
      {"pqa", "application/vnd.palm"},
#line 132 "Extensions.gperf"
      {"ac", "application/pkix-attr-cert"},
#line 1055 "Extensions.gperf"
      {"textile", "text/plain"},
#line 821 "Extensions.gperf"
      {"webapp", "application/x-web-app-manifest+json"},
#line 812 "Extensions.gperf"
      {"obj", "application/x-tgif"},
#line 1099 "Extensions.gperf"
      {"vcf", "text/x-vcard"},
#line 914 "Extensions.gperf"
      {"wma", "audio/x-ms-wma"},
#line 656 "Extensions.gperf"
      {"wk", "application/x-123"},
#line 285 "Extensions.gperf"
      {"dataless", "application/vnd.fdsn.seed"},
#line 604 "Extensions.gperf"
      {"pcap", "application/vnd.tcpdump.pcap"},
#line 613 "Extensions.gperf"
      {"unityweb", "application/vnd.unity"},
#line 147 "Extensions.gperf"
      {"rct", "application/prs.nprend"},
#line 238 "Extensions.gperf"
      {"cdbcmsg", "application/vnd.contact.cmsg"},
#line 413 "Extensions.gperf"
      {"mbk", "application/vnd.Mobius.MBK"},
#line 209 "Extensions.gperf"
      {"azw", "application/vnd.amazon.ebook"},
#line 724 "Extensions.gperf"
      {"gnumeric", "application/x-gnumeric"},
#line 671 "Extensions.gperf"
      {"bz", "application/x-bzip"},
#line 647 "Extensions.gperf"
      {"vxml", "application/voicexml+xml"},
#line 31 "Extensions.gperf"
      {"dbk", "application/docbook+xml"},
#line 890 "Extensions.gperf"
      {"plj", "audio/vnd.everad.plj"},
#line 210 "Extensions.gperf"
      {"acc", "application/vnd.americandynamics.acc"},
#line 858 "Extensions.gperf"
      {"amr", "audio/AMR"},
#line 1030 "Extensions.gperf"
      {"csv", "text/csv"},
#line 74 "Extensions.gperf"
      {"nb", "application/mathematica"},
#line 95 "Extensions.gperf"
      {"lha", "application/x-lzh-compressed"},
#line 877 "Extensions.gperf"
      {"mp2a", "audio/mpeg"},
#line 887 "Extensions.gperf"
      {"dra", "audio/vnd.dra"},
#line 540 "Extensions.gperf"
      {"sdo", "application/vnd.sealed.doc"},
#line 138 "Extensions.gperf"
      {"ai", "application/postscript"},
#line 791 "Extensions.gperf"
      {"shar", "application/x-shar"},
#line 1143 "Extensions.gperf"
      {"nim", "video/vnd.nokia.interleaved-multimedia"},
#line 746 "Extensions.gperf"
      {"mobi", "application/x-mobipocket-ebook"},
#line 1157 "Extensions.gperf"
      {"fli", "video/x-fli"},
#line 693 "Extensions.gperf"
      {"dcr", "application/x-director"},
#line 242 "Extensions.gperf"
      {"clkp", "application/vnd.crick.clicker.palette"},
#line 819 "Extensions.gperf"
      {"ustar", "application/x-ustar"},
#line 98 "Extensions.gperf"
      {"ani", "application/octet-stream"},
#line 484 "Extensions.gperf"
      {"odi", "application/vnd.oasis.opendocument.image-template"},
#line 1165 "Extensions.gperf"
      {"mjpeg", "video/x-motion-jpeg"},
#line 1048 "Extensions.gperf"
      {"in", "text/plain"},
#line 615 "Extensions.gperf"
      {"vcx", "application/vnd.vcx"},
#line 121 "Extensions.gperf"
      {"oxps", "application/oxps"},
#line 961 "Extensions.gperf"
      {"dwg", "image/vnd.dwg"},
#line 1009 "Extensions.gperf"
      {"dae", "model/vnd.collada+xml"},
#line 190 "Extensions.gperf"
      {"psb", "application/vnd.3gpp.pic-bw-small"},
#line 1164 "Extensions.gperf"
      {"mjpg", "video/x-motion-jpeg"},
#line 587 "Extensions.gperf"
      {"sxi", "application/vnd.sun.xml.impress"},
#line 470 "Extensions.gperf"
      {"ngdat", "application/vnd.nokia.n-gage.data"},
#line 109 "Extensions.gperf"
      {"elc", "application/octet-stream"},
#line 741 "Extensions.gperf"
      {"pages", "application/x-iwork-pages-sffpages"},
#line 601 "Extensions.gperf"
      {"tao", "application/vnd.tao.intent-module-archive"},
#line 272 "Extensions.gperf"
      {"mag", "application/vnd.ecowin.chart"},
#line 193 "Extensions.gperf"
      {"tcap", "application/vnd.3gpp2.tcap"},
#line 279 "Extensions.gperf"
      {"es3", "application/vnd.eszigno3+xml"},
#line 378 "Extensions.gperf"
      {"kpr", "application/vnd.kde.kpresenter"},
#line 1059 "Extensions.gperf"
      {"tsv", "text/tab-separated-values"},
#line 15 "Extensions.gperf"
      {"mde", "application/x-msaccess"},
#line 211 "Extensions.gperf"
      {"ami", "application/vnd.amiga.ami"},
#line 810 "Extensions.gperf"
      {"texinfo", "application/x-texinfo"},
#line 947 "Extensions.gperf"
      {"svg", "image/svg+xml"},
#line 187 "Extensions.gperf"
      {"tbk", "application/x-toolbook"},
#line 223 "Extensions.gperf"
      {"bmi", "application/vnd.bmi"},
#line 859 "Extensions.gperf"
      {"awb", "audio/AMR-WB"},
#line 1026 "Extensions.gperf"
      {"appcache", "text/cache-manifest"},
#line 463 "Extensions.gperf"
      {"kcm", "application/vnd.nervana"},
#line 1108 "Extensions.gperf"
      {"gl", "video/x-gl"},
#line 173 "Extensions.gperf"
      {"siv", "application/sieve"},
#line 197 "Extensions.gperf"
      {"acu", "application/vnd.acucobol"},
#line 395 "Extensions.gperf"
      {"lbe", "application/vnd.llamagraphics.life-balance.exchange+xml"},
#line 158 "Extensions.gperf"
      {"roa", "application/rpki-roa"},
#line 608 "Extensions.gperf"
      {"tra", "application/vnd.trueapp"},
#line 244 "Extensions.gperf"
      {"clkw", "application/vnd.crick.clicker.wordbank"},
#line 240 "Extensions.gperf"
      {"clkx", "application/vnd.crick.clicker"},
#line 454 "Extensions.gperf"
      {"mseq", "application/vnd.mseq"},
#line 661 "Extensions.gperf"
      {"aab", "application/x-authorware-bin"},
#line 48 "Extensions.gperf"
      {"gxf", "application/gxf"},
#line 1137 "Extensions.gperf"
      {"uvvv", "video/vnd.dece.video"},
#line 797 "Extensions.gperf"
      {"spo", "application/x-spss"},
#line 1144 "Extensions.gperf"
      {"m4v", "video/x-m4v"},
#line 361 "Extensions.gperf"
      {"qbo", "application/vnd.intu.qbo"},
#line 370 "Extensions.gperf"
      {"joda", "application/vnd.joost.joda-archive"},
#line 199 "Extensions.gperf"
      {"acutc", "application/vnd.acucorp"},
#line 16 "Extensions.gperf"
      {"ez", "application/andrew-inset"},
#line 1125 "Extensions.gperf"
      {"ogv", "video/ogg"},
#line 1162 "Extensions.gperf"
      {"mkv", "video/x-matroska"},
#line 953 "Extensions.gperf"
      {"uvg", "image/vnd.dece.graphic"},
#line 1116 "Extensions.gperf"
      {"f4v", "video/x-f4v"},
#line 49 "Extensions.gperf"
      {"gz", "application/x-gzip"},
#line 465 "Extensions.gperf"
      {"nitf", "application/vnd.nitf"},
#line 550 "Extensions.gperf"
      {"s1e", "application/vnd.sealed.xls"},
#line 673 "Extensions.gperf"
      {"bz2", "application/x-bzip2"},
#line 885 "Extensions.gperf"
      {"uvva", "audio/vnd.dece.audio"},
#line 871 "Extensions.gperf"
      {"m4a", "audio/MP4A-LATM"},
#line 178 "Extensions.gperf"
      {"gram", "application/srgs"},
#line 725 "Extensions.gperf"
      {"gramps", "application/x-gramps-xml"},
#line 1151 "Extensions.gperf"
      {"smo", "video/vnd.sealedmedia.softseal.mov"},
#line 20 "Extensions.gperf"
      {"atomsvc", "application/atomsvc+xml"},
#line 291 "Extensions.gperf"
      {"frame", "application/x-maker"},
#line 935 "Extensions.gperf"
      {"jpg2", "image/jp2"},
#line 740 "Extensions.gperf"
      {"numbers", "application/x-iwork-numbers-sffnumbers"},
#line 878 "Extensions.gperf"
      {"oga", "audio/ogg"},
#line 911 "Extensions.gperf"
      {"mka", "audio/x-matroska"},
#line 1120 "Extensions.gperf"
      {"mpe", "video/mpeg"},
#line 868 "Extensions.gperf"
      {"f4a", "audio/mp4"},
#line 200 "Extensions.gperf"
      {"air", "application/vnd.adobe.air-application-installer-package+zip"},
#line 243 "Extensions.gperf"
      {"clkt", "application/vnd.crick.clicker.template"},
#line 748 "Extensions.gperf"
      {"lnk", "application/x-ms-shortcut"},
#line 869 "Extensions.gperf"
      {"f4b", "audio/mp4"},
#line 116 "Extensions.gperf"
      {"omdoc", "application/omdoc+xml"},
#line 496 "Extensions.gperf"
      {"oxt", "application/vnd.openofficeorg.extension"},
#line 1122 "Extensions.gperf"
      {"mpg", "video/mpeg"},
#line 557 "Extensions.gperf"
      {"see", "application/vnd.seemail"},
#line 1158 "Extensions.gperf"
      {"flv", "video/x-flv"},
#line 957 "Extensions.gperf"
      {"dgn", "image/x-vnd.dgn"},
#line 682 "Extensions.gperf"
      {"pgn", "application/x-chess-pgn"},
#line 266 "Extensions.gperf"
      {"dpg", "application/vnd.dpgraph"},
#line 1163 "Extensions.gperf"
      {"mng", "video/x-mng"},
#line 220 "Extensions.gperf"
      {"iota", "application/vnd.astraea-software.iota"},
#line 290 "Extensions.gperf"
      {"maker", "application/x-maker"},
#line 747 "Extensions.gperf"
      {"application", "application/x-ms-application"},
#line 194 "Extensions.gperf"
      {"pwn", "application/vnd.3M.Post-it-Notes"},
#line 944 "Extensions.gperf"
      {"png", "image/png"},
#line 1014 "Extensions.gperf"
      {"xmt_bin", "model/vnd.parasolid.transmit.binary"},
#line 735 "Extensions.gperf"
      {"ibooks", "application/x-ibooks+zip"},
#line 1167 "Extensions.gperf"
      {"vob", "video/x-ms-vob"},
#line 91 "Extensions.gperf"
      {"nc", "application/x-netcdf"},
#line 476 "Extensions.gperf"
      {"ext", "application/vnd.novadigm.EXT"},
#line 309 "Extensions.gperf"
      {"ggb", "application/vnd.geogebra.file"},
#line 1084 "Extensions.gperf"
      {"coffee", "text/x-coffescript"},
#line 816 "Extensions.gperf"
      {"man", "text/troff"},
#line 313 "Extensions.gperf"
      {"gxt", "application/vnd.geonext"},
#line 189 "Extensions.gperf"
      {"plb", "application/vnd.3gpp.pic-bw-large"},
#line 228 "Extensions.gperf"
      {"cla", "application/vnd.claymore"},
#line 464 "Extensions.gperf"
      {"nlu", "application/vnd.neurolanguage.nlu"},
#line 1172 "Extensions.gperf"
      {"movie", "video/x-sgi-movie"},
#line 1050 "Extensions.gperf"
      {"log", "text/plain"},
#line 113 "Extensions.gperf"
      {"oda", "application/oda"},
#line 605 "Extensions.gperf"
      {"tmo", "application/vnd.tmobile-livetv"},
#line 710 "Extensions.gperf"
      {"eva", "application/x-eva"},
#line 118 "Extensions.gperf"
      {"onetmp", "application/onenote"},
#line 19 "Extensions.gperf"
      {"atomcat", "application/atomcat+xml"},
#line 479 "Extensions.gperf"
      {"odb", "application/vnd.oasis.opendocument.database"},
#line 660 "Extensions.gperf"
      {"dmg", "application/x-apple-diskimage"},
#line 1146 "Extensions.gperf"
      {"smpg", "video/vnd.sealed.mpeg4"},
#line 980 "Extensions.gperf"
      {"xcfgz", "image/x-compressed-xcf"},
#line 424 "Extensions.gperf"
      {"xla", "application/vnd.ms-excel"},
#line 726 "Extensions.gperf"
      {"gtar", "application/x-gtar"},
#line 979 "Extensions.gperf"
      {"xcfbz2", "image/x-compressed-xcf"},
#line 119 "Extensions.gperf"
      {"onetoc", "application/onenote"},
#line 429 "Extensions.gperf"
      {"xlsb", "application/vnd.ms-excel.sheet.binary.macroEnabled.12"},
#line 281 "Extensions.gperf"
      {"ez2", "application/vnd.ezpix-album"},
#line 398 "Extensions.gperf"
      {"pre", "application/vnd.lotus-freelance"},
#line 282 "Extensions.gperf"
      {"ez3", "application/vnd.ezpix-package"},
#line 705 "Extensions.gperf"
      {"ncx", "application/x-dtbncx+xml"},
#line 392 "Extensions.gperf"
      {"sse", "application/vnd.kodak-descriptor"},
#line 1090 "Extensions.gperf"
      {"java", "text/x-java-source"},
#line 903 "Extensions.gperf"
      {"weba", "audio/webm"},
#line 284 "Extensions.gperf"
      {"mseed", "application/vnd.fdsn.mseed"},
#line 227 "Extensions.gperf"
      {"cdy", "application/vnd.cinderella"},
#line 894 "Extensions.gperf"
      {"vbk", "audio/vnd.nortel.vbk"},
#line 1119 "Extensions.gperf"
      {"mp3g", "video/mpeg"},
#line 437 "Extensions.gperf"
      {"msg", "application/vnd.ms-outlook"},
#line 52 "Extensions.gperf"
      {"imagemap", "application/x-imagemap"},
#line 691 "Extensions.gperf"
      {"udeb", "application/x-debian-package"},
#line 668 "Extensions.gperf"
      {"torrent", "application/x-bittorrent"},
#line 78 "Extensions.gperf"
      {"metalink", "application/metalink+xml"},
#line 1150 "Extensions.gperf"
      {"smov", "video/vnd.sealedmedia.softseal.mov"},
#line 564 "Extensions.gperf"
      {"ipk", "application/vnd.shana.informed.package"},
#line 568 "Extensions.gperf"
      {"teacher", "application/vnd.smart.teacher"},
#line 360 "Extensions.gperf"
      {"i2g", "application/vnd.intergeo"},
#line 687 "Extensions.gperf"
      {"cpio", "application/x-cpio"},
#line 54 "Extensions.gperf"
      {"ink", "application/inkml+xml"},
#line 120 "Extensions.gperf"
      {"onetoc2", "application/onenote"},
#line 418 "Extensions.gperf"
      {"mpn", "application/vnd.mophun.application"},
#line 872 "Extensions.gperf"
      {"mpga", "audio/mpeg"},
#line 346 "Extensions.gperf"
      {"mpy", "application/vnd.ibm.MiniPay"},
#line 1008 "Extensions.gperf"
      {"silo", "model/mesh"},
#line 938 "Extensions.gperf"
      {"jpe", "image/jpeg"},
#line 745 "Extensions.gperf"
      {"mie", "application/x-mie"},
#line 1003 "Extensions.gperf"
      {"mime", "message/rfc822"},
#line 768 "Extensions.gperf"
      {"mny", "application/x-msmoney"},
#line 375 "Extensions.gperf"
      {"kfo", "application/vnd.kde.kformula"},
#line 1155 "Extensions.gperf"
      {"viv", "video/vnd.vivo"},
#line 529 "Extensions.gperf"
      {"qxb", "application/vnd.Quark.QuarkXPress"},
#line 989 "Extensions.gperf"
      {"pspimage", "image/x-paintshoppro"},
#line 35 "Extensions.gperf"
      {"emma", "application/emma+xml"},
#line 758 "Extensions.gperf"
      {"reg", "application/x-msdownload"},
#line 937 "Extensions.gperf"
      {"jpg", "image/jpeg"},
#line 125 "Extensions.gperf"
      {"sig", "application/pgp-signature"},
#line 206 "Extensions.gperf"
      {"ahead", "application/vnd.ahead.space"},
#line 36 "Extensions.gperf"
      {"epub", "application/epub+zip"},
#line 826 "Extensions.gperf"
      {"fig", "application/x-xfig"},
#line 403 "Extensions.gperf"
      {"portpkg", "application/vnd.macports.portpkg"},
#line 1027 "Extensions.gperf"
      {"manifest", "text/cache-manifest"},
#line 955 "Extensions.gperf"
      {"uvvg", "image/vnd.dece.graphic"},
#line 408 "Extensions.gperf"
      {"flo", "application/vnd.micrografx.flo"},
#line 324 "Extensions.gperf"
      {"grv", "application/vnd.groove-injector"},
#line 212 "Extensions.gperf"
      {"apk", "application/vnd.android.package-archive"},
#line 483 "Extensions.gperf"
      {"otg", "application/vnd.oasis.opendocument.graphics-template"},
#line 104 "Extensions.gperf"
      {"bpk", "application/octet-stream"},
#line 414 "Extensions.gperf"
      {"mqy", "application/vnd.Mobius.MQY"},
#line 879 "Extensions.gperf"
      {"ogg", "video/ogg"},
#line 536 "Extensions.gperf"
      {"rmvb", "application/vnd.rn-realmedia-vbr"},
#line 738 "Extensions.gperf"
      {"iso", "application/x-iso9660-image"},
#line 232 "Extensions.gperf"
      {"c4g", "application/vnd.clonk.c4group"},
#line 112 "Extensions.gperf"
      {"pkg", "application/octet-stream"},
#line 105 "Extensions.gperf"
      {"deploy", "application/octet-stream"},
#line 1065 "Extensions.gperf"
      {"vcard", "text/vcard"},
#line 507 "Extensions.gperf"
      {"esa", "application/vnd.osgi.subsystem"},
#line 169 "Extensions.gperf"
      {"setreg", "application/set-registration-initiation"},
#line 168 "Extensions.gperf"
      {"setpay", "application/set-payment-initiation"},
#line 39 "Extensions.gperf"
      {"exi", "application/exi"},
#line 1091 "Extensions.gperf"
      {"nfo", "text/x-nfo"},
#line 383 "Extensions.gperf"
      {"htke", "application/vnd.kenameaapp"},
#line 363 "Extensions.gperf"
      {"rcprofile", "application/vnd.ipunplugged.rcprofile"},
#line 736 "Extensions.gperf"
      {"ica", "application/x-ica"},
#line 482 "Extensions.gperf"
      {"odg", "application/vnd.oasis.opendocument.graphics"},
#line 591 "Extensions.gperf"
      {"sxg", "application/vnd.sun.xml.writer.global"},
#line 1112 "Extensions.gperf"
      {"jpgv", "video/JPEG"},
#line 669 "Extensions.gperf"
      {"blb", "application/x-blorb"},
#line 384 "Extensions.gperf"
      {"kia", "application/vnd.kidspiration"},
#line 537 "Extensions.gperf"
      {"link66", "application/vnd.route66.link66+xml"},
#line 195 "Extensions.gperf"
      {"aso", "application/vnd.accpac.simply.aso"},
#line 456 "Extensions.gperf"
      {"msty", "application/vnd.muvee.style"},
#line 271 "Extensions.gperf"
      {"geo", "application/vnd.dynageo"},
#line 385 "Extensions.gperf"
      {"kne", "application/vnd.Kinar"},
#line 896 "Extensions.gperf"
      {"ecelp7470", "audio/vnd.nuera.ecelp7470"},
#line 897 "Extensions.gperf"
      {"ecelp9600", "audio/vnd.nuera.ecelp9600"},
#line 216 "Extensions.gperf"
      {"mpkg", "application/vnd.apple.installer+xml"},
#line 405 "Extensions.gperf"
      {"cdkey", "application/vnd.mediastation.cdkey"},
#line 667 "Extensions.gperf"
      {"bcpio", "application/x-bcpio"},
#line 655 "Extensions.gperf"
      {"wspolicy", "application/wspolicy+xml"},
#line 1121 "Extensions.gperf"
      {"mpeg", "video/mpeg"},
#line 100 "Extensions.gperf"
      {"gpg", "application/pgp-encrypted"},
#line 895 "Extensions.gperf"
      {"ecelp4800", "audio/vnd.nuera.ecelp4800"},
#line 63 "Extensions.gperf"
      {"jsonml", "application/jsonml+json"},
#line 1069 "Extensions.gperf"
      {"fly", "text/vnd.fly"},
#line 709 "Extensions.gperf"
      {"evy", "application/x-envoy"},
#line 969 "Extensions.gperf"
      {"ico", "image/x-icon"},
#line 1051 "Extensions.gperf"
      {"markdown", "text/plain"},
#line 400 "Extensions.gperf"
      {"org", "application/vnd.lotus-organizer"},
#line 312 "Extensions.gperf"
      {"gre", "application/vnd.geometry-explorer"},
#line 34 "Extensions.gperf"
      {"ecma", "application/ecmascript"},
#line 722 "Extensions.gperf"
      {"gca", "application/x-gca-compressed"},
#line 640 "Extensions.gperf"
      {"osfpvg", "application/vnd.yamaha.openscoreformat.osfpvg+xml"},
#line 1173 "Extensions.gperf"
      {"ice", "x-conference/x-cooltalk"},
#line 377 "Extensions.gperf"
      {"kon", "application/vnd.kde.kontour"},
#line 774 "Extensions.gperf"
      {"nzb", "application/x-nzb"},
#line 21 "Extensions.gperf"
      {"bleep", "application/x-bleeper"},
#line 533 "Extensions.gperf"
      {"cryptonote", "application/vnd.rig.cryptonote"},
#line 739 "Extensions.gperf"
      {"key", "application/x-iwork-keynote-sffkey"},
#line 670 "Extensions.gperf"
      {"blorb", "application/x-blorb"},
#line 188 "Extensions.gperf"
      {"bck", "application/x-VMSBACKUP"},
#line 936 "Extensions.gperf"
      {"jpeg", "image/jpeg"},
#line 294 "Extensions.gperf"
      {"book", "application/x-maker"},
#line 659 "Extensions.gperf"
      {"ace", "application/x-ace-compressed"},
#line 241 "Extensions.gperf"
      {"clkk", "application/vnd.crick.clicker.keyboard"},
#line 327 "Extensions.gperf"
      {"vcg", "application/vnd.groove-vcard"},
#line 93 "Extensions.gperf"
      {"bin", "application/x-macbase64"},
#line 1156 "Extensions.gperf"
      {"vivo", "video/vnd.vivo"},
#line 97 "Extensions.gperf"
      {"exe", "application/x-msdownload"},
#line 117 "Extensions.gperf"
      {"onepkg", "application/onenote"},
#line 62 "Extensions.gperf"
      {"json", "application/json"},
#line 855 "Extensions.gperf"
      {"yin", "application/yin+xml"},
#line 459 "Extensions.gperf"
      {"entity", "application/vnd.nervana"},
#line 854 "Extensions.gperf"
      {"yang", "application/yang"},
#line 373 "Extensions.gperf"
      {"karbon", "application/vnd.kde.karbon"},
#line 471 "Extensions.gperf"
      {"n-gage", "application/vnd.nokia.n-gage.symbian.install"}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = content_type_extension_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          register const struct ContentTypeExtension *resword;

          if (key < 1910)
            {
              if (key < 1048)
                {
                  switch (key - 1)
                    {
                      case 0:
                        resword = &wordlist[0];
                        goto compare;
                      case 9:
                        resword = &wordlist[1];
                        goto compare;
                      case 10:
                        resword = &wordlist[2];
                        goto compare;
                      case 14:
                        resword = &wordlist[3];
                        goto compare;
                      case 21:
                        resword = &wordlist[4];
                        goto compare;
                      case 34:
                        resword = &wordlist[5];
                        goto compare;
                      case 36:
                        resword = &wordlist[6];
                        goto compare;
                      case 37:
                        resword = &wordlist[7];
                        goto compare;
                      case 41:
                        resword = &wordlist[8];
                        goto compare;
                      case 42:
                        resword = &wordlist[9];
                        goto compare;
                      case 44:
                        resword = &wordlist[10];
                        goto compare;
                      case 49:
                        resword = &wordlist[11];
                        goto compare;
                      case 50:
                        resword = &wordlist[12];
                        goto compare;
                      case 59:
                        resword = &wordlist[13];
                        goto compare;
                      case 64:
                        resword = &wordlist[14];
                        goto compare;
                      case 66:
                        resword = &wordlist[15];
                        goto compare;
                      case 69:
                        resword = &wordlist[16];
                        goto compare;
                      case 76:
                        resword = &wordlist[17];
                        goto compare;
                      case 87:
                        resword = &wordlist[18];
                        goto compare;
                      case 88:
                        resword = &wordlist[19];
                        goto compare;
                      case 91:
                        resword = &wordlist[20];
                        goto compare;
                      case 97:
                        resword = &wordlist[21];
                        goto compare;
                      case 98:
                        resword = &wordlist[22];
                        goto compare;
                      case 109:
                        resword = &wordlist[23];
                        goto compare;
                      case 114:
                        resword = &wordlist[24];
                        goto compare;
                      case 117:
                        resword = &wordlist[25];
                        goto compare;
                      case 120:
                        resword = &wordlist[26];
                        goto compare;
                      case 121:
                        resword = &wordlist[27];
                        goto compare;
                      case 129:
                        resword = &wordlist[28];
                        goto compare;
                      case 130:
                        resword = &wordlist[29];
                        goto compare;
                      case 139:
                        resword = &wordlist[30];
                        goto compare;
                      case 156:
                        resword = &wordlist[31];
                        goto compare;
                      case 157:
                        resword = &wordlist[32];
                        goto compare;
                      case 161:
                        resword = &wordlist[33];
                        goto compare;
                      case 167:
                        resword = &wordlist[34];
                        goto compare;
                      case 168:
                        resword = &wordlist[35];
                        goto compare;
                      case 171:
                        resword = &wordlist[36];
                        goto compare;
                      case 172:
                        resword = &wordlist[37];
                        goto compare;
                      case 176:
                        resword = &wordlist[38];
                        goto compare;
                      case 177:
                        resword = &wordlist[39];
                        goto compare;
                      case 189:
                        resword = &wordlist[40];
                        goto compare;
                      case 191:
                        resword = &wordlist[41];
                        goto compare;
                      case 207:
                        resword = &wordlist[42];
                        goto compare;
                      case 217:
                        resword = &wordlist[43];
                        goto compare;
                      case 224:
                        resword = &wordlist[44];
                        goto compare;
                      case 227:
                        resword = &wordlist[45];
                        goto compare;
                      case 231:
                        resword = &wordlist[46];
                        goto compare;
                      case 235:
                        resword = &wordlist[47];
                        goto compare;
                      case 242:
                        resword = &wordlist[48];
                        goto compare;
                      case 245:
                        resword = &wordlist[49];
                        goto compare;
                      case 247:
                        resword = &wordlist[50];
                        goto compare;
                      case 256:
                        resword = &wordlist[51];
                        goto compare;
                      case 266:
                        resword = &wordlist[52];
                        goto compare;
                      case 271:
                        resword = &wordlist[53];
                        goto compare;
                      case 272:
                        resword = &wordlist[54];
                        goto compare;
                      case 277:
                        resword = &wordlist[55];
                        goto compare;
                      case 279:
                        resword = &wordlist[56];
                        goto compare;
                      case 281:
                        resword = &wordlist[57];
                        goto compare;
                      case 282:
                        resword = &wordlist[58];
                        goto compare;
                      case 283:
                        resword = &wordlist[59];
                        goto compare;
                      case 284:
                        resword = &wordlist[60];
                        goto compare;
                      case 286:
                        resword = &wordlist[61];
                        goto compare;
                      case 287:
                        resword = &wordlist[62];
                        goto compare;
                      case 297:
                        resword = &wordlist[63];
                        goto compare;
                      case 299:
                        resword = &wordlist[64];
                        goto compare;
                      case 301:
                        resword = &wordlist[65];
                        goto compare;
                      case 302:
                        resword = &wordlist[66];
                        goto compare;
                      case 304:
                        resword = &wordlist[67];
                        goto compare;
                      case 307:
                        resword = &wordlist[68];
                        goto compare;
                      case 312:
                        resword = &wordlist[69];
                        goto compare;
                      case 313:
                        resword = &wordlist[70];
                        goto compare;
                      case 317:
                        resword = &wordlist[71];
                        goto compare;
                      case 319:
                        resword = &wordlist[72];
                        goto compare;
                      case 322:
                        resword = &wordlist[73];
                        goto compare;
                      case 327:
                        resword = &wordlist[74];
                        goto compare;
                      case 329:
                        resword = &wordlist[75];
                        goto compare;
                      case 336:
                        resword = &wordlist[76];
                        goto compare;
                      case 337:
                        resword = &wordlist[77];
                        goto compare;
                      case 338:
                        resword = &wordlist[78];
                        goto compare;
                      case 339:
                        resword = &wordlist[79];
                        goto compare;
                      case 340:
                        resword = &wordlist[80];
                        goto compare;
                      case 342:
                        resword = &wordlist[81];
                        goto compare;
                      case 345:
                        resword = &wordlist[82];
                        goto compare;
                      case 347:
                        resword = &wordlist[83];
                        goto compare;
                      case 351:
                        resword = &wordlist[84];
                        goto compare;
                      case 352:
                        resword = &wordlist[85];
                        goto compare;
                      case 356:
                        resword = &wordlist[86];
                        goto compare;
                      case 357:
                        resword = &wordlist[87];
                        goto compare;
                      case 361:
                        resword = &wordlist[88];
                        goto compare;
                      case 362:
                        resword = &wordlist[89];
                        goto compare;
                      case 369:
                        resword = &wordlist[90];
                        goto compare;
                      case 371:
                        resword = &wordlist[91];
                        goto compare;
                      case 379:
                        resword = &wordlist[92];
                        goto compare;
                      case 386:
                        resword = &wordlist[93];
                        goto compare;
                      case 387:
                        resword = &wordlist[94];
                        goto compare;
                      case 389:
                        resword = &wordlist[95];
                        goto compare;
                      case 392:
                        resword = &wordlist[96];
                        goto compare;
                      case 394:
                        resword = &wordlist[97];
                        goto compare;
                      case 397:
                        resword = &wordlist[98];
                        goto compare;
                      case 399:
                        resword = &wordlist[99];
                        goto compare;
                      case 409:
                        resword = &wordlist[100];
                        goto compare;
                      case 412:
                        resword = &wordlist[101];
                        goto compare;
                      case 417:
                        resword = &wordlist[102];
                        goto compare;
                      case 419:
                        resword = &wordlist[103];
                        goto compare;
                      case 426:
                        resword = &wordlist[104];
                        goto compare;
                      case 429:
                        resword = &wordlist[105];
                        goto compare;
                      case 432:
                        resword = &wordlist[106];
                        goto compare;
                      case 447:
                        resword = &wordlist[107];
                        goto compare;
                      case 451:
                        resword = &wordlist[108];
                        goto compare;
                      case 452:
                        resword = &wordlist[109];
                        goto compare;
                      case 457:
                        resword = &wordlist[110];
                        goto compare;
                      case 462:
                        resword = &wordlist[111];
                        goto compare;
                      case 466:
                        resword = &wordlist[112];
                        goto compare;
                      case 469:
                        resword = &wordlist[113];
                        goto compare;
                      case 481:
                        resword = &wordlist[114];
                        goto compare;
                      case 484:
                        resword = &wordlist[115];
                        goto compare;
                      case 488:
                        resword = &wordlist[116];
                        goto compare;
                      case 491:
                        resword = &wordlist[117];
                        goto compare;
                      case 492:
                        resword = &wordlist[118];
                        goto compare;
                      case 507:
                        resword = &wordlist[119];
                        goto compare;
                      case 509:
                        resword = &wordlist[120];
                        goto compare;
                      case 512:
                        resword = &wordlist[121];
                        goto compare;
                      case 520:
                        resword = &wordlist[122];
                        goto compare;
                      case 524:
                        resword = &wordlist[123];
                        goto compare;
                      case 532:
                        resword = &wordlist[124];
                        goto compare;
                      case 534:
                        resword = &wordlist[125];
                        goto compare;
                      case 536:
                        resword = &wordlist[126];
                        goto compare;
                      case 537:
                        resword = &wordlist[127];
                        goto compare;
                      case 542:
                        resword = &wordlist[128];
                        goto compare;
                      case 545:
                        resword = &wordlist[129];
                        goto compare;
                      case 546:
                        resword = &wordlist[130];
                        goto compare;
                      case 547:
                        resword = &wordlist[131];
                        goto compare;
                      case 550:
                        resword = &wordlist[132];
                        goto compare;
                      case 552:
                        resword = &wordlist[133];
                        goto compare;
                      case 562:
                        resword = &wordlist[134];
                        goto compare;
                      case 566:
                        resword = &wordlist[135];
                        goto compare;
                      case 572:
                        resword = &wordlist[136];
                        goto compare;
                      case 578:
                        resword = &wordlist[137];
                        goto compare;
                      case 582:
                        resword = &wordlist[138];
                        goto compare;
                      case 583:
                        resword = &wordlist[139];
                        goto compare;
                      case 592:
                        resword = &wordlist[140];
                        goto compare;
                      case 594:
                        resword = &wordlist[141];
                        goto compare;
                      case 595:
                        resword = &wordlist[142];
                        goto compare;
                      case 597:
                        resword = &wordlist[143];
                        goto compare;
                      case 602:
                        resword = &wordlist[144];
                        goto compare;
                      case 604:
                        resword = &wordlist[145];
                        goto compare;
                      case 605:
                        resword = &wordlist[146];
                        goto compare;
                      case 607:
                        resword = &wordlist[147];
                        goto compare;
                      case 609:
                        resword = &wordlist[148];
                        goto compare;
                      case 614:
                        resword = &wordlist[149];
                        goto compare;
                      case 617:
                        resword = &wordlist[150];
                        goto compare;
                      case 618:
                        resword = &wordlist[151];
                        goto compare;
                      case 622:
                        resword = &wordlist[152];
                        goto compare;
                      case 623:
                        resword = &wordlist[153];
                        goto compare;
                      case 627:
                        resword = &wordlist[154];
                        goto compare;
                      case 634:
                        resword = &wordlist[155];
                        goto compare;
                      case 636:
                        resword = &wordlist[156];
                        goto compare;
                      case 637:
                        resword = &wordlist[157];
                        goto compare;
                      case 639:
                        resword = &wordlist[158];
                        goto compare;
                      case 642:
                        resword = &wordlist[159];
                        goto compare;
                      case 644:
                        resword = &wordlist[160];
                        goto compare;
                      case 647:
                        resword = &wordlist[161];
                        goto compare;
                      case 654:
                        resword = &wordlist[162];
                        goto compare;
                      case 655:
                        resword = &wordlist[163];
                        goto compare;
                      case 657:
                        resword = &wordlist[164];
                        goto compare;
                      case 660:
                        resword = &wordlist[165];
                        goto compare;
                      case 664:
                        resword = &wordlist[166];
                        goto compare;
                      case 672:
                        resword = &wordlist[167];
                        goto compare;
                      case 674:
                        resword = &wordlist[168];
                        goto compare;
                      case 679:
                        resword = &wordlist[169];
                        goto compare;
                      case 682:
                        resword = &wordlist[170];
                        goto compare;
                      case 684:
                        resword = &wordlist[171];
                        goto compare;
                      case 699:
                        resword = &wordlist[172];
                        goto compare;
                      case 701:
                        resword = &wordlist[173];
                        goto compare;
                      case 702:
                        resword = &wordlist[174];
                        goto compare;
                      case 707:
                        resword = &wordlist[175];
                        goto compare;
                      case 712:
                        resword = &wordlist[176];
                        goto compare;
                      case 714:
                        resword = &wordlist[177];
                        goto compare;
                      case 717:
                        resword = &wordlist[178];
                        goto compare;
                      case 722:
                        resword = &wordlist[179];
                        goto compare;
                      case 724:
                        resword = &wordlist[180];
                        goto compare;
                      case 725:
                        resword = &wordlist[181];
                        goto compare;
                      case 727:
                        resword = &wordlist[182];
                        goto compare;
                      case 729:
                        resword = &wordlist[183];
                        goto compare;
                      case 732:
                        resword = &wordlist[184];
                        goto compare;
                      case 737:
                        resword = &wordlist[185];
                        goto compare;
                      case 742:
                        resword = &wordlist[186];
                        goto compare;
                      case 743:
                        resword = &wordlist[187];
                        goto compare;
                      case 747:
                        resword = &wordlist[188];
                        goto compare;
                      case 748:
                        resword = &wordlist[189];
                        goto compare;
                      case 751:
                        resword = &wordlist[190];
                        goto compare;
                      case 752:
                        resword = &wordlist[191];
                        goto compare;
                      case 754:
                        resword = &wordlist[192];
                        goto compare;
                      case 757:
                        resword = &wordlist[193];
                        goto compare;
                      case 761:
                        resword = &wordlist[194];
                        goto compare;
                      case 762:
                        resword = &wordlist[195];
                        goto compare;
                      case 767:
                        resword = &wordlist[196];
                        goto compare;
                      case 772:
                        resword = &wordlist[197];
                        goto compare;
                      case 774:
                        resword = &wordlist[198];
                        goto compare;
                      case 779:
                        resword = &wordlist[199];
                        goto compare;
                      case 781:
                        resword = &wordlist[200];
                        goto compare;
                      case 782:
                        resword = &wordlist[201];
                        goto compare;
                      case 786:
                        resword = &wordlist[202];
                        goto compare;
                      case 787:
                        resword = &wordlist[203];
                        goto compare;
                      case 788:
                        resword = &wordlist[204];
                        goto compare;
                      case 789:
                        resword = &wordlist[205];
                        goto compare;
                      case 790:
                        resword = &wordlist[206];
                        goto compare;
                      case 792:
                        resword = &wordlist[207];
                        goto compare;
                      case 794:
                        resword = &wordlist[208];
                        goto compare;
                      case 796:
                        resword = &wordlist[209];
                        goto compare;
                      case 797:
                        resword = &wordlist[210];
                        goto compare;
                      case 799:
                        resword = &wordlist[211];
                        goto compare;
                      case 802:
                        resword = &wordlist[212];
                        goto compare;
                      case 804:
                        resword = &wordlist[213];
                        goto compare;
                      case 807:
                        resword = &wordlist[214];
                        goto compare;
                      case 809:
                        resword = &wordlist[215];
                        goto compare;
                      case 811:
                        resword = &wordlist[216];
                        goto compare;
                      case 812:
                        resword = &wordlist[217];
                        goto compare;
                      case 813:
                        resword = &wordlist[218];
                        goto compare;
                      case 814:
                        resword = &wordlist[219];
                        goto compare;
                      case 815:
                        resword = &wordlist[220];
                        goto compare;
                      case 821:
                        resword = &wordlist[221];
                        goto compare;
                      case 824:
                        resword = &wordlist[222];
                        goto compare;
                      case 827:
                        resword = &wordlist[223];
                        goto compare;
                      case 829:
                        resword = &wordlist[224];
                        goto compare;
                      case 832:
                        resword = &wordlist[225];
                        goto compare;
                      case 837:
                        resword = &wordlist[226];
                        goto compare;
                      case 840:
                        resword = &wordlist[227];
                        goto compare;
                      case 852:
                        resword = &wordlist[228];
                        goto compare;
                      case 853:
                        resword = &wordlist[229];
                        goto compare;
                      case 854:
                        resword = &wordlist[230];
                        goto compare;
                      case 857:
                        resword = &wordlist[231];
                        goto compare;
                      case 858:
                        resword = &wordlist[232];
                        goto compare;
                      case 859:
                        resword = &wordlist[233];
                        goto compare;
                      case 862:
                        resword = &wordlist[234];
                        goto compare;
                      case 864:
                        resword = &wordlist[235];
                        goto compare;
                      case 867:
                        resword = &wordlist[236];
                        goto compare;
                      case 870:
                        resword = &wordlist[237];
                        goto compare;
                      case 874:
                        resword = &wordlist[238];
                        goto compare;
                      case 875:
                        resword = &wordlist[239];
                        goto compare;
                      case 877:
                        resword = &wordlist[240];
                        goto compare;
                      case 882:
                        resword = &wordlist[241];
                        goto compare;
                      case 884:
                        resword = &wordlist[242];
                        goto compare;
                      case 887:
                        resword = &wordlist[243];
                        goto compare;
                      case 891:
                        resword = &wordlist[244];
                        goto compare;
                      case 892:
                        resword = &wordlist[245];
                        goto compare;
                      case 893:
                        resword = &wordlist[246];
                        goto compare;
                      case 894:
                        resword = &wordlist[247];
                        goto compare;
                      case 897:
                        resword = &wordlist[248];
                        goto compare;
                      case 899:
                        resword = &wordlist[249];
                        goto compare;
                      case 902:
                        resword = &wordlist[250];
                        goto compare;
                      case 903:
                        resword = &wordlist[251];
                        goto compare;
                      case 904:
                        resword = &wordlist[252];
                        goto compare;
                      case 905:
                        resword = &wordlist[253];
                        goto compare;
                      case 906:
                        resword = &wordlist[254];
                        goto compare;
                      case 907:
                        resword = &wordlist[255];
                        goto compare;
                      case 917:
                        resword = &wordlist[256];
                        goto compare;
                      case 923:
                        resword = &wordlist[257];
                        goto compare;
                      case 924:
                        resword = &wordlist[258];
                        goto compare;
                      case 927:
                        resword = &wordlist[259];
                        goto compare;
                      case 929:
                        resword = &wordlist[260];
                        goto compare;
                      case 932:
                        resword = &wordlist[261];
                        goto compare;
                      case 934:
                        resword = &wordlist[262];
                        goto compare;
                      case 937:
                        resword = &wordlist[263];
                        goto compare;
                      case 944:
                        resword = &wordlist[264];
                        goto compare;
                      case 947:
                        resword = &wordlist[265];
                        goto compare;
                      case 955:
                        resword = &wordlist[266];
                        goto compare;
                      case 957:
                        resword = &wordlist[267];
                        goto compare;
                      case 959:
                        resword = &wordlist[268];
                        goto compare;
                      case 962:
                        resword = &wordlist[269];
                        goto compare;
                      case 965:
                        resword = &wordlist[270];
                        goto compare;
                      case 968:
                        resword = &wordlist[271];
                        goto compare;
                      case 982:
                        resword = &wordlist[272];
                        goto compare;
                      case 984:
                        resword = &wordlist[273];
                        goto compare;
                      case 991:
                        resword = &wordlist[274];
                        goto compare;
                      case 993:
                        resword = &wordlist[275];
                        goto compare;
                      case 999:
                        resword = &wordlist[276];
                        goto compare;
                      case 1001:
                        resword = &wordlist[277];
                        goto compare;
                      case 1007:
                        resword = &wordlist[278];
                        goto compare;
                      case 1011:
                        resword = &wordlist[279];
                        goto compare;
                      case 1012:
                        resword = &wordlist[280];
                        goto compare;
                      case 1015:
                        resword = &wordlist[281];
                        goto compare;
                      case 1016:
                        resword = &wordlist[282];
                        goto compare;
                      case 1017:
                        resword = &wordlist[283];
                        goto compare;
                      case 1022:
                        resword = &wordlist[284];
                        goto compare;
                      case 1026:
                        resword = &wordlist[285];
                        goto compare;
                      case 1027:
                        resword = &wordlist[286];
                        goto compare;
                      case 1029:
                        resword = &wordlist[287];
                        goto compare;
                      case 1031:
                        resword = &wordlist[288];
                        goto compare;
                      case 1036:
                        resword = &wordlist[289];
                        goto compare;
                      case 1042:
                        resword = &wordlist[290];
                        goto compare;
                    }
                }
              else
                {
                  switch (key - 1048)
                    {
                      case 0:
                        resword = &wordlist[291];
                        goto compare;
                      case 1:
                        resword = &wordlist[292];
                        goto compare;
                      case 4:
                        resword = &wordlist[293];
                        goto compare;
                      case 5:
                        resword = &wordlist[294];
                        goto compare;
                      case 9:
                        resword = &wordlist[295];
                        goto compare;
                      case 10:
                        resword = &wordlist[296];
                        goto compare;
                      case 17:
                        resword = &wordlist[297];
                        goto compare;
                      case 18:
                        resword = &wordlist[298];
                        goto compare;
                      case 20:
                        resword = &wordlist[299];
                        goto compare;
                      case 21:
                        resword = &wordlist[300];
                        goto compare;
                      case 25:
                        resword = &wordlist[301];
                        goto compare;
                      case 26:
                        resword = &wordlist[302];
                        goto compare;
                      case 30:
                        resword = &wordlist[303];
                        goto compare;
                      case 32:
                        resword = &wordlist[304];
                        goto compare;
                      case 35:
                        resword = &wordlist[305];
                        goto compare;
                      case 37:
                        resword = &wordlist[306];
                        goto compare;
                      case 39:
                        resword = &wordlist[307];
                        goto compare;
                      case 40:
                        resword = &wordlist[308];
                        goto compare;
                      case 42:
                        resword = &wordlist[309];
                        goto compare;
                      case 43:
                        resword = &wordlist[310];
                        goto compare;
                      case 45:
                        resword = &wordlist[311];
                        goto compare;
                      case 50:
                        resword = &wordlist[312];
                        goto compare;
                      case 58:
                        resword = &wordlist[313];
                        goto compare;
                      case 62:
                        resword = &wordlist[314];
                        goto compare;
                      case 65:
                        resword = &wordlist[315];
                        goto compare;
                      case 67:
                        resword = &wordlist[316];
                        goto compare;
                      case 69:
                        resword = &wordlist[317];
                        goto compare;
                      case 70:
                        resword = &wordlist[318];
                        goto compare;
                      case 72:
                        resword = &wordlist[319];
                        goto compare;
                      case 75:
                        resword = &wordlist[320];
                        goto compare;
                      case 77:
                        resword = &wordlist[321];
                        goto compare;
                      case 78:
                        resword = &wordlist[322];
                        goto compare;
                      case 82:
                        resword = &wordlist[323];
                        goto compare;
                      case 85:
                        resword = &wordlist[324];
                        goto compare;
                      case 92:
                        resword = &wordlist[325];
                        goto compare;
                      case 95:
                        resword = &wordlist[326];
                        goto compare;
                      case 97:
                        resword = &wordlist[327];
                        goto compare;
                      case 100:
                        resword = &wordlist[328];
                        goto compare;
                      case 102:
                        resword = &wordlist[329];
                        goto compare;
                      case 105:
                        resword = &wordlist[330];
                        goto compare;
                      case 107:
                        resword = &wordlist[331];
                        goto compare;
                      case 110:
                        resword = &wordlist[332];
                        goto compare;
                      case 115:
                        resword = &wordlist[333];
                        goto compare;
                      case 117:
                        resword = &wordlist[334];
                        goto compare;
                      case 120:
                        resword = &wordlist[335];
                        goto compare;
                      case 121:
                        resword = &wordlist[336];
                        goto compare;
                      case 123:
                        resword = &wordlist[337];
                        goto compare;
                      case 125:
                        resword = &wordlist[338];
                        goto compare;
                      case 126:
                        resword = &wordlist[339];
                        goto compare;
                      case 128:
                        resword = &wordlist[340];
                        goto compare;
                      case 130:
                        resword = &wordlist[341];
                        goto compare;
                      case 131:
                        resword = &wordlist[342];
                        goto compare;
                      case 139:
                        resword = &wordlist[343];
                        goto compare;
                      case 140:
                        resword = &wordlist[344];
                        goto compare;
                      case 141:
                        resword = &wordlist[345];
                        goto compare;
                      case 143:
                        resword = &wordlist[346];
                        goto compare;
                      case 145:
                        resword = &wordlist[347];
                        goto compare;
                      case 146:
                        resword = &wordlist[348];
                        goto compare;
                      case 150:
                        resword = &wordlist[349];
                        goto compare;
                      case 155:
                        resword = &wordlist[350];
                        goto compare;
                      case 160:
                        resword = &wordlist[351];
                        goto compare;
                      case 162:
                        resword = &wordlist[352];
                        goto compare;
                      case 167:
                        resword = &wordlist[353];
                        goto compare;
                      case 170:
                        resword = &wordlist[354];
                        goto compare;
                      case 175:
                        resword = &wordlist[355];
                        goto compare;
                      case 179:
                        resword = &wordlist[356];
                        goto compare;
                      case 187:
                        resword = &wordlist[357];
                        goto compare;
                      case 190:
                        resword = &wordlist[358];
                        goto compare;
                      case 192:
                        resword = &wordlist[359];
                        goto compare;
                      case 197:
                        resword = &wordlist[360];
                        goto compare;
                      case 199:
                        resword = &wordlist[361];
                        goto compare;
                      case 200:
                        resword = &wordlist[362];
                        goto compare;
                      case 202:
                        resword = &wordlist[363];
                        goto compare;
                      case 206:
                        resword = &wordlist[364];
                        goto compare;
                      case 207:
                        resword = &wordlist[365];
                        goto compare;
                      case 209:
                        resword = &wordlist[366];
                        goto compare;
                      case 210:
                        resword = &wordlist[367];
                        goto compare;
                      case 212:
                        resword = &wordlist[368];
                        goto compare;
                      case 216:
                        resword = &wordlist[369];
                        goto compare;
                      case 219:
                        resword = &wordlist[370];
                        goto compare;
                      case 220:
                        resword = &wordlist[371];
                        goto compare;
                      case 222:
                        resword = &wordlist[372];
                        goto compare;
                      case 230:
                        resword = &wordlist[373];
                        goto compare;
                      case 239:
                        resword = &wordlist[374];
                        goto compare;
                      case 240:
                        resword = &wordlist[375];
                        goto compare;
                      case 241:
                        resword = &wordlist[376];
                        goto compare;
                      case 246:
                        resword = &wordlist[377];
                        goto compare;
                      case 248:
                        resword = &wordlist[378];
                        goto compare;
                      case 250:
                        resword = &wordlist[379];
                        goto compare;
                      case 254:
                        resword = &wordlist[380];
                        goto compare;
                      case 255:
                        resword = &wordlist[381];
                        goto compare;
                      case 258:
                        resword = &wordlist[382];
                        goto compare;
                      case 260:
                        resword = &wordlist[383];
                        goto compare;
                      case 267:
                        resword = &wordlist[384];
                        goto compare;
                      case 272:
                        resword = &wordlist[385];
                        goto compare;
                      case 275:
                        resword = &wordlist[386];
                        goto compare;
                      case 277:
                        resword = &wordlist[387];
                        goto compare;
                      case 278:
                        resword = &wordlist[388];
                        goto compare;
                      case 280:
                        resword = &wordlist[389];
                        goto compare;
                      case 281:
                        resword = &wordlist[390];
                        goto compare;
                      case 290:
                        resword = &wordlist[391];
                        goto compare;
                      case 292:
                        resword = &wordlist[392];
                        goto compare;
                      case 293:
                        resword = &wordlist[393];
                        goto compare;
                      case 297:
                        resword = &wordlist[394];
                        goto compare;
                      case 299:
                        resword = &wordlist[395];
                        goto compare;
                      case 302:
                        resword = &wordlist[396];
                        goto compare;
                      case 305:
                        resword = &wordlist[397];
                        goto compare;
                      case 306:
                        resword = &wordlist[398];
                        goto compare;
                      case 307:
                        resword = &wordlist[399];
                        goto compare;
                      case 310:
                        resword = &wordlist[400];
                        goto compare;
                      case 311:
                        resword = &wordlist[401];
                        goto compare;
                      case 315:
                        resword = &wordlist[402];
                        goto compare;
                      case 316:
                        resword = &wordlist[403];
                        goto compare;
                      case 321:
                        resword = &wordlist[404];
                        goto compare;
                      case 322:
                        resword = &wordlist[405];
                        goto compare;
                      case 325:
                        resword = &wordlist[406];
                        goto compare;
                      case 327:
                        resword = &wordlist[407];
                        goto compare;
                      case 328:
                        resword = &wordlist[408];
                        goto compare;
                      case 330:
                        resword = &wordlist[409];
                        goto compare;
                      case 331:
                        resword = &wordlist[410];
                        goto compare;
                      case 332:
                        resword = &wordlist[411];
                        goto compare;
                      case 335:
                        resword = &wordlist[412];
                        goto compare;
                      case 337:
                        resword = &wordlist[413];
                        goto compare;
                      case 340:
                        resword = &wordlist[414];
                        goto compare;
                      case 344:
                        resword = &wordlist[415];
                        goto compare;
                      case 345:
                        resword = &wordlist[416];
                        goto compare;
                      case 347:
                        resword = &wordlist[417];
                        goto compare;
                      case 350:
                        resword = &wordlist[418];
                        goto compare;
                      case 352:
                        resword = &wordlist[419];
                        goto compare;
                      case 355:
                        resword = &wordlist[420];
                        goto compare;
                      case 360:
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
                      case 367:
                        resword = &wordlist[425];
                        goto compare;
                      case 370:
                        resword = &wordlist[426];
                        goto compare;
                      case 375:
                        resword = &wordlist[427];
                        goto compare;
                      case 377:
                        resword = &wordlist[428];
                        goto compare;
                      case 378:
                        resword = &wordlist[429];
                        goto compare;
                      case 382:
                        resword = &wordlist[430];
                        goto compare;
                      case 385:
                        resword = &wordlist[431];
                        goto compare;
                      case 388:
                        resword = &wordlist[432];
                        goto compare;
                      case 390:
                        resword = &wordlist[433];
                        goto compare;
                      case 395:
                        resword = &wordlist[434];
                        goto compare;
                      case 398:
                        resword = &wordlist[435];
                        goto compare;
                      case 400:
                        resword = &wordlist[436];
                        goto compare;
                      case 401:
                        resword = &wordlist[437];
                        goto compare;
                      case 411:
                        resword = &wordlist[438];
                        goto compare;
                      case 412:
                        resword = &wordlist[439];
                        goto compare;
                      case 415:
                        resword = &wordlist[440];
                        goto compare;
                      case 420:
                        resword = &wordlist[441];
                        goto compare;
                      case 422:
                        resword = &wordlist[442];
                        goto compare;
                      case 425:
                        resword = &wordlist[443];
                        goto compare;
                      case 426:
                        resword = &wordlist[444];
                        goto compare;
                      case 428:
                        resword = &wordlist[445];
                        goto compare;
                      case 435:
                        resword = &wordlist[446];
                        goto compare;
                      case 438:
                        resword = &wordlist[447];
                        goto compare;
                      case 440:
                        resword = &wordlist[448];
                        goto compare;
                      case 447:
                        resword = &wordlist[449];
                        goto compare;
                      case 452:
                        resword = &wordlist[450];
                        goto compare;
                      case 455:
                        resword = &wordlist[451];
                        goto compare;
                      case 457:
                        resword = &wordlist[452];
                        goto compare;
                      case 460:
                        resword = &wordlist[453];
                        goto compare;
                      case 461:
                        resword = &wordlist[454];
                        goto compare;
                      case 462:
                        resword = &wordlist[455];
                        goto compare;
                      case 470:
                        resword = &wordlist[456];
                        goto compare;
                      case 472:
                        resword = &wordlist[457];
                        goto compare;
                      case 473:
                        resword = &wordlist[458];
                        goto compare;
                      case 475:
                        resword = &wordlist[459];
                        goto compare;
                      case 480:
                        resword = &wordlist[460];
                        goto compare;
                      case 482:
                        resword = &wordlist[461];
                        goto compare;
                      case 485:
                        resword = &wordlist[462];
                        goto compare;
                      case 487:
                        resword = &wordlist[463];
                        goto compare;
                      case 490:
                        resword = &wordlist[464];
                        goto compare;
                      case 491:
                        resword = &wordlist[465];
                        goto compare;
                      case 495:
                        resword = &wordlist[466];
                        goto compare;
                      case 497:
                        resword = &wordlist[467];
                        goto compare;
                      case 499:
                        resword = &wordlist[468];
                        goto compare;
                      case 502:
                        resword = &wordlist[469];
                        goto compare;
                      case 507:
                        resword = &wordlist[470];
                        goto compare;
                      case 510:
                        resword = &wordlist[471];
                        goto compare;
                      case 512:
                        resword = &wordlist[472];
                        goto compare;
                      case 514:
                        resword = &wordlist[473];
                        goto compare;
                      case 517:
                        resword = &wordlist[474];
                        goto compare;
                      case 518:
                        resword = &wordlist[475];
                        goto compare;
                      case 520:
                        resword = &wordlist[476];
                        goto compare;
                      case 522:
                        resword = &wordlist[477];
                        goto compare;
                      case 525:
                        resword = &wordlist[478];
                        goto compare;
                      case 527:
                        resword = &wordlist[479];
                        goto compare;
                      case 528:
                        resword = &wordlist[480];
                        goto compare;
                      case 530:
                        resword = &wordlist[481];
                        goto compare;
                      case 532:
                        resword = &wordlist[482];
                        goto compare;
                      case 534:
                        resword = &wordlist[483];
                        goto compare;
                      case 535:
                        resword = &wordlist[484];
                        goto compare;
                      case 539:
                        resword = &wordlist[485];
                        goto compare;
                      case 541:
                        resword = &wordlist[486];
                        goto compare;
                      case 550:
                        resword = &wordlist[487];
                        goto compare;
                      case 557:
                        resword = &wordlist[488];
                        goto compare;
                      case 559:
                        resword = &wordlist[489];
                        goto compare;
                      case 560:
                        resword = &wordlist[490];
                        goto compare;
                      case 562:
                        resword = &wordlist[491];
                        goto compare;
                      case 567:
                        resword = &wordlist[492];
                        goto compare;
                      case 575:
                        resword = &wordlist[493];
                        goto compare;
                      case 577:
                        resword = &wordlist[494];
                        goto compare;
                      case 580:
                        resword = &wordlist[495];
                        goto compare;
                      case 585:
                        resword = &wordlist[496];
                        goto compare;
                      case 590:
                        resword = &wordlist[497];
                        goto compare;
                      case 592:
                        resword = &wordlist[498];
                        goto compare;
                      case 594:
                        resword = &wordlist[499];
                        goto compare;
                      case 597:
                        resword = &wordlist[500];
                        goto compare;
                      case 600:
                        resword = &wordlist[501];
                        goto compare;
                      case 605:
                        resword = &wordlist[502];
                        goto compare;
                      case 606:
                        resword = &wordlist[503];
                        goto compare;
                      case 608:
                        resword = &wordlist[504];
                        goto compare;
                      case 618:
                        resword = &wordlist[505];
                        goto compare;
                      case 625:
                        resword = &wordlist[506];
                        goto compare;
                      case 630:
                        resword = &wordlist[507];
                        goto compare;
                      case 634:
                        resword = &wordlist[508];
                        goto compare;
                      case 640:
                        resword = &wordlist[509];
                        goto compare;
                      case 641:
                        resword = &wordlist[510];
                        goto compare;
                      case 645:
                        resword = &wordlist[511];
                        goto compare;
                      case 650:
                        resword = &wordlist[512];
                        goto compare;
                      case 665:
                        resword = &wordlist[513];
                        goto compare;
                      case 670:
                        resword = &wordlist[514];
                        goto compare;
                      case 675:
                        resword = &wordlist[515];
                        goto compare;
                      case 681:
                        resword = &wordlist[516];
                        goto compare;
                      case 685:
                        resword = &wordlist[517];
                        goto compare;
                      case 687:
                        resword = &wordlist[518];
                        goto compare;
                      case 688:
                        resword = &wordlist[519];
                        goto compare;
                      case 691:
                        resword = &wordlist[520];
                        goto compare;
                      case 692:
                        resword = &wordlist[521];
                        goto compare;
                      case 695:
                        resword = &wordlist[522];
                        goto compare;
                      case 700:
                        resword = &wordlist[523];
                        goto compare;
                      case 705:
                        resword = &wordlist[524];
                        goto compare;
                      case 707:
                        resword = &wordlist[525];
                        goto compare;
                      case 710:
                        resword = &wordlist[526];
                        goto compare;
                      case 721:
                        resword = &wordlist[527];
                        goto compare;
                      case 722:
                        resword = &wordlist[528];
                        goto compare;
                      case 723:
                        resword = &wordlist[529];
                        goto compare;
                      case 725:
                        resword = &wordlist[530];
                        goto compare;
                      case 726:
                        resword = &wordlist[531];
                        goto compare;
                      case 732:
                        resword = &wordlist[532];
                        goto compare;
                      case 737:
                        resword = &wordlist[533];
                        goto compare;
                      case 740:
                        resword = &wordlist[534];
                        goto compare;
                      case 742:
                        resword = &wordlist[535];
                        goto compare;
                      case 745:
                        resword = &wordlist[536];
                        goto compare;
                      case 747:
                        resword = &wordlist[537];
                        goto compare;
                      case 749:
                        resword = &wordlist[538];
                        goto compare;
                      case 755:
                        resword = &wordlist[539];
                        goto compare;
                      case 756:
                        resword = &wordlist[540];
                        goto compare;
                      case 757:
                        resword = &wordlist[541];
                        goto compare;
                      case 760:
                        resword = &wordlist[542];
                        goto compare;
                      case 761:
                        resword = &wordlist[543];
                        goto compare;
                      case 765:
                        resword = &wordlist[544];
                        goto compare;
                      case 766:
                        resword = &wordlist[545];
                        goto compare;
                      case 770:
                        resword = &wordlist[546];
                        goto compare;
                      case 771:
                        resword = &wordlist[547];
                        goto compare;
                      case 772:
                        resword = &wordlist[548];
                        goto compare;
                      case 775:
                        resword = &wordlist[549];
                        goto compare;
                      case 777:
                        resword = &wordlist[550];
                        goto compare;
                      case 780:
                        resword = &wordlist[551];
                        goto compare;
                      case 782:
                        resword = &wordlist[552];
                        goto compare;
                      case 784:
                        resword = &wordlist[553];
                        goto compare;
                      case 788:
                        resword = &wordlist[554];
                        goto compare;
                      case 790:
                        resword = &wordlist[555];
                        goto compare;
                      case 795:
                        resword = &wordlist[556];
                        goto compare;
                      case 797:
                        resword = &wordlist[557];
                        goto compare;
                      case 799:
                        resword = &wordlist[558];
                        goto compare;
                      case 802:
                        resword = &wordlist[559];
                        goto compare;
                      case 804:
                        resword = &wordlist[560];
                        goto compare;
                      case 807:
                        resword = &wordlist[561];
                        goto compare;
                      case 809:
                        resword = &wordlist[562];
                        goto compare;
                      case 810:
                        resword = &wordlist[563];
                        goto compare;
                      case 812:
                        resword = &wordlist[564];
                        goto compare;
                      case 815:
                        resword = &wordlist[565];
                        goto compare;
                      case 816:
                        resword = &wordlist[566];
                        goto compare;
                      case 821:
                        resword = &wordlist[567];
                        goto compare;
                      case 825:
                        resword = &wordlist[568];
                        goto compare;
                      case 827:
                        resword = &wordlist[569];
                        goto compare;
                      case 830:
                        resword = &wordlist[570];
                        goto compare;
                      case 832:
                        resword = &wordlist[571];
                        goto compare;
                      case 834:
                        resword = &wordlist[572];
                        goto compare;
                      case 841:
                        resword = &wordlist[573];
                        goto compare;
                      case 846:
                        resword = &wordlist[574];
                        goto compare;
                      case 847:
                        resword = &wordlist[575];
                        goto compare;
                      case 849:
                        resword = &wordlist[576];
                        goto compare;
                      case 850:
                        resword = &wordlist[577];
                        goto compare;
                      case 852:
                        resword = &wordlist[578];
                        goto compare;
                      case 854:
                        resword = &wordlist[579];
                        goto compare;
                      case 857:
                        resword = &wordlist[580];
                        goto compare;
                    }
                }
            }
          else
            {
              if (key < 2990)
                {
                  switch (key - 1910)
                    {
                      case 0:
                        resword = &wordlist[581];
                        goto compare;
                      case 2:
                        resword = &wordlist[582];
                        goto compare;
                      case 5:
                        resword = &wordlist[583];
                        goto compare;
                      case 6:
                        resword = &wordlist[584];
                        goto compare;
                      case 8:
                        resword = &wordlist[585];
                        goto compare;
                      case 9:
                        resword = &wordlist[586];
                        goto compare;
                      case 10:
                        resword = &wordlist[587];
                        goto compare;
                      case 14:
                        resword = &wordlist[588];
                        goto compare;
                      case 17:
                        resword = &wordlist[589];
                        goto compare;
                      case 20:
                        resword = &wordlist[590];
                        goto compare;
                      case 23:
                        resword = &wordlist[591];
                        goto compare;
                      case 24:
                        resword = &wordlist[592];
                        goto compare;
                      case 25:
                        resword = &wordlist[593];
                        goto compare;
                      case 31:
                        resword = &wordlist[594];
                        goto compare;
                      case 33:
                        resword = &wordlist[595];
                        goto compare;
                      case 34:
                        resword = &wordlist[596];
                        goto compare;
                      case 35:
                        resword = &wordlist[597];
                        goto compare;
                      case 36:
                        resword = &wordlist[598];
                        goto compare;
                      case 38:
                        resword = &wordlist[599];
                        goto compare;
                      case 40:
                        resword = &wordlist[600];
                        goto compare;
                      case 43:
                        resword = &wordlist[601];
                        goto compare;
                      case 46:
                        resword = &wordlist[602];
                        goto compare;
                      case 48:
                        resword = &wordlist[603];
                        goto compare;
                      case 50:
                        resword = &wordlist[604];
                        goto compare;
                      case 53:
                        resword = &wordlist[605];
                        goto compare;
                      case 56:
                        resword = &wordlist[606];
                        goto compare;
                      case 62:
                        resword = &wordlist[607];
                        goto compare;
                      case 65:
                        resword = &wordlist[608];
                        goto compare;
                      case 73:
                        resword = &wordlist[609];
                        goto compare;
                      case 76:
                        resword = &wordlist[610];
                        goto compare;
                      case 78:
                        resword = &wordlist[611];
                        goto compare;
                      case 79:
                        resword = &wordlist[612];
                        goto compare;
                      case 85:
                        resword = &wordlist[613];
                        goto compare;
                      case 88:
                        resword = &wordlist[614];
                        goto compare;
                      case 93:
                        resword = &wordlist[615];
                        goto compare;
                      case 94:
                        resword = &wordlist[616];
                        goto compare;
                      case 97:
                        resword = &wordlist[617];
                        goto compare;
                      case 98:
                        resword = &wordlist[618];
                        goto compare;
                      case 99:
                        resword = &wordlist[619];
                        goto compare;
                      case 100:
                        resword = &wordlist[620];
                        goto compare;
                      case 102:
                        resword = &wordlist[621];
                        goto compare;
                      case 103:
                        resword = &wordlist[622];
                        goto compare;
                      case 106:
                        resword = &wordlist[623];
                        goto compare;
                      case 107:
                        resword = &wordlist[624];
                        goto compare;
                      case 108:
                        resword = &wordlist[625];
                        goto compare;
                      case 115:
                        resword = &wordlist[626];
                        goto compare;
                      case 118:
                        resword = &wordlist[627];
                        goto compare;
                      case 125:
                        resword = &wordlist[628];
                        goto compare;
                      case 130:
                        resword = &wordlist[629];
                        goto compare;
                      case 132:
                        resword = &wordlist[630];
                        goto compare;
                      case 133:
                        resword = &wordlist[631];
                        goto compare;
                      case 136:
                        resword = &wordlist[632];
                        goto compare;
                      case 138:
                        resword = &wordlist[633];
                        goto compare;
                      case 140:
                        resword = &wordlist[634];
                        goto compare;
                      case 143:
                        resword = &wordlist[635];
                        goto compare;
                      case 145:
                        resword = &wordlist[636];
                        goto compare;
                      case 149:
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
                      case 158:
                        resword = &wordlist[642];
                        goto compare;
                      case 165:
                        resword = &wordlist[643];
                        goto compare;
                      case 168:
                        resword = &wordlist[644];
                        goto compare;
                      case 173:
                        resword = &wordlist[645];
                        goto compare;
                      case 178:
                        resword = &wordlist[646];
                        goto compare;
                      case 179:
                        resword = &wordlist[647];
                        goto compare;
                      case 182:
                        resword = &wordlist[648];
                        goto compare;
                      case 188:
                        resword = &wordlist[649];
                        goto compare;
                      case 190:
                        resword = &wordlist[650];
                        goto compare;
                      case 193:
                        resword = &wordlist[651];
                        goto compare;
                      case 198:
                        resword = &wordlist[652];
                        goto compare;
                      case 200:
                        resword = &wordlist[653];
                        goto compare;
                      case 205:
                        resword = &wordlist[654];
                        goto compare;
                      case 206:
                        resword = &wordlist[655];
                        goto compare;
                      case 207:
                        resword = &wordlist[656];
                        goto compare;
                      case 208:
                        resword = &wordlist[657];
                        goto compare;
                      case 209:
                        resword = &wordlist[658];
                        goto compare;
                      case 210:
                        resword = &wordlist[659];
                        goto compare;
                      case 213:
                        resword = &wordlist[660];
                        goto compare;
                      case 218:
                        resword = &wordlist[661];
                        goto compare;
                      case 228:
                        resword = &wordlist[662];
                        goto compare;
                      case 230:
                        resword = &wordlist[663];
                        goto compare;
                      case 233:
                        resword = &wordlist[664];
                        goto compare;
                      case 235:
                        resword = &wordlist[665];
                        goto compare;
                      case 236:
                        resword = &wordlist[666];
                        goto compare;
                      case 237:
                        resword = &wordlist[667];
                        goto compare;
                      case 245:
                        resword = &wordlist[668];
                        goto compare;
                      case 250:
                        resword = &wordlist[669];
                        goto compare;
                      case 252:
                        resword = &wordlist[670];
                        goto compare;
                      case 253:
                        resword = &wordlist[671];
                        goto compare;
                      case 260:
                        resword = &wordlist[672];
                        goto compare;
                      case 262:
                        resword = &wordlist[673];
                        goto compare;
                      case 267:
                        resword = &wordlist[674];
                        goto compare;
                      case 268:
                        resword = &wordlist[675];
                        goto compare;
                      case 275:
                        resword = &wordlist[676];
                        goto compare;
                      case 277:
                        resword = &wordlist[677];
                        goto compare;
                      case 278:
                        resword = &wordlist[678];
                        goto compare;
                      case 280:
                        resword = &wordlist[679];
                        goto compare;
                      case 283:
                        resword = &wordlist[680];
                        goto compare;
                      case 285:
                        resword = &wordlist[681];
                        goto compare;
                      case 288:
                        resword = &wordlist[682];
                        goto compare;
                      case 293:
                        resword = &wordlist[683];
                        goto compare;
                      case 294:
                        resword = &wordlist[684];
                        goto compare;
                      case 295:
                        resword = &wordlist[685];
                        goto compare;
                      case 296:
                        resword = &wordlist[686];
                        goto compare;
                      case 298:
                        resword = &wordlist[687];
                        goto compare;
                      case 303:
                        resword = &wordlist[688];
                        goto compare;
                      case 305:
                        resword = &wordlist[689];
                        goto compare;
                      case 308:
                        resword = &wordlist[690];
                        goto compare;
                      case 313:
                        resword = &wordlist[691];
                        goto compare;
                      case 318:
                        resword = &wordlist[692];
                        goto compare;
                      case 322:
                        resword = &wordlist[693];
                        goto compare;
                      case 328:
                        resword = &wordlist[694];
                        goto compare;
                      case 333:
                        resword = &wordlist[695];
                        goto compare;
                      case 338:
                        resword = &wordlist[696];
                        goto compare;
                      case 343:
                        resword = &wordlist[697];
                        goto compare;
                      case 344:
                        resword = &wordlist[698];
                        goto compare;
                      case 348:
                        resword = &wordlist[699];
                        goto compare;
                      case 352:
                        resword = &wordlist[700];
                        goto compare;
                      case 353:
                        resword = &wordlist[701];
                        goto compare;
                      case 355:
                        resword = &wordlist[702];
                        goto compare;
                      case 358:
                        resword = &wordlist[703];
                        goto compare;
                      case 363:
                        resword = &wordlist[704];
                        goto compare;
                      case 373:
                        resword = &wordlist[705];
                        goto compare;
                      case 374:
                        resword = &wordlist[706];
                        goto compare;
                      case 377:
                        resword = &wordlist[707];
                        goto compare;
                      case 380:
                        resword = &wordlist[708];
                        goto compare;
                      case 383:
                        resword = &wordlist[709];
                        goto compare;
                      case 388:
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
                      case 397:
                        resword = &wordlist[715];
                        goto compare;
                      case 400:
                        resword = &wordlist[716];
                        goto compare;
                      case 406:
                        resword = &wordlist[717];
                        goto compare;
                      case 408:
                        resword = &wordlist[718];
                        goto compare;
                      case 410:
                        resword = &wordlist[719];
                        goto compare;
                      case 416:
                        resword = &wordlist[720];
                        goto compare;
                      case 417:
                        resword = &wordlist[721];
                        goto compare;
                      case 423:
                        resword = &wordlist[722];
                        goto compare;
                      case 434:
                        resword = &wordlist[723];
                        goto compare;
                      case 438:
                        resword = &wordlist[724];
                        goto compare;
                      case 439:
                        resword = &wordlist[725];
                        goto compare;
                      case 440:
                        resword = &wordlist[726];
                        goto compare;
                      case 441:
                        resword = &wordlist[727];
                        goto compare;
                      case 448:
                        resword = &wordlist[728];
                        goto compare;
                      case 449:
                        resword = &wordlist[729];
                        goto compare;
                      case 452:
                        resword = &wordlist[730];
                        goto compare;
                      case 453:
                        resword = &wordlist[731];
                        goto compare;
                      case 463:
                        resword = &wordlist[732];
                        goto compare;
                      case 467:
                        resword = &wordlist[733];
                        goto compare;
                      case 470:
                        resword = &wordlist[734];
                        goto compare;
                      case 473:
                        resword = &wordlist[735];
                        goto compare;
                      case 478:
                        resword = &wordlist[736];
                        goto compare;
                      case 479:
                        resword = &wordlist[737];
                        goto compare;
                      case 485:
                        resword = &wordlist[738];
                        goto compare;
                      case 494:
                        resword = &wordlist[739];
                        goto compare;
                      case 498:
                        resword = &wordlist[740];
                        goto compare;
                      case 499:
                        resword = &wordlist[741];
                        goto compare;
                      case 503:
                        resword = &wordlist[742];
                        goto compare;
                      case 504:
                        resword = &wordlist[743];
                        goto compare;
                      case 508:
                        resword = &wordlist[744];
                        goto compare;
                      case 528:
                        resword = &wordlist[745];
                        goto compare;
                      case 533:
                        resword = &wordlist[746];
                        goto compare;
                      case 536:
                        resword = &wordlist[747];
                        goto compare;
                      case 540:
                        resword = &wordlist[748];
                        goto compare;
                      case 541:
                        resword = &wordlist[749];
                        goto compare;
                      case 542:
                        resword = &wordlist[750];
                        goto compare;
                      case 543:
                        resword = &wordlist[751];
                        goto compare;
                      case 544:
                        resword = &wordlist[752];
                        goto compare;
                      case 547:
                        resword = &wordlist[753];
                        goto compare;
                      case 548:
                        resword = &wordlist[754];
                        goto compare;
                      case 550:
                        resword = &wordlist[755];
                        goto compare;
                      case 553:
                        resword = &wordlist[756];
                        goto compare;
                      case 562:
                        resword = &wordlist[757];
                        goto compare;
                      case 564:
                        resword = &wordlist[758];
                        goto compare;
                      case 568:
                        resword = &wordlist[759];
                        goto compare;
                      case 569:
                        resword = &wordlist[760];
                        goto compare;
                      case 570:
                        resword = &wordlist[761];
                        goto compare;
                      case 572:
                        resword = &wordlist[762];
                        goto compare;
                      case 573:
                        resword = &wordlist[763];
                        goto compare;
                      case 580:
                        resword = &wordlist[764];
                        goto compare;
                      case 585:
                        resword = &wordlist[765];
                        goto compare;
                      case 593:
                        resword = &wordlist[766];
                        goto compare;
                      case 598:
                        resword = &wordlist[767];
                        goto compare;
                      case 603:
                        resword = &wordlist[768];
                        goto compare;
                      case 608:
                        resword = &wordlist[769];
                        goto compare;
                      case 611:
                        resword = &wordlist[770];
                        goto compare;
                      case 621:
                        resword = &wordlist[771];
                        goto compare;
                      case 622:
                        resword = &wordlist[772];
                        goto compare;
                      case 625:
                        resword = &wordlist[773];
                        goto compare;
                      case 627:
                        resword = &wordlist[774];
                        goto compare;
                      case 634:
                        resword = &wordlist[775];
                        goto compare;
                      case 638:
                        resword = &wordlist[776];
                        goto compare;
                      case 640:
                        resword = &wordlist[777];
                        goto compare;
                      case 643:
                        resword = &wordlist[778];
                        goto compare;
                      case 652:
                        resword = &wordlist[779];
                        goto compare;
                      case 653:
                        resword = &wordlist[780];
                        goto compare;
                      case 655:
                        resword = &wordlist[781];
                        goto compare;
                      case 663:
                        resword = &wordlist[782];
                        goto compare;
                      case 665:
                        resword = &wordlist[783];
                        goto compare;
                      case 669:
                        resword = &wordlist[784];
                        goto compare;
                      case 670:
                        resword = &wordlist[785];
                        goto compare;
                      case 674:
                        resword = &wordlist[786];
                        goto compare;
                      case 678:
                        resword = &wordlist[787];
                        goto compare;
                      case 683:
                        resword = &wordlist[788];
                        goto compare;
                      case 688:
                        resword = &wordlist[789];
                        goto compare;
                      case 690:
                        resword = &wordlist[790];
                        goto compare;
                      case 693:
                        resword = &wordlist[791];
                        goto compare;
                      case 696:
                        resword = &wordlist[792];
                        goto compare;
                      case 698:
                        resword = &wordlist[793];
                        goto compare;
                      case 700:
                        resword = &wordlist[794];
                        goto compare;
                      case 708:
                        resword = &wordlist[795];
                        goto compare;
                      case 710:
                        resword = &wordlist[796];
                        goto compare;
                      case 717:
                        resword = &wordlist[797];
                        goto compare;
                      case 718:
                        resword = &wordlist[798];
                        goto compare;
                      case 719:
                        resword = &wordlist[799];
                        goto compare;
                      case 723:
                        resword = &wordlist[800];
                        goto compare;
                      case 727:
                        resword = &wordlist[801];
                        goto compare;
                      case 729:
                        resword = &wordlist[802];
                        goto compare;
                      case 730:
                        resword = &wordlist[803];
                        goto compare;
                      case 733:
                        resword = &wordlist[804];
                        goto compare;
                      case 736:
                        resword = &wordlist[805];
                        goto compare;
                      case 739:
                        resword = &wordlist[806];
                        goto compare;
                      case 749:
                        resword = &wordlist[807];
                        goto compare;
                      case 752:
                        resword = &wordlist[808];
                        goto compare;
                      case 753:
                        resword = &wordlist[809];
                        goto compare;
                      case 761:
                        resword = &wordlist[810];
                        goto compare;
                      case 762:
                        resword = &wordlist[811];
                        goto compare;
                      case 763:
                        resword = &wordlist[812];
                        goto compare;
                      case 768:
                        resword = &wordlist[813];
                        goto compare;
                      case 773:
                        resword = &wordlist[814];
                        goto compare;
                      case 774:
                        resword = &wordlist[815];
                        goto compare;
                      case 775:
                        resword = &wordlist[816];
                        goto compare;
                      case 789:
                        resword = &wordlist[817];
                        goto compare;
                      case 790:
                        resword = &wordlist[818];
                        goto compare;
                      case 795:
                        resword = &wordlist[819];
                        goto compare;
                      case 797:
                        resword = &wordlist[820];
                        goto compare;
                      case 798:
                        resword = &wordlist[821];
                        goto compare;
                      case 803:
                        resword = &wordlist[822];
                        goto compare;
                      case 813:
                        resword = &wordlist[823];
                        goto compare;
                      case 818:
                        resword = &wordlist[824];
                        goto compare;
                      case 827:
                        resword = &wordlist[825];
                        goto compare;
                      case 835:
                        resword = &wordlist[826];
                        goto compare;
                      case 841:
                        resword = &wordlist[827];
                        goto compare;
                      case 843:
                        resword = &wordlist[828];
                        goto compare;
                      case 863:
                        resword = &wordlist[829];
                        goto compare;
                      case 867:
                        resword = &wordlist[830];
                        goto compare;
                      case 868:
                        resword = &wordlist[831];
                        goto compare;
                      case 869:
                        resword = &wordlist[832];
                        goto compare;
                      case 885:
                        resword = &wordlist[833];
                        goto compare;
                      case 888:
                        resword = &wordlist[834];
                        goto compare;
                      case 890:
                        resword = &wordlist[835];
                        goto compare;
                      case 893:
                        resword = &wordlist[836];
                        goto compare;
                      case 896:
                        resword = &wordlist[837];
                        goto compare;
                      case 905:
                        resword = &wordlist[838];
                        goto compare;
                      case 923:
                        resword = &wordlist[839];
                        goto compare;
                      case 930:
                        resword = &wordlist[840];
                        goto compare;
                      case 939:
                        resword = &wordlist[841];
                        goto compare;
                      case 942:
                        resword = &wordlist[842];
                        goto compare;
                      case 943:
                        resword = &wordlist[843];
                        goto compare;
                      case 944:
                        resword = &wordlist[844];
                        goto compare;
                      case 945:
                        resword = &wordlist[845];
                        goto compare;
                      case 946:
                        resword = &wordlist[846];
                        goto compare;
                      case 951:
                        resword = &wordlist[847];
                        goto compare;
                      case 963:
                        resword = &wordlist[848];
                        goto compare;
                      case 968:
                        resword = &wordlist[849];
                        goto compare;
                      case 970:
                        resword = &wordlist[850];
                        goto compare;
                      case 979:
                        resword = &wordlist[851];
                        goto compare;
                      case 988:
                        resword = &wordlist[852];
                        goto compare;
                      case 992:
                        resword = &wordlist[853];
                        goto compare;
                      case 994:
                        resword = &wordlist[854];
                        goto compare;
                      case 1003:
                        resword = &wordlist[855];
                        goto compare;
                      case 1016:
                        resword = &wordlist[856];
                        goto compare;
                      case 1024:
                        resword = &wordlist[857];
                        goto compare;
                      case 1030:
                        resword = &wordlist[858];
                        goto compare;
                      case 1033:
                        resword = &wordlist[859];
                        goto compare;
                      case 1036:
                        resword = &wordlist[860];
                        goto compare;
                      case 1038:
                        resword = &wordlist[861];
                        goto compare;
                      case 1043:
                        resword = &wordlist[862];
                        goto compare;
                      case 1050:
                        resword = &wordlist[863];
                        goto compare;
                      case 1051:
                        resword = &wordlist[864];
                        goto compare;
                      case 1053:
                        resword = &wordlist[865];
                        goto compare;
                      case 1055:
                        resword = &wordlist[866];
                        goto compare;
                      case 1059:
                        resword = &wordlist[867];
                        goto compare;
                      case 1060:
                        resword = &wordlist[868];
                        goto compare;
                      case 1064:
                        resword = &wordlist[869];
                        goto compare;
                      case 1066:
                        resword = &wordlist[870];
                        goto compare;
                      case 1075:
                        resword = &wordlist[871];
                        goto compare;
                    }
                }
              else
                {
                  switch (key - 2990)
                    {
                      case 0:
                        resword = &wordlist[872];
                        goto compare;
                      case 3:
                        resword = &wordlist[873];
                        goto compare;
                      case 13:
                        resword = &wordlist[874];
                        goto compare;
                      case 18:
                        resword = &wordlist[875];
                        goto compare;
                      case 20:
                        resword = &wordlist[876];
                        goto compare;
                      case 23:
                        resword = &wordlist[877];
                        goto compare;
                      case 28:
                        resword = &wordlist[878];
                        goto compare;
                      case 29:
                        resword = &wordlist[879];
                        goto compare;
                      case 33:
                        resword = &wordlist[880];
                        goto compare;
                      case 35:
                        resword = &wordlist[881];
                        goto compare;
                      case 38:
                        resword = &wordlist[882];
                        goto compare;
                      case 43:
                        resword = &wordlist[883];
                        goto compare;
                      case 48:
                        resword = &wordlist[884];
                        goto compare;
                      case 58:
                        resword = &wordlist[885];
                        goto compare;
                      case 67:
                        resword = &wordlist[886];
                        goto compare;
                      case 68:
                        resword = &wordlist[887];
                        goto compare;
                      case 75:
                        resword = &wordlist[888];
                        goto compare;
                      case 93:
                        resword = &wordlist[889];
                        goto compare;
                      case 99:
                        resword = &wordlist[890];
                        goto compare;
                      case 103:
                        resword = &wordlist[891];
                        goto compare;
                      case 108:
                        resword = &wordlist[892];
                        goto compare;
                      case 125:
                        resword = &wordlist[893];
                        goto compare;
                      case 128:
                        resword = &wordlist[894];
                        goto compare;
                      case 132:
                        resword = &wordlist[895];
                        goto compare;
                      case 134:
                        resword = &wordlist[896];
                        goto compare;
                      case 135:
                        resword = &wordlist[897];
                        goto compare;
                      case 137:
                        resword = &wordlist[898];
                        goto compare;
                      case 138:
                        resword = &wordlist[899];
                        goto compare;
                      case 143:
                        resword = &wordlist[900];
                        goto compare;
                      case 144:
                        resword = &wordlist[901];
                        goto compare;
                      case 148:
                        resword = &wordlist[902];
                        goto compare;
                      case 149:
                        resword = &wordlist[903];
                        goto compare;
                      case 152:
                        resword = &wordlist[904];
                        goto compare;
                      case 158:
                        resword = &wordlist[905];
                        goto compare;
                      case 159:
                        resword = &wordlist[906];
                        goto compare;
                      case 163:
                        resword = &wordlist[907];
                        goto compare;
                      case 168:
                        resword = &wordlist[908];
                        goto compare;
                      case 170:
                        resword = &wordlist[909];
                        goto compare;
                      case 174:
                        resword = &wordlist[910];
                        goto compare;
                      case 181:
                        resword = &wordlist[911];
                        goto compare;
                      case 183:
                        resword = &wordlist[912];
                        goto compare;
                      case 192:
                        resword = &wordlist[913];
                        goto compare;
                      case 193:
                        resword = &wordlist[914];
                        goto compare;
                      case 198:
                        resword = &wordlist[915];
                        goto compare;
                      case 203:
                        resword = &wordlist[916];
                        goto compare;
                      case 204:
                        resword = &wordlist[917];
                        goto compare;
                      case 215:
                        resword = &wordlist[918];
                        goto compare;
                      case 229:
                        resword = &wordlist[919];
                        goto compare;
                      case 235:
                        resword = &wordlist[920];
                        goto compare;
                      case 238:
                        resword = &wordlist[921];
                        goto compare;
                      case 242:
                        resword = &wordlist[922];
                        goto compare;
                      case 246:
                        resword = &wordlist[923];
                        goto compare;
                      case 258:
                        resword = &wordlist[924];
                        goto compare;
                      case 263:
                        resword = &wordlist[925];
                        goto compare;
                      case 278:
                        resword = &wordlist[926];
                        goto compare;
                      case 283:
                        resword = &wordlist[927];
                        goto compare;
                      case 284:
                        resword = &wordlist[928];
                        goto compare;
                      case 285:
                        resword = &wordlist[929];
                        goto compare;
                      case 290:
                        resword = &wordlist[930];
                        goto compare;
                      case 293:
                        resword = &wordlist[931];
                        goto compare;
                      case 295:
                        resword = &wordlist[932];
                        goto compare;
                      case 304:
                        resword = &wordlist[933];
                        goto compare;
                      case 308:
                        resword = &wordlist[934];
                        goto compare;
                      case 311:
                        resword = &wordlist[935];
                        goto compare;
                      case 312:
                        resword = &wordlist[936];
                        goto compare;
                      case 318:
                        resword = &wordlist[937];
                        goto compare;
                      case 332:
                        resword = &wordlist[938];
                        goto compare;
                      case 339:
                        resword = &wordlist[939];
                        goto compare;
                      case 340:
                        resword = &wordlist[940];
                        goto compare;
                      case 349:
                        resword = &wordlist[941];
                        goto compare;
                      case 368:
                        resword = &wordlist[942];
                        goto compare;
                      case 375:
                        resword = &wordlist[943];
                        goto compare;
                      case 383:
                        resword = &wordlist[944];
                        goto compare;
                      case 388:
                        resword = &wordlist[945];
                        goto compare;
                      case 399:
                        resword = &wordlist[946];
                        goto compare;
                      case 408:
                        resword = &wordlist[947];
                        goto compare;
                      case 413:
                        resword = &wordlist[948];
                        goto compare;
                      case 418:
                        resword = &wordlist[949];
                        goto compare;
                      case 423:
                        resword = &wordlist[950];
                        goto compare;
                      case 428:
                        resword = &wordlist[951];
                        goto compare;
                      case 434:
                        resword = &wordlist[952];
                        goto compare;
                      case 435:
                        resword = &wordlist[953];
                        goto compare;
                      case 438:
                        resword = &wordlist[954];
                        goto compare;
                      case 445:
                        resword = &wordlist[955];
                        goto compare;
                      case 446:
                        resword = &wordlist[956];
                        goto compare;
                      case 448:
                        resword = &wordlist[957];
                        goto compare;
                      case 453:
                        resword = &wordlist[958];
                        goto compare;
                      case 457:
                        resword = &wordlist[959];
                        goto compare;
                      case 468:
                        resword = &wordlist[960];
                        goto compare;
                      case 473:
                        resword = &wordlist[961];
                        goto compare;
                      case 478:
                        resword = &wordlist[962];
                        goto compare;
                      case 480:
                        resword = &wordlist[963];
                        goto compare;
                      case 490:
                        resword = &wordlist[964];
                        goto compare;
                      case 504:
                        resword = &wordlist[965];
                        goto compare;
                      case 534:
                        resword = &wordlist[966];
                        goto compare;
                      case 539:
                        resword = &wordlist[967];
                        goto compare;
                      case 542:
                        resword = &wordlist[968];
                        goto compare;
                      case 545:
                        resword = &wordlist[969];
                        goto compare;
                      case 556:
                        resword = &wordlist[970];
                        goto compare;
                      case 568:
                        resword = &wordlist[971];
                        goto compare;
                      case 578:
                        resword = &wordlist[972];
                        goto compare;
                      case 588:
                        resword = &wordlist[973];
                        goto compare;
                      case 593:
                        resword = &wordlist[974];
                        goto compare;
                      case 610:
                        resword = &wordlist[975];
                        goto compare;
                      case 612:
                        resword = &wordlist[976];
                        goto compare;
                      case 617:
                        resword = &wordlist[977];
                        goto compare;
                      case 620:
                        resword = &wordlist[978];
                        goto compare;
                      case 630:
                        resword = &wordlist[979];
                        goto compare;
                      case 643:
                        resword = &wordlist[980];
                        goto compare;
                      case 657:
                        resword = &wordlist[981];
                        goto compare;
                      case 664:
                        resword = &wordlist[982];
                        goto compare;
                      case 673:
                        resword = &wordlist[983];
                        goto compare;
                      case 685:
                        resword = &wordlist[984];
                        goto compare;
                      case 686:
                        resword = &wordlist[985];
                        goto compare;
                      case 708:
                        resword = &wordlist[986];
                        goto compare;
                      case 716:
                        resword = &wordlist[987];
                        goto compare;
                      case 728:
                        resword = &wordlist[988];
                        goto compare;
                      case 733:
                        resword = &wordlist[989];
                        goto compare;
                      case 734:
                        resword = &wordlist[990];
                        goto compare;
                      case 737:
                        resword = &wordlist[991];
                        goto compare;
                      case 741:
                        resword = &wordlist[992];
                        goto compare;
                      case 744:
                        resword = &wordlist[993];
                        goto compare;
                      case 747:
                        resword = &wordlist[994];
                        goto compare;
                      case 750:
                        resword = &wordlist[995];
                        goto compare;
                      case 753:
                        resword = &wordlist[996];
                        goto compare;
                      case 773:
                        resword = &wordlist[997];
                        goto compare;
                      case 783:
                        resword = &wordlist[998];
                        goto compare;
                      case 784:
                        resword = &wordlist[999];
                        goto compare;
                      case 795:
                        resword = &wordlist[1000];
                        goto compare;
                      case 807:
                        resword = &wordlist[1001];
                        goto compare;
                      case 810:
                        resword = &wordlist[1002];
                        goto compare;
                      case 825:
                        resword = &wordlist[1003];
                        goto compare;
                      case 843:
                        resword = &wordlist[1004];
                        goto compare;
                      case 845:
                        resword = &wordlist[1005];
                        goto compare;
                      case 848:
                        resword = &wordlist[1006];
                        goto compare;
                      case 857:
                        resword = &wordlist[1007];
                        goto compare;
                      case 862:
                        resword = &wordlist[1008];
                        goto compare;
                      case 863:
                        resword = &wordlist[1009];
                        goto compare;
                      case 870:
                        resword = &wordlist[1010];
                        goto compare;
                      case 871:
                        resword = &wordlist[1011];
                        goto compare;
                      case 880:
                        resword = &wordlist[1012];
                        goto compare;
                      case 886:
                        resword = &wordlist[1013];
                        goto compare;
                      case 887:
                        resword = &wordlist[1014];
                        goto compare;
                      case 895:
                        resword = &wordlist[1015];
                        goto compare;
                      case 902:
                        resword = &wordlist[1016];
                        goto compare;
                      case 906:
                        resword = &wordlist[1017];
                        goto compare;
                      case 914:
                        resword = &wordlist[1018];
                        goto compare;
                      case 917:
                        resword = &wordlist[1019];
                        goto compare;
                      case 920:
                        resword = &wordlist[1020];
                        goto compare;
                      case 921:
                        resword = &wordlist[1021];
                        goto compare;
                      case 928:
                        resword = &wordlist[1022];
                        goto compare;
                      case 958:
                        resword = &wordlist[1023];
                        goto compare;
                      case 965:
                        resword = &wordlist[1024];
                        goto compare;
                      case 972:
                        resword = &wordlist[1025];
                        goto compare;
                      case 973:
                        resword = &wordlist[1026];
                        goto compare;
                      case 978:
                        resword = &wordlist[1027];
                        goto compare;
                      case 987:
                        resword = &wordlist[1028];
                        goto compare;
                      case 990:
                        resword = &wordlist[1029];
                        goto compare;
                      case 993:
                        resword = &wordlist[1030];
                        goto compare;
                      case 1003:
                        resword = &wordlist[1031];
                        goto compare;
                      case 1005:
                        resword = &wordlist[1032];
                        goto compare;
                      case 1013:
                        resword = &wordlist[1033];
                        goto compare;
                      case 1014:
                        resword = &wordlist[1034];
                        goto compare;
                      case 1027:
                        resword = &wordlist[1035];
                        goto compare;
                      case 1028:
                        resword = &wordlist[1036];
                        goto compare;
                      case 1039:
                        resword = &wordlist[1037];
                        goto compare;
                      case 1050:
                        resword = &wordlist[1038];
                        goto compare;
                      case 1063:
                        resword = &wordlist[1039];
                        goto compare;
                      case 1066:
                        resword = &wordlist[1040];
                        goto compare;
                      case 1078:
                        resword = &wordlist[1041];
                        goto compare;
                      case 1083:
                        resword = &wordlist[1042];
                        goto compare;
                      case 1103:
                        resword = &wordlist[1043];
                        goto compare;
                      case 1123:
                        resword = &wordlist[1044];
                        goto compare;
                      case 1150:
                        resword = &wordlist[1045];
                        goto compare;
                      case 1153:
                        resword = &wordlist[1046];
                        goto compare;
                      case 1158:
                        resword = &wordlist[1047];
                        goto compare;
                      case 1188:
                        resword = &wordlist[1048];
                        goto compare;
                      case 1191:
                        resword = &wordlist[1049];
                        goto compare;
                      case 1203:
                        resword = &wordlist[1050];
                        goto compare;
                      case 1205:
                        resword = &wordlist[1051];
                        goto compare;
                      case 1213:
                        resword = &wordlist[1052];
                        goto compare;
                      case 1218:
                        resword = &wordlist[1053];
                        goto compare;
                      case 1244:
                        resword = &wordlist[1054];
                        goto compare;
                      case 1273:
                        resword = &wordlist[1055];
                        goto compare;
                      case 1308:
                        resword = &wordlist[1056];
                        goto compare;
                      case 1323:
                        resword = &wordlist[1057];
                        goto compare;
                      case 1354:
                        resword = &wordlist[1058];
                        goto compare;
                      case 1360:
                        resword = &wordlist[1059];
                        goto compare;
                      case 1364:
                        resword = &wordlist[1060];
                        goto compare;
                      case 1373:
                        resword = &wordlist[1061];
                        goto compare;
                      case 1379:
                        resword = &wordlist[1062];
                        goto compare;
                      case 1388:
                        resword = &wordlist[1063];
                        goto compare;
                      case 1394:
                        resword = &wordlist[1064];
                        goto compare;
                      case 1400:
                        resword = &wordlist[1065];
                        goto compare;
                      case 1409:
                        resword = &wordlist[1066];
                        goto compare;
                      case 1413:
                        resword = &wordlist[1067];
                        goto compare;
                      case 1464:
                        resword = &wordlist[1068];
                        goto compare;
                      case 1483:
                        resword = &wordlist[1069];
                        goto compare;
                      case 1484:
                        resword = &wordlist[1070];
                        goto compare;
                      case 1500:
                        resword = &wordlist[1071];
                        goto compare;
                      case 1503:
                        resword = &wordlist[1072];
                        goto compare;
                      case 1504:
                        resword = &wordlist[1073];
                        goto compare;
                      case 1510:
                        resword = &wordlist[1074];
                        goto compare;
                      case 1515:
                        resword = &wordlist[1075];
                        goto compare;
                      case 1518:
                        resword = &wordlist[1076];
                        goto compare;
                      case 1534:
                        resword = &wordlist[1077];
                        goto compare;
                      case 1553:
                        resword = &wordlist[1078];
                        goto compare;
                      case 1584:
                        resword = &wordlist[1079];
                        goto compare;
                      case 1585:
                        resword = &wordlist[1080];
                        goto compare;
                      case 1590:
                        resword = &wordlist[1081];
                        goto compare;
                      case 1598:
                        resword = &wordlist[1082];
                        goto compare;
                      case 1647:
                        resword = &wordlist[1083];
                        goto compare;
                      case 1653:
                        resword = &wordlist[1084];
                        goto compare;
                      case 1658:
                        resword = &wordlist[1085];
                        goto compare;
                      case 1664:
                        resword = &wordlist[1086];
                        goto compare;
                      case 1678:
                        resword = &wordlist[1087];
                        goto compare;
                      case 1686:
                        resword = &wordlist[1088];
                        goto compare;
                      case 1698:
                        resword = &wordlist[1089];
                        goto compare;
                      case 1705:
                        resword = &wordlist[1090];
                        goto compare;
                      case 1723:
                        resword = &wordlist[1091];
                        goto compare;
                      case 1735:
                        resword = &wordlist[1092];
                        goto compare;
                      case 1740:
                        resword = &wordlist[1093];
                        goto compare;
                      case 1743:
                        resword = &wordlist[1094];
                        goto compare;
                      case 1747:
                        resword = &wordlist[1095];
                        goto compare;
                      case 1753:
                        resword = &wordlist[1096];
                        goto compare;
                      case 1763:
                        resword = &wordlist[1097];
                        goto compare;
                      case 1768:
                        resword = &wordlist[1098];
                        goto compare;
                      case 1775:
                        resword = &wordlist[1099];
                        goto compare;
                      case 1783:
                        resword = &wordlist[1100];
                        goto compare;
                      case 1805:
                        resword = &wordlist[1101];
                        goto compare;
                      case 1848:
                        resword = &wordlist[1102];
                        goto compare;
                      case 1868:
                        resword = &wordlist[1103];
                        goto compare;
                      case 1878:
                        resword = &wordlist[1104];
                        goto compare;
                      case 1910:
                        resword = &wordlist[1105];
                        goto compare;
                      case 1920:
                        resword = &wordlist[1106];
                        goto compare;
                      case 1928:
                        resword = &wordlist[1107];
                        goto compare;
                      case 1934:
                        resword = &wordlist[1108];
                        goto compare;
                      case 1963:
                        resword = &wordlist[1109];
                        goto compare;
                      case 1993:
                        resword = &wordlist[1110];
                        goto compare;
                      case 2040:
                        resword = &wordlist[1111];
                        goto compare;
                      case 2081:
                        resword = &wordlist[1112];
                        goto compare;
                      case 2084:
                        resword = &wordlist[1113];
                        goto compare;
                      case 2093:
                        resword = &wordlist[1114];
                        goto compare;
                      case 2106:
                        resword = &wordlist[1115];
                        goto compare;
                      case 2113:
                        resword = &wordlist[1116];
                        goto compare;
                      case 2189:
                        resword = &wordlist[1117];
                        goto compare;
                      case 2270:
                        resword = &wordlist[1118];
                        goto compare;
                      case 2280:
                        resword = &wordlist[1119];
                        goto compare;
                      case 2314:
                        resword = &wordlist[1120];
                        goto compare;
                      case 2319:
                        resword = &wordlist[1121];
                        goto compare;
                      case 2344:
                        resword = &wordlist[1122];
                        goto compare;
                      case 2350:
                        resword = &wordlist[1123];
                        goto compare;
                      case 2367:
                        resword = &wordlist[1124];
                        goto compare;
                      case 2388:
                        resword = &wordlist[1125];
                        goto compare;
                      case 2419:
                        resword = &wordlist[1126];
                        goto compare;
                      case 2463:
                        resword = &wordlist[1127];
                        goto compare;
                      case 2484:
                        resword = &wordlist[1128];
                        goto compare;
                      case 2498:
                        resword = &wordlist[1129];
                        goto compare;
                      case 2618:
                        resword = &wordlist[1130];
                        goto compare;
                      case 2645:
                        resword = &wordlist[1131];
                        goto compare;
                      case 2683:
                        resword = &wordlist[1132];
                        goto compare;
                      case 2693:
                        resword = &wordlist[1133];
                        goto compare;
                      case 2695:
                        resword = &wordlist[1134];
                        goto compare;
                      case 2745:
                        resword = &wordlist[1135];
                        goto compare;
                      case 2769:
                        resword = &wordlist[1136];
                        goto compare;
                      case 2813:
                        resword = &wordlist[1137];
                        goto compare;
                      case 2846:
                        resword = &wordlist[1138];
                        goto compare;
                      case 2873:
                        resword = &wordlist[1139];
                        goto compare;
                      case 2895:
                        resword = &wordlist[1140];
                        goto compare;
                      case 2957:
                        resword = &wordlist[1141];
                        goto compare;
                      case 2987:
                        resword = &wordlist[1142];
                        goto compare;
                      case 3062:
                        resword = &wordlist[1143];
                        goto compare;
                      case 3070:
                        resword = &wordlist[1144];
                        goto compare;
                      case 3084:
                        resword = &wordlist[1145];
                        goto compare;
                      case 3090:
                        resword = &wordlist[1146];
                        goto compare;
                      case 3166:
                        resword = &wordlist[1147];
                        goto compare;
                      case 3203:
                        resword = &wordlist[1148];
                        goto compare;
                      case 3223:
                        resword = &wordlist[1149];
                        goto compare;
                      case 3234:
                        resword = &wordlist[1150];
                        goto compare;
                      case 3248:
                        resword = &wordlist[1151];
                        goto compare;
                      case 3300:
                        resword = &wordlist[1152];
                        goto compare;
                      case 3424:
                        resword = &wordlist[1153];
                        goto compare;
                      case 3520:
                        resword = &wordlist[1154];
                        goto compare;
                      case 3953:
                        resword = &wordlist[1155];
                        goto compare;
                      case 4071:
                        resword = &wordlist[1156];
                        goto compare;
                      case 4103:
                        resword = &wordlist[1157];
                        goto compare;
                      case 4133:
                        resword = &wordlist[1158];
                        goto compare;
                      case 4234:
                        resword = &wordlist[1159];
                        goto compare;
                      case 4253:
                        resword = &wordlist[1160];
                        goto compare;
                      case 4811:
                        resword = &wordlist[1161];
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
