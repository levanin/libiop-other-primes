
#include "libiop/algebra/large_field.hpp"
namespace libiop {
    namespace sidh_extra {
        void init_params() {
            assert(Fp::modulus_is_valid());
            Fp::Rsquared = libff::bigint<limbs>("11670842892826704282446807045015068798005654319470624232167485311695550996073777036812919341238917739503302545896714443026026871");
            Fp::Rcubed = libff::bigint<limbs>("22698988592753557634872139742080783794550501862711300293198750092029709806281700938341229976599779072917632061262364142479875440");
            Fp::inv = 0xffffffffffffffff;

            Fp::num_bits = 425;
            Fp::euler = libff::bigint<limbs>("35799937003923664382679411637877187918582685903947651139637413090144367049802700282182934577873952801609451699257155672864718848");
            Fp::s = 206;
            Fp::t = libff::bigint<limbs>("696198609130885597695136021593547814689632716312296141651066450089");
            Fp::t_minus_1_over_2 = libff::bigint<limbs>("348099304565442798847568010796773907344816358156148070825533225044");
            Fp::multiplicative_generator = Fp("5");
            Fp::root_of_unity = Fp("45088048282459687398485922424312487749745200896454603205929219968713742705532171884364168308847501716494182411630221149581149930");
            Fp::nqr = Fp("5");
            Fp::nqr_to_t = Fp("45088048282459687398485922424312487749745200896454603205929219968713742705532171884364168308847501716494182411630221149581149930");
        }
    } // namespace sidh_extra

    namespace sidh {
        void init_params() {
            assert(Fp::modulus_is_valid());
            Fp::Rsquared = libff::bigint<limbs>("1631483357165550719083731178910934187933895301703355372962834564740025113443660361043011370056616562298461884328920157440580164400");
            Fp::Rcubed = libff::bigint<limbs>("20837450692795383045350192246862524190972469314298443645963536460875107178404868644875693185558066690330093003204714510105284771771");
            Fp::inv = 1;

            Fp::num_bits = 434;
            Fp::euler = libff::bigint<limbs>("12219711830672610775954572505728746809542890121880798255662903668102610619665988362985108335914309222949359513346442469671157366783");
            Fp::s = 1;
            Fp::t = libff::bigint<limbs>("12219711830672610775954572505728746809542890121880798255662903668102610619665988362985108335914309222949359513346442469671157366783");
            Fp::t_minus_1_over_2 = libff::bigint<limbs>("6109855915336305387977286252864373404771445060940399127831451834051305309832994181492554167957154611474679756673221234835578683391");
            Fp::multiplicative_generator = Fp("5");
            Fp::root_of_unity = Fp("24439423661345221551909145011457493619085780243761596511325807336205221239331976725970216671828618445898719026692884939342314733566");
            Fp::nqr = Fp("5");
            Fp::nqr_to_t = Fp("24439423661345221551909145011457493619085780243761596511325807336205221239331976725970216671828618445898719026692884939342314733566");

            Fp2::euler = bigint<2*limbs>("298642714449360337224575087275245664901894079921715928781788348409667672019529337582670447826847024596057210520043080363986618507866176274886156910695833198302828076578047080033097835019328286911395069210577513782278068741715790835485329586961735821523098271744");
            Fp2::s = 217;
            Fp2::t = bigint<2*limbs>("2835782126831499814412631155210271063040201440463777749910388691755984945436839811256578195741029548769359524354538623156654328717538058679510949167866459989372424135823124274639652795496245331229");
            Fp2::t_minus_1_over_2 = bigint<2*limbs>("1417891063415749907206315577605135531520100720231888874955194345877992472718419905628289097870514774384679762177269311578327164358769029339755474583933229994686212067911562137319826397748122665614");
            Fp2::non_residue = Fp("24439423661345221551909145011457493619085780243761596511325807336205221239331976725970216671828618445898719026692884939342314733566");
            Fp2::nqr = Fp2(Fp("2"),Fp("1"));
            Fp2::nqr_to_t = Fp2(Fp("1265641318332283385680345622106262255016986152776970677011496306402637098857925419143401023483759358905674114613032730660970188006"),Fp("24302508882629253666484860493871125283132764152316444477996794014562063591984863827165794089737987196964883650291668738548192491206"));
	    Fp2::multiplicative_generator = Fp2(Fp("2"),Fp("1"));
            Fp2::Frobenius_coeffs_c1[0] = Fp("1");
            Fp2::Frobenius_coeffs_c1[1] = Fp("24439423661345221551909145011457493619085780243761596511325807336205221239331976725970216671828618445898719026692884939342314733566");
        }
    } // namespace sidh
}
