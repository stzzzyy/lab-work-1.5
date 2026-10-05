#include <iostream>

int main() {

    //Part 1 (Dataset 1)

    double dA = 13.7;
    double dB = 20;
    double dC = 24;
    double dD = 16;

    bool bExpr1 = !(dA >= dB);          //True
    bool bExpr2 = !(dC <= dD);          //True
    bool bExpr3 = (bExpr1 || bExpr2);   //True
    bool bExpr4 = !(bExpr3);            //False

    bool bTotalResult = !(!(dA >= dB) || (!(dC <= dD)));

    std::cout << "\n            PART-1 (Dataset 1)\n\n";

    std::cout << "A = " << dA                         << std::endl;
    std::cout << "B = " << dB                         << std::endl;
    std::cout << "C = " << dC                         << std::endl;
    std::cout << "D = " << dD                         << std::endl;
    std::cout << "\n";
    std::cout << "!(A >= B): "        << bExpr1       << std::endl;
    std::cout << "!(C <= D): "        << bExpr2       << std::endl;
    std::cout << "(Expr1 || Expr2): " << bExpr3       << std::endl;
    std::cout << "Expr4 ! : "         << bExpr4       << std::endl;
    std::cout << "\n";
    std::cout << "Total Results: "    << bTotalResult << std::endl;

    //Part 1 (Dataset 2)

    dA = 81;
    dB = 81;
    dC = 20.3;
    dD = 4;

    bExpr1 = !(dA >= dB);          //False
    bExpr2 = !(dC <= dD);          //True
    bExpr3 = (bExpr1 || bExpr2);   //True
    bExpr4 = !(bExpr3);            //False

    bTotalResult = !(!(dA >= dB) || (!(dC <= dD)));

    std::cout << "\n            PART-1 (Dataset 2)\n\n";

    std::cout << "A = " << dA                         << std::endl;
    std::cout << "B = " << dB                         << std::endl;
    std::cout << "C = " << dC                         << std::endl;
    std::cout << "D = " << dD                         << std::endl;
    std::cout << "\n";
    std::cout << "!(A >= B): "        << bExpr1       << std::endl;
    std::cout << "!(C <= D): "        << bExpr2       << std::endl;
    std::cout << "(Expr1 || Expr2): " << bExpr3       << std::endl;
    std::cout << "Expr4 ! : "         << bExpr4       << std::endl;
    std::cout << "\n";
    std::cout << "Total Results: "    << bTotalResult << std::endl;

    //Part 2

    const int nA2 = 166 + 1;
    int       nB2 = -43 + 1;
    double    dC2 = 7.27;
    double*   pC2 = &dC2;
    int       nE2 = 15802 + nB2;

    int    nNot          = ~nB2;
    int    nXor          = nA2   ^  nNot;
    int    nShift        = nE2   << sizeof(char);
    double dLeft         = nXor  +  *pC2;
    int    nRight        = 1993  -  nShift;
    bool   bTotalResult1 = dLeft != nRight;
    bool   bTotalResult2 = ((nA2 ^ ~nB2) + *pC2) != (1993 - (nE2 << sizeof(char)));

    std::cout << "\n            PART-2\n\n";

    std::cout << "A = "           << nA2                              << std::endl;
    std::cout << "B = "           << nB2                              << std::endl;
    std::cout << "*C (value) = "  << *pC2 << " (addr: " << pC2 << ")" << std::endl;
    std::cout << "E = "           << nE2                              << std::endl;
    std::cout << "\n";
    std::cout << "nNot: "         << nNot                             << std::endl;
    std::cout << "nXor: "         << nXor                             << std::endl;
    std::cout << "nShift: "       << nShift                           << std::endl;
    std::cout << "dLeft: "        << dLeft                            << std::endl;
    std::cout << "dRight: "       << nRight                           << std::endl;
    std::cout << "!= : "          << bTotalResult1                    << std::endl;
    std::cout << "Total Results: "<< bTotalResult2                    << std::endl;
    std::cout << "\n";

    return 0;
}