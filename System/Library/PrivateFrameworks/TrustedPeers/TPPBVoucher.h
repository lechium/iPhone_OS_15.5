//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrustedPeers/NSCopying-Protocol.h>

@class NSString;

@interface TPPBVoucher : PBCodable <NSCopying>
{
    NSString *_beneficiary;	// 8 = 0x8
    int _reason;	// 16 = 0x10
    NSString *_sponsor;	// 24 = 0x18
    struct {
        unsigned int reason:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002cef8
@property(retain, nonatomic) NSString *sponsor; // @synthesize sponsor=_sponsor;
@property(retain, nonatomic) NSString *beneficiary; // @synthesize beneficiary=_beneficiary;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002ce2b
- (unsigned long long)hash;	// IMP=0x000000000002cdab
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002ccb6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002cbf5
- (void)copyTo:(id)arg1;	// IMP=0x000000000002cb72
- (void)writeTo:(id)arg1;	// IMP=0x000000000002caf1
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002cae4
- (id)dictionaryRepresentation;	// IMP=0x000000000002c990
- (id)description;	// IMP=0x000000000002c8e1
@property(readonly, nonatomic) _Bool hasSponsor;
@property(readonly, nonatomic) _Bool hasBeneficiary;
- (int)StringAsReason:(id)arg1;	// IMP=0x000000000002c7c8
- (id)reasonAsString:(int)arg1;	// IMP=0x000000000002c731
@property(nonatomic) _Bool hasReason;
@property(nonatomic) int reason; // @synthesize reason=_reason;

@end
