//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AppPredictionClient/NSCopying-Protocol.h>

@class NSString;

@interface ATXPBAVRouteInfo : PBCodable <NSCopying>
{
    NSString *_deviceID;	// 8 = 0x8
    NSString *_deviceName;	// 16 = 0x10
    _Bool _isExternalRoute;	// 24 = 0x18
    struct {
        unsigned int isExternalRoute:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000000a5a94
@property(nonatomic) _Bool isExternalRoute; // @synthesize isExternalRoute=_isExternalRoute;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000a59b7
- (unsigned long long)hash;	// IMP=0x00000000000a5942
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a5841
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a5783
- (void)copyTo:(id)arg1;	// IMP=0x00000000000a5700
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a567e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a5671
- (id)dictionaryRepresentation;	// IMP=0x00000000000a535a
- (id)description;	// IMP=0x00000000000a52ab
@property(nonatomic) _Bool hasIsExternalRoute;
@property(readonly, nonatomic) _Bool hasDeviceID;
@property(readonly, nonatomic) _Bool hasDeviceName;

@end

