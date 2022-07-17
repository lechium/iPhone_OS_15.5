//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableRoutineLocation, NSData;

@interface HDCodableRoutinePredictedLocation : PBCodable <NSCopying>
{
    double _confidence;	// 8 = 0x8
    double _nextEntryTime;	// 16 = 0x10
    NSData *_geoData;	// 24 = 0x18
    HDCodableRoutineLocation *_locationOfInterest;	// 32 = 0x20
    int _modeOfTransportation;	// 40 = 0x28
    int _sourceType;	// 44 = 0x2c
    struct {
        unsigned int confidence:1;
        unsigned int nextEntryTime:1;
        unsigned int modeOfTransportation:1;
        unsigned int sourceType:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000c032e
@property(retain, nonatomic) NSData *geoData; // @synthesize geoData=_geoData;
@property(nonatomic) double nextEntryTime; // @synthesize nextEntryTime=_nextEntryTime;
@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) HDCodableRoutineLocation *locationOfInterest; // @synthesize locationOfInterest=_locationOfInterest;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000c01cb
- (unsigned long long)hash;	// IMP=0x00000000000bff2a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000bfdb8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bfc9c
- (void)copyTo:(id)arg1;	// IMP=0x00000000000bfbbe
- (void)writeTo:(id)arg1;	// IMP=0x00000000000bfad1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000bfac4
- (id)dictionaryRepresentation;	// IMP=0x00000000000bf3ef
- (id)description;	// IMP=0x00000000000bf340
@property(readonly, nonatomic) _Bool hasGeoData;
- (int)StringAsSourceType:(id)arg1;	// IMP=0x00000000000bf23c
- (id)sourceTypeAsString:(int)arg1;	// IMP=0x00000000000bf1a2
@property(nonatomic) _Bool hasSourceType;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
- (int)StringAsModeOfTransportation:(id)arg1;	// IMP=0x00000000000bf09e
- (id)modeOfTransportationAsString:(int)arg1;	// IMP=0x00000000000bf038
@property(nonatomic) _Bool hasModeOfTransportation;
@property(nonatomic) int modeOfTransportation; // @synthesize modeOfTransportation=_modeOfTransportation;
@property(nonatomic) _Bool hasNextEntryTime;
@property(nonatomic) _Bool hasConfidence;
@property(readonly, nonatomic) _Bool hasLocationOfInterest;

@end
