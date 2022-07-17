//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface TRANSITPbLocationFingerprintV1 : PBCodable
{
    double _latitude;	// 8 = 0x8
    double _longitude;	// 16 = 0x10
    NSString *_locationId;	// 24 = 0x18
    NSMutableArray *_macModes;	// 32 = 0x20
    struct {
        unsigned int latitude:1;
        unsigned int longitude:1;
    } _has;	// 40 = 0x28
}

@property(retain, nonatomic) NSMutableArray *macModes; // @synthesize macModes=_macModes;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *locationId; // @synthesize locationId=_locationId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000006c8ebe
- (unsigned long long)hash;	// IMP=0x00100000006c8c55
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000006c8b65
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000006c8953
- (void)copyTo:(id)arg1;	// IMP=0x00100000006c884e
- (void)writeTo:(id)arg1;	// IMP=0x00100000006c86dd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000006c86d0
- (id)dictionaryRepresentation;	// IMP=0x00100000006c812d
- (id)description;	// IMP=0x00100000006c80b6
- (id)macModesAtIndex:(unsigned long long)arg1;	// IMP=0x00100000006c8099
- (unsigned long long)macModesCount;	// IMP=0x00100000006c807c
- (void)addMacModes:(id)arg1;	// IMP=0x00100000006c802f
- (void)clearMacModes;	// IMP=0x00100000006c8012
@property(nonatomic) _Bool hasLongitude;
@property(nonatomic) _Bool hasLatitude;
@property(readonly, nonatomic) _Bool hasLocationId;
- (void)dealloc;	// IMP=0x00100000006c7f14

@end
