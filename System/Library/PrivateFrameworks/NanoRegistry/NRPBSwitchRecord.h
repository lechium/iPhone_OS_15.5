//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/NSCopying-Protocol.h>

@class NSData;

@interface NRPBSwitchRecord : PBCodable <NSCopying>
{
    double _dateTimeInterval;	// 8 = 0x8
    NSData *_deviceIDBytes;	// 16 = 0x10
    int _switchIndex;	// 24 = 0x18
    struct {
        unsigned int dateTimeInterval:1;
        unsigned int switchIndex:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000001b5b7
@property(nonatomic) int switchIndex; // @synthesize switchIndex=_switchIndex;
@property(nonatomic) double dateTimeInterval; // @synthesize dateTimeInterval=_dateTimeInterval;
@property(retain, nonatomic) NSData *deviceIDBytes; // @synthesize deviceIDBytes=_deviceIDBytes;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001b4ec
- (unsigned long long)hash;	// IMP=0x000000000001b389
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001b29c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b1e3
- (void)copyTo:(id)arg1;	// IMP=0x000000000001b15f
- (void)writeTo:(id)arg1;	// IMP=0x000000000001b0cf
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001b0c2
- (id)dictionaryRepresentation;	// IMP=0x000000000001ad1f
- (id)description;	// IMP=0x000000000001ac70
@property(nonatomic) _Bool hasSwitchIndex;
@property(nonatomic) _Bool hasDateTimeInterval;
@property(readonly, nonatomic) _Bool hasDeviceIDBytes;

@end
