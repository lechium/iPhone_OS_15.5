//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class SIRICOMMONStringValue;

@interface SIRINLUEXTERNALRRGroupIdentifier : PBCodable <NSCopying>
{
    SIRICOMMONStringValue *_groupId;	// 8 = 0x8
    int _seq;	// 16 = 0x10
    struct {
        unsigned int seq:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x000000000001ee1d
@property(nonatomic) int seq; // @synthesize seq=_seq;
@property(retain, nonatomic) SIRICOMMONStringValue *groupId; // @synthesize groupId=_groupId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001ed6e
- (unsigned long long)hash;	// IMP=0x000000000001ed1b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001ec5a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001ebc2
- (void)copyTo:(id)arg1;	// IMP=0x000000000001eb5f
- (void)writeTo:(id)arg1;	// IMP=0x000000000001eafb
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001eaee
- (id)dictionaryRepresentation;	// IMP=0x000000000001e7ad
- (id)description;	// IMP=0x000000000001e6fe
@property(nonatomic) _Bool hasSeq;
@property(readonly, nonatomic) _Bool hasGroupId;

@end
