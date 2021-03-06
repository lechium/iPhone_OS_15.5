//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPBundleId, CLPIndoorCMAttitude, CLPIndoorCMPedometer, CLPIndoorMotionActivity, CLPIndoorPressure, CLPIndoorWifiScan, CLPLocation;

@interface CLPIndoorEvent : PBCodable <NSCopying>
{
    CLPBundleId *_bundleId;	// 8 = 0x8
    CLPIndoorCMAttitude *_cmAttitude;	// 16 = 0x10
    CLPIndoorCMPedometer *_cmPedometer;	// 24 = 0x18
    CLPLocation *_location;	// 32 = 0x20
    CLPIndoorMotionActivity *_motionActivity;	// 40 = 0x28
    CLPIndoorPressure *_pressure;	// 48 = 0x30
    int _type;	// 56 = 0x38
    CLPIndoorWifiScan *_wifiScan;	// 64 = 0x40
    CDStruct_f953fb60 _has;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000029a6f
@property(retain, nonatomic) CLPBundleId *bundleId; // @synthesize bundleId=_bundleId;
@property(retain, nonatomic) CLPIndoorWifiScan *wifiScan; // @synthesize wifiScan=_wifiScan;
@property(retain, nonatomic) CLPIndoorPressure *pressure; // @synthesize pressure=_pressure;
@property(retain, nonatomic) CLPIndoorMotionActivity *motionActivity; // @synthesize motionActivity=_motionActivity;
@property(retain, nonatomic) CLPLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) CLPIndoorCMPedometer *cmPedometer; // @synthesize cmPedometer=_cmPedometer;
@property(retain, nonatomic) CLPIndoorCMAttitude *cmAttitude; // @synthesize cmAttitude=_cmAttitude;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000297a8
- (unsigned long long)hash;	// IMP=0x0000000000029695
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000029495
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002930e
- (void)copyTo:(id)arg1;	// IMP=0x00000000000291eb
- (void)writeTo:(id)arg1;	// IMP=0x00000000000290d9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000290cc
- (id)dictionaryRepresentation;	// IMP=0x0000000000028937
- (id)description;	// IMP=0x0000000000028888
@property(readonly, nonatomic) _Bool hasBundleId;
@property(readonly, nonatomic) _Bool hasWifiScan;
@property(readonly, nonatomic) _Bool hasPressure;
@property(readonly, nonatomic) _Bool hasMotionActivity;
@property(readonly, nonatomic) _Bool hasLocation;
@property(readonly, nonatomic) _Bool hasCmPedometer;
@property(readonly, nonatomic) _Bool hasCmAttitude;
- (int)StringAsType:(id)arg1;	// IMP=0x00000000000286d8
- (id)typeAsString:(int)arg1;	// IMP=0x0000000000028630
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

