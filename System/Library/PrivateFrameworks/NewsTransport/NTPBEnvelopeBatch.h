//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBEnvelopeBatch : PBCodable <NSCopying>
{
    int _envelopeDroppedCountDueToSizeLimit;	// 8 = 0x8
    NSMutableArray *_envelopes;	// 16 = 0x10
    int _majorVersion;	// 24 = 0x18
    int _minorVersion;	// 28 = 0x1c
    int _patchVersion;	// 32 = 0x20
    struct {
        unsigned int envelopeDroppedCountDueToSizeLimit:1;
        unsigned int majorVersion:1;
        unsigned int minorVersion:1;
        unsigned int patchVersion:1;
    } _has;	// 36 = 0x24
}

+ (Class)envelopeType;	// IMP=0x0000000000065c55
- (void).cxx_destruct;	// IMP=0x0000000000066e4d
@property(nonatomic) int envelopeDroppedCountDueToSizeLimit; // @synthesize envelopeDroppedCountDueToSizeLimit=_envelopeDroppedCountDueToSizeLimit;
@property(nonatomic) int patchVersion; // @synthesize patchVersion=_patchVersion;
@property(nonatomic) int minorVersion; // @synthesize minorVersion=_minorVersion;
@property(nonatomic) int majorVersion; // @synthesize majorVersion=_majorVersion;
@property(retain, nonatomic) NSMutableArray *envelopes; // @synthesize envelopes=_envelopes;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000066c04
- (unsigned long long)hash;	// IMP=0x0000000000066b5e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000066a33
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000667df
- (void)writeTo:(id)arg1;	// IMP=0x0000000000066619
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000006660c
- (id)dictionaryRepresentation;	// IMP=0x0000000000065e39
- (id)description;	// IMP=0x0000000000065d8a
@property(nonatomic) _Bool hasEnvelopeDroppedCountDueToSizeLimit;
@property(nonatomic) _Bool hasPatchVersion;
@property(nonatomic) _Bool hasMinorVersion;
@property(nonatomic) _Bool hasMajorVersion;
- (id)envelopeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000065c38
- (unsigned long long)envelopesCount;	// IMP=0x0000000000065c1b
- (void)addEnvelope:(id)arg1;	// IMP=0x0000000000065bb1
- (void)clearEnvelopes;	// IMP=0x0000000000065b94

@end

