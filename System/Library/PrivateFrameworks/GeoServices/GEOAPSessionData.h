//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOAPSessionData : PBCodable <NSCopying>
{
    struct GEOSessionID _sessionId;	// 8 = 0x8
    double _createTimeInUse;	// 24 = 0x18
    double _createTime;	// 32 = 0x20
    double _mapsUserStartDate;	// 40 = 0x28
    NSString *_originHardwareClass;	// 48 = 0x30
    unsigned long long _sessionEpoch;	// 56 = 0x38
    unsigned int _opaqueAppId;	// 64 = 0x40
    struct {
        unsigned int has_sessionId:1;
        unsigned int has_createTimeInUse:1;
        unsigned int has_createTime:1;
        unsigned int has_mapsUserStartDate:1;
        unsigned int has_sessionEpoch:1;
        unsigned int has_opaqueAppId:1;
    } _flags;	// 68 = 0x44
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000007e698e
- (void).cxx_destruct;	// IMP=0x00000000007e7726
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000007e7611
- (unsigned long long)hash;	// IMP=0x00000000007e7237
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007e7046
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000007e6f16
- (void)copyTo:(id)arg1;	// IMP=0x00000000007e6e01
- (void)writeTo:(id)arg1;	// IMP=0x00000000007e6caf
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000007e6ca0
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000007e6450
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000007e643e
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000007e605a
- (id)jsonRepresentation;	// IMP=0x00000000007e604b
- (id)dictionaryRepresentation;	// IMP=0x00000000007e5d31
- (id)description;	// IMP=0x00000000007e5c82
@property(nonatomic) _Bool hasCreateTimeInUse;
@property(nonatomic) double createTimeInUse;
@property(retain, nonatomic) NSString *originHardwareClass;
@property(readonly, nonatomic) _Bool hasOriginHardwareClass;
@property(nonatomic) _Bool hasOpaqueAppId;
@property(nonatomic) unsigned int opaqueAppId;
@property(nonatomic) _Bool hasMapsUserStartDate;
@property(nonatomic) double mapsUserStartDate;
@property(nonatomic) _Bool hasSessionEpoch;
@property(nonatomic) unsigned long long sessionEpoch;
@property(nonatomic) _Bool hasCreateTime;
@property(nonatomic) double createTime;
@property(nonatomic) _Bool hasSessionId;
@property(nonatomic) struct GEOSessionID sessionId;

@end
