//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthUI/NSCopying-Protocol.h>

@class HKCodableMenstrualCyclesProjection, HKCodableMenstrualCyclesProjectionKind;

@interface HKCodableMenstrualCyclesProjectionHighlightTileViewModel : PBCodable <NSCopying>
{
    long long _latestSupportedVersion;	// 8 = 0x8
    long long _minimumSupportedVersion;	// 16 = 0x10
    HKCodableMenstrualCyclesProjection *_projection;	// 24 = 0x18
    HKCodableMenstrualCyclesProjectionKind *_projectionKind;	// 32 = 0x20
    CDStruct_514b95f0 _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002079de
@property(nonatomic) long long minimumSupportedVersion; // @synthesize minimumSupportedVersion=_minimumSupportedVersion;
@property(nonatomic) long long latestSupportedVersion; // @synthesize latestSupportedVersion=_latestSupportedVersion;
@property(retain, nonatomic) HKCodableMenstrualCyclesProjectionKind *projectionKind; // @synthesize projectionKind=_projectionKind;
@property(retain, nonatomic) HKCodableMenstrualCyclesProjection *projection; // @synthesize projection=_projection;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002078a2
- (unsigned long long)hash;	// IMP=0x0000000000207808
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002076ed
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000207610
- (void)copyTo:(id)arg1;	// IMP=0x000000000020756e
- (void)writeTo:(id)arg1;	// IMP=0x00000000002074c1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002074b4
- (id)dictionaryRepresentation;	// IMP=0x0000000000206fdd
- (id)description;	// IMP=0x0000000000206f2e
@property(nonatomic) _Bool hasMinimumSupportedVersion;
@property(nonatomic) _Bool hasLatestSupportedVersion;
@property(readonly, nonatomic) _Bool hasProjectionKind;
@property(readonly, nonatomic) _Bool hasProjection;

@end

