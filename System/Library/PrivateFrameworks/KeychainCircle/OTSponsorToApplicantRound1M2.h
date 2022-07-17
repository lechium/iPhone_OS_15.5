//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <KeychainCircle/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface OTSponsorToApplicantRound1M2 : PBCodable <NSCopying>
{
    unsigned long long _epoch;	// 8 = 0x8
    struct {
        unsigned int epoch:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned long long epoch; // @synthesize epoch=_epoch;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000010961
- (unsigned long long)hash;	// IMP=0x0000000000010939
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000108a6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000010842
- (void)copyTo:(id)arg1;	// IMP=0x000000000001081c
- (void)writeTo:(id)arg1;	// IMP=0x00000000000107f0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000107e3
- (id)dictionaryRepresentation;	// IMP=0x000000000001074a
- (id)description;	// IMP=0x000000000001069b
@property(nonatomic) _Bool hasEpoch;

@end
