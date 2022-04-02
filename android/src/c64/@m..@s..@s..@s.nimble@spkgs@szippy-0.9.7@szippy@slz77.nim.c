/* Generated by Nim Compiler v1.6.4 */
#define NIM_INTBITS 64
#define NIM_EmulateOverflowChecks

#include "nimbase.h"
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct tySequence__uFLLGQVsiasALrzzzvqnZw tySequence__uFLLGQVsiasALrzzzvqnZw;
typedef struct tySequence__uFLLGQVsiasALrzzzvqnZw_Content tySequence__uFLLGQVsiasALrzzzvqnZw_Content;
typedef struct tyObject_CompressionConfig__AhbBdSWZSuMmypMu0nNhnA tyObject_CompressionConfig__AhbBdSWZSuMmypMu0nNhnA;
typedef struct tyObject_BlockMetadata__TLymcdLvh6woWWQYHaKqoQ tyObject_BlockMetadata__TLymcdLvh6woWWQYHaKqoQ;
struct tySequence__uFLLGQVsiasALrzzzvqnZw {
  NI len; tySequence__uFLLGQVsiasALrzzzvqnZw_Content* p;
};
typedef NU16 tyArray__FuLcipDkC4L7M5U89bz9cYKg[286];
typedef NU16 tyArray__w4pf2aeJoenCwuaCVUN3ig[30];
struct tyObject_BlockMetadata__TLymcdLvh6woWWQYHaKqoQ {
tyArray__FuLcipDkC4L7M5U89bz9cYKg litLenFreq;
tyArray__w4pf2aeJoenCwuaCVUN3ig distanceFreq;
NI numLiterals;
};
struct tyObject_CompressionConfig__AhbBdSWZSuMmypMu0nNhnA {
NI good;
NI lazy;
NI nice;
NI chain;
};
typedef NU8 tyArray__Cxe6prgo05ftSyAqRHalCw[256];


#ifndef tySequence__uFLLGQVsiasALrzzzvqnZw_Content_PP
#define tySequence__uFLLGQVsiasALrzzzvqnZw_Content_PP
struct tySequence__uFLLGQVsiasALrzzzvqnZw_Content { NI cap; NU16 data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(void, setLen__OOZOOZOOZOnimbleZpkgsZstb95image4550O53Zstb95imageZread_185)(tySequence__uFLLGQVsiasALrzzzvqnZw* s, NI newlen);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___OOZOOZOOZOnimbleZpkgsZstb95image4550O53Zstb95imageZread_264)(tySequence__uFLLGQVsiasALrzzzvqnZw* dest);
N_LIB_PRIVATE N_NIMCALL(tySequence__uFLLGQVsiasALrzzzvqnZw, newSeq__OOZfauZsrcZfauZbatch_560)(NI len);
static N_INLINE(NU32, read32__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZinternal_390)(NU8* src, NI ip);
static N_INLINE(NI, determineMatchLength__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZinternal_446)(NU8* src, NI s1, NI s2, NI limit);
static N_INLINE(NU64, read64__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZinternal_394)(NU8* src, NI ip);
static N_INLINE(NI, countTrailingZeroBits__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZinternal_455)(NU64 x);
N_CDECL(int, __builtin_ctzll)(unsigned long long x);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(NU16, distanceCodeIndex__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZinternal_415)(NU16 value);
extern NIM_CONST tyArray__Cxe6prgo05ftSyAqRHalCw baseLengthIndices__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZinternal_27;
extern NIM_BOOL nimInErrorMode__system_3443;
static N_INLINE(NU32, read32__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZinternal_390)(NU8* src, NI ip) {
	NU32 result;
	result = (NU32)0;
	result = (*((NU32*) ((&src[ip]))));
	return result;
}
static N_INLINE(NU64, read64__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZinternal_394)(NU8* src, NI ip) {
	NU64 result;
	result = (NU64)0;
	result = (*((NU64*) ((&src[ip]))));
	return result;
}
static N_INLINE(NI, countTrailingZeroBits__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZinternal_455)(NU64 x) {
	NI result;
	int T1_;
	result = (NI)0;
	T1_ = (int)0;
	T1_ = __builtin_ctzll(x);
	result = ((NI) (T1_));
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3443);
	return result;
}
static N_INLINE(NI, determineMatchLength__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZinternal_446)(NU8* src, NI s1, NI s2, NI limit) {
	NI result;
	NI s1_2;
	NI s2_2;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	s1_2 = s1;
	s2_2 = s2;
	{
		while (1) {
			NU64 x;
			NU64 T3_;
			NU64 T4_;
			if (!(s2_2 <= (NI)(limit - ((NI) 8)))) goto LA2;
			T3_ = (NU64)0;
			T3_ = read64__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZinternal_394(src, s2_2);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			T4_ = (NU64)0;
			T4_ = read64__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZinternal_394(src, (NI)(s1_2 + result));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			x = (NU64)(T3_ ^ T4_);
			{
				NI matchingBits;
				if (!!((x == 0ULL))) goto LA7_;
				matchingBits = countTrailingZeroBits__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZinternal_455(x);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				result += (NI)((NI64)(matchingBits) >> (NU64)(((NI) 3)));
				goto BeforeRet_;
			}
			LA7_: ;
			s2_2 += ((NI) 8);
			result += ((NI) 8);
		} LA2: ;
	}
	{
		while (1) {
			if (!(s2_2 < limit)) goto LA10;
			{
				if (!!((src[s2_2] == src[(NI)(s1_2 + result)]))) goto LA13_;
				goto BeforeRet_;
			}
			LA13_: ;
			s2_2 += ((NI) 1);
			result += ((NI) 1);
		} LA10: ;
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, encodeLz77__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZlz5555_8)(tySequence__uFLLGQVsiasALrzzzvqnZw* encoding, NI* ep, tyObject_CompressionConfig__AhbBdSWZSuMmypMu0nNhnA* config, tyObject_BlockMetadata__TLymcdLvh6woWWQYHaKqoQ* metadata, NU8* src, NI blockStart, NI blockLen) {
	tySequence__uFLLGQVsiasALrzzzvqnZw head;
	tySequence__uFLLGQVsiasALrzzzvqnZw chain;
	NI pos;
	NI literalLen;
	NU32 hash;
	NU16 windowPos;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	head.len = 0; head.p = NIM_NIL;
	chain.len = 0; chain.p = NIM_NIL;
	(*metadata).litLenFreq[(((NI) 256))- 0] = ((NU16) 1);
	{
		NI remainingX60gensym1_;
		if (!(blockLen <= ((NI) 4))) goto LA4_;
		{
			NI iX60gensym1_;
			NI i;
			iX60gensym1_ = (NI)0;
			i = ((NI) 0);
			{
				while (1) {
					if (!(i < blockLen)) goto LA8;
					iX60gensym1_ = i;
					(*metadata).litLenFreq[(src[(NI)(blockStart + iX60gensym1_)])- 0] += ((NI) 1);
					i += ((NI) 1);
				} LA8: ;
			}
		}
		(*metadata).numLiterals += blockLen;
		remainingX60gensym1_ = blockLen;
		{
			while (1) {
				NI addedX60gensym1_;
				if (!(((NI) 0) < remainingX60gensym1_)) goto LA10;
				{
					NI T13_;
					NI T16_;
					T13_ = (*encoding).len;
					if (!(T13_ < (NI)((*ep) + ((NI) 1)))) goto LA14_;
					T16_ = (*encoding).len;
					setLen__OOZOOZOOZOnimbleZpkgsZstb95image4550O53Zstb95imageZread_185((&(*encoding)), ((NI) ((((NI)(T16_ * ((NI) 2)) >= ((NI) 2)) ? (NI)(T16_ * ((NI) 2)) : ((NI) 2)))));
				}
				LA14_: ;
				addedX60gensym1_ = ((remainingX60gensym1_ <= ((NI) 32767)) ? remainingX60gensym1_ : ((NI) 32767));
				(*encoding).p->data[(*ep)] = ((NU16) (addedX60gensym1_));
				(*ep) += ((NI) 1);
				remainingX60gensym1_ -= addedX60gensym1_;
			} LA10: ;
		}
		eqdestroy___OOZOOZOOZOnimbleZpkgsZstb95image4550O53Zstb95imageZread_264((&chain));
		eqdestroy___OOZOOZOOZOnimbleZpkgsZstb95image4550O53Zstb95imageZread_264((&head));
		goto BeforeRet_;
	}
	LA4_: ;
	pos = blockStart;
	literalLen = (NI)0;
	hash = (NU32)0;
	windowPos = (NU16)0;
	head = newSeq__OOZfauZsrcZfauZbatch_560(((NI) 131072));
	chain = newSeq__OOZfauZsrcZfauZbatch_560(((NI) 32768));
	{
		while (1) {
			NU32 T34_;
			NU16 hashPos;
			NI limit;
			NI tries;
			NI prevOffset;
			NI longestMatchOffset;
			NI longestMatchLen;
			if (!(pos < (NI)(blockStart + blockLen))) goto LA18;
			{
				NI remainingX60gensym5_;
				if (!((NI)(blockStart + blockLen) <= (NI)(pos + ((NI) 4)))) goto LA21_;
				{
					NI iX60gensym5_;
					NI colontmp_;
					NI i_2;
					iX60gensym5_ = (NI)0;
					colontmp_ = (NI)0;
					colontmp_ = (NI)((NI)((NI)(blockStart + blockLen) - pos) + literalLen);
					i_2 = ((NI) 0);
					{
						while (1) {
							if (!(i_2 < colontmp_)) goto LA25;
							iX60gensym5_ = i_2;
							(*metadata).litLenFreq[(src[(NI)((NI)(pos - literalLen) + iX60gensym5_)])- 0] += ((NI) 1);
							i_2 += ((NI) 1);
						} LA25: ;
					}
				}
				(*metadata).numLiterals += (NI)((NI)((NI)(blockStart + blockLen) - pos) + literalLen);
				remainingX60gensym5_ = (NI)((NI)((NI)(blockStart + blockLen) - pos) + literalLen);
				{
					while (1) {
						NI addedX60gensym5_;
						if (!(((NI) 0) < remainingX60gensym5_)) goto LA27;
						{
							NI T30_;
							NI T33_;
							T30_ = (*encoding).len;
							if (!(T30_ < (NI)((*ep) + ((NI) 1)))) goto LA31_;
							T33_ = (*encoding).len;
							setLen__OOZOOZOOZOnimbleZpkgsZstb95image4550O53Zstb95imageZread_185((&(*encoding)), ((NI) ((((NI)(T33_ * ((NI) 2)) >= ((NI) 2)) ? (NI)(T33_ * ((NI) 2)) : ((NI) 2)))));
						}
						LA31_: ;
						addedX60gensym5_ = ((remainingX60gensym5_ <= ((NI) 32767)) ? remainingX60gensym5_ : ((NI) 32767));
						(*encoding).p->data[(*ep)] = ((NU16) (addedX60gensym5_));
						(*ep) += ((NI) 1);
						remainingX60gensym5_ -= addedX60gensym5_;
					} LA27: ;
				}
				goto LA17;
			}
			LA21_: ;
			windowPos = ((NU16) ((NI)((NI)(pos - blockStart) & ((NI) 32767))));
			T34_ = (NU32)0;
			T34_ = read32__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZinternal_390(src, pos);
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			hash = (NU32)((NU32)((NU32)((NU32)(T34_) * (NU32)(((NU32) 506832829)))) >> (NU64)(((NI) 15)));
			chain.p->data[windowPos] = head.p->data[hash];
			head.p->data[hash] = windowPos;
			hashPos = chain.p->data[windowPos];
			limit = (((NI)(blockStart + blockLen) <= (NI)(pos + ((NI) 258))) ? (NI)(blockStart + blockLen) : (NI)(pos + ((NI) 258)));
			tries = (*config).chain;
			prevOffset = (NI)0;
			longestMatchOffset = (NI)0;
			longestMatchLen = (NI)0;
			{
				while (1) {
					NIM_BOOL T37_;
					NI offset;
					NI matchLen;
					T37_ = (NIM_BOOL)0;
					T37_ = (((NI) 0) < tries);
					if (!(T37_)) goto LA38_;
					T37_ = !((hashPos == ((NU16) 0)));
					LA38_: ;
					if (!T37_) goto LA36;
					tries -= ((NI) 1);
					offset = (NI)0;
					{
						if (!((NU16)(hashPos) <= (NU16)(windowPos))) goto LA41_;
						offset = ((NI) ((NU16)((NU16)(windowPos) - (NU16)(hashPos))));
					}
					goto LA39_;
					LA41_: ;
					{
						offset = ((NI) ((NU16)((NU16)((NU16)((NU16)(windowPos) - (NU16)(hashPos))) + (NU16)(((NU16) 32768)))));
					}
					LA39_: ;
					{
						NIM_BOOL T46_;
						T46_ = (NIM_BOOL)0;
						T46_ = (offset <= ((NI) 0));
						if (T46_) goto LA47_;
						T46_ = (offset < prevOffset);
						LA47_: ;
						if (!T46_) goto LA48_;
						goto LA35;
					}
					LA48_: ;
					prevOffset = offset;
					matchLen = determineMatchLength__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZinternal_446(src, (NI)(pos - offset), pos, limit);
					if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
					{
						if (!(longestMatchLen < matchLen)) goto LA52_;
						{
							if (!((*config).good <= matchLen)) goto LA56_;
							tries = (NI)((NI64)(tries) >> (NU64)(((NI) 2)));
						}
						LA56_: ;
						longestMatchLen = matchLen;
						longestMatchOffset = offset;
					}
					LA52_: ;
					{
						NIM_BOOL T60_;
						T60_ = (NIM_BOOL)0;
						T60_ = ((*config).nice <= longestMatchLen);
						if (T60_) goto LA61_;
						T60_ = (hashPos == chain.p->data[hashPos]);
						LA61_: ;
						if (!T60_) goto LA62_;
						goto LA35;
					}
					LA62_: ;
					hashPos = chain.p->data[hashPos];
				} LA36: ;
			} LA35: ;
			{
				NU16 lengthIndexX60gensym20_;
				NU16 distIndexX60gensym20_;
				if (!(((NI) 4) < longestMatchLen)) goto LA66_;
				{
					NI remainingX60gensym17_;
					if (!(((NI) 0) < literalLen)) goto LA70_;
					{
						NI iX60gensym17_;
						NI i_3;
						iX60gensym17_ = (NI)0;
						i_3 = ((NI) 0);
						{
							while (1) {
								if (!(i_3 < literalLen)) goto LA74;
								iX60gensym17_ = i_3;
								(*metadata).litLenFreq[(src[(NI)((NI)(pos - literalLen) + iX60gensym17_)])- 0] += ((NI) 1);
								i_3 += ((NI) 1);
							} LA74: ;
						}
					}
					(*metadata).numLiterals += literalLen;
					remainingX60gensym17_ = literalLen;
					{
						while (1) {
							NI addedX60gensym17_;
							if (!(((NI) 0) < remainingX60gensym17_)) goto LA76;
							{
								NI T79_;
								NI T82_;
								T79_ = (*encoding).len;
								if (!(T79_ < (NI)((*ep) + ((NI) 1)))) goto LA80_;
								T82_ = (*encoding).len;
								setLen__OOZOOZOOZOnimbleZpkgsZstb95image4550O53Zstb95imageZread_185((&(*encoding)), ((NI) ((((NI)(T82_ * ((NI) 2)) >= ((NI) 2)) ? (NI)(T82_ * ((NI) 2)) : ((NI) 2)))));
							}
							LA80_: ;
							addedX60gensym17_ = ((remainingX60gensym17_ <= ((NI) 32767)) ? remainingX60gensym17_ : ((NI) 32767));
							(*encoding).p->data[(*ep)] = ((NU16) (addedX60gensym17_));
							(*ep) += ((NI) 1);
							remainingX60gensym17_ -= addedX60gensym17_;
						} LA76: ;
					}
					literalLen = ((NI) 0);
				}
				LA70_: ;
				{
					NI T85_;
					NI T88_;
					T85_ = (*encoding).len;
					if (!(T85_ < (NI)((*ep) + ((NI) 3)))) goto LA86_;
					T88_ = (*encoding).len;
					setLen__OOZOOZOOZOnimbleZpkgsZstb95image4550O53Zstb95imageZread_185((&(*encoding)), ((NI) ((((NI)(T88_ * ((NI) 2)) >= (NI)((*ep) + ((NI) 3))) ? (NI)(T88_ * ((NI) 2)) : (NI)((*ep) + ((NI) 3))))));
				}
				LA86_: ;
				lengthIndexX60gensym20_ = ((NU16) (baseLengthIndices__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZinternal_27[((NI)(longestMatchLen - ((NI) 3)))- 0]));
				distIndexX60gensym20_ = distanceCodeIndex__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZinternal_415(((NU16) ((NI)(longestMatchOffset - ((NI) 1)))));
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
				(*metadata).litLenFreq[((NU16)((NU16)(lengthIndexX60gensym20_) + (NU16)(((NU16) 257))))- 0] += ((NI) 1);
				(*metadata).distanceFreq[(distIndexX60gensym20_)- 0] += ((NI) 1);
				(*encoding).p->data[(NI)((*ep) + ((NI) 0))] = (NU16)((NU16)((NU16)((NU64)(lengthIndexX60gensym20_) << (NU64)(((NI) 8))) | distIndexX60gensym20_) | ((NU16) 32768));
				(*encoding).p->data[(NI)((*ep) + ((NI) 1))] = ((NU16) (longestMatchOffset));
				(*encoding).p->data[(NI)((*ep) + ((NI) 2))] = ((NU16) (longestMatchLen));
				(*ep) += ((NI) 3);
				{
					NI i_4;
					NI i_5;
					i_4 = (NI)0;
					i_5 = ((NI) 1);
					{
						while (1) {
							if (!(i_5 < longestMatchLen)) goto LA91;
							i_4 = i_5;
							pos += ((NI) 1);
							windowPos = ((NU16) ((NI)(pos & ((NI) 32767))));
							{
								NU32 T96_;
								if (!((NI)(pos + ((NI) 4)) < (NI)(blockStart + blockLen))) goto LA94_;
								T96_ = (NU32)0;
								T96_ = read32__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZinternal_390(src, pos);
								if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
								hash = (NU32)((NU32)((NU32)((NU32)(T96_) * (NU32)(((NU32) 506832829)))) >> (NU64)(((NI) 15)));
								chain.p->data[windowPos] = head.p->data[hash];
								head.p->data[hash] = windowPos;
							}
							LA94_: ;
							i_5 += ((NI) 1);
						} LA91: ;
					}
				}
			}
			goto LA64_;
			LA66_: ;
			{
				literalLen += ((NI) 1);
			}
			LA64_: ;
			pos += ((NI) 1);
		} LA18: ;
	} LA17: ;
	{
		LA1_:;
	}
	{
		eqdestroy___OOZOOZOOZOnimbleZpkgsZstb95image4550O53Zstb95imageZread_264((&chain));
		eqdestroy___OOZOOZOOZOnimbleZpkgsZstb95image4550O53Zstb95imageZread_264((&head));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}