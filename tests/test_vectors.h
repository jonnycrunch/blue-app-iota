#ifndef TEST_VECTORS_H
#define TEST_VECTORS_H

#include "iota/iota_types.h"
#include "api.h"

#define MAX_ADDRESS_INDEX 4

typedef struct TEST_VECTOR {

    char seed[NUM_HASH_TRYTES + 1];
    char addresses[MAX_SECURITY_LEVEL + 1][MAX_ADDRESS_INDEX + 1]
                  [NUM_HASH_TRYTES + 1];

    TX_INPUT bundle[8];

    char bundle_hash[81];

    char signature[2][4374];

} TEST_VECTOR;

static const TEST_VECTOR PETER_VECTOR = {
    // for purely coincidental reasons this seed was intialy used in the
    // development
    "PETERPETERPETERPETERPETERPETERPETERPETERPETERPETERPETERPETERPETERPETERPETE"
    "RPETERR",
    {{/* ignore index 0 as there is no security level 0 */},
     {"WLRSPFNMBJRWS9DFXCGIROJCZCPJQG9PMOO9CUZNQXTLLQAYXGXT9LECGEQ9MQIWIBGQREFH"
      "ULPOETHNZ",
      "UMDTJXHIFVYVCHXKZNMQWMDHNLVQNMJMRULXUFRLNFVVUMKYZOAETVQOWSDUAKTXVNDSVAJC"
      "ASTRQNV9D",
      "LHWIEGUADQXNMRKQSBDJOAFMBIFKHHZXYEFOU9WFRMBGODSNJAPGFHOUOSGDICSFVA9KOUPP"
      "CMLAHPHAW",
      "GDTLKEWSSLKLQYF9UYSFM9XOVWZYMPMCQOCJMCYJFEESUHBAFPCLNGOLMDHZSXX9WSSFUNDO"
      "RMGADKIEA",
      "DJJTBISBQNSJTYYVRRXFQVTGHTNGOEJSVOXIJKW9NBHOZBZIUASYVI9FA9YYR9KVNQP9OLLU"
      "FGSZAZDDA"},
     {"GUIOZDLUNXIGC9DCV9ZIEDBWRHHPILAYOYRVPTFPRAUZWLWDIXBSPCZGENHWDFHMQGCTOKMX"
      "ITVVDMEFB",
      "MTPYSBLSL9HENRQKP9IPYYZTHEOECLXGYMZIYYUCYAPZYFAECX9ZSFOSFMDNYQAPYHVMTVUX"
      "9HNNUKOB9",
      "RKPTFXPROTSKXBKXLNSLOPOQGWASCLAECQQRWOKCJPNYHIFBUJXE9GHQJPIZHKYXXHC9BZJP"
      "HAROKBGSD",
      "JYJFIYFNTDPTPGSJWAKUFK9OLTISGIKSQPTLIVRVHLHRRCSJCEFQRTGWVTBUQFXHFRZICMFD"
      "TPDKNKDFW",
      "WPF9CTKYVMEWXHXL9NKR9XON9TPBP9UNM9FPWBUISVSHNULLVHSU9PMBNNR9FSZUPCNBXGJW"
      "LGRKKSLHW"},
     {"GL9YTIZWBXCPSCBRAVAUBMNNCHIHZWABOYQ9NBXOMZCNCCZPQWTMRBKKJDZWUIWRUXHZVEXB"
      "CGYBMEMQX",
      "PROKBRGUUTYILP9KB9QVTXDODVRRWHP9IITVHYCYHWRDZFLIPRVARUXWURXDTUWNPWDFGTNS"
      "LXYUTWQTW",
      "AYVJGXBZOGIKYOCSDAMFNBZVSBKEVB9YNYD9EWONVIYPPYKWKWYXPBZSBEIZTRBZ9SDXYRIG"
      "WOERSSRDA",
      "PDBLCSZPTJTAVBBBHOYKVHETZG9RTLUIHAIPWJ9VNYPNXLYNCTCIIECH9OJHXOSGCORBR9OJ"
      "CMCUQWWUX",
      "FDEBHWMDYRZCMJULJRUDTUCNCYMHJBYGUOTSIKQUANCY9YMYKAWKFNIWOUWOKYQLTZOIVXRI"
      "TMJTNRMB9"}},
    {{"ADRADRADRADRADRADRADRADRADRADRADRADRADRADRADRADRADRADRADRADRADRADRADRADR"
      "ADRADRADR",
      0, 10, "XC", 0, 2, 99999},
     {"MTPYSBLSL9HENRQKP9IPYYZTHEOECLXGYMZIYYUCYAPZYFAECX9ZSFOSFMDNYQAPYHVMTVUX"
      "9HNNUKOB9",
      1, -10, "", 1, 2, 99999},
     {"MTPYSBLSL9HENRQKP9IPYYZTHEOECLXGYMZIYYUCYAPZYFAECX9ZSFOSFMDNYQAPYHVMTVUX"
      "9HNNUKOB9",
      1, 0, "", 2, 2, 99999}},
    "9WIOYSDBCGZNERIROVLDAJRJKFBNZHLXNXWGJXCXJJHU9GZWIJCTCRLLVGNLFQOERBZZFLYZYF"
    "QZDTCCD",

    {"WDVPPZTVCSGGLVAORJSZAILMLSINZUJUUPA9WWIC9OFBUJIIIDLSQYWK9KHBRMCTNEYSEHFJE"
     "JMZJBEFXHAUQUSL9UFTAQVPHNZXYIAEY9TFSBWQNCOPJKCYGQBINAU9SEJWGCUFOYMBGEZMGX"
     "WBGRVQQIZRHTLCSXIODLBNWDE9RWNIOYVJBPHRQAMTVZNFABTOXVGHDOCRGFDTCSNJCUTMBMB"
     "TBIBJAPUMTNUOORVOKZHSWKWUIW9PCVAAOANSCNEWFYQOOJMXNJJGJZCQGOYPRHHCZ9HEOTOT"
     "SNUZCGIBVQOBTZRUXUGC9HG9LCNLRP9AQXWEDFQLHHWIEWTG9MECPTCCCJWVSVVWDNMLTBHG9"
     "MCFTUPFHJ9WFBBPJOMJIKBNBFSSLHOD9UMVAO9FWSXPCJHKEDUTGUTXLXLIRZG9IRBEUJTTTW"
     "BTTKBHFPPRJDOJMAAPGLWWEAIBRXWHITLUAPVHQZW9WNGFRWXBIFEHJJERNIS9QXMQ9UXQECJ"
     "MHAKMPDSGLLINDDIQAOQRJWMYBSNDVOTDMVFSIOADXPWYGNRLCUVUTWDWBTLMVJHSK9VFUQLW"
     "WXQJNSVSEPDWNOHNFFUKUFQBGDJLPDQVYTKDPUBMVGWGVPU99LUUYFQORROPTJX9CBAOM9YMU"
     "BPEGANCFSEUHEIIVYWYMYIIDCNGRZLPSOXATBPRIW9JAIMYYEIOUVKXILAUNGAKTWRWCS9MYR"
     "COBIWTNWPOWDKNVLQUEWHCPMQQVBZJWQKLHBYQUNDCMFPWPB9CDDKUIIDSFDMYMUVHYZZNGOT"
     "UUAFKMBVW9HMWTSLY9MVRGWAITHZQTE9KZKAWGBOUGDGNZBXHFXY9HQXIQGXFYAUBZVBUIBIZ"
     "LXLWGLXGPWUR9JCMTZYA9NLDBXSCKYEGJVGJK9KQE9AVFSBZGMOWPWTWHNYSIXRGUTWUYSGCF"
     "BTSTNVPEJOAXBFUENOTGNHCKGIKROSXJWIJN9OXLQWZESQXAZDZRIQUGYYASWHEEW9VJADFI9"
     "KMMXO9SWRETBIPFGHRUZNVYXMCBDFJWVIQKBVZONICDROJBGJE9LC9YBOYXQRQPEBVVIFUHXG"
     "XBIGGQPQCKBNUSKHRRDTZETTWOVZXGDIXKOQGOYTYHBG9JHTJ9EEEUOQOEFIAWZKJRPZBYSUB"
     "EXMFXGSWUEIBDJTFRZZZWGDFWCZFMBDBMHNWYEDPNWWBCNWPANETVLYFXHLVEW9VEXAMJNG9M"
     "QRGNC9ZVUBYWSIPXVTKWPUDMDRFCHAQBKDEUC9JRGCKTZSXIUFAXDADYWQEPIVFCCENUGUPTP"
     "CLBPMHOE9OF99QQ9AKOWX9YPEPIDFMQFJYHGUDZANRYLXDBSNSGCSQVJAFKSERBNDQGDSQVPM"
     "YCNMXFGJGEOCTIGJYSAJAGLQIIRDVVLAEVLZTTIHGPNJFDHGEWCSDWGSRDXS9PHPGYUKTCWGD"
     "RSVHBQZGLMNOXASBYORWIGJFUX9TPAQSSMBYFX9VJYRGY9CIAENTRJCMJWA9DIFBEDAGMXCEF"
     "SGB9MASXRSQBDIYRCCNKFGNIPFPDSEXHLSPERPANNZSCUQOWBEMRJI9NWPVWZHAYFBWAZUPNS"
     "KVYGLCMKSFSDGCW9LXXUCYIA9QVZDBGKHXFEZVPOAVAVNXEOZDRR9C9O9QSZHGJLHEGJQNVZN"
     "LYOMOPQGXXT9QBDF9P9KCBTN9XFXAHWAWOBP9SLTHYOSFTOZYKKWCOHBFAMOS9YARDEITFFPQ"
     "QMIWZUVUTAFCDBDDWBJAMBK9LOHNTWQLNUAADTTSDJHLQBPFTAUTEPJPAQIHNKIQPJCXKIPOE"
     "R9SQCEU9VMEQHAMNZDKWHTMHWTTPXPRSNUF9CCHRE9LICBJLDJESIJFV9RPOLMELJYTPLL9BL"
     "MLESQJRAJBTUJXCVHPPHVRITLNX9ZZRMTHM9TUGKSUGXO9PTRUOSNTPRFJIDNXMSMBAFJYTPB"
     "HHDVWMQLBTJJWRJDWWJHMKUNRGWHBGPLKCDZFUSOAIO9FZYWPDEDJXWZKJPERX9TEI9PEENFN"
     "QJYWMTTIZSYFTJZLCMZMDIYTEBCJOFJAKUZDKQZMQPZK9BL9RMXVOYCFYHDNFCHNGAYJDMKKQ"
     "OPIRWEFJXSIELXJGECDCWDHECXZ9HWVFBKKAFHJUPUKF9MEZ9EGZHMKITJDQQOZBKJMEUDCCN"
     "ETJ9OGGCTRTCJJHCDWLGDNHVRLR9IFMNZS9BHIZPRRCZIFWKCGDMTMFNPYYWBEYPVHQUCOSMB"
     "GJCDBGLZ9QYUPKRIDNBPKNUTQKGHVXJHLGI9YEMOOPNPZY9LEWZSXHFRUBVOJBRUE9JFRWNKA"
     "DETPHMHAWGUT9KXHUQIQN9TPFYJFUXWUEEHZELVRRHMQYAPO9LZBSEPXJMOQYZC9TSZULXTKN"
     "9MGAINY9HWSUENNWDONMDGCKNRKNRNQEMLLSAWK9CGYELPNKOGCWFJAEQ9STPGJF9FADUDYRS"
     "MKTTMUVTXLAQDNAQZWNFRUFZXNM9WVWE9LDF9LYDQWCMCNEEUTTBWXKQHTMIQKMSDHAYERUCN"
     "RZCPNBZMGTETYYBYLPZD9ZQEGIXZWCWLTZVZDAFPUTULGGLLMOORNPPCWTVWOY9MZRXRUKBVZ"
     "MJREQOJTKNBTEAJWCNPTGPGCWWPKMJFVGLSOEMEUJWWYAQCPPLRUCUMJWPQWHWVKY9TXHJ9HL"
     "JPHMNHNZONQFYAJMMKCVDFEWZKLLCCFHLJBYBWDONCLOH9POVSVAWRPGEWJOMTZFOWMRZHOZG"
     "GUKABHOVZVLWTZRTTIUCFQDYTHSEVDILVVOQBWQQZZYEYGBDYR9TIZZFE9IRDEJNYRUBAPXTF"
     "DHEVNZYVLVZ9TEUXMWNBYYOOFUCEI9AUFVBYLOWJDJWBOGDPTHUEIKSW9VTCCCYHANAGCBKXU"
     "CCRCPGDVNPMWVC9UJQU9OFHWSVQQWBSLYOMTIPBIQAJBJQTCEPACBQE9DFSFCJA9XXKLEASKC"
     "NNEWCHIKDOOWPFCMGHFJQWVZLLEFOEDGKMZQP9VL9VTSJDLGHPUTSKBOUIPIZVP9HICMOHLAR"
     "YLRWRNYUKFJWDQKRTQQIPUOKBA9MRCIXUORUWEYSUWUZHGVYAJIZUNCJOESTVWEVLDXCWZNNQ"
     "QITNDHZUQBNFEHDDUHRWXDENYAAWYJMXNFRJRPPGBKTHDHXYXKLFYP9RTYKKDZMRZQWZLZ9WQ"
     "CILCSUNFBU9VNPAKFGJ9OPDHQSYCJAXTTJPLWL9GB9ZROLPTMAQZOLOOLVPISSOQCDAGSGYRT"
     "UYNJORAJ9AYM9MDXJPSTLXEKKKPFRXRUJHKBTUPHWHKMDUTZMDQDZILMAHVYJLBAXWDAMZBBT"
     "9VDFAYBKRVQZTMLSHCAXCLJQGDZE9QW9LQZGXGBJWLWBHWEFZJYYKSE9JJPYLJMESAQGWHCJA"
     "NOEV9XVFSIISZRHHUVNJDDQN99QURZ9ZTJL9DNOBZVOYWLAPMNPWYETTXN9Q9ULKQVRYZSGXY"
     "NATKUIEMQINXPXZD9TCPRYAM9F99AFZVLIIE9Y9VQFGMROAMIPIDWIFQXTQDULMEJHRBXSLDP"
     "TZLXDEKKJDFZBTEGVSZMCNHUETBOMUUIKZTHAOL9JEI9RIKNCOFLMRUXTWQU9XOGNSVAAFZYS"
     "ERUFALFINZIVBCGLYXPNCMUZEQPAL9WSHDFDRKDJISVMFSYQWLWLASOVTGYPRUZLNDCYUAYJH"
     "AFBOFQFQDNYTFLZDHD9TFKKLITUYBOKZMATPB9DIRLUYKIDXUCFRNDXK9MILALRLRDIHG9EIQ"
     "QBOFIVDEGFZKKKIDVTZCYARVPHZBPJF99RHZLUORDTGXEWIDNSOKVSAHWOCGVJH9PZYMRYIAE"
     "QCMJZYFUO9BDUPOQJUYFSQ9JXRNWOFGOLPBYHIDHYQRZDMQCYCJMKHMRCEQUVKHYFRQZADRWX"
     "PEXDKGVITABYGQQOMJWN9ECKVA9VEWHTGLKCMHHEYDYXOHXHQZXLSZUFRBVTMAVRPSTUXAXQS"
     "U9LZKAOYCFVOI9N9LKDIDJOGKFNNODVEAWYPQTWPTSQZNBUJSZERWGGZDZCBFLZWVFIGBVKSV"
     "WXSBGMTURZRGFYJFLWZSJZIVNBZEYHSDRBKNYOXPMHDCSGSRCHA9DLGMKWQC9ZMVZMM9RCJZP"
     "XMLCSTELCM9MYALANFTRLZZXKH9UPXDJVCJOQVKOTYZGKUPTRFBHGZVSLJAV9JAHFLIAHXLAZ"
     "H9DDPBLWRUAXXFJKRVSQSVABUJPAIRWBPOD9NNFJACUCWRYVKKUTCVMHGYWNYMSRAFXCEIITQ"
     "JEIEGUEHHUYXKWQXFWQRVYG9UMRKJUEHODMKMDLBMMPTW9ZWGTJFGJNFUSBLTIQON9Y",
     ""}};

static const TEST_VECTOR OVERFLOW_VECTOR = {
    "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM"
    "MMMMMMM",
    {{/* ignore index 0 as there is no security level 0 */},
     {"SDJGHWUKBMMDMLBVPARNPJZSXJLE9IVWLMXNLGBAGW9BVUWCLBZFIUWCHMUKAO9NOEBXTWLP"
      "TGNOFLUUD",
      "EZCPFKWUFUPNNTLPOSQUF9ARBWOXTACYDEWGOHGNZWPMOBMRHYTXOYBISQASOUCUIBHEJAKV"
      "BVEVIPFNY",
      "RGXSOSXNPSECZJZBOWSPQV9FEHAECO9PLVR9DRFCOZOUYT9OZMZOGIPIIIXARBWOHAYUDFFU"
      "FTROAUBNB",
      "DR9TTRXS9CQVBSEATLURTEVNCZWPNFTRIHYZENBXXTHZLIOGPVMFFHCGK9POSHKE9BFAYQQN"
      "9NMKA99GC",
      "WVCBEC9DLNWIJKIQIXWHHKYUMXOT9J9WAMZTIVLDOSKHGLVGYTAEOVOQQNSV9DLVU9ENFXGC"
      "PUGAHLIJY"},
     {"VSSIPYVZYLPSMIB9HFPIM9ONASKJHETXRMJNIBRBZNJRWIMD9WVITVUC9FZHIZHGLBKAY9HA"
      "PGIZVQOQA",
      "MDWYEJJHJDIUVPKDY9EACGDJUOP9TLYDWETUBOYCBLYXYYYJYUXYUTCTPTDGJYFKMQMCNZDQ"
      "PTBE9AFIW",
      "BRCRVAASDLAZPTSHELUSJGNEWQSCLY9WHEARHXSJBQFNSMTES9OQULMXNNLWSZDE9K9HOWQH"
      "PMTVNHEMD",
      "BVTCAAJ9KVBYCDXUATNBFOIOVALZZJCVEMWSWHHKBLCQ9BXRFZPN9ER9WXUROWIJVRWREWJN"
      "AWTOGH9OW",
      "BPBX9PPTMYXBYSELTKUJVROKMFLCSQMCGKMMYMXSFPQNDWRQ9RWJBEEERFAO9ZHWGTKTWEBM"
      "CDBRUUAHC"},
     {"RBUXEKPRWLYEPINEWH9AIL9DUYRWBZHFQDNPQLXIUVTEYWTSGDIZOTWALPNIFIFJCWQDPFWP"
      "NTOFRQZHC",
      "UDVBLCHJDIPXJZKKCNVLRLMCPHXKGZQGURCE9M9RQLWPBTSFSVFBJWSMNEUEMLHGOWS9ZXFA"
      "WFDXWEEBW",
      "OHHNETEIFRKUUQFLKXBPQLFCFWYQ9GLJWLFWCZNWDD9WNTHNWRVUSPNGPHWVAZLWUBCZXMSP"
      "B99DEYPSD",
      "NIKLXGWY9VY9MLVZOTENPTQFBUWOUZYTPUUBQRHQ9HGFJNUVRANV9CCOTORJPTAKP9UBQDGE"
      "NB9BWIMXW",
      "MZDWEIFYLRYNBNBZFZIIGXKIUDVDBSCPYXKJKIVKK9AUWSLZLTHGIRBFKUJQMGGTWGNPBYLN"
      "B9CUSLDKW"}},
    {},
    "",
    {}};


#endif // TEST_VECTORS_H
