struct torgle_register
{
    unsigned int SN : 4; // 4 bits for SN value
    unsigned int : 4; // 4 bits unused
    bool goodIn : 1; // valid inout (1 bit)
    bool goodTorgle : 1; // successful torgling
};