#include "Hex.h"

Hex::Hex(int step, Hex *n, Hex *ne, Hex *se, Hex *s, Hex *sw, Hex *nw) : m_step(step), m_n(n), m_ne(ne), m_se(se), m_s(s), m_sw(sw), m_nw(nw){}
Hex::Hex(int step) : m_step(step){}
Hex::Hex() : m_step(0){}


/* GETTERS */

const int Hex::getStep(){return this->m_step;}
const Hex* Hex::getN(){return this->m_n;}
const Hex* Hex::getNE(){return this->m_ne;}
const Hex* Hex::getSE(){return this->m_se;}
const Hex* Hex::getS(){return this->m_s;}
const Hex* Hex::getSW(){return this->m_sw;}
const Hex* Hex::getNW(){return this->m_nw;}


/* SETTERS */

void Hex::setStep(int const &step){this->m_step = step;}
void Hex::setN(Hex *n){this->m_n = n;}
void Hex::setNE(Hex *ne){this->m_ne = ne;}
void Hex::setSE(Hex *se){this->m_se = se;}
void Hex::setS(Hex *s){this->m_s = s;}
void Hex::setSW(Hex *sw){this->m_sw = sw;}
void Hex::setNW(Hex *nw){this->m_nw = nw;}
