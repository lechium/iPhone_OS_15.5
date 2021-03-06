//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader;

@interface GEOLPRDefinedPlateCondition : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_plateMatchConditions;	// 16 = 0x10
    NSMutableArray *_powerTypeKeys;	// 24 = 0x18
    NSMutableArray *_vehicleTypeKeys;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_plateMatchConditions:1;
        unsigned int read_powerTypeKeys:1;
        unsigned int read_vehicleTypeKeys:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000668563
+ (Class)plateMatchConditionType;	// IMP=0x00000000006676b6
+ (Class)powerTypeKeyType;	// IMP=0x0000000000667451
+ (Class)vehicleTypeKeyType;	// IMP=0x00000000006671ec
- (void).cxx_destruct;	// IMP=0x00000000006699d4
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000669684
- (unsigned long long)hash;	// IMP=0x0000000000669608
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006694e3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000668fa8
- (void)copyTo:(id)arg1;	// IMP=0x0000000000668d4b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000668906
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006688f7
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000006680d6
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000006680c4
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000667ac2
- (id)jsonRepresentation;	// IMP=0x0000000000667ab3
- (id)dictionaryRepresentation;	// IMP=0x0000000000667776
- (id)description;	// IMP=0x00000000006676c7
- (id)plateMatchConditionAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000667685
- (unsigned long long)plateMatchConditionsCount;	// IMP=0x0000000000667659
- (void)addPlateMatchCondition:(id)arg1;	// IMP=0x00000000006675a5
- (void)clearPlateMatchConditions;	// IMP=0x000000000066757d
@property(retain, nonatomic) NSMutableArray *plateMatchConditions;
- (id)powerTypeKeyAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000667420
- (unsigned long long)powerTypeKeysCount;	// IMP=0x00000000006673f4
- (void)addPowerTypeKey:(id)arg1;	// IMP=0x0000000000667340
- (void)clearPowerTypeKeys;	// IMP=0x0000000000667318
@property(retain, nonatomic) NSMutableArray *powerTypeKeys;
- (id)vehicleTypeKeyAtIndex:(unsigned long long)arg1;	// IMP=0x00000000006671bb
- (unsigned long long)vehicleTypeKeysCount;	// IMP=0x000000000066718f
- (void)addVehicleTypeKey:(id)arg1;	// IMP=0x00000000006670db
- (void)clearVehicleTypeKeys;	// IMP=0x00000000006670b3
@property(retain, nonatomic) NSMutableArray *vehicleTypeKeys;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000666948
- (id)init;	// IMP=0x00000000006668ec

@end

