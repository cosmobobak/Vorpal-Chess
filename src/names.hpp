#pragma once

// this file defines many literal identifiers, including ones for squares, and other useful squaresets on the board.

using Colour = bool;
using U64 = unsigned long long;
using uint = unsigned int;

const char pieces[13] = {'p', 'n', 'b', 'r', 'q', 'k', 'P', 'N', 'B', 'R', 'Q', 'K', '.'};
const std::string pieceNames[13] = {"blackPawn", "blackKnight", "blackBishop", "blackRook", "blackQueen", "blackKing", "whitePawn", "whiteKnight", "whiteBishop", "whiteRook", "whiteQueen", "whiteKing", "emptySquare"};

enum Piece {
    PAWN,
    KNIGHT,
    BISHOP,
    ROOK,
    QUEEN,
    KING,
    NO_PIECE
};

enum Square {
    A1, A2, A3, A4, A5, A6, A7, A8,
    B1, B2, B3, B4, B5, B6, B7, B8,
    C1, C2, C3, C4, C5, C6, C7, C8,
    D1, D2, D3, D4, D5, D6, D7, D8,
    E1, E2, E3, E4, E5, E6, E7, E8,
    F1, F2, F3, F4, F5, F6, F7, F8,
    G1, G2, G3, G4, G5, G6, G7, G8,
    H1, H2, H3, H4, H5, H6, H7, H8,
    SquareFirst = A1,
    SquareLast = H8
};

enum Direction {
    SOUTH_EAST,
    SOUTH,
    SOUTH_WEST,
    EAST,
    NORTH_WEST,
    NORTH,
    NORTH_EAST,
    WEST,
    First = SOUTH_EAST,
    Last = WEST
};

// flags for moves
constexpr uint QUIET_MOVE_FLAG = 0b0000;
constexpr uint SPECIAL0_FLAG = 0b0001;
constexpr uint SPECIAL1_FLAG = 0b0010;
constexpr uint CAPTURE_FLAG = 0b0100;
constexpr uint PROMOTION_FLAG = 0b1000;

constexpr uint PAWN_DOUBLE_PUSH_FLAG = SPECIAL0_FLAG;

constexpr uint KNIGHT_PROMOTION_FLAG = PROMOTION_FLAG;
constexpr uint BISHOP_PROMOTION_FLAG = PROMOTION_FLAG | SPECIAL0_FLAG;
constexpr uint ROOK_PROMOTION_FLAG = PROMOTION_FLAG | SPECIAL1_FLAG;
constexpr uint QUEEN_PROMOTION_FLAG = PROMOTION_FLAG | SPECIAL0_FLAG | SPECIAL1_FLAG;

constexpr uint EP_FLAG = CAPTURE_FLAG | SPECIAL0_FLAG;

constexpr U64 BB_EMPTY = 0ULL;
constexpr U64 BB_ALL = 0xffffffffffffffffULL;

constexpr U64 BB_A1 = 1ULL << 0;
constexpr U64 BB_B1 = 1ULL << 1;
constexpr U64 BB_C1 = 1ULL << 2;
constexpr U64 BB_D1 = 1ULL << 3;
constexpr U64 BB_E1 = 1ULL << 4;
constexpr U64 BB_F1 = 1ULL << 5;
constexpr U64 BB_G1 = 1ULL << 6;
constexpr U64 BB_H1 = 1ULL << 7;
constexpr U64 BB_A2 = 1ULL << 8;
constexpr U64 BB_B2 = 1ULL << 9;
constexpr U64 BB_C2 = 1ULL << 10;
constexpr U64 BB_D2 = 1ULL << 11;
constexpr U64 BB_E2 = 1ULL << 12;
constexpr U64 BB_F2 = 1ULL << 13;
constexpr U64 BB_G2 = 1ULL << 14;
constexpr U64 BB_H2 = 1ULL << 15;
constexpr U64 BB_A3 = 1ULL << 16;
constexpr U64 BB_B3 = 1ULL << 17;
constexpr U64 BB_C3 = 1ULL << 18;
constexpr U64 BB_D3 = 1ULL << 19;
constexpr U64 BB_E3 = 1ULL << 20;
constexpr U64 BB_F3 = 1ULL << 21;
constexpr U64 BB_G3 = 1ULL << 22;
constexpr U64 BB_H3 = 1ULL << 23;
constexpr U64 BB_A4 = 1ULL << 24;
constexpr U64 BB_B4 = 1ULL << 25;
constexpr U64 BB_C4 = 1ULL << 26;
constexpr U64 BB_D4 = 1ULL << 27;
constexpr U64 BB_E4 = 1ULL << 28;
constexpr U64 BB_F4 = 1ULL << 29;
constexpr U64 BB_G4 = 1ULL << 30;
constexpr U64 BB_H4 = 1ULL << 31;
constexpr U64 BB_A5 = 1ULL << 32;
constexpr U64 BB_B5 = 1ULL << 33;
constexpr U64 BB_C5 = 1ULL << 34;
constexpr U64 BB_D5 = 1ULL << 35;
constexpr U64 BB_E5 = 1ULL << 36;
constexpr U64 BB_F5 = 1ULL << 37;
constexpr U64 BB_G5 = 1ULL << 38;
constexpr U64 BB_H5 = 1ULL << 39;
constexpr U64 BB_A6 = 1ULL << 40;
constexpr U64 BB_B6 = 1ULL << 41;
constexpr U64 BB_C6 = 1ULL << 42;
constexpr U64 BB_D6 = 1ULL << 43;
constexpr U64 BB_E6 = 1ULL << 44;
constexpr U64 BB_F6 = 1ULL << 45;
constexpr U64 BB_G6 = 1ULL << 46;
constexpr U64 BB_H6 = 1ULL << 47;
constexpr U64 BB_A7 = 1ULL << 48;
constexpr U64 BB_B7 = 1ULL << 49;
constexpr U64 BB_C7 = 1ULL << 50;
constexpr U64 BB_D7 = 1ULL << 51;
constexpr U64 BB_E7 = 1ULL << 52;
constexpr U64 BB_F7 = 1ULL << 53;
constexpr U64 BB_G7 = 1ULL << 54;
constexpr U64 BB_H7 = 1ULL << 55;
constexpr U64 BB_A8 = 1ULL << 56;
constexpr U64 BB_B8 = 1ULL << 57;
constexpr U64 BB_C8 = 1ULL << 58;
constexpr U64 BB_D8 = 1ULL << 59;
constexpr U64 BB_E8 = 1ULL << 60;
constexpr U64 BB_F8 = 1ULL << 61;
constexpr U64 BB_G8 = 1ULL << 62;
constexpr U64 BB_H8 = 1ULL << 63;

constexpr U64 BB_CORNERS = BB_A1 | BB_H1 | BB_A8 | BB_H8;
constexpr U64 BB_CENTER = BB_D4 | BB_E4 | BB_D5 | BB_E5;

constexpr U64 BB_LIGHT_SQUARES = 0x55aa55aa55aa55aaULL;
constexpr U64 BB_DARK_SQUARES = 0xaa55aa55aa55aa55ULL;

constexpr U64 BB_FILE_A = 0x0101010101010101ULL << 0;
constexpr U64 BB_FILE_B = 0x0101010101010101ULL << 1;
constexpr U64 BB_FILE_C = 0x0101010101010101ULL << 2;
constexpr U64 BB_FILE_D = 0x0101010101010101ULL << 3;
constexpr U64 BB_FILE_E = 0x0101010101010101ULL << 4;
constexpr U64 BB_FILE_F = 0x0101010101010101ULL << 5;
constexpr U64 BB_FILE_G = 0x0101010101010101ULL << 6;
constexpr U64 BB_FILE_H = 0x0101010101010101ULL << 7;

constexpr U64 BB_RANK_1 = 0xffULL << (8 * 0);
constexpr U64 BB_RANK_2 = 0xffULL << (8 * 1);
constexpr U64 BB_RANK_3 = 0xffULL << (8 * 2);
constexpr U64 BB_RANK_4 = 0xffULL << (8 * 3);
constexpr U64 BB_RANK_5 = 0xffULL << (8 * 4);
constexpr U64 BB_RANK_6 = 0xffULL << (8 * 5);
constexpr U64 BB_RANK_7 = 0xffULL << (8 * 6);
constexpr U64 BB_RANK_8 = 0xffULL << (8 * 7);

constexpr U64 BB_BACKRANKS = BB_RANK_1 | BB_RANK_8;
constexpr U64 BB_SECOND_RANKS = BB_RANK_2 | BB_RANK_7;
constexpr U64 BB_MIDDLE_RANKS = BB_RANK_4 | BB_RANK_5;

constexpr Colour WHITE = 0;
constexpr Colour BLACK = 1;

const U64 BB_KNIGHT_ATTACKS[64] = {
    132096ULL, 329728ULL, 659712ULL, 1319424ULL, 2638848ULL, 5277696ULL, 10489856ULL, 4202496ULL, 33816580ULL, 84410376ULL, 168886289ULL, 337772578ULL, 675545156ULL, 1351090312ULL, 2685403152ULL, 1075839008ULL, 8657044482ULL, 21609056261ULL, 43234889994ULL, 86469779988ULL, 172939559976ULL, 345879119952ULL, 687463207072ULL, 275414786112ULL, 2216203387392ULL, 5531918402816ULL, 11068131838464ULL, 22136263676928ULL, 44272527353856ULL, 88545054707712ULL, 175990581010432ULL, 70506185244672ULL, 567348067172352ULL, 1416171111120896ULL, 2833441750646784ULL, 5666883501293568ULL, 11333767002587136ULL, 22667534005174272ULL, 45053588738670592ULL, 18049583422636032ULL, 145241105196122112ULL, 362539804446949376ULL, 725361088165576704ULL, 1450722176331153408ULL, 2901444352662306816ULL, 5802888705324613632ULL, 11533718717099671552ULL, 4620693356194824192ULL, 288234782788157440ULL, 576469569871282176ULL, 1224997833292120064ULL, 2449995666584240128ULL, 4899991333168480256ULL, 9799982666336960512ULL, 1152939783987658752ULL, 2305878468463689728ULL, 1128098930098176ULL, 2257297371824128ULL, 4796069720358912ULL, 9592139440717824ULL, 19184278881435648ULL, 38368557762871296ULL, 4679521487814656ULL, 9077567998918656ULL};

const U64 BB_KING_ATTACKS[64] = {
    770ULL, 1797ULL, 3594ULL, 7188ULL, 14376ULL, 28752ULL, 57504ULL, 49216ULL, 197123ULL, 460039ULL, 920078ULL, 1840156ULL, 3680312ULL, 7360624ULL, 14721248ULL, 12599488ULL, 50463488ULL, 117769984ULL, 235539968ULL, 471079936ULL, 942159872ULL, 1884319744ULL, 3768639488ULL, 3225468928ULL, 12918652928ULL, 30149115904ULL, 60298231808ULL, 120596463616ULL, 241192927232ULL, 482385854464ULL, 964771708928ULL, 825720045568ULL, 3307175149568ULL, 7718173671424ULL, 15436347342848ULL, 30872694685696ULL, 61745389371392ULL, 123490778742784ULL, 246981557485568ULL, 211384331665408ULL, 846636838289408ULL, 1975852459884544ULL, 3951704919769088ULL, 7903409839538176ULL, 15806819679076352ULL, 31613639358152704ULL, 63227278716305408ULL, 54114388906344448ULL, 216739030602088448ULL, 505818229730443264ULL, 1011636459460886528ULL, 2023272918921773056ULL, 4046545837843546112ULL, 8093091675687092224ULL, 16186183351374184448ULL, 13853283560024178688ULL, 144959613005987840ULL, 362258295026614272ULL, 724516590053228544ULL, 1449033180106457088ULL, 2898066360212914176ULL, 5796132720425828352ULL, 11592265440851656704ULL, 4665729213955833856ULL};

const U64 BB_PAWN_ATTACKS[2][64] = {
    {0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 2ULL, 5ULL, 10ULL, 20ULL, 40ULL, 80ULL, 160ULL, 64ULL, 512ULL, 1280ULL, 2560ULL, 5120ULL, 10240ULL, 20480ULL, 40960ULL, 16384ULL, 131072ULL, 327680ULL, 655360ULL, 1310720ULL, 2621440ULL, 5242880ULL, 10485760ULL, 4194304ULL, 33554432ULL, 83886080ULL, 167772160ULL, 335544320ULL, 671088640ULL, 1342177280ULL, 2684354560ULL, 1073741824ULL, 8589934592ULL, 21474836480ULL, 42949672960ULL, 85899345920ULL, 171798691840ULL, 343597383680ULL, 687194767360ULL, 274877906944ULL, 2199023255552ULL, 5497558138880ULL, 10995116277760ULL, 21990232555520ULL, 43980465111040ULL, 87960930222080ULL, 175921860444160ULL, 70368744177664ULL, 562949953421312ULL, 1407374883553280ULL, 2814749767106560ULL, 5629499534213120ULL, 11258999068426240ULL, 22517998136852480ULL, 45035996273704960ULL, 18014398509481984ULL},
    {512ULL, 1280ULL, 2560ULL, 5120ULL, 10240ULL, 20480ULL, 40960ULL, 16384ULL, 131072ULL, 327680ULL, 655360ULL, 1310720ULL, 2621440ULL, 5242880ULL, 10485760ULL, 4194304ULL, 33554432ULL, 83886080ULL, 167772160ULL, 335544320ULL, 671088640ULL, 1342177280ULL, 2684354560ULL, 1073741824ULL, 8589934592ULL, 21474836480ULL, 42949672960ULL, 85899345920ULL, 171798691840ULL, 343597383680ULL, 687194767360ULL, 274877906944ULL, 2199023255552ULL, 5497558138880ULL, 10995116277760ULL, 21990232555520ULL, 43980465111040ULL, 87960930222080ULL, 175921860444160ULL, 70368744177664ULL, 562949953421312ULL, 1407374883553280ULL, 2814749767106560ULL, 5629499534213120ULL, 11258999068426240ULL, 22517998136852480ULL, 45035996273704960ULL, 18014398509481984ULL, 144115188075855872ULL, 360287970189639680ULL, 720575940379279360ULL, 1441151880758558720ULL, 2882303761517117440ULL, 5764607523034234880ULL, 11529215046068469760ULL, 4611686018427387904ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL}};