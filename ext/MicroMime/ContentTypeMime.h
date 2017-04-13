/* ANSI-C code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -CD -t --output-file ext/MicroMime/ContentTypeMime.h ext/MicroMime/ContentTypeMime.gperf  */
/* Computed positions: -k'1,7,9-10,13-18,20,22-23,25-26,31,36,$' */

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

#line 27 "ext/MicroMime/ContentTypeMime.gperf"
struct ContentTypeMime {
	const char * content_type;
  const char * extension;
	const char * encoding;
};
/* maximum key range = 6638, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
lookup_by_content_type_hash (register const char *str, register unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657,
      6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657,
      6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657,
      6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657,
      6657, 6657, 6657,  836, 6657,  230,    0,    0,    0,    0,
       395,  110,   35,    0,    0,    0,    5,    0, 6657, 6657,
      6657, 6657, 6657, 6657, 6657,   20,    5,   15,    0,    5,
         5,    5,    5,    0,   10,    0,   10,    5, 6657, 6657,
        15,    0,    0,    0,   10,    5,    0,    5,    0,   25,
      6657, 6657, 6657, 6657, 6657, 6657, 6657,   10,  691,   65,
        20,   10,  795,  935,  830,   10,  150, 1974,  435,    0,
         0,    0,   95,   95,  120,    5,   70,  957,   30, 2009,
       260, 1429,  225, 6657, 6657, 6657, 6657, 6657, 6657, 6657,
      6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657,
      6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657,
      6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657,
      6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657,
      6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657,
      6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657,
      6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657,
      6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657,
      6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657,
      6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657,
      6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657,
      6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657, 6657,
      6657, 6657, 6657, 6657, 6657, 6657
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[35]];
      /*FALLTHROUGH*/
      case 35:
      case 34:
      case 33:
      case 32:
      case 31:
        hval += asso_values[(unsigned char)str[30]];
      /*FALLTHROUGH*/
      case 30:
      case 29:
      case 28:
      case 27:
      case 26:
        hval += asso_values[(unsigned char)str[25]];
      /*FALLTHROUGH*/
      case 25:
        hval += asso_values[(unsigned char)str[24]];
      /*FALLTHROUGH*/
      case 24:
      case 23:
        hval += asso_values[(unsigned char)str[22]];
      /*FALLTHROUGH*/
      case 22:
        hval += asso_values[(unsigned char)str[21]];
      /*FALLTHROUGH*/
      case 21:
      case 20:
        hval += asso_values[(unsigned char)str[19]];
      /*FALLTHROUGH*/
      case 19:
      case 18:
        hval += asso_values[(unsigned char)str[17]];
      /*FALLTHROUGH*/
      case 17:
        hval += asso_values[(unsigned char)str[16]];
      /*FALLTHROUGH*/
      case 16:
        hval += asso_values[(unsigned char)str[15]];
      /*FALLTHROUGH*/
      case 15:
        hval += asso_values[(unsigned char)str[14]];
      /*FALLTHROUGH*/
      case 14:
        hval += asso_values[(unsigned char)str[13]];
      /*FALLTHROUGH*/
      case 13:
        hval += asso_values[(unsigned char)str[12]];
      /*FALLTHROUGH*/
      case 12:
      case 11:
      case 10:
        hval += asso_values[(unsigned char)str[9]];
      /*FALLTHROUGH*/
      case 9:
        hval += asso_values[(unsigned char)str[8]];
      /*FALLTHROUGH*/
      case 8:
      case 7:
        hval += asso_values[(unsigned char)str[6]];
      /*FALLTHROUGH*/
      case 6:
      case 5:
      case 4:
      case 3:
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

const struct ContentTypeMime *
lookup_by_content_type_internal (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 853,
      MIN_WORD_LENGTH = 7,
      MAX_WORD_LENGTH = 73,
      MIN_HASH_VALUE = 19,
      MAX_HASH_VALUE = 6656
    };

  static const struct ContentTypeMime wordlist[] =
    {
#line 681 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/SMV", "smv", "base64"},
#line 688 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/s3m", "s3m", "base64"},
#line 680 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/L16", "l16", "base64"},
#line 841 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/DV", "dv", "base64"},
#line 677 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/AMR", "amr", "base64"},
#line 781 "ext/MicroMime/ContentTypeMime.gperf"
      {"model/iges", "iges", "base64"},
#line 736 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/sgi", "sgi", "base64"},
#line 842 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/H261", "h261", "base64"},
#line 679 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/EVRC", "evc", "base64"},
#line 684 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/midi", "kar", "base64"},
#line 845 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/JPEG", "jpgv", "base64"},
#line 787 "ext/MicroMime/ContentTypeMime.gperf"
      {"model/vnd.mts", "mts", "base64"},
#line 693 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/vnd.dts", "dts", "base64"},
#line 725 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/cgm", "cgm", "base64"},
#line 89 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/oda", "oda", "base64"},
#line 797 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/css", "css", "8bit"},
#line 685 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/mp4", "f4a", "base64"},
#line 692 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/vnd.dra", "dra", "base64"},
#line 848 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/mp4", "f4p", "base64"},
#line 158 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.MFER", "mwf", "base64"},
#line 798 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/csv", "csv", "8bit"},
#line 844 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/H264", "h264", "base64"},
#line 137 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/sieve", "siv", "base64"},
#line 868 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/vnd.vivo", "viv", "base64"},
#line 160 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.Mobius.DIS", "dis", "base64"},
#line 354 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ms-ims", "ims", "base64"},
#line 225 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.dna", "dna", "base64"},
#line 161 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.Mobius.MBK", "mbk", "base64"},
#line 234 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.enliven", "nml", "base64"},
#line 448 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.sema", "sema", "base64"},
#line 165 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.Mobius.TXF", "txf", "base64"},
#line 93 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/onenote", "onepkg", "base64"},
#line 46 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/dicom", "dcm", "base64"},
#line 163 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.Mobius.MSL", "msl", "base64"},
#line 498 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.visio", "vsd", "base64"},
#line 480 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.svd", "svd", "base64"},
#line 449 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.semd", "semd", "base64"},
#line 159 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.Mobius.DAF", "daf", "base64"},
#line 375 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.nervana", "bkm", "base64"},
#line 164 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.Mobius.PLC", "plc", "base64"},
#line 731 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/jpm", "jpgm", "base64"},
#line 395 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.oasis.opendocument.image", "odi", "base64"},
#line 162 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.Mobius.MQY", "mqy", "base64"},
#line 396 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.oasis.opendocument.image-template", "oti", "base64"},
#line 400 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.oasis.opendocument.spreadsheet-template", "ots", "base64"},
#line 390 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.oasis.opendocument.database", "odb", "base64"},
#line 334 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.mcd", "mcd", "base64"},
#line 682 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/adpcm", "adp", "base64"},
#line 220 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.dece.data", "uvd", "base64"},
#line 68 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/json", "json", "8bit"},
#line 419 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.palm", "oprc", "base64"},
#line 84 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/mp4", "mp4", "base64"},
#line 747 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/vnd.fst", "fst", "base64"},
#line 855 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/vnd.dece.sd", "uvs", "base64"},
#line 399 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.oasis.opendocument.spreadsheet", "ods", "base64"},
#line 858 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/vnd.fvt", "fvt", "base64"},
#line 389 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.oasis.opendocument.chart-template", "otc", "base64"},
#line 856 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/vnd.dece.video", "uvv", "base64"},
#line 403 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.oasis.opendocument.text-template", "ott", "base64"},
#line 157 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.Kinar", "kne", "base64"},
#line 851 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/quicktime", "mov", "base64"},
#line 397 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.oasis.opendocument.presentation", "odp", "base64"},
#line 306 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.jam", "jam", "base64"},
#line 131 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/sdp", "sdp", "base64"},
#line 204 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.commonspace", "csp", "base64"},
#line 704 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/vnd.rip", "rip", "base64"},
#line 843 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/H263", "h263", "base64"},
#line 218 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.dart", "dart", "base64"},
#line 398 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.oasis.opendocument.presentation-template", "otp", "base64"},
#line 435 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.rim.cod", "cod", "base64"},
#line 678 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/AMR-WB", "awb", "base64"},
#line 719 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/xm", "xm", "base64"},
#line 388 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.oasis.opendocument.chart", "odc", "base64"},
#line 696 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/vnd.lucent.voice", "lvp", "base64"},
#line 401 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.oasis.opendocument.text", "odt", "base64"},
#line 384 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.nokia.radio-presets", "rpss", "base64"},
#line 148 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/timestamped-data", "tsd", "base64"},
#line 371 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.mseq", "mseq", "base64"},
#line 800 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/n3", "n3", "quoted-printable"},
#line 230 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.dvb.ait", "ait", "base64"},
#line 809 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/vcard", "vcard", "quoted-printable"},
#line 73 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/marc", "mrc", "base64"},
#line 854 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/vnd.dece.pd", "uvp", "base64"},
#line 879 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/x-ms-wm", "wm", "base64"},
#line 714 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/x-ms-wma", "wma", "base64"},
#line 430 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.pvi.ptid1", "pti", "base64"},
#line 824 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/x-asm", "asm", "quoted-printable"},
#line 467 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.stepmania.package", "smzip", "base64"},
#line 417 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.osgi.dp", "dp", "base64"},
#line 53 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/exi", "exi", "base64"},
#line 882 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/x-msvideo", "avi", "base64"},
#line 796 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/calendar", "ics", "quoted-printable"},
#line 402 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.oasis.opendocument.text-master", "odm", "base64"},
#line 752 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/vnd.ms-modi", "mdi", "base64"},
#line 715 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/x-ms-wmv", "wmv", "base64"},
#line 383 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.nokia.radio-preset", "rpst", "base64"},
#line 50 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/ecmascript", "ecma", "base64"},
#line 817 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/vnd.in3d.spot", "spot", "quoted-printable"},
#line 358 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ms-pki.seccat", "cat", "base64"},
#line 707 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/x-aac", "aac", "base64"},
#line 168 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.accpac.simply.aso", "aso", "base64"},
#line 295 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.immervision-ivp", "ivp", "base64"},
#line 231 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.dvb.service", "svc", "base64"},
#line 825 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/x-c", "cxx", "quoted-printable"},
#line 463 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.stardivision.impress", "sdd", "base64"},
#line 424 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.pmi.widget", "wg", "base64"},
#line 774 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/x-targa", "tga", "base64"},
#line 512 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.xara", "xar", "base64"},
#line 237 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.epson.quickanime", "qam", "base64"},
#line 837 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/x-vcard", "vcf", "8bit"},
#line 41 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/cdmi-domain", "cdmid", "base64"},
#line 94 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/oxps", "oxps", "base64"},
#line 149 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.3M.Post-it-Notes", "pwn", "base64"},
#line 489 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.triscape.mxs", "mxs", "base64"},
#line 758 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/x-3ds", "3ds", "base64"},
#line 112 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/prs.nprend", "rct", "base64"},
#line 459 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.spotfire.sfs", "sfs", "base64"},
#line 839 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/3gpp", "3gp", "base64"},
#line 460 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.stardivision.calc", "sdc", "base64"},
#line 468 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.stepmania.stepchart", "sm", "base64"},
#line 109 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/postscript", "ai", "8bit"},
#line 828 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/x-fortran", "f", "quoted-printable"},
#line 862 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/vnd.objectvideo", "m4v", "base64"},
#line 308 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.jisp", "jisp", "base64"},
#line 496 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.vcx", "vcx", "base64"},
#line 768 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/x-pict", "pct", "base64"},
#line 847 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/MP2T", "ts", "base64"},
#line 169 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.accpac.simply.imp", "imp", "base64"},
#line 827 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/x-component", "htc", "8bit"},
#line 676 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/zip", "zip", "base64"},
#line 67 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/javascript", "js", "8bit"},
#line 223 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.dece.zip", "uvvz", "base64"},
#line 191 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.astraea-software.iota", "iota", "base64"},
#line 456 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.smart.teacher", "teacher", "base64"},
#line 43 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/cdmi-queue", "cdmiq", "base64"},
#line 66 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/java-vm", "class", "base64"},
#line 458 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.spotfire.dxp", "dxp", "base64"},
#line 801 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/plain", "c", "quoted-printable"},
#line 833 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/x-setext", "etx", "quoted-printable"},
#line 83 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/mp21", "m21", "base64"},
#line 355 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ms-lrm", "lrm", "base64"},
#line 488 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.trid.tpt", "tpt", "base64"},
#line 171 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.acucorp", "acutc", "7bit"},
#line 561 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-doom", "wad", "base64"},
#line 365 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ms-project", "mpp", "base64"},
#line 597 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-mie", "mie", "base64"},
#line 863 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/vnd.sealed.mpeg1", "s11", "base64"},
#line 490 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.trueapp", "tra", "base64"},
#line 88 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/octet-stream", "ani", "base64"},
#line 746 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/vnd.fpx", "fpx", "base64"},
#line 567 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-eva", "eva", "base64"},
#line 210 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.crick.clicker.template", "clkt", "base64"},
#line 609 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-msdownload", "msi", "base64"},
#line 533 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-VMSBACKUP", "bck", "base64"},
#line 465 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.stardivision.writer", "sdw", "base64"},
#line 761 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/x-cmx", "cmx", "base64"},
#line 565 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-dvi", "dvi", "base64"},
#line 64 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/java-archive", "jar", "base64"},
#line 486 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.tcpdump.pcap", "cap", "base64"},
#line 350 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ms-excel.sheet.macroEnabled.12", "xlsm", "base64"},
#line 304 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.is-xpr", "xpr", "base64"},
#line 207 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.crick.clicker", "clkx", "base64"},
#line 348 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ms-excel.addin.macroEnabled.12", "xlam", "base64"},
#line 347 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ms-excel", "xla", "base64"},
#line 587 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-ica", "ica", "base64"},
#line 132 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/set-payment-initiation", "setpay", "base64"},
#line 695 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/vnd.everad.plj", "plj", "base64"},
#line 604 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-msaccess", "mda", "base64"},
#line 642 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-tads", "gam", "base64"},
#line 219 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.data-vision.rdz", "rdz", "base64"},
#line 634 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-spss", "sav", "base64"},
#line 864 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/vnd.sealed.mpeg4", "s14", "base64"},
#line 836 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/x-vcalendar", "vcs", "8bit"},
#line 209 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.crick.clicker.palette", "clkp", "base64"},
#line 639 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-sv4cpio", "sv4cpio", "base64"},
#line 732 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/jpx", "jpf", "base64"},
#line 767 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/x-pcx", "pcx", "base64"},
#line 351 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ms-excel.template.macroEnabled.12", "xltm", "base64"},
#line 440 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.sealed.doc", "s1w", "base64"},
#line 555 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-cpio", "cpio", "base64"},
#line 703 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/vnd.qcelp", "qcp", "base64"},
#line 40 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/cdmi-container", "cdmic", "base64"},
#line 42 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/cdmi-object", "cdmio", "base64"},
#line 702 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/vnd.nuera.ecelp9600", "ecelp9600", "base64"},
#line 840 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/3gpp2", "3g2", "base64"},
#line 349 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ms-excel.sheet.binary.macroEnabled.12", "xlsb", "base64"},
#line 553 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-compressed", "z", "base64"},
#line 838 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/x-yaml", "yaml", "8bit"},
#line 130 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/scvp-vp-response", "spp", "base64"},
#line 701 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/vnd.nuera.ecelp7470", "ecelp7470", "base64"},
#line 335 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.medcalcdata", "mc1", "base64"},
#line 700 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/vnd.nuera.ecelp4800", "ecelp4800", "base64"},
#line 432 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.recordare.musicxml", "mxl", "base64"},
#line 198 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.cinderella", "cdy", "base64"},
#line 238 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.epson.salt", "slt", "base64"},
#line 683 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/basic", "au", "base64"},
#line 69 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/jsonml+json", "jsonml", "base64"},
#line 749 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/vnd.fujixerox.edmics-rlc", "rlc", "base64"},
#line 155 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.FloGraphIt", "gph", "base64"},
#line 194 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.bmi", "bmi", "base64"},
#line 128 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/scvp-cv-response", "scs", "base64"},
#line 640 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-sv4crc", "sv4crc", "base64"},
#line 760 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/x-cmu-raster", "ras", "base64"},
#line 443 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.sealed.ppt", "s1p", "base64"},
#line 206 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.cosmocaller", "cmc", "base64"},
#line 713 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/x-ms-wax", "wax", "base64"},
#line 307 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.jcp.javame.midlet-rms", "rms", "base64"},
#line 880 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/x-ms-wmx", "wmx", "base64"},
#line 436 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.rn-realmedia", "rm", "base64"},
#line 846 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/MJ2", "mj2", "base64"},
#line 778 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/x-xpixmap", "xpm", "8bit"},
#line 831 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/x-opml", "opml", "quoted-printable"},
#line 748 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/vnd.fujixerox.edmics-mmr", "mmr", "base64"},
#line 189 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.apple.pkpass", "pkpass", "base64"},
#line 643 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-tar", "tar", "base64"},
#line 881 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/x-ms-wvx", "wvx", "base64"},
#line 133 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/set-registration-initiation", "setreg", "base64"},
#line 662 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-zmachine", "z1", "base64"},
#line 789 "ext/MicroMime/ContentTypeMime.gperf"
      {"model/vnd.parasolid.transmit.text", "x_t", "quoted-printable"},
#line 720 "ext/MicroMime/ContentTypeMime.gperf"
      {"chemical/x-cdx", "cdx", "base64"},
#line 200 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.cloanto.rp9", "rp9", "base64"},
#line 340 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.mif", "mif", "base64"},
#line 791 "ext/MicroMime/ContentTypeMime.gperf"
      {"model/vrml", "vrml", "base64"},
#line 404 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.oasis.opendocument.text-web", "oth", "base64"},
#line 500 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.vsf", "vsf", "base64"},
#line 129 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/scvp-vp-request", "spq", "base64"},
#line 785 "ext/MicroMime/ContentTypeMime.gperf"
      {"model/vnd.gdl", "gdl", "base64"},
#line 694 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/vnd.dts.hd", "dtshd", "base64"},
#line 391 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.oasis.opendocument.formula", "odf", "base64"},
#line 729 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/jp2", "jp2", "base64"},
#line 392 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.oasis.opendocument.formula-template", "odft", "base64"},
#line 127 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/scvp-cv-request", "scq", "base64"},
#line 245 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.fdsn.seed", "dataless", "base64"},
#line 244 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.fdsn.mseed", "mseed", "base64"},
#line 34 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/applixware", "aw", "base64"},
#line 447 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.seemail", "see", "base64"},
#line 226 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.dolby.mlp", "mlp", "base64"},
#line 808 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/uri-list", "uri", "quoted-printable"},
#line 356 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ms-officetheme", "thmx", "base64"},
#line 560 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-director", "@dir", "base64"},
#line 799 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/html", "htm", "8bit"},
#line 444 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.sealed.xls", "s1e", "base64"},
#line 98 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/pics-rules", "prf", "base64"},
#line 611 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-msmetafile", "emf", "base64"},
#line 290 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ibm.modcap", "afp", "base64"},
#line 379 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.noblenet-sealer", "nns", "base64"},
#line 745 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/vnd.fastbidsheet", "fbs", "base64"},
#line 852 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/vnd.dece.hd", "uvh", "base64"},
#line 599 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-ms-application", "application", "base64"},
#line 420 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.pawaafile", "paw", "base64"},
#line 177 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ahead.space", "ahead", "base64"},
#line 433 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.recordare.musicxml+xml", "musicxml", "base64"},
#line 305 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.isac.fcs", "fcs", "base64"},
#line 608 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-msdos-program", "bat", "base64"},
#line 297 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.insors.igm", "igm", "base64"},
#line 281 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.hp-HPGL", "hpgl", "base64"},
#line 600 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-ms-shortcut", "lnk", "base64"},
#line 282 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.hp-PCL", "pcl", "base64"},
#line 283 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.hp-PCLXL", "pclxl", "base64"},
#line 759 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/x-bmp", "bmp", "base64"},
#line 386 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.novadigm.EDX", "edx", "base64"},
#line 299 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.intergeo", "i2g", "base64"},
#line 298 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.intercon.formnet", "xpw", "base64"},
#line 385 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.novadigm.EDM", "edm", "base64"},
#line 615 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-msterminal", "trm", "base64"},
#line 387 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.novadigm.EXT", "ext", "base64"},
#line 182 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.amiga.ami", "ami", "base64"},
#line 423 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.picsel", "efif", "base64"},
#line 668 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/xml-dtd", "dtd", "8bit"},
#line 337 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.mfmp", "mfm", "base64"},
#line 381 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.nokia.n-gage.data", "ngdat", "base64"},
#line 372 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.musician", "mus", "base64"},
#line 393 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.oasis.opendocument.graphics", "odg", "base64"},
#line 708 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/x-aiff", "aif", "base64"},
#line 408 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.openxmlformats-officedocument.presentationml.presentation", "pptx", "base64"},
#line 606 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-mscardfile", "crd", "base64"},
#line 409 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.openxmlformats-officedocument.presentationml.slide", "sldx", "base64"},
#line 413 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.openxmlformats-officedocument.spreadsheetml.template", "xltx", "base64"},
#line 411 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.openxmlformats-officedocument.presentationml.template", "potx", "base64"},
#line 830 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/x-nfo", "nfo", "quoted-printable"},
#line 415 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.openxmlformats-officedocument.wordprocessingml.template", "dotx", "base64"},
#line 394 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.oasis.opendocument.graphics-template", "otg", "base64"},
#line 536 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-ace-compressed", "ace", "base64"},
#line 141 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/srgs", "gram", "base64"},
#line 816 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/vnd.in3d.3dml", "3dml", "quoted-printable"},
#line 596 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-mac-compactpro", "cpt", "base64"},
#line 75 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/mathematica", "ma", "base64"},
#line 346 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ms-cab-compressed", "cab", "base64"},
#line 803 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/richtext", "rtx", "8bit"},
#line 751 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/vnd.microsoft.icon", "ico", "base64"},
#line 873 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/x-ivf", "ivf", "base64"},
#line 645 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-tex", "tex", "8bit"},
#line 266 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.geospace", "g3w", "base64"},
#line 603 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-ms-xbap", "xbap", "base64"},
#line 690 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/vnd.dece.audio", "uva", "base64"},
#line 342 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.mophun.certificate", "mpc", "base64"},
#line 709 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/x-caf", "caf", "base64"},
#line 531 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-123", "wk", "base64"},
#line 265 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.geoplan", "g2w", "base64"},
#line 359 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ms-pki.stl", "stl", "base64"},
#line 466 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.stardivision.writer-global", "sgl", "base64"},
#line 412 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.openxmlformats-officedocument.spreadsheetml.sheet", "xlsx", "base64"},
#line 834 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/x-sfv", "sfv", "quoted-printable"},
#line 414 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.openxmlformats-officedocument.wordprocessingml.document", "docx", "base64"},
#line 422 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.pg.osasli", "ei6", "base64"},
#line 667 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/xml", "xml", "8bit"},
#line 416 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.osgeo.mapguide.package", "mgp", "base64"},
#line 869 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/x-dl", "dl", "base64"},
#line 819 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/vnd.sun.j2me.app-descriptor", "jad", "8bit"},
#line 832 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/x-pascal", "p", "quoted-printable"},
#line 294 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.igloader", "igl", "base64"},
#line 464 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.stardivision.math", "smf", "base64"},
#line 341 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.mophun.application", "mpn", "base64"},
#line 493 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.umajin", "umj", "base64"},
#line 406 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.oma.dd2+xml", "dd2", "base64"},
#line 723 "ext/MicroMime/ContentTypeMime.gperf"
      {"chemical/x-cml", "cml", "base64"},
#line 54 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/font-sfnt", "otf", "base64"},
#line 724 "ext/MicroMime/ContentTypeMime.gperf"
      {"chemical/x-csml", "csml", "base64"},
#line 532 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-7z-compressed", "7z", "base64"},
#line 183 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.android.package-archive", "apk", "base64"},
#line 607 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-msclip", "clp", "base64"},
#line 875 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/x-mng", "mng", "base64"},
#line 48 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/dssc+der", "dssc", "base64"},
#line 222 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.dece.unspecified", "uvvx", "base64"},
#line 661 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-xz", "xz", "base64"},
#line 867 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/vnd.uvvu.mp4", "uvu", "base64"},
#line 153 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.3gpp.sms", "sms", "base64"},
#line 77 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/mbox", "mbox", "base64"},
#line 167 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.SimTech-MindMapper", "twd", "base64"},
#line 323 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.las.las+xml", "lasxml", "base64"},
#line 461 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.stardivision.chart", "sds", "base64"},
#line 775 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/x-vnd.dgn", "dgn", "base64"},
#line 627 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-rar-compressed", "rar", "base64"},
#line 247 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.framemaker", "book", "base64"},
#line 309 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.joost.joda-archive", "joda", "base64"},
#line 267 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.gmx", "gmx", "base64"},
#line 187 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.apple.installer+xml", "mpkg", "base64"},
#line 753 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/vnd.ms-photo", "wdp", "base64"},
#line 883 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/x-sgi-movie", "movie", "base64"},
#line 853 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/vnd.dece.mobile", "uvm", "base64"},
#line 186 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.antix.game-component", "atx", "base64"},
#line 835 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/x-uuencode", "uu", "quoted-printable"},
#line 595 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-latex", "latex", "8bit"},
#line 172 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.adobe.air-application-installer-package+zip", "air", "base64"},
#line 292 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ibm.secure-container", "sc", "base64"},
#line 166 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.Quark.QuarkXPress", "qwd", "8bit"},
#line 619 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-opera-extension", "oex", "base64"},
#line 214 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.cups-ppd", "ppd", "base64"},
#line 213 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ctc-posml", "pml", "base64"},
#line 44 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/cu-seeme", "cu", "base64"},
#line 156 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.HandHeld-Entertainment+xml", "zmm", "base64"},
#line 170 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.acucobol", "acu", "base64"},
#line 205 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.contact.cmsg", "cdbcmsg", "base64"},
#line 428 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.proteus.magazine", "mgz", "base64"},
#line 541 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-bcpio", "bcpio", "base64"},
#line 777 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/x-xcf", "xcf", "base64"},
#line 589 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-install-instructions", "install", "base64"},
#line 60 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/gzip", "gz", "base64"},
#line 92 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/omdoc+xml", "omdoc", "base64"},
#line 260 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.genomatix.tuxedo", "txd", "base64"},
#line 275 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.groove-tool-message", "gtm", "base64"},
#line 657 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-x509-ca-cert", "crt", "base64"},
#line 485 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.tao.intent-module-archive", "tao", "base64"},
#line 276 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.groove-tool-template", "tpl", "base64"},
#line 776 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/x-xbitmap", "xbm", "7bit"},
#line 441 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.sealed.eml", "sem", "base64"},
#line 264 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.geonext", "gxt", "base64"},
#line 537 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-apple-diskimage", "dmg", "base64"},
#line 431 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.realvnc.bed", "bed", "base64"},
#line 63 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/ipfix", "ipfix", "base64"},
#line 766 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/x-paintshoppro", "psp", "base64"},
#line 370 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ms-xpsdocument", "xps", "8bit"},
#line 277 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.groove-vcard", "vcg", "base64"},
#line 635 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-sql", "sql", "base64"},
#line 605 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-msbinder", "obd", "base64"},
#line 866 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/vnd.sealedmedia.softseal.mov", "s1q", "base64"},
#line 154 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.3gpp2.tcap", "tcap", "base64"},
#line 65 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/java-serialized-object", "ser", "base64"},
#line 829 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/x-java-source", "java", "quoted-printable"},
#line 293 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.iccprofile", "icc", "base64"},
#line 473 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.sun.xml.impress", "sxi", "base64"},
#line 547 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-cbr", "cb7", "base64"},
#line 870 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/x-fli", "fli", "base64"},
#line 644 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-tcl", "tcl", "8bit"},
#line 442 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.sealed.mht", "smh", "base64"},
#line 826 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/x-coffescript", "coffee", "8bit"},
#line 55 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/font-tdpfr", "pfr", "base64"},
#line 807 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/turtle", "ttl", "quoted-printable"},
#line 524 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/voicexml+xml", "vxml", "base64"},
#line 871 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/x-flv", "flv", "base64"},
#line 583 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-hep", "hep", "base64"},
#line 232 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.dynageo", "geo", "base64"},
#line 710 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/x-flac", "flac", "base64"},
#line 586 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-ibooks+zip", "ibooks", "base64"},
#line 550 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-chat", "chat", "base64"},
#line 574 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-font-type1", "afm", "base64"},
#line 542 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-bittorrent", "torrent", "base64"},
#line 818 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/vnd.net2phone.commcenter.command", "ccc", "quoted-printable"},
#line 554 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-conference", "nsc", "base64"},
#line 519 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.yamaha.smaf-audio", "saf", "base64"},
#line 271 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.groove-account", "gac", "base64"},
#line 728 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/ief", "ief", "base64"},
#line 631 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-shar", "shar", "8bit"},
#line 765 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/x-mrsid-image", "sid", "base64"},
#line 621 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-perl", "pl", "8bit"},
#line 474 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.sun.xml.impress.template", "sti", "base64"},
#line 437 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.rn-realmedia-vbr", "rmvb", "base64"},
#line 78 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/mediaservercontrol+xml", "mscml", "base64"},
#line 279 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.hbci", "bpd", "base64"},
#line 469 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.sun.xml.calc", "sxc", "base64"},
#line 784 "ext/MicroMime/ContentTypeMime.gperf"
      {"model/vnd.dwf", "dwf", "base64"},
#line 545 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-bzip", "bz", "base64"},
#line 575 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-freearc", "arc", "base64"},
#line 744 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/vnd.dxf", "dxf", "base64"},
#line 240 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.eszigno3+xml", "es3", "base64"},
#line 146 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/tei+xml", "tei", "base64"},
#line 782 "ext/MicroMime/ContentTypeMime.gperf"
      {"model/mesh", "mesh", "base64"},
#line 470 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.sun.xml.calc.template", "stc", "base64"},
#line 647 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-texinfo", "texi", "8bit"},
#line 588 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-imagemap", "imagemap", "8bit"},
#line 878 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/x-ms-vob", "vob", "base64"},
#line 455 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.smaf", "mmf", "base64"},
#line 377 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.nitf", "nitf", "base64"},
#line 653 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-ustar", "ustar", "base64"},
#line 289 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ibm.electronic-media", "emm", "base64"},
#line 450 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.semf", "semf", "base64"},
#line 345 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ms-asf", "asf", "base64"},
#line 243 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.fdf", "fdf", "base64"},
#line 124 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/rss+xml", "rss", "base64"},
#line 520 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.yamaha.smaf-phrase", "spf", "base64"},
#line 534 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-Wingz", "wkz", "base64"},
#line 522 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.zul", "zir", "base64"},
#line 641 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-t3vm-image", "t3", "base64"},
#line 735 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/prs.btif", "btif", "base64"},
#line 123 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/rsd+xml", "rsd", "base64"},
#line 263 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.geometry-explorer", "gex", "base64"},
#line 876 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/x-motion-jpeg", "mjpeg", "base64"},
#line 336 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.mediastation.cdkey", "cdkey", "base64"},
#line 472 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.sun.xml.draw.template", "std", "base64"},
#line 96 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/pdf", "pdf", "base64"},
#line 216 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.curl.car", "car", "base64"},
#line 590 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-iso9660-image", "iso", "base64"},
#line 652 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-troff-ms", "ms", "base64"},
#line 650 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-troff-man", "man", "8bit"},
#line 246 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.fluxtime.clip", "ftc", "base64"},
#line 651 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-troff-me", "me", "base64"},
#line 454 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.shana.informed.package", "ipk", "base64"},
#line 754 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/vnd.net-fpx", "npx", "base64"},
#line 451 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.shana.informed.formdata", "ifm", "base64"},
#line 487 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.tmobile-livetv", "tmo", "base64"},
#line 581 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-gtar", "gtar", "base64"},
#line 274 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.groove-injector", "grv", "base64"},
#line 236 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.epson.msf", "msf", "base64"},
#line 87 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/netcdf", "cdf", "base64"},
#line 239 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.epson.ssf", "ssf", "base64"},
#line 235 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.epson.esf", "esf", "base64"},
#line 174 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.adobe.fxp", "fxp", "base64"},
#line 691 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/vnd.digital-winds", "eol", "7bit"},
#line 329 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.lotus-notes", "nsf", "base64"},
#line 303 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.irepository.package+xml", "irp", "base64"},
#line 543 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-bleeper", "bleep", "base64"},
#line 405 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.olpc-sugar", "xo", "base64"},
#line 201 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.clonk.c4group", "c4d", "base64"},
#line 125 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/rtf", "rtf", "base64"},
#line 716 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/x-pn-realaudio", "ra", "base64"},
#line 557 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-cu-seeme", "csm", "base64"},
#line 45 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/davmount+xml", "davmount", "base64"},
#line 795 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/cache-manifest", "appcache", "quoted-printable"},
#line 452 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.shana.informed.formtemplate", "itp", "base64"},
#line 516 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.yamaha.hv-voice", "hvp", "base64"},
#line 620 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-pagemaker", "pm", "base64"},
#line 552 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-chrome-extension", "crx", "base64"},
#line 134 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/sgml", "sgml", "base64"},
#line 300 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.intu.qbo", "qbo", "base64"},
#line 670 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/xproc+xml", "xpl", "base64"},
#line 285 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.hp-hps", "hps", "base64"},
#line 331 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.lotus-screencam", "scm", "base64"},
#line 434 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.rig.cryptonote", "cryptonote", "base64"},
#line 517 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.yamaha.openscoreformat", "osf", "base64"},
#line 37 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/atomsvc+xml", "atomsvc", "8bit"},
#line 804 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/sgml", "sgm", "quoted-printable"},
#line 479 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.sus-calendar", "sus", "base64"},
#line 549 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-cfs-compressed", "cfs", "base64"},
#line 687 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/ogg", "oga", "base64"},
#line 352 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ms-fontobject", "eot", "base64"},
#line 453 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.shana.informed.interchange", "iif", "base64"},
#line 514 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.yamaha.hv-dic", "hvd", "base64"},
#line 407 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.openofficeorg.extension", "oxt", "base64"},
#line 86 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/mxf", "mxf", "base64"},
#line 686 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/mpeg", "m2a", "base64"},
#line 877 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/x-ms-asf", "asx", "base64"},
#line 646 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-tex-tfm", "tfm", "base64"},
#line 284 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.hp-hpid", "hpid", "base64"},
#line 850 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/ogg", "ogv", "base64"},
#line 36 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/atomcat+xml", "atomcat", "8bit"},
#line 353 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ms-htmlhelp", "chm", "base64"},
#line 291 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ibm.rights-management", "irm", "base64"},
#line 849 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/mpeg", "m1v", "base64"},
#line 492 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.uiq.theme", "utz", "base64"},
#line 669 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/xop+xml", "xop", "base64"},
#line 497 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.vidsoft.vidconference", "vsc", "8bit"},
#line 272 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.groove-help", "ghf", "base64"},
#line 743 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/vnd.dwg", "dwg", "base64"},
#line 721 "ext/MicroMime/ContentTypeMime.gperf"
      {"chemical/x-cif", "cif", "base64"},
#line 546 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-bzip2", "boz", "base64"},
#line 722 "ext/MicroMime/ContentTypeMime.gperf"
      {"chemical/x-cmdf", "cmdf", "base64"},
#line 181 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.americandynamics.acc", "acc", "base64"},
#line 790 "ext/MicroMime/ContentTypeMime.gperf"
      {"model/vnd.vtu", "vtu", "base64"},
#line 734 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/png", "png", "base64"},
#line 612 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-msmoney", "mny", "base64"},
#line 215 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.curl", "curl", "base64"},
#line 221 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.dece.ttml+xml", "uvt", "base64"},
#line 515 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.yamaha.hv-script", "hvs", "base64"},
#line 794 "ext/MicroMime/ContentTypeMime.gperf"
      {"model/x3d+xml", "x3d", "base64"},
#line 793 "ext/MicroMime/ContentTypeMime.gperf"
      {"model/x3d+vrml", "x3dv", "base64"},
#line 566 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-envoy", "evy", "base64"},
#line 805 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/tab-separated-values", "tsv", "quoted-printable"},
#line 741 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/vnd.djvu", "djv", "base64"},
#line 438 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.route66.link66+xml", "link66", "base64"},
#line 726 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/g3fax", "g3", "base64"},
#line 513 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.xfdl", "xfdl", "base64"},
#line 773 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/x-rgb", "rgb", "base64"},
#line 188 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.apple.mpegurl", "m3u8", "base64"},
#line 614 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-msschedule", "scd", "base64"},
#line 577 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-gca-compressed", "gca", "base64"},
#line 51 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/emma+xml", "emma", "base64"},
#line 82 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/mods+xml", "mods", "base64"},
#line 559 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-dgc-compressed", "dgc", "base64"},
#line 857 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/vnd.dvb.file", "dvb", "base64"},
#line 730 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/jpeg", "jpe", "base64"},
#line 72 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/mads+xml", "mads", "base64"},
#line 321 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.koan", "skd", "base64"},
#line 763 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/x-freehand", "fh", "base64"},
#line 179 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.airzip.filesecure.azs", "azs", "base64"},
#line 227 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.dpgraph", "dpg", "base64"},
#line 296 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.immervision-ivu", "ivu", "base64"},
#line 35 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/atom+xml", "atom", "8bit"},
#line 81 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/mets+xml", "mets", "base64"},
#line 872 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/x-gl", "gl", "base64"},
#line 49 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/dssc+xml", "xdssc", "base64"},
#line 108 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/pls+xml", "pls", "base64"},
#line 820 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/vnd.wap.si", "si", "quoted-printable"},
#line 780 "ext/MicroMime/ContentTypeMime.gperf"
      {"message/rfc822", "eml", "8bit"},
#line 314 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.kde.kivio", "flw", "base64"},
#line 270 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.grafeq", "gqf", "base64"},
#line 618 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-nzb", "nzb", "base64"},
#line 38 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/ccxml+xml", "ccxml", "base64"},
#line 199 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.claymore", "cla", "base64"},
#line 811 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/vnd.curl.mcurl", "mcurl", "quoted-printable"},
#line 865 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/vnd.sealed.swf", "ssw", "base64"},
#line 812 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/vnd.curl.scurl", "scurl", "quoted-printable"},
#line 740 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/vnd.dece.graphic", "uvg", "base64"},
#line 71 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/mac-binhex40", "hqx", "8bit"},
#line 810 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/vnd.curl.dcurl", "dcurl", "quoted-printable"},
#line 99 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/pkcs10", "p10", "base64"},
#line 421 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.pg.format", "str", "base64"},
#line 495 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.uoml+xml", "uoml", "base64"},
#line 102 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/pkcs8", "p8", "base64"},
#line 630 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-sh", "sh", "8bit"},
#line 224 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.denovo.fcselayout-link", "fe_launch", "base64"},
#line 74 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/marcxml+xml", "mrcx", "base64"},
#line 301 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.intu.qfx", "qfx", "base64"},
#line 85 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/msword", "doc", "base64"},
#line 509 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.wqd", "wqd", "base64"},
#line 311 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.kde.karbon", "karbon", "base64"},
#line 117 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/resource-lists+xml", "rl", "base64"},
#line 788 "ext/MicroMime/ContentTypeMime.gperf"
      {"model/vnd.parasolid.transmit.binary", "x_b", "base64"},
#line 241 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ezpix-album", "ez2", "base64"},
#line 317 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.kde.kspread", "ksp", "base64"},
#line 594 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-java-jnlp-file", "jnlp", "base64"},
#line 518 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.yamaha.openscoreformat.osfpvg+xml", "osfpvg", "base64"},
#line 783 "ext/MicroMime/ContentTypeMime.gperf"
      {"model/vnd.collada+xml", "dae", "base64"},
#line 501 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.wap.sic", "sic", "base64"},
#line 556 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-csh", "csh", "8bit"},
#line 288 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ibm.MiniPay", "mpy", "base64"},
#line 562 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-dtbncx+xml", "ncx", "base64"},
#line 256 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.fujixerox.ddd", "ddd", "base64"},
#line 660 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-xpinstall", "xpi", "base64"},
#line 445 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.sealedmedia.softseal.html", "s1h", "base64"},
#line 711 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/x-matroska", "mka", "base64"},
#line 193 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.blueice.multipass", "mpm", "base64"},
#line 673 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/xv+xml", "mxml", "base64"},
#line 813 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/vnd.fly", "fly", "quoted-printable"},
#line 320 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.kidspiration", "kia", "base64"},
#line 378 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.noblenet-directory", "nnd", "base64"},
#line 580 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-gramps-xml", "gramps", "base64"},
#line 874 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/x-matroska", "mk3d", "base64"},
#line 426 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.powerbuilder6", "pbd", "base64"},
#line 33 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/andrew-inset", "ez", "base64"},
#line 772 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/x-portable-pixmap", "ppm", "base64"},
#line 626 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-quicktimeplayer", "qtl", "base64"},
#line 712 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/x-mpegurl", "m3u", "base64"},
#line 718 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/x-wav", "wav", "base64"},
#line 475 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.sun.xml.math", "sxm", "base64"},
#line 190 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.aristanetworks.swi", "swi", "base64"},
#line 338 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.micrografx.flo", "flo", "base64"},
#line 665 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/xenc+xml", "xenc", "base64"},
#line 762 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/x-compressed-xcf", "xcfbz2", "base64"},
#line 374 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.mynfc", "taglet", "base64"},
#line 705 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/vnd.sealedmedia.softseal.mpeg", "s1m", "base64"},
#line 319 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.kenameaapp", "htke", "base64"},
#line 150 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.3gpp.pic-bw-large", "plb", "base64"},
#line 508 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.wordperfect", "wpd", "base64"},
#line 140 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/sparql-results+xml", "srx", "base64"},
#line 815 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/vnd.graphviz", "gv", "quoted-printable"},
#line 636 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-stuffit", "sit", "base64"},
#line 100 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/pkcs7-mime", "p7c", "base64"},
#line 316 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.kde.kpresenter", "kpr", "base64"},
#line 175 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.adobe.xdp+xml", "xdp", "base64"},
#line 756 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/vnd.xiff", "xif", "base64"},
#line 145 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/ssml+xml", "ssml", "base64"},
#line 326 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.lotus-1-2-3", "123", "base64"},
#line 138 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/smil+xml", "smi", "8bit"},
#line 139 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/sparql-query", "rq", "base64"},
#line 97 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/pgp-signature", "asc", "base64"},
#line 738 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/tiff", "tif", "base64"},
#line 544 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-blorb", "blb", "base64"},
#line 144 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/ssdl+xml", "ssdl", "base64"},
#line 195 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.businessobjects", "rep", "base64"},
#line 633 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-silverlight-app", "xap", "base64"},
#line 462 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.stardivision.draw", "sda", "base64"},
#line 569 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-font-ghostscript", "gsf", "base64"},
#line 119 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/rls-services+xml", "rs", "base64"},
#line 638 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-subrip", "srt", "base64"},
#line 814 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/vnd.fmi.flexstor", "flx", "quoted-printable"},
#line 208 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.crick.clicker.keyboard", "clkk", "base64"},
#line 733 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/ktx", "ktx", "base64"},
#line 114 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/rdf+xml", "rdf", "8bit"},
#line 152 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.3gpp.pic-bw-var", "pvb", "base64"},
#line 418 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.osgi.subsystem", "esa", "base64"},
#line 70 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/lost+xml", "lostxml", "base64"},
#line 76 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/mathml+xml", "mathml", "base64"},
#line 110 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/powerpoint", "pot", "base64"},
#line 47 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/docbook+xml", "dbk", "base64"},
#line 322 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.kodak-descriptor", "sse", "base64"},
#line 727 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/gif", "gif", "base64"},
#line 107 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/pkixcmp", "pki", "base64"},
#line 494 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.unity", "unityweb", "base64"},
#line 228 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.dreamfactory", "dfac", "base64"},
#line 328 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.lotus-freelance", "pre", "base64"},
#line 269 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.google-earth.kmz", "kmz", "8bit"},
#line 806 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/troff", "roff", "8bit"},
#line 742 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/vnd.dvb.subtitle", "sub", "base64"},
#line 310 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.kahootz", "ktr", "base64"},
#line 802 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/prs.lines.tag", "dsc", "quoted-printable"},
#line 339 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.micrografx.igx", "igx", "base64"},
#line 551 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-chess-pgn", "pgn", "base64"},
#line 122 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/rpki-roa", "roa", "base64"},
#line 504 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.wap.wmlc", "wmlc", "base64"},
#line 446 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.sealedmedia.softseal.pdf", "s1a", "base64"},
#line 278 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.hal+xml", "hal", "base64"},
#line 343 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.mozilla.xul+xml", "xul", "base64"},
#line 429 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.publishare-delta-tree", "qps", "base64"},
#line 143 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/sru+xml", "sru", "base64"},
#line 196 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.chemdraw+xml", "cdxml", "base64"},
#line 737 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/svg+xml", "svg", "8bit"},
#line 579 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-gnumeric", "gnumeric", "base64"},
#line 628 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-research-info-systems", "ris", "base64"},
#line 95 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/patch-ops-error+xml", "xer", "base64"},
#line 502 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.wap.slc", "slc", "base64"},
#line 173 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.adobe.formscentral.fcdt", "fcdt", "base64"},
#line 176 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.adobe.xfdf", "xfdf", "base64"},
#line 217 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.curl.pcurl", "pcurl", "base64"},
#line 706 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/webm", "weba", "base64"},
#line 663 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/xaml+xml", "xaml", "base64"},
#line 491 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ufdl", "ufd", "base64"},
#line 151 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.3gpp.pic-bw-small", "psb", "base64"},
#line 770 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/x-portable-bitmap", "pbm", "base64"},
#line 242 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ezpix-package", "ez3", "base64"},
#line 362 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ms-powerpoint.slide.macroEnabled.12", "sldm", "base64"},
#line 286 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.hp-jlyt", "jlt", "base64"},
#line 360 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ms-powerpoint.addin.macroEnabled.12", "ppam", "base64"},
#line 39 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/cdmi-capability", "cdmia", "base64"},
#line 363 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ms-powerpoint.slideshow.macroEnabled.12", "ppsm", "base64"},
#line 616 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-mswrite", "wri", "base64"},
#line 366 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ms-word.document.macroEnabled.12", "docm", "base64"},
#line 671 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/xslt+xml", "xslt", "base64"},
#line 327 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.lotus-approach", "apr", "base64"},
#line 739 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/vnd.adobe.photoshop", "psd", "base64"},
#line 425 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.pocketlearn", "plf", "base64"},
#line 505 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.wap.wmlscriptc", "wmlsc", "base64"},
#line 771 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/x-portable-graymap", "pgm", "base64"},
#line 248 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.frogans.fnc", "fnc", "base64"},
#line 364 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ms-powerpoint.template.macroEnabled.12", "potm", "base64"},
#line 601 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-ms-wmd", "wmd", "base64"},
#line 59 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/gxf", "gxf", "base64"},
#line 361 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ms-powerpoint.presentation.macroEnabled.12", "pptm", "base64"},
#line 251 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.fujitsu.oasys", "oas", "base64"},
#line 91 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/ogg", "ogx", "base64"},
#line 585 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-httpd-php", "php", "8bit"},
#line 58 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/gpx+xml", "gpx", "base64"},
#line 104 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/pkix-cert", "cer", "base64"},
#line 178 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.airzip.filesecure.azf", "azf", "base64"},
#line 273 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.groove-identity-message", "gim", "base64"},
#line 367 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ms-word.template.macroEnabled.12", "dotm", "base64"},
#line 637 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-stuffitx", "sitx", "base64"},
#line 757 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/webp", "webp", "base64"},
#line 666 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/xhtml+xml", "xht", "8bit"},
#line 330 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.lotus-organizer", "org", "base64"},
#line 382 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.nokia.n-gage.symbian.install", "n-gage", "base64"},
#line 57 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/gml+xml", "gml", "base64"},
#line 373 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.muvee.style", "msty", "base64"},
#line 253 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.fujitsu.oasys3", "oa3", "base64"},
#line 212 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.criticaltools.wbs+xml", "wbs", "base64"},
#line 625 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-python", "py", "8bit"},
#line 821 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/vnd.wap.sl", "sl", "quoted-printable"},
#line 255 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.fujitsu.oasysprs", "bh2", "base64"},
#line 582 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-hdf", "hdf", "base64"},
#line 135 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/sgml-open-catalog", "soc", "base64"},
#line 369 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ms-wpl", "wpl", "base64"},
#line 859 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/vnd.mpegurl", "m4u", "8bit"},
#line 539 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-authorware-map", "aam", "base64"},
#line 572 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-font-snf", "snf", "base64"},
#line 506 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.webturbo", "wtb", "base64"},
#line 180 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.amazon.ebook", "azw", "base64"},
#line 675 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/yin+xml", "yin", "base64"},
#line 499 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.visionary", "vis", "base64"},
#line 254 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.fujitsu.oasysgp", "fg5", "base64"},
#line 118 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/resource-lists-diff+xml", "rld", "base64"},
#line 52 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/epub+zip", "epub", "base64"},
#line 457 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.solent.sdkm+xml", "sdkd", "base64"},
#line 755 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/vnd.wap.wbmp", "wbmp", "base64"},
#line 573 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-font-ttf", "ttc", "base64"},
#line 259 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.fuzzysheet", "fzs", "base64"},
#line 142 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/srgs+xml", "grxml", "base64"},
#line 861 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/vnd.nokia.interleaved-multimedia", "nim", "base64"},
#line 764 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/x-hasselblad-3fr", "3fr", "base64"},
#line 571 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-font-pcf", "pcf", "base64"},
#line 302 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ipunplugged.rcprofile", "rcprofile", "base64"},
#line 884 "ext/MicroMime/ContentTypeMime.gperf"
      {"x-chemical/x-xyz", "xyz", "base64"},
#line 233 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ecowin.chart", "mag", "base64"},
#line 410 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.openxmlformats-officedocument.presentationml.slideshow", "ppsx", "base64"},
#line 344 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ms-artgalry", "cil", "base64"},
#line 613 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-mspublisher", "pub", "base64"},
#line 481 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.symbian.install", "sis", "base64"},
#line 648 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-tgif", "obj", "base64"},
#line 126 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/sbml+xml", "sbml", "base64"},
#line 202 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.cluetrust.cartomobile-config", "c11amc", "base64"},
#line 203 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.cluetrust.cartomobile-config-pkg", "c11amz", "base64"},
#line 672 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/xspf+xml", "xspf", "base64"},
#line 526 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/widget", "wgt", "base64"},
#line 315 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.kde.kontour", "kon", "base64"},
#line 147 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/thraud+xml", "tfi", "base64"},
#line 136 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/shf+xml", "shf", "base64"},
#line 268 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.google-earth.kml+xml", "kml", "8bit"},
#line 602 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-ms-wmz", "wmz", "base64"},
#line 750 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/vnd.globalgraphics.pgb", "pgb", "base64"},
#line 252 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.fujitsu.oasys2", "oa2", "base64"},
#line 528 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/wordperfect5.1", "wp", "base64"},
#line 312 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.kde.kchart", "chrt", "base64"},
#line 79 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/metalink+xml", "metalink", "base64"},
#line 103 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/pkix-attr-cert", "ac", "base64"},
#line 249 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.frogans.ltf", "ltf", "base64"},
#line 523 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.zzazz.deck+xml", "zaz", "base64"},
#line 262 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.geogebra.tool", "ggt", "base64"},
#line 717 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/x-pn-realaudio-plugin", "rmp", "base64"},
#line 484 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.syncml.dm+xml", "xdm", "base64"},
#line 185 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.anser-web-funds-transfer-initiation", "fti", "base64"},
#line 280 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.hhe.lesson-player", "les", "base64"},
#line 674 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/yang", "yang", "base64"},
#line 624 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-pkcs7-certreqresp", "p7r", "base64"},
#line 558 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-debian-package", "deb", "base64"},
#line 184 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.anser-web-certificate-issue-initiation", "cii", "base64"},
#line 535 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-abiword", "abw", "base64"},
#line 769 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/x-portable-anymap", "pnm", "base64"},
#line 250 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.fsc.weblaunch", "fsc", "7bit"},
#line 333 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.macports.portpkg", "portpkg", "base64"},
#line 121 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/rpki-manifest", "mft", "base64"},
#line 287 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.hydrostatix.sof-data", "sfd-hdstx", "base64"},
#line 622 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-pkcs12", "p12", "base64"},
#line 658 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-xfig", "fig", "base64"},
#line 380 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.noblenet-web", "nnw", "base64"},
#line 664 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/xcap-diff+xml", "xdf", "base64"},
#line 61 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/hyperstudio", "stk", "base64"},
#line 527 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/winhlp", "hlp", "base64"},
#line 101 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/pkcs7-signature", "p7s", "base64"},
#line 376 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.neurolanguage.nlu", "nlu", "base64"},
#line 105 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/pkix-crl", "crl", "base64"},
#line 578 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-glulx", "ulx", "base64"},
#line 507 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.wolfram.player", "nbp", "base64"},
#line 656 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-wordperfect6.1", "wp6", "base64"},
#line 538 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-authorware-bin", "aab", "base64"},
#line 261 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.geogebra.file", "ggb", "base64"},
#line 115 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/reginfo+xml", "rif", "base64"},
#line 106 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/pkix-pkipath", "pkipath", "base64"},
#line 471 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.sun.xml.draw", "sxd", "base64"},
#line 654 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-wais-source", "src", "base64"},
#line 568 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-font-bdf", "bdf", "base64"},
#line 229 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ds-keypoint", "kpxx", "base64"},
#line 62 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/inkml+xml", "ink", "base64"},
#line 482 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.syncml+xml", "xsm", "base64"},
#line 659 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-xliff+xml", "xlf", "base64"},
#line 483 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.syncml.dm+wbxml", "bdm", "base64"},
#line 476 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.sun.xml.writer", "sxw", "base64"},
#line 510 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.wt.stf", "stf", "base64"},
#line 564 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-dtbresource+xml", "res", "base64"},
#line 540 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-authorware-seg", "aas", "base64"},
#line 313 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.kde.kformula", "kfo", "base64"},
#line 623 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-pkcs7-certificates", "p7b", "base64"},
#line 332 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.lotus-wordpro", "lwp", "base64"},
#line 192 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.audiograph", "aep", "base64"},
#line 698 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/vnd.nokia.mobile-xmf", "mxmf", "base64"},
#line 116 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/relax-ng-compact-syntax", "rnc", "base64"},
#line 570 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-font-linux-psf", "psf", "base64"},
#line 503 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.wap.wbxml", "wbxml", "base64"},
#line 563 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-dtbook+xml", "dtb", "base64"},
#line 427 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.previewsystems.box", "box", "base64"},
#line 786 "ext/MicroMime/ContentTypeMime.gperf"
      {"model/vnd.gtw", "gtw", "base64"},
#line 477 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.sun.xml.writer.global", "sxg", "base64"},
#line 478 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.sun.xml.writer.template", "stw", "base64"},
#line 593 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-iwork-pages-sffpages", "pages", "base64"},
#line 792 "ext/MicroMime/ContentTypeMime.gperf"
      {"model/x3d+binary", "x3db", "base64"},
#line 318 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.kde.kword", "kwd", "base64"},
#line 113 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/pskc+xml", "pskcxml", "base64"},
#line 324 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.llamagraphics.life-balance.desktop", "lbd", "base64"},
#line 368 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ms-works", "wcm", "base64"},
#line 120 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/rpki-ghostbusters", "gbr", "base64"},
#line 257 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.fujixerox.docuworks", "xdw", "base64"},
#line 111 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/prs.cww", "cw", "base64"},
#line 90 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/oebps-package+xml", "opf", "base64"},
#line 258 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.fujixerox.docuworks.binder", "xbd", "base64"},
#line 689 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/silk", "sil", "base64"},
#line 529 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/wsdl+xml", "wsdl", "base64"},
#line 211 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.crick.clicker.wordbank", "clkw", "base64"},
#line 511 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.wv.csp+wbxml", "wv", "base64"},
#line 80 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/metalink4+xml", "meta4", "base64"},
#line 325 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.llamagraphics.life-balance.exchange+xml", "lbe", "base64"},
#line 525 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/watcherinfo+xml", "wif", "base64"},
#line 357 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.ms-outlook", "msg", "base64"},
#line 610 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-msmediaview", "m13", "base64"},
#line 655 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-web-app-manifest+json", "webapp", "base64"},
#line 699 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/vnd.nortel.vbk", "vbk", "base64"},
#line 530 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/wspolicy+xml", "wspolicy", "base64"},
#line 56 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/font-woff", "woff", "base64"},
#line 823 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/vnd.wap.wmlscript", "wmls", "quoted-printable"},
#line 592 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-iwork-numbers-sffnumbers", "numbers", "base64"},
#line 822 "ext/MicroMime/ContentTypeMime.gperf"
      {"text/vnd.wap.wml", "wml", "quoted-printable"},
#line 649 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-toolbook", "tbk", "base64"},
#line 548 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-cdlink", "vcd", "base64"},
#line 521 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.yellowriver-custom-menu", "cmp", "base64"},
#line 629 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-ruby", "rb", "8bit"},
#line 617 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-ns-proxy-autoconfig", "pac", "base64"},
#line 885 "ext/MicroMime/ContentTypeMime.gperf"
      {"x-conference/x-cooltalk", "ice", "base64"},
#line 697 "ext/MicroMime/ContentTypeMime.gperf"
      {"audio/vnd.ms-playready.media.pya", "pya", "base64"},
#line 860 "ext/MicroMime/ContentTypeMime.gperf"
      {"video/vnd.ms-playready.media.pyv", "pyv", "base64"},
#line 598 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-mobipocket-ebook", "mobi", "base64"},
#line 576 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-futuresplash", "spl", "base64"},
#line 584 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-html+ruby", "rhtml", "8bit"},
#line 632 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-shockwave-flash", "swf", "base64"},
#line 439 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.sailingtracker.track", "st", "base64"},
#line 779 "ext/MicroMime/ContentTypeMime.gperf"
      {"image/x-xwindowdump", "xwd", "base64"},
#line 197 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/vnd.chipnuts.karaoke-mmd", "mmd", "base64"},
#line 591 "ext/MicroMime/ContentTypeMime.gperf"
      {"application/x-iwork-keynote-sffkey", "key", "base64"}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = lookup_by_content_type_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          register const struct ContentTypeMime *resword;

          if (key < 1709)
            {
              if (key < 857)
                {
                  switch (key - 19)
                    {
                      case 0:
                        resword = &wordlist[0];
                        goto compare;
                      case 5:
                        resword = &wordlist[1];
                        goto compare;
                      case 10:
                        resword = &wordlist[2];
                        goto compare;
                      case 19:
                        resword = &wordlist[3];
                        goto compare;
                      case 20:
                        resword = &wordlist[4];
                        goto compare;
                      case 21:
                        resword = &wordlist[5];
                        goto compare;
                      case 25:
                        resword = &wordlist[6];
                        goto compare;
                      case 26:
                        resword = &wordlist[7];
                        goto compare;
                      case 36:
                        resword = &wordlist[8];
                        goto compare;
                      case 41:
                        resword = &wordlist[9];
                        goto compare;
                      case 46:
                        resword = &wordlist[10];
                        goto compare;
                      case 54:
                        resword = &wordlist[11];
                        goto compare;
                      case 64:
                        resword = &wordlist[12];
                        goto compare;
                      case 65:
                        resword = &wordlist[13];
                        goto compare;
                      case 66:
                        resword = &wordlist[14];
                        goto compare;
                      case 69:
                        resword = &wordlist[15];
                        goto compare;
                      case 70:
                        resword = &wordlist[16];
                        goto compare;
                      case 74:
                        resword = &wordlist[17];
                        goto compare;
                      case 90:
                        resword = &wordlist[18];
                        goto compare;
                      case 91:
                        resword = &wordlist[19];
                        goto compare;
                      case 94:
                        resword = &wordlist[20];
                        goto compare;
                      case 96:
                        resword = &wordlist[21];
                        goto compare;
                      case 103:
                        resword = &wordlist[22];
                        goto compare;
                      case 105:
                        resword = &wordlist[23];
                        goto compare;
                      case 107:
                        resword = &wordlist[24];
                        goto compare;
                      case 108:
                        resword = &wordlist[25];
                        goto compare;
                      case 110:
                        resword = &wordlist[26];
                        goto compare;
                      case 112:
                        resword = &wordlist[27];
                        goto compare;
                      case 114:
                        resword = &wordlist[28];
                        goto compare;
                      case 116:
                        resword = &wordlist[29];
                        goto compare;
                      case 117:
                        resword = &wordlist[30];
                        goto compare;
                      case 120:
                        resword = &wordlist[31];
                        goto compare;
                      case 123:
                        resword = &wordlist[32];
                        goto compare;
                      case 127:
                        resword = &wordlist[33];
                        goto compare;
                      case 132:
                        resword = &wordlist[34];
                        goto compare;
                      case 135:
                        resword = &wordlist[35];
                        goto compare;
                      case 136:
                        resword = &wordlist[36];
                        goto compare;
                      case 137:
                        resword = &wordlist[37];
                        goto compare;
                      case 144:
                        resword = &wordlist[38];
                        goto compare;
                      case 147:
                        resword = &wordlist[39];
                        goto compare;
                      case 150:
                        resword = &wordlist[40];
                        goto compare;
                      case 151:
                        resword = &wordlist[41];
                        goto compare;
                      case 157:
                        resword = &wordlist[42];
                        goto compare;
                      case 160:
                        resword = &wordlist[43];
                        goto compare;
                      case 161:
                        resword = &wordlist[44];
                        goto compare;
                      case 164:
                        resword = &wordlist[45];
                        goto compare;
                      case 165:
                        resword = &wordlist[46];
                        goto compare;
                      case 172:
                        resword = &wordlist[47];
                        goto compare;
                      case 176:
                        resword = &wordlist[48];
                        goto compare;
                      case 182:
                        resword = &wordlist[49];
                        goto compare;
                      case 186:
                        resword = &wordlist[50];
                        goto compare;
                      case 191:
                        resword = &wordlist[51];
                        goto compare;
                      case 194:
                        resword = &wordlist[52];
                        goto compare;
                      case 198:
                        resword = &wordlist[53];
                        goto compare;
                      case 212:
                        resword = &wordlist[54];
                        goto compare;
                      case 214:
                        resword = &wordlist[55];
                        goto compare;
                      case 215:
                        resword = &wordlist[56];
                        goto compare;
                      case 216:
                        resword = &wordlist[57];
                        goto compare;
                      case 219:
                        resword = &wordlist[58];
                        goto compare;
                      case 222:
                        resword = &wordlist[59];
                        goto compare;
                      case 226:
                        resword = &wordlist[60];
                        goto compare;
                      case 233:
                        resword = &wordlist[61];
                        goto compare;
                      case 240:
                        resword = &wordlist[62];
                        goto compare;
                      case 241:
                        resword = &wordlist[63];
                        goto compare;
                      case 243:
                        resword = &wordlist[64];
                        goto compare;
                      case 244:
                        resword = &wordlist[65];
                        goto compare;
                      case 246:
                        resword = &wordlist[66];
                        goto compare;
                      case 251:
                        resword = &wordlist[67];
                        goto compare;
                      case 252:
                        resword = &wordlist[68];
                        goto compare;
                      case 254:
                        resword = &wordlist[69];
                        goto compare;
                      case 258:
                        resword = &wordlist[70];
                        goto compare;
                      case 259:
                        resword = &wordlist[71];
                        goto compare;
                      case 266:
                        resword = &wordlist[72];
                        goto compare;
                      case 268:
                        resword = &wordlist[73];
                        goto compare;
                      case 270:
                        resword = &wordlist[74];
                        goto compare;
                      case 271:
                        resword = &wordlist[75];
                        goto compare;
                      case 274:
                        resword = &wordlist[76];
                        goto compare;
                      case 276:
                        resword = &wordlist[77];
                        goto compare;
                      case 278:
                        resword = &wordlist[78];
                        goto compare;
                      case 284:
                        resword = &wordlist[79];
                        goto compare;
                      case 286:
                        resword = &wordlist[80];
                        goto compare;
                      case 287:
                        resword = &wordlist[81];
                        goto compare;
                      case 288:
                        resword = &wordlist[82];
                        goto compare;
                      case 289:
                        resword = &wordlist[83];
                        goto compare;
                      case 290:
                        resword = &wordlist[84];
                        goto compare;
                      case 291:
                        resword = &wordlist[85];
                        goto compare;
                      case 296:
                        resword = &wordlist[86];
                        goto compare;
                      case 304:
                        resword = &wordlist[87];
                        goto compare;
                      case 309:
                        resword = &wordlist[88];
                        goto compare;
                      case 316:
                        resword = &wordlist[89];
                        goto compare;
                      case 321:
                        resword = &wordlist[90];
                        goto compare;
                      case 324:
                        resword = &wordlist[91];
                        goto compare;
                      case 327:
                        resword = &wordlist[92];
                        goto compare;
                      case 328:
                        resword = &wordlist[93];
                        goto compare;
                      case 330:
                        resword = &wordlist[94];
                        goto compare;
                      case 335:
                        resword = &wordlist[95];
                        goto compare;
                      case 338:
                        resword = &wordlist[96];
                        goto compare;
                      case 339:
                        resword = &wordlist[97];
                        goto compare;
                      case 345:
                        resword = &wordlist[98];
                        goto compare;
                      case 347:
                        resword = &wordlist[99];
                        goto compare;
                      case 349:
                        resword = &wordlist[100];
                        goto compare;
                      case 352:
                        resword = &wordlist[101];
                        goto compare;
                      case 353:
                        resword = &wordlist[102];
                        goto compare;
                      case 354:
                        resword = &wordlist[103];
                        goto compare;
                      case 357:
                        resword = &wordlist[104];
                        goto compare;
                      case 362:
                        resword = &wordlist[105];
                        goto compare;
                      case 364:
                        resword = &wordlist[106];
                        goto compare;
                      case 371:
                        resword = &wordlist[107];
                        goto compare;
                      case 378:
                        resword = &wordlist[108];
                        goto compare;
                      case 388:
                        resword = &wordlist[109];
                        goto compare;
                      case 389:
                        resword = &wordlist[110];
                        goto compare;
                      case 392:
                        resword = &wordlist[111];
                        goto compare;
                      case 393:
                        resword = &wordlist[112];
                        goto compare;
                      case 394:
                        resword = &wordlist[113];
                        goto compare;
                      case 397:
                        resword = &wordlist[114];
                        goto compare;
                      case 398:
                        resword = &wordlist[115];
                        goto compare;
                      case 399:
                        resword = &wordlist[116];
                        goto compare;
                      case 416:
                        resword = &wordlist[117];
                        goto compare;
                      case 419:
                        resword = &wordlist[118];
                        goto compare;
                      case 421:
                        resword = &wordlist[119];
                        goto compare;
                      case 423:
                        resword = &wordlist[120];
                        goto compare;
                      case 425:
                        resword = &wordlist[121];
                        goto compare;
                      case 427:
                        resword = &wordlist[122];
                        goto compare;
                      case 431:
                        resword = &wordlist[123];
                        goto compare;
                      case 435:
                        resword = &wordlist[124];
                        goto compare;
                      case 438:
                        resword = &wordlist[125];
                        goto compare;
                      case 441:
                        resword = &wordlist[126];
                        goto compare;
                      case 444:
                        resword = &wordlist[127];
                        goto compare;
                      case 447:
                        resword = &wordlist[128];
                        goto compare;
                      case 451:
                        resword = &wordlist[129];
                        goto compare;
                      case 453:
                        resword = &wordlist[130];
                        goto compare;
                      case 455:
                        resword = &wordlist[131];
                        goto compare;
                      case 458:
                        resword = &wordlist[132];
                        goto compare;
                      case 480:
                        resword = &wordlist[133];
                        goto compare;
                      case 483:
                        resword = &wordlist[134];
                        goto compare;
                      case 490:
                        resword = &wordlist[135];
                        goto compare;
                      case 504:
                        resword = &wordlist[136];
                        goto compare;
                      case 506:
                        resword = &wordlist[137];
                        goto compare;
                      case 514:
                        resword = &wordlist[138];
                        goto compare;
                      case 517:
                        resword = &wordlist[139];
                        goto compare;
                      case 523:
                        resword = &wordlist[140];
                        goto compare;
                      case 530:
                        resword = &wordlist[141];
                        goto compare;
                      case 534:
                        resword = &wordlist[142];
                        goto compare;
                      case 539:
                        resword = &wordlist[143];
                        goto compare;
                      case 542:
                        resword = &wordlist[144];
                        goto compare;
                      case 548:
                        resword = &wordlist[145];
                        goto compare;
                      case 568:
                        resword = &wordlist[146];
                        goto compare;
                      case 569:
                        resword = &wordlist[147];
                        goto compare;
                      case 570:
                        resword = &wordlist[148];
                        goto compare;
                      case 574:
                        resword = &wordlist[149];
                        goto compare;
                      case 578:
                        resword = &wordlist[150];
                        goto compare;
                      case 579:
                        resword = &wordlist[151];
                        goto compare;
                      case 580:
                        resword = &wordlist[152];
                        goto compare;
                      case 584:
                        resword = &wordlist[153];
                        goto compare;
                      case 586:
                        resword = &wordlist[154];
                        goto compare;
                      case 587:
                        resword = &wordlist[155];
                        goto compare;
                      case 588:
                        resword = &wordlist[156];
                        goto compare;
                      case 590:
                        resword = &wordlist[157];
                        goto compare;
                      case 594:
                        resword = &wordlist[158];
                        goto compare;
                      case 597:
                        resword = &wordlist[159];
                        goto compare;
                      case 598:
                        resword = &wordlist[160];
                        goto compare;
                      case 600:
                        resword = &wordlist[161];
                        goto compare;
                      case 602:
                        resword = &wordlist[162];
                        goto compare;
                      case 610:
                        resword = &wordlist[163];
                        goto compare;
                      case 613:
                        resword = &wordlist[164];
                        goto compare;
                      case 615:
                        resword = &wordlist[165];
                        goto compare;
                      case 616:
                        resword = &wordlist[166];
                        goto compare;
                      case 623:
                        resword = &wordlist[167];
                        goto compare;
                      case 629:
                        resword = &wordlist[168];
                        goto compare;
                      case 632:
                        resword = &wordlist[169];
                        goto compare;
                      case 634:
                        resword = &wordlist[170];
                        goto compare;
                      case 638:
                        resword = &wordlist[171];
                        goto compare;
                      case 642:
                        resword = &wordlist[172];
                        goto compare;
                      case 663:
                        resword = &wordlist[173];
                        goto compare;
                      case 667:
                        resword = &wordlist[174];
                        goto compare;
                      case 670:
                        resword = &wordlist[175];
                        goto compare;
                      case 682:
                        resword = &wordlist[176];
                        goto compare;
                      case 685:
                        resword = &wordlist[177];
                        goto compare;
                      case 687:
                        resword = &wordlist[178];
                        goto compare;
                      case 689:
                        resword = &wordlist[179];
                        goto compare;
                      case 691:
                        resword = &wordlist[180];
                        goto compare;
                      case 697:
                        resword = &wordlist[181];
                        goto compare;
                      case 714:
                        resword = &wordlist[182];
                        goto compare;
                      case 716:
                        resword = &wordlist[183];
                        goto compare;
                      case 717:
                        resword = &wordlist[184];
                        goto compare;
                      case 724:
                        resword = &wordlist[185];
                        goto compare;
                      case 730:
                        resword = &wordlist[186];
                        goto compare;
                      case 737:
                        resword = &wordlist[187];
                        goto compare;
                      case 749:
                        resword = &wordlist[188];
                        goto compare;
                      case 751:
                        resword = &wordlist[189];
                        goto compare;
                      case 753:
                        resword = &wordlist[190];
                        goto compare;
                      case 756:
                        resword = &wordlist[191];
                        goto compare;
                      case 765:
                        resword = &wordlist[192];
                        goto compare;
                      case 767:
                        resword = &wordlist[193];
                        goto compare;
                      case 772:
                        resword = &wordlist[194];
                        goto compare;
                      case 773:
                        resword = &wordlist[195];
                        goto compare;
                      case 774:
                        resword = &wordlist[196];
                        goto compare;
                      case 776:
                        resword = &wordlist[197];
                        goto compare;
                      case 777:
                        resword = &wordlist[198];
                        goto compare;
                      case 781:
                        resword = &wordlist[199];
                        goto compare;
                      case 784:
                        resword = &wordlist[200];
                        goto compare;
                      case 786:
                        resword = &wordlist[201];
                        goto compare;
                      case 789:
                        resword = &wordlist[202];
                        goto compare;
                      case 792:
                        resword = &wordlist[203];
                        goto compare;
                      case 793:
                        resword = &wordlist[204];
                        goto compare;
                      case 800:
                        resword = &wordlist[205];
                        goto compare;
                      case 803:
                        resword = &wordlist[206];
                        goto compare;
                      case 810:
                        resword = &wordlist[207];
                        goto compare;
                      case 814:
                        resword = &wordlist[208];
                        goto compare;
                      case 815:
                        resword = &wordlist[209];
                        goto compare;
                      case 821:
                        resword = &wordlist[210];
                        goto compare;
                      case 822:
                        resword = &wordlist[211];
                        goto compare;
                      case 831:
                        resword = &wordlist[212];
                        goto compare;
                      case 834:
                        resword = &wordlist[213];
                        goto compare;
                    }
                }
              else
                {
                  switch (key - 857)
                    {
                      case 0:
                        resword = &wordlist[214];
                        goto compare;
                      case 2:
                        resword = &wordlist[215];
                        goto compare;
                      case 7:
                        resword = &wordlist[216];
                        goto compare;
                      case 15:
                        resword = &wordlist[217];
                        goto compare;
                      case 21:
                        resword = &wordlist[218];
                        goto compare;
                      case 32:
                        resword = &wordlist[219];
                        goto compare;
                      case 45:
                        resword = &wordlist[220];
                        goto compare;
                      case 47:
                        resword = &wordlist[221];
                        goto compare;
                      case 53:
                        resword = &wordlist[222];
                        goto compare;
                      case 57:
                        resword = &wordlist[223];
                        goto compare;
                      case 72:
                        resword = &wordlist[224];
                        goto compare;
                      case 75:
                        resword = &wordlist[225];
                        goto compare;
                      case 76:
                        resword = &wordlist[226];
                        goto compare;
                      case 94:
                        resword = &wordlist[227];
                        goto compare;
                      case 100:
                        resword = &wordlist[228];
                        goto compare;
                      case 102:
                        resword = &wordlist[229];
                        goto compare;
                      case 109:
                        resword = &wordlist[230];
                        goto compare;
                      case 110:
                        resword = &wordlist[231];
                        goto compare;
                      case 118:
                        resword = &wordlist[232];
                        goto compare;
                      case 119:
                        resword = &wordlist[233];
                        goto compare;
                      case 130:
                        resword = &wordlist[234];
                        goto compare;
                      case 141:
                        resword = &wordlist[235];
                        goto compare;
                      case 149:
                        resword = &wordlist[236];
                        goto compare;
                      case 151:
                        resword = &wordlist[237];
                        goto compare;
                      case 153:
                        resword = &wordlist[238];
                        goto compare;
                      case 155:
                        resword = &wordlist[239];
                        goto compare;
                      case 162:
                        resword = &wordlist[240];
                        goto compare;
                      case 164:
                        resword = &wordlist[241];
                        goto compare;
                      case 165:
                        resword = &wordlist[242];
                        goto compare;
                      case 167:
                        resword = &wordlist[243];
                        goto compare;
                      case 170:
                        resword = &wordlist[244];
                        goto compare;
                      case 174:
                        resword = &wordlist[245];
                        goto compare;
                      case 176:
                        resword = &wordlist[246];
                        goto compare;
                      case 185:
                        resword = &wordlist[247];
                        goto compare;
                      case 186:
                        resword = &wordlist[248];
                        goto compare;
                      case 188:
                        resword = &wordlist[249];
                        goto compare;
                      case 190:
                        resword = &wordlist[250];
                        goto compare;
                      case 191:
                        resword = &wordlist[251];
                        goto compare;
                      case 192:
                        resword = &wordlist[252];
                        goto compare;
                      case 195:
                        resword = &wordlist[253];
                        goto compare;
                      case 199:
                        resword = &wordlist[254];
                        goto compare;
                      case 201:
                        resword = &wordlist[255];
                        goto compare;
                      case 203:
                        resword = &wordlist[256];
                        goto compare;
                      case 205:
                        resword = &wordlist[257];
                        goto compare;
                      case 207:
                        resword = &wordlist[258];
                        goto compare;
                      case 210:
                        resword = &wordlist[259];
                        goto compare;
                      case 211:
                        resword = &wordlist[260];
                        goto compare;
                      case 212:
                        resword = &wordlist[261];
                        goto compare;
                      case 215:
                        resword = &wordlist[262];
                        goto compare;
                      case 216:
                        resword = &wordlist[263];
                        goto compare;
                      case 217:
                        resword = &wordlist[264];
                        goto compare;
                      case 221:
                        resword = &wordlist[265];
                        goto compare;
                      case 223:
                        resword = &wordlist[266];
                        goto compare;
                      case 225:
                        resword = &wordlist[267];
                        goto compare;
                      case 227:
                        resword = &wordlist[268];
                        goto compare;
                      case 228:
                        resword = &wordlist[269];
                        goto compare;
                      case 231:
                        resword = &wordlist[270];
                        goto compare;
                      case 234:
                        resword = &wordlist[271];
                        goto compare;
                      case 236:
                        resword = &wordlist[272];
                        goto compare;
                      case 240:
                        resword = &wordlist[273];
                        goto compare;
                      case 241:
                        resword = &wordlist[274];
                        goto compare;
                      case 242:
                        resword = &wordlist[275];
                        goto compare;
                      case 244:
                        resword = &wordlist[276];
                        goto compare;
                      case 246:
                        resword = &wordlist[277];
                        goto compare;
                      case 247:
                        resword = &wordlist[278];
                        goto compare;
                      case 248:
                        resword = &wordlist[279];
                        goto compare;
                      case 249:
                        resword = &wordlist[280];
                        goto compare;
                      case 250:
                        resword = &wordlist[281];
                        goto compare;
                      case 251:
                        resword = &wordlist[282];
                        goto compare;
                      case 259:
                        resword = &wordlist[283];
                        goto compare;
                      case 261:
                        resword = &wordlist[284];
                        goto compare;
                      case 266:
                        resword = &wordlist[285];
                        goto compare;
                      case 271:
                        resword = &wordlist[286];
                        goto compare;
                      case 272:
                        resword = &wordlist[287];
                        goto compare;
                      case 276:
                        resword = &wordlist[288];
                        goto compare;
                      case 277:
                        resword = &wordlist[289];
                        goto compare;
                      case 279:
                        resword = &wordlist[290];
                        goto compare;
                      case 280:
                        resword = &wordlist[291];
                        goto compare;
                      case 282:
                        resword = &wordlist[292];
                        goto compare;
                      case 284:
                        resword = &wordlist[293];
                        goto compare;
                      case 285:
                        resword = &wordlist[294];
                        goto compare;
                      case 292:
                        resword = &wordlist[295];
                        goto compare;
                      case 294:
                        resword = &wordlist[296];
                        goto compare;
                      case 295:
                        resword = &wordlist[297];
                        goto compare;
                      case 296:
                        resword = &wordlist[298];
                        goto compare;
                      case 299:
                        resword = &wordlist[299];
                        goto compare;
                      case 300:
                        resword = &wordlist[300];
                        goto compare;
                      case 303:
                        resword = &wordlist[301];
                        goto compare;
                      case 308:
                        resword = &wordlist[302];
                        goto compare;
                      case 309:
                        resword = &wordlist[303];
                        goto compare;
                      case 313:
                        resword = &wordlist[304];
                        goto compare;
                      case 318:
                        resword = &wordlist[305];
                        goto compare;
                      case 326:
                        resword = &wordlist[306];
                        goto compare;
                      case 333:
                        resword = &wordlist[307];
                        goto compare;
                      case 340:
                        resword = &wordlist[308];
                        goto compare;
                      case 341:
                        resword = &wordlist[309];
                        goto compare;
                      case 342:
                        resword = &wordlist[310];
                        goto compare;
                      case 346:
                        resword = &wordlist[311];
                        goto compare;
                      case 347:
                        resword = &wordlist[312];
                        goto compare;
                      case 352:
                        resword = &wordlist[313];
                        goto compare;
                      case 360:
                        resword = &wordlist[314];
                        goto compare;
                      case 362:
                        resword = &wordlist[315];
                        goto compare;
                      case 364:
                        resword = &wordlist[316];
                        goto compare;
                      case 368:
                        resword = &wordlist[317];
                        goto compare;
                      case 375:
                        resword = &wordlist[318];
                        goto compare;
                      case 377:
                        resword = &wordlist[319];
                        goto compare;
                      case 378:
                        resword = &wordlist[320];
                        goto compare;
                      case 379:
                        resword = &wordlist[321];
                        goto compare;
                      case 384:
                        resword = &wordlist[322];
                        goto compare;
                      case 387:
                        resword = &wordlist[323];
                        goto compare;
                      case 389:
                        resword = &wordlist[324];
                        goto compare;
                      case 393:
                        resword = &wordlist[325];
                        goto compare;
                      case 397:
                        resword = &wordlist[326];
                        goto compare;
                      case 400:
                        resword = &wordlist[327];
                        goto compare;
                      case 402:
                        resword = &wordlist[328];
                        goto compare;
                      case 405:
                        resword = &wordlist[329];
                        goto compare;
                      case 407:
                        resword = &wordlist[330];
                        goto compare;
                      case 413:
                        resword = &wordlist[331];
                        goto compare;
                      case 416:
                        resword = &wordlist[332];
                        goto compare;
                      case 424:
                        resword = &wordlist[333];
                        goto compare;
                      case 432:
                        resword = &wordlist[334];
                        goto compare;
                      case 437:
                        resword = &wordlist[335];
                        goto compare;
                      case 438:
                        resword = &wordlist[336];
                        goto compare;
                      case 446:
                        resword = &wordlist[337];
                        goto compare;
                      case 450:
                        resword = &wordlist[338];
                        goto compare;
                      case 455:
                        resword = &wordlist[339];
                        goto compare;
                      case 459:
                        resword = &wordlist[340];
                        goto compare;
                      case 465:
                        resword = &wordlist[341];
                        goto compare;
                      case 467:
                        resword = &wordlist[342];
                        goto compare;
                      case 468:
                        resword = &wordlist[343];
                        goto compare;
                      case 475:
                        resword = &wordlist[344];
                        goto compare;
                      case 478:
                        resword = &wordlist[345];
                        goto compare;
                      case 482:
                        resword = &wordlist[346];
                        goto compare;
                      case 484:
                        resword = &wordlist[347];
                        goto compare;
                      case 488:
                        resword = &wordlist[348];
                        goto compare;
                      case 490:
                        resword = &wordlist[349];
                        goto compare;
                      case 495:
                        resword = &wordlist[350];
                        goto compare;
                      case 513:
                        resword = &wordlist[351];
                        goto compare;
                      case 521:
                        resword = &wordlist[352];
                        goto compare;
                      case 522:
                        resword = &wordlist[353];
                        goto compare;
                      case 543:
                        resword = &wordlist[354];
                        goto compare;
                      case 544:
                        resword = &wordlist[355];
                        goto compare;
                      case 547:
                        resword = &wordlist[356];
                        goto compare;
                      case 549:
                        resword = &wordlist[357];
                        goto compare;
                      case 550:
                        resword = &wordlist[358];
                        goto compare;
                      case 560:
                        resword = &wordlist[359];
                        goto compare;
                      case 568:
                        resword = &wordlist[360];
                        goto compare;
                      case 569:
                        resword = &wordlist[361];
                        goto compare;
                      case 571:
                        resword = &wordlist[362];
                        goto compare;
                      case 574:
                        resword = &wordlist[363];
                        goto compare;
                      case 579:
                        resword = &wordlist[364];
                        goto compare;
                      case 589:
                        resword = &wordlist[365];
                        goto compare;
                      case 591:
                        resword = &wordlist[366];
                        goto compare;
                      case 592:
                        resword = &wordlist[367];
                        goto compare;
                      case 601:
                        resword = &wordlist[368];
                        goto compare;
                      case 620:
                        resword = &wordlist[369];
                        goto compare;
                      case 633:
                        resword = &wordlist[370];
                        goto compare;
                      case 635:
                        resword = &wordlist[371];
                        goto compare;
                      case 641:
                        resword = &wordlist[372];
                        goto compare;
                      case 650:
                        resword = &wordlist[373];
                        goto compare;
                      case 651:
                        resword = &wordlist[374];
                        goto compare;
                      case 652:
                        resword = &wordlist[375];
                        goto compare;
                      case 659:
                        resword = &wordlist[376];
                        goto compare;
                      case 662:
                        resword = &wordlist[377];
                        goto compare;
                      case 668:
                        resword = &wordlist[378];
                        goto compare;
                      case 669:
                        resword = &wordlist[379];
                        goto compare;
                      case 671:
                        resword = &wordlist[380];
                        goto compare;
                      case 676:
                        resword = &wordlist[381];
                        goto compare;
                      case 684:
                        resword = &wordlist[382];
                        goto compare;
                      case 685:
                        resword = &wordlist[383];
                        goto compare;
                      case 689:
                        resword = &wordlist[384];
                        goto compare;
                      case 691:
                        resword = &wordlist[385];
                        goto compare;
                      case 695:
                        resword = &wordlist[386];
                        goto compare;
                      case 696:
                        resword = &wordlist[387];
                        goto compare;
                      case 702:
                        resword = &wordlist[388];
                        goto compare;
                      case 704:
                        resword = &wordlist[389];
                        goto compare;
                      case 710:
                        resword = &wordlist[390];
                        goto compare;
                      case 715:
                        resword = &wordlist[391];
                        goto compare;
                      case 720:
                        resword = &wordlist[392];
                        goto compare;
                      case 723:
                        resword = &wordlist[393];
                        goto compare;
                      case 726:
                        resword = &wordlist[394];
                        goto compare;
                      case 727:
                        resword = &wordlist[395];
                        goto compare;
                      case 728:
                        resword = &wordlist[396];
                        goto compare;
                      case 740:
                        resword = &wordlist[397];
                        goto compare;
                      case 742:
                        resword = &wordlist[398];
                        goto compare;
                      case 745:
                        resword = &wordlist[399];
                        goto compare;
                      case 748:
                        resword = &wordlist[400];
                        goto compare;
                      case 762:
                        resword = &wordlist[401];
                        goto compare;
                      case 766:
                        resword = &wordlist[402];
                        goto compare;
                      case 767:
                        resword = &wordlist[403];
                        goto compare;
                      case 776:
                        resword = &wordlist[404];
                        goto compare;
                      case 780:
                        resword = &wordlist[405];
                        goto compare;
                      case 781:
                        resword = &wordlist[406];
                        goto compare;
                      case 783:
                        resword = &wordlist[407];
                        goto compare;
                      case 784:
                        resword = &wordlist[408];
                        goto compare;
                      case 788:
                        resword = &wordlist[409];
                        goto compare;
                      case 796:
                        resword = &wordlist[410];
                        goto compare;
                      case 797:
                        resword = &wordlist[411];
                        goto compare;
                      case 804:
                        resword = &wordlist[412];
                        goto compare;
                      case 806:
                        resword = &wordlist[413];
                        goto compare;
                      case 807:
                        resword = &wordlist[414];
                        goto compare;
                      case 813:
                        resword = &wordlist[415];
                        goto compare;
                      case 818:
                        resword = &wordlist[416];
                        goto compare;
                      case 822:
                        resword = &wordlist[417];
                        goto compare;
                      case 829:
                        resword = &wordlist[418];
                        goto compare;
                      case 830:
                        resword = &wordlist[419];
                        goto compare;
                      case 834:
                        resword = &wordlist[420];
                        goto compare;
                      case 838:
                        resword = &wordlist[421];
                        goto compare;
                      case 843:
                        resword = &wordlist[422];
                        goto compare;
                      case 844:
                        resword = &wordlist[423];
                        goto compare;
                      case 845:
                        resword = &wordlist[424];
                        goto compare;
                      case 848:
                        resword = &wordlist[425];
                        goto compare;
                      case 850:
                        resword = &wordlist[426];
                        goto compare;
                    }
                }
            }
          else
            {
              if (key < 2577)
                {
                  switch (key - 1709)
                    {
                      case 0:
                        resword = &wordlist[427];
                        goto compare;
                      case 1:
                        resword = &wordlist[428];
                        goto compare;
                      case 4:
                        resword = &wordlist[429];
                        goto compare;
                      case 5:
                        resword = &wordlist[430];
                        goto compare;
                      case 7:
                        resword = &wordlist[431];
                        goto compare;
                      case 10:
                        resword = &wordlist[432];
                        goto compare;
                      case 15:
                        resword = &wordlist[433];
                        goto compare;
                      case 16:
                        resword = &wordlist[434];
                        goto compare;
                      case 19:
                        resword = &wordlist[435];
                        goto compare;
                      case 20:
                        resword = &wordlist[436];
                        goto compare;
                      case 29:
                        resword = &wordlist[437];
                        goto compare;
                      case 35:
                        resword = &wordlist[438];
                        goto compare;
                      case 41:
                        resword = &wordlist[439];
                        goto compare;
                      case 47:
                        resword = &wordlist[440];
                        goto compare;
                      case 48:
                        resword = &wordlist[441];
                        goto compare;
                      case 58:
                        resword = &wordlist[442];
                        goto compare;
                      case 59:
                        resword = &wordlist[443];
                        goto compare;
                      case 60:
                        resword = &wordlist[444];
                        goto compare;
                      case 68:
                        resword = &wordlist[445];
                        goto compare;
                      case 69:
                        resword = &wordlist[446];
                        goto compare;
                      case 78:
                        resword = &wordlist[447];
                        goto compare;
                      case 80:
                        resword = &wordlist[448];
                        goto compare;
                      case 82:
                        resword = &wordlist[449];
                        goto compare;
                      case 84:
                        resword = &wordlist[450];
                        goto compare;
                      case 87:
                        resword = &wordlist[451];
                        goto compare;
                      case 91:
                        resword = &wordlist[452];
                        goto compare;
                      case 94:
                        resword = &wordlist[453];
                        goto compare;
                      case 96:
                        resword = &wordlist[454];
                        goto compare;
                      case 101:
                        resword = &wordlist[455];
                        goto compare;
                      case 102:
                        resword = &wordlist[456];
                        goto compare;
                      case 104:
                        resword = &wordlist[457];
                        goto compare;
                      case 105:
                        resword = &wordlist[458];
                        goto compare;
                      case 106:
                        resword = &wordlist[459];
                        goto compare;
                      case 108:
                        resword = &wordlist[460];
                        goto compare;
                      case 109:
                        resword = &wordlist[461];
                        goto compare;
                      case 115:
                        resword = &wordlist[462];
                        goto compare;
                      case 116:
                        resword = &wordlist[463];
                        goto compare;
                      case 118:
                        resword = &wordlist[464];
                        goto compare;
                      case 120:
                        resword = &wordlist[465];
                        goto compare;
                      case 127:
                        resword = &wordlist[466];
                        goto compare;
                      case 130:
                        resword = &wordlist[467];
                        goto compare;
                      case 134:
                        resword = &wordlist[468];
                        goto compare;
                      case 141:
                        resword = &wordlist[469];
                        goto compare;
                      case 144:
                        resword = &wordlist[470];
                        goto compare;
                      case 146:
                        resword = &wordlist[471];
                        goto compare;
                      case 147:
                        resword = &wordlist[472];
                        goto compare;
                      case 148:
                        resword = &wordlist[473];
                        goto compare;
                      case 153:
                        resword = &wordlist[474];
                        goto compare;
                      case 158:
                        resword = &wordlist[475];
                        goto compare;
                      case 159:
                        resword = &wordlist[476];
                        goto compare;
                      case 160:
                        resword = &wordlist[477];
                        goto compare;
                      case 163:
                        resword = &wordlist[478];
                        goto compare;
                      case 165:
                        resword = &wordlist[479];
                        goto compare;
                      case 175:
                        resword = &wordlist[480];
                        goto compare;
                      case 176:
                        resword = &wordlist[481];
                        goto compare;
                      case 179:
                        resword = &wordlist[482];
                        goto compare;
                      case 180:
                        resword = &wordlist[483];
                        goto compare;
                      case 181:
                        resword = &wordlist[484];
                        goto compare;
                      case 183:
                        resword = &wordlist[485];
                        goto compare;
                      case 184:
                        resword = &wordlist[486];
                        goto compare;
                      case 185:
                        resword = &wordlist[487];
                        goto compare;
                      case 186:
                        resword = &wordlist[488];
                        goto compare;
                      case 191:
                        resword = &wordlist[489];
                        goto compare;
                      case 195:
                        resword = &wordlist[490];
                        goto compare;
                      case 197:
                        resword = &wordlist[491];
                        goto compare;
                      case 199:
                        resword = &wordlist[492];
                        goto compare;
                      case 200:
                        resword = &wordlist[493];
                        goto compare;
                      case 205:
                        resword = &wordlist[494];
                        goto compare;
                      case 208:
                        resword = &wordlist[495];
                        goto compare;
                      case 209:
                        resword = &wordlist[496];
                        goto compare;
                      case 211:
                        resword = &wordlist[497];
                        goto compare;
                      case 223:
                        resword = &wordlist[498];
                        goto compare;
                      case 226:
                        resword = &wordlist[499];
                        goto compare;
                      case 228:
                        resword = &wordlist[500];
                        goto compare;
                      case 233:
                        resword = &wordlist[501];
                        goto compare;
                      case 234:
                        resword = &wordlist[502];
                        goto compare;
                      case 240:
                        resword = &wordlist[503];
                        goto compare;
                      case 246:
                        resword = &wordlist[504];
                        goto compare;
                      case 251:
                        resword = &wordlist[505];
                        goto compare;
                      case 256:
                        resword = &wordlist[506];
                        goto compare;
                      case 268:
                        resword = &wordlist[507];
                        goto compare;
                      case 275:
                        resword = &wordlist[508];
                        goto compare;
                      case 276:
                        resword = &wordlist[509];
                        goto compare;
                      case 283:
                        resword = &wordlist[510];
                        goto compare;
                      case 286:
                        resword = &wordlist[511];
                        goto compare;
                      case 287:
                        resword = &wordlist[512];
                        goto compare;
                      case 290:
                        resword = &wordlist[513];
                        goto compare;
                      case 291:
                        resword = &wordlist[514];
                        goto compare;
                      case 299:
                        resword = &wordlist[515];
                        goto compare;
                      case 303:
                        resword = &wordlist[516];
                        goto compare;
                      case 309:
                        resword = &wordlist[517];
                        goto compare;
                      case 311:
                        resword = &wordlist[518];
                        goto compare;
                      case 312:
                        resword = &wordlist[519];
                        goto compare;
                      case 316:
                        resword = &wordlist[520];
                        goto compare;
                      case 318:
                        resword = &wordlist[521];
                        goto compare;
                      case 320:
                        resword = &wordlist[522];
                        goto compare;
                      case 322:
                        resword = &wordlist[523];
                        goto compare;
                      case 324:
                        resword = &wordlist[524];
                        goto compare;
                      case 327:
                        resword = &wordlist[525];
                        goto compare;
                      case 332:
                        resword = &wordlist[526];
                        goto compare;
                      case 334:
                        resword = &wordlist[527];
                        goto compare;
                      case 340:
                        resword = &wordlist[528];
                        goto compare;
                      case 341:
                        resword = &wordlist[529];
                        goto compare;
                      case 342:
                        resword = &wordlist[530];
                        goto compare;
                      case 365:
                        resword = &wordlist[531];
                        goto compare;
                      case 372:
                        resword = &wordlist[532];
                        goto compare;
                      case 380:
                        resword = &wordlist[533];
                        goto compare;
                      case 384:
                        resword = &wordlist[534];
                        goto compare;
                      case 386:
                        resword = &wordlist[535];
                        goto compare;
                      case 387:
                        resword = &wordlist[536];
                        goto compare;
                      case 392:
                        resword = &wordlist[537];
                        goto compare;
                      case 396:
                        resword = &wordlist[538];
                        goto compare;
                      case 402:
                        resword = &wordlist[539];
                        goto compare;
                      case 406:
                        resword = &wordlist[540];
                        goto compare;
                      case 410:
                        resword = &wordlist[541];
                        goto compare;
                      case 415:
                        resword = &wordlist[542];
                        goto compare;
                      case 430:
                        resword = &wordlist[543];
                        goto compare;
                      case 433:
                        resword = &wordlist[544];
                        goto compare;
                      case 435:
                        resword = &wordlist[545];
                        goto compare;
                      case 438:
                        resword = &wordlist[546];
                        goto compare;
                      case 454:
                        resword = &wordlist[547];
                        goto compare;
                      case 457:
                        resword = &wordlist[548];
                        goto compare;
                      case 461:
                        resword = &wordlist[549];
                        goto compare;
                      case 462:
                        resword = &wordlist[550];
                        goto compare;
                      case 473:
                        resword = &wordlist[551];
                        goto compare;
                      case 476:
                        resword = &wordlist[552];
                        goto compare;
                      case 477:
                        resword = &wordlist[553];
                        goto compare;
                      case 478:
                        resword = &wordlist[554];
                        goto compare;
                      case 481:
                        resword = &wordlist[555];
                        goto compare;
                      case 482:
                        resword = &wordlist[556];
                        goto compare;
                      case 487:
                        resword = &wordlist[557];
                        goto compare;
                      case 492:
                        resword = &wordlist[558];
                        goto compare;
                      case 493:
                        resword = &wordlist[559];
                        goto compare;
                      case 505:
                        resword = &wordlist[560];
                        goto compare;
                      case 512:
                        resword = &wordlist[561];
                        goto compare;
                      case 513:
                        resword = &wordlist[562];
                        goto compare;
                      case 514:
                        resword = &wordlist[563];
                        goto compare;
                      case 521:
                        resword = &wordlist[564];
                        goto compare;
                      case 528:
                        resword = &wordlist[565];
                        goto compare;
                      case 530:
                        resword = &wordlist[566];
                        goto compare;
                      case 531:
                        resword = &wordlist[567];
                        goto compare;
                      case 532:
                        resword = &wordlist[568];
                        goto compare;
                      case 534:
                        resword = &wordlist[569];
                        goto compare;
                      case 539:
                        resword = &wordlist[570];
                        goto compare;
                      case 543:
                        resword = &wordlist[571];
                        goto compare;
                      case 553:
                        resword = &wordlist[572];
                        goto compare;
                      case 558:
                        resword = &wordlist[573];
                        goto compare;
                      case 563:
                        resword = &wordlist[574];
                        goto compare;
                      case 571:
                        resword = &wordlist[575];
                        goto compare;
                      case 572:
                        resword = &wordlist[576];
                        goto compare;
                      case 574:
                        resword = &wordlist[577];
                        goto compare;
                      case 577:
                        resword = &wordlist[578];
                        goto compare;
                      case 586:
                        resword = &wordlist[579];
                        goto compare;
                      case 587:
                        resword = &wordlist[580];
                        goto compare;
                      case 595:
                        resword = &wordlist[581];
                        goto compare;
                      case 597:
                        resword = &wordlist[582];
                        goto compare;
                      case 598:
                        resword = &wordlist[583];
                        goto compare;
                      case 599:
                        resword = &wordlist[584];
                        goto compare;
                      case 600:
                        resword = &wordlist[585];
                        goto compare;
                      case 606:
                        resword = &wordlist[586];
                        goto compare;
                      case 608:
                        resword = &wordlist[587];
                        goto compare;
                      case 609:
                        resword = &wordlist[588];
                        goto compare;
                      case 610:
                        resword = &wordlist[589];
                        goto compare;
                      case 612:
                        resword = &wordlist[590];
                        goto compare;
                      case 618:
                        resword = &wordlist[591];
                        goto compare;
                      case 621:
                        resword = &wordlist[592];
                        goto compare;
                      case 636:
                        resword = &wordlist[593];
                        goto compare;
                      case 639:
                        resword = &wordlist[594];
                        goto compare;
                      case 641:
                        resword = &wordlist[595];
                        goto compare;
                      case 642:
                        resword = &wordlist[596];
                        goto compare;
                      case 668:
                        resword = &wordlist[597];
                        goto compare;
                      case 681:
                        resword = &wordlist[598];
                        goto compare;
                      case 686:
                        resword = &wordlist[599];
                        goto compare;
                      case 696:
                        resword = &wordlist[600];
                        goto compare;
                      case 700:
                        resword = &wordlist[601];
                        goto compare;
                      case 702:
                        resword = &wordlist[602];
                        goto compare;
                      case 703:
                        resword = &wordlist[603];
                        goto compare;
                      case 728:
                        resword = &wordlist[604];
                        goto compare;
                      case 739:
                        resword = &wordlist[605];
                        goto compare;
                      case 742:
                        resword = &wordlist[606];
                        goto compare;
                      case 745:
                        resword = &wordlist[607];
                        goto compare;
                      case 747:
                        resword = &wordlist[608];
                        goto compare;
                      case 750:
                        resword = &wordlist[609];
                        goto compare;
                      case 752:
                        resword = &wordlist[610];
                        goto compare;
                      case 755:
                        resword = &wordlist[611];
                        goto compare;
                      case 757:
                        resword = &wordlist[612];
                        goto compare;
                      case 759:
                        resword = &wordlist[613];
                        goto compare;
                      case 763:
                        resword = &wordlist[614];
                        goto compare;
                      case 766:
                        resword = &wordlist[615];
                        goto compare;
                      case 767:
                        resword = &wordlist[616];
                        goto compare;
                      case 772:
                        resword = &wordlist[617];
                        goto compare;
                      case 776:
                        resword = &wordlist[618];
                        goto compare;
                      case 780:
                        resword = &wordlist[619];
                        goto compare;
                      case 783:
                        resword = &wordlist[620];
                        goto compare;
                      case 786:
                        resword = &wordlist[621];
                        goto compare;
                      case 790:
                        resword = &wordlist[622];
                        goto compare;
                      case 794:
                        resword = &wordlist[623];
                        goto compare;
                      case 802:
                        resword = &wordlist[624];
                        goto compare;
                      case 803:
                        resword = &wordlist[625];
                        goto compare;
                      case 804:
                        resword = &wordlist[626];
                        goto compare;
                      case 806:
                        resword = &wordlist[627];
                        goto compare;
                      case 808:
                        resword = &wordlist[628];
                        goto compare;
                      case 812:
                        resword = &wordlist[629];
                        goto compare;
                      case 817:
                        resword = &wordlist[630];
                        goto compare;
                      case 818:
                        resword = &wordlist[631];
                        goto compare;
                      case 822:
                        resword = &wordlist[632];
                        goto compare;
                      case 826:
                        resword = &wordlist[633];
                        goto compare;
                      case 827:
                        resword = &wordlist[634];
                        goto compare;
                      case 835:
                        resword = &wordlist[635];
                        goto compare;
                      case 839:
                        resword = &wordlist[636];
                        goto compare;
                      case 848:
                        resword = &wordlist[637];
                        goto compare;
                      case 853:
                        resword = &wordlist[638];
                        goto compare;
                      case 859:
                        resword = &wordlist[639];
                        goto compare;
                    }
                }
              else
                {
                  switch (key - 2577)
                    {
                      case 0:
                        resword = &wordlist[640];
                        goto compare;
                      case 8:
                        resword = &wordlist[641];
                        goto compare;
                      case 9:
                        resword = &wordlist[642];
                        goto compare;
                      case 30:
                        resword = &wordlist[643];
                        goto compare;
                      case 31:
                        resword = &wordlist[644];
                        goto compare;
                      case 33:
                        resword = &wordlist[645];
                        goto compare;
                      case 41:
                        resword = &wordlist[646];
                        goto compare;
                      case 42:
                        resword = &wordlist[647];
                        goto compare;
                      case 46:
                        resword = &wordlist[648];
                        goto compare;
                      case 68:
                        resword = &wordlist[649];
                        goto compare;
                      case 72:
                        resword = &wordlist[650];
                        goto compare;
                      case 76:
                        resword = &wordlist[651];
                        goto compare;
                      case 82:
                        resword = &wordlist[652];
                        goto compare;
                      case 85:
                        resword = &wordlist[653];
                        goto compare;
                      case 87:
                        resword = &wordlist[654];
                        goto compare;
                      case 92:
                        resword = &wordlist[655];
                        goto compare;
                      case 107:
                        resword = &wordlist[656];
                        goto compare;
                      case 108:
                        resword = &wordlist[657];
                        goto compare;
                      case 109:
                        resword = &wordlist[658];
                        goto compare;
                      case 110:
                        resword = &wordlist[659];
                        goto compare;
                      case 113:
                        resword = &wordlist[660];
                        goto compare;
                      case 120:
                        resword = &wordlist[661];
                        goto compare;
                      case 136:
                        resword = &wordlist[662];
                        goto compare;
                      case 143:
                        resword = &wordlist[663];
                        goto compare;
                      case 144:
                        resword = &wordlist[664];
                        goto compare;
                      case 145:
                        resword = &wordlist[665];
                        goto compare;
                      case 147:
                        resword = &wordlist[666];
                        goto compare;
                      case 148:
                        resword = &wordlist[667];
                        goto compare;
                      case 151:
                        resword = &wordlist[668];
                        goto compare;
                      case 168:
                        resword = &wordlist[669];
                        goto compare;
                      case 170:
                        resword = &wordlist[670];
                        goto compare;
                      case 173:
                        resword = &wordlist[671];
                        goto compare;
                      case 175:
                        resword = &wordlist[672];
                        goto compare;
                      case 177:
                        resword = &wordlist[673];
                        goto compare;
                      case 178:
                        resword = &wordlist[674];
                        goto compare;
                      case 185:
                        resword = &wordlist[675];
                        goto compare;
                      case 209:
                        resword = &wordlist[676];
                        goto compare;
                      case 210:
                        resword = &wordlist[677];
                        goto compare;
                      case 229:
                        resword = &wordlist[678];
                        goto compare;
                      case 234:
                        resword = &wordlist[679];
                        goto compare;
                      case 237:
                        resword = &wordlist[680];
                        goto compare;
                      case 238:
                        resword = &wordlist[681];
                        goto compare;
                      case 245:
                        resword = &wordlist[682];
                        goto compare;
                      case 246:
                        resword = &wordlist[683];
                        goto compare;
                      case 247:
                        resword = &wordlist[684];
                        goto compare;
                      case 253:
                        resword = &wordlist[685];
                        goto compare;
                      case 265:
                        resword = &wordlist[686];
                        goto compare;
                      case 271:
                        resword = &wordlist[687];
                        goto compare;
                      case 273:
                        resword = &wordlist[688];
                        goto compare;
                      case 281:
                        resword = &wordlist[689];
                        goto compare;
                      case 293:
                        resword = &wordlist[690];
                        goto compare;
                      case 298:
                        resword = &wordlist[691];
                        goto compare;
                      case 302:
                        resword = &wordlist[692];
                        goto compare;
                      case 311:
                        resword = &wordlist[693];
                        goto compare;
                      case 315:
                        resword = &wordlist[694];
                        goto compare;
                      case 322:
                        resword = &wordlist[695];
                        goto compare;
                      case 333:
                        resword = &wordlist[696];
                        goto compare;
                      case 340:
                        resword = &wordlist[697];
                        goto compare;
                      case 341:
                        resword = &wordlist[698];
                        goto compare;
                      case 366:
                        resword = &wordlist[699];
                        goto compare;
                      case 373:
                        resword = &wordlist[700];
                        goto compare;
                      case 376:
                        resword = &wordlist[701];
                        goto compare;
                      case 377:
                        resword = &wordlist[702];
                        goto compare;
                      case 384:
                        resword = &wordlist[703];
                        goto compare;
                      case 387:
                        resword = &wordlist[704];
                        goto compare;
                      case 392:
                        resword = &wordlist[705];
                        goto compare;
                      case 394:
                        resword = &wordlist[706];
                        goto compare;
                      case 400:
                        resword = &wordlist[707];
                        goto compare;
                      case 407:
                        resword = &wordlist[708];
                        goto compare;
                      case 409:
                        resword = &wordlist[709];
                        goto compare;
                      case 412:
                        resword = &wordlist[710];
                        goto compare;
                      case 413:
                        resword = &wordlist[711];
                        goto compare;
                      case 425:
                        resword = &wordlist[712];
                        goto compare;
                      case 427:
                        resword = &wordlist[713];
                        goto compare;
                      case 431:
                        resword = &wordlist[714];
                        goto compare;
                      case 442:
                        resword = &wordlist[715];
                        goto compare;
                      case 446:
                        resword = &wordlist[716];
                        goto compare;
                      case 458:
                        resword = &wordlist[717];
                        goto compare;
                      case 460:
                        resword = &wordlist[718];
                        goto compare;
                      case 477:
                        resword = &wordlist[719];
                        goto compare;
                      case 483:
                        resword = &wordlist[720];
                        goto compare;
                      case 486:
                        resword = &wordlist[721];
                        goto compare;
                      case 490:
                        resword = &wordlist[722];
                        goto compare;
                      case 491:
                        resword = &wordlist[723];
                        goto compare;
                      case 504:
                        resword = &wordlist[724];
                        goto compare;
                      case 505:
                        resword = &wordlist[725];
                        goto compare;
                      case 506:
                        resword = &wordlist[726];
                        goto compare;
                      case 515:
                        resword = &wordlist[727];
                        goto compare;
                      case 522:
                        resword = &wordlist[728];
                        goto compare;
                      case 523:
                        resword = &wordlist[729];
                        goto compare;
                      case 525:
                        resword = &wordlist[730];
                        goto compare;
                      case 527:
                        resword = &wordlist[731];
                        goto compare;
                      case 534:
                        resword = &wordlist[732];
                        goto compare;
                      case 535:
                        resword = &wordlist[733];
                        goto compare;
                      case 549:
                        resword = &wordlist[734];
                        goto compare;
                      case 566:
                        resword = &wordlist[735];
                        goto compare;
                      case 570:
                        resword = &wordlist[736];
                        goto compare;
                      case 574:
                        resword = &wordlist[737];
                        goto compare;
                      case 578:
                        resword = &wordlist[738];
                        goto compare;
                      case 594:
                        resword = &wordlist[739];
                        goto compare;
                      case 595:
                        resword = &wordlist[740];
                        goto compare;
                      case 601:
                        resword = &wordlist[741];
                        goto compare;
                      case 612:
                        resword = &wordlist[742];
                        goto compare;
                      case 633:
                        resword = &wordlist[743];
                        goto compare;
                      case 649:
                        resword = &wordlist[744];
                        goto compare;
                      case 657:
                        resword = &wordlist[745];
                        goto compare;
                      case 658:
                        resword = &wordlist[746];
                        goto compare;
                      case 662:
                        resword = &wordlist[747];
                        goto compare;
                      case 663:
                        resword = &wordlist[748];
                        goto compare;
                      case 678:
                        resword = &wordlist[749];
                        goto compare;
                      case 681:
                        resword = &wordlist[750];
                        goto compare;
                      case 683:
                        resword = &wordlist[751];
                        goto compare;
                      case 685:
                        resword = &wordlist[752];
                        goto compare;
                      case 702:
                        resword = &wordlist[753];
                        goto compare;
                      case 728:
                        resword = &wordlist[754];
                        goto compare;
                      case 732:
                        resword = &wordlist[755];
                        goto compare;
                      case 737:
                        resword = &wordlist[756];
                        goto compare;
                      case 739:
                        resword = &wordlist[757];
                        goto compare;
                      case 760:
                        resword = &wordlist[758];
                        goto compare;
                      case 778:
                        resword = &wordlist[759];
                        goto compare;
                      case 793:
                        resword = &wordlist[760];
                        goto compare;
                      case 801:
                        resword = &wordlist[761];
                        goto compare;
                      case 817:
                        resword = &wordlist[762];
                        goto compare;
                      case 824:
                        resword = &wordlist[763];
                        goto compare;
                      case 826:
                        resword = &wordlist[764];
                        goto compare;
                      case 830:
                        resword = &wordlist[765];
                        goto compare;
                      case 834:
                        resword = &wordlist[766];
                        goto compare;
                      case 852:
                        resword = &wordlist[767];
                        goto compare;
                      case 888:
                        resword = &wordlist[768];
                        goto compare;
                      case 892:
                        resword = &wordlist[769];
                        goto compare;
                      case 896:
                        resword = &wordlist[770];
                        goto compare;
                      case 906:
                        resword = &wordlist[771];
                        goto compare;
                      case 919:
                        resword = &wordlist[772];
                        goto compare;
                      case 932:
                        resword = &wordlist[773];
                        goto compare;
                      case 945:
                        resword = &wordlist[774];
                        goto compare;
                      case 956:
                        resword = &wordlist[775];
                        goto compare;
                      case 960:
                        resword = &wordlist[776];
                        goto compare;
                      case 977:
                        resword = &wordlist[777];
                        goto compare;
                      case 984:
                        resword = &wordlist[778];
                        goto compare;
                      case 997:
                        resword = &wordlist[779];
                        goto compare;
                      case 1005:
                        resword = &wordlist[780];
                        goto compare;
                      case 1009:
                        resword = &wordlist[781];
                        goto compare;
                      case 1028:
                        resword = &wordlist[782];
                        goto compare;
                      case 1052:
                        resword = &wordlist[783];
                        goto compare;
                      case 1061:
                        resword = &wordlist[784];
                        goto compare;
                      case 1077:
                        resword = &wordlist[785];
                        goto compare;
                      case 1104:
                        resword = &wordlist[786];
                        goto compare;
                      case 1111:
                        resword = &wordlist[787];
                        goto compare;
                      case 1133:
                        resword = &wordlist[788];
                        goto compare;
                      case 1164:
                        resword = &wordlist[789];
                        goto compare;
                      case 1169:
                        resword = &wordlist[790];
                        goto compare;
                      case 1172:
                        resword = &wordlist[791];
                        goto compare;
                      case 1174:
                        resword = &wordlist[792];
                        goto compare;
                      case 1179:
                        resword = &wordlist[793];
                        goto compare;
                      case 1199:
                        resword = &wordlist[794];
                        goto compare;
                      case 1236:
                        resword = &wordlist[795];
                        goto compare;
                      case 1258:
                        resword = &wordlist[796];
                        goto compare;
                      case 1287:
                        resword = &wordlist[797];
                        goto compare;
                      case 1294:
                        resword = &wordlist[798];
                        goto compare;
                      case 1303:
                        resword = &wordlist[799];
                        goto compare;
                      case 1316:
                        resword = &wordlist[800];
                        goto compare;
                      case 1343:
                        resword = &wordlist[801];
                        goto compare;
                      case 1347:
                        resword = &wordlist[802];
                        goto compare;
                      case 1348:
                        resword = &wordlist[803];
                        goto compare;
                      case 1368:
                        resword = &wordlist[804];
                        goto compare;
                      case 1417:
                        resword = &wordlist[805];
                        goto compare;
                      case 1495:
                        resword = &wordlist[806];
                        goto compare;
                      case 1504:
                        resword = &wordlist[807];
                        goto compare;
                      case 1511:
                        resword = &wordlist[808];
                        goto compare;
                      case 1513:
                        resword = &wordlist[809];
                        goto compare;
                      case 1541:
                        resword = &wordlist[810];
                        goto compare;
                      case 1543:
                        resword = &wordlist[811];
                        goto compare;
                      case 1571:
                        resword = &wordlist[812];
                        goto compare;
                      case 1578:
                        resword = &wordlist[813];
                        goto compare;
                      case 1624:
                        resword = &wordlist[814];
                        goto compare;
                      case 1640:
                        resword = &wordlist[815];
                        goto compare;
                      case 1687:
                        resword = &wordlist[816];
                        goto compare;
                      case 1704:
                        resword = &wordlist[817];
                        goto compare;
                      case 1775:
                        resword = &wordlist[818];
                        goto compare;
                      case 1788:
                        resword = &wordlist[819];
                        goto compare;
                      case 1826:
                        resword = &wordlist[820];
                        goto compare;
                      case 1831:
                        resword = &wordlist[821];
                        goto compare;
                      case 1908:
                        resword = &wordlist[822];
                        goto compare;
                      case 1924:
                        resword = &wordlist[823];
                        goto compare;
                      case 1952:
                        resword = &wordlist[824];
                        goto compare;
                      case 1953:
                        resword = &wordlist[825];
                        goto compare;
                      case 1969:
                        resword = &wordlist[826];
                        goto compare;
                      case 1974:
                        resword = &wordlist[827];
                        goto compare;
                      case 1987:
                        resword = &wordlist[828];
                        goto compare;
                      case 2051:
                        resword = &wordlist[829];
                        goto compare;
                      case 2089:
                        resword = &wordlist[830];
                        goto compare;
                      case 2116:
                        resword = &wordlist[831];
                        goto compare;
                      case 2155:
                        resword = &wordlist[832];
                        goto compare;
                      case 2168:
                        resword = &wordlist[833];
                        goto compare;
                      case 2188:
                        resword = &wordlist[834];
                        goto compare;
                      case 2247:
                        resword = &wordlist[835];
                        goto compare;
                      case 2397:
                        resword = &wordlist[836];
                        goto compare;
                      case 2418:
                        resword = &wordlist[837];
                        goto compare;
                      case 2441:
                        resword = &wordlist[838];
                        goto compare;
                      case 2547:
                        resword = &wordlist[839];
                        goto compare;
                      case 2587:
                        resword = &wordlist[840];
                        goto compare;
                      case 2722:
                        resword = &wordlist[841];
                        goto compare;
                      case 2734:
                        resword = &wordlist[842];
                        goto compare;
                      case 2742:
                        resword = &wordlist[843];
                        goto compare;
                      case 2782:
                        resword = &wordlist[844];
                        goto compare;
                      case 2872:
                        resword = &wordlist[845];
                        goto compare;
                      case 2953:
                        resword = &wordlist[846];
                        goto compare;
                      case 2970:
                        resword = &wordlist[847];
                        goto compare;
                      case 2981:
                        resword = &wordlist[848];
                        goto compare;
                      case 3002:
                        resword = &wordlist[849];
                        goto compare;
                      case 3082:
                        resword = &wordlist[850];
                        goto compare;
                      case 3544:
                        resword = &wordlist[851];
                        goto compare;
                      case 4079:
                        resword = &wordlist[852];
                        goto compare;
                    }
                }
            }
          return 0;
        compare:
          {
            register const char *s = resword->content_type;

            if (*str == *s && !strcmp (str + 1, s + 1))
              return resword;
          }
        }
    }
  return 0;
}
