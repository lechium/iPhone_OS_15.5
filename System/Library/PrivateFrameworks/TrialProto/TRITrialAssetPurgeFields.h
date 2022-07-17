//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrialProto/NSCopying-Protocol.h>

@interface TRITrialAssetPurgeFields : PBCodable <NSCopying>
{
    int _purgeabilityLevel;	// 8 = 0x8
    struct {
        unsigned int purgeabilityLevel:1;
    } _has;	// 12 = 0xc
}

+ (int)assetPurgeFieldsPurgeabilityLevelFromPurgeabilityLevel:(int)arg1;	// IMP=0x000000000004c2d4
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000024748
- (unsigned long long)hash;	// IMP=0x000000000002471d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002468b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000024629
- (void)copyTo:(id)arg1;	// IMP=0x0000000000024605
- (void)writeTo:(id)arg1;	// IMP=0x00000000000245da
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000245cd
- (id)dictionaryRepresentation;	// IMP=0x00000000000242fa
- (id)description;	// IMP=0x000000000002424b
- (int)StringAsPurgeabilityLevel:(id)arg1;	// IMP=0x0000000000024180
- (id)purgeabilityLevelAsString:(int)arg1;	// IMP=0x00000000000240f4
@property(nonatomic) _Bool hasPurgeabilityLevel;
@property(nonatomic) int purgeabilityLevel; // @synthesize purgeabilityLevel=_purgeabilityLevel;

@end
