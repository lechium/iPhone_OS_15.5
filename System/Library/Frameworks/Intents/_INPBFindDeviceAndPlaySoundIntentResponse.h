//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBFindDeviceAndPlaySoundIntentResponse-Protocol.h>

@class NSArray, NSString;

@interface _INPBFindDeviceAndPlaySoundIntentResponse : PBCodable <_INPBFindDeviceAndPlaySoundIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_devicesFounds;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004282ab
+ (Class)devicesFoundType;	// IMP=0x000000000042829a
- (void).cxx_destruct;	// IMP=0x00000000004280d1
@property(copy, nonatomic) NSArray *devicesFounds; // @synthesize devicesFounds=_devicesFounds;
- (id)dictionaryRepresentation;	// IMP=0x0000000000427ea4
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000427d05
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000427c83
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000427bf1
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000427af2
- (void)writeTo:(id)arg1;	// IMP=0x00000000004279c2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004279b5
- (id)devicesFoundAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000427998
@property(readonly, nonatomic) unsigned long long devicesFoundsCount;
- (void)addDevicesFound:(id)arg1;	// IMP=0x0000000000427901
- (void)clearDevicesFounds;	// IMP=0x00000000004278e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

