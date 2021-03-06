//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrustedPeers/NSCopying-Protocol.h>

@class NSMutableArray, TPPBDictionaryMatchingRuleFieldExists, TPPBDictionaryMatchingRuleFieldRegexMatch;

@interface TPPBDictionaryMatchingRule : PBCodable <NSCopying>
{
    NSMutableArray *_ands;	// 8 = 0x8
    TPPBDictionaryMatchingRuleFieldExists *_exists;	// 16 = 0x10
    TPPBDictionaryMatchingRuleFieldRegexMatch *_match;	// 24 = 0x18
    TPPBDictionaryMatchingRule *_not;	// 32 = 0x20
    NSMutableArray *_ors;	// 40 = 0x28
    int _type;	// 48 = 0x30
    struct {
        unsigned int type:1;
    } _has;	// 52 = 0x34
}

+ (Class)orType;	// IMP=0x000000000001bdd9
+ (Class)andType;	// IMP=0x000000000001bdc8
- (void).cxx_destruct;	// IMP=0x000000000001b9f4
@property(retain, nonatomic) TPPBDictionaryMatchingRuleFieldExists *exists; // @synthesize exists=_exists;
@property(retain, nonatomic) TPPBDictionaryMatchingRuleFieldRegexMatch *match; // @synthesize match=_match;
@property(retain, nonatomic) TPPBDictionaryMatchingRule *not; // @synthesize not=_not;
@property(retain, nonatomic) NSMutableArray *ors; // @synthesize ors=_ors;
@property(retain, nonatomic) NSMutableArray *ands; // @synthesize ands=_ands;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001b632
- (unsigned long long)hash;	// IMP=0x000000000001b55e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001b3c6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b00b
- (void)copyTo:(id)arg1;	// IMP=0x000000000001ae28
- (void)writeTo:(id)arg1;	// IMP=0x000000000001ab99
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001ab8c
- (id)dictionaryRepresentation;	// IMP=0x000000000001a5c8
- (id)description;	// IMP=0x000000000001a519
@property(readonly, nonatomic) _Bool hasExists;
@property(readonly, nonatomic) _Bool hasMatch;
@property(readonly, nonatomic) _Bool hasNot;
- (id)orAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001a4bd
- (unsigned long long)orsCount;	// IMP=0x000000000001a4a0
- (void)addOr:(id)arg1;	// IMP=0x000000000001a436
- (void)clearOrs;	// IMP=0x000000000001a419
- (id)andAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001a3fc
- (unsigned long long)andsCount;	// IMP=0x000000000001a3df
- (void)addAnd:(id)arg1;	// IMP=0x000000000001a375
- (void)clearAnds;	// IMP=0x000000000001a358
- (int)StringAsType:(id)arg1;	// IMP=0x000000000001a220
- (id)typeAsString:(int)arg1;	// IMP=0x000000000001a16d
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
- (_Bool)invertMatch:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000025827
- (_Bool)performOrMatch:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002555e
- (_Bool)performAndMatch:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000252a8
- (_Bool)matches:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000025073

@end

