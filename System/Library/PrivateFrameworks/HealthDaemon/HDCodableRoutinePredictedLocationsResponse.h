//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface HDCodableRoutinePredictedLocationsResponse : PBCodable <NSCopying>
{
    NSMutableArray *_predictedLocationsOfInterests;	// 8 = 0x8
}

+ (Class)predictedLocationsOfInterestType;	// IMP=0x00000000001bbbd0
- (void).cxx_destruct;	// IMP=0x00000000001bc663
@property(retain, nonatomic) NSMutableArray *predictedLocationsOfInterests; // @synthesize predictedLocationsOfInterests=_predictedLocationsOfInterests;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001bc509
- (unsigned long long)hash;	// IMP=0x00000000001bc4ec
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001bc452
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001bc28f
- (void)copyTo:(id)arg1;	// IMP=0x00000000001bc1c8
- (void)writeTo:(id)arg1;	// IMP=0x00000000001bc098
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001bc08b
- (id)dictionaryRepresentation;	// IMP=0x00000000001bbc90
- (id)description;	// IMP=0x00000000001bbbe1
- (id)predictedLocationsOfInterestAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001bbbb3
- (unsigned long long)predictedLocationsOfInterestsCount;	// IMP=0x00000000001bbb96
- (void)addPredictedLocationsOfInterest:(id)arg1;	// IMP=0x00000000001bbb2c
- (void)clearPredictedLocationsOfInterests;	// IMP=0x00000000001bbb0f

@end

