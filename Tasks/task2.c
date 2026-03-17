unsigned char ToggleBit(unsigned char num, unsigned char bit)
{
    num ^= (1 << bit);
    return num;
}
