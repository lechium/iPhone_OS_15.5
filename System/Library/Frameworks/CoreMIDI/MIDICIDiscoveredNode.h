//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMIDI/NSSecureCoding-Protocol.h>

@class MIDICIDeviceInfo, NSNumber;

@interface MIDICIDiscoveredNode : NSObject <NSSecureCoding>
{
    unsigned int _destination;	// 8 = 0x8
    MIDICIDeviceInfo *_deviceInfo;	// 16 = 0x10
    _Bool _supportsProfiles;	// 24 = 0x18
    _Bool _supportsProperties;	// 25 = 0x19
    unsigned int _maxSysExSize;	// 28 = 0x1c
}

+ (id)description;	// IMP=0x0000000000026e65
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000026e5d
- (void).cxx_destruct;	// IMP=0x0000000000026e4d
@property(readonly, nonatomic) _Bool supportsProperties; // @synthesize supportsProperties=_supportsProperties;
@property(readonly, nonatomic) _Bool supportsProfiles; // @synthesize supportsProfiles=_supportsProfiles;
@property(readonly, nonatomic) MIDICIDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(readonly, nonatomic) unsigned int destination; // @synthesize destination=_destination;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000026cd9
@property(readonly, nonatomic) NSNumber *maximumSysExSize;
- (id)description;	// IMP=0x0000000000026c41
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000026b7b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000026a41
- (id)initWithDestination:(unsigned int)arg1 deviceID:(struct MIDICIDeviceIdentification)arg2 profilesSupported:(_Bool)arg3 propertiesSupported:(_Bool)arg4 maxSysExSize:(unsigned int)arg5;	// IMP=0x0000000000026985
- (id)init;	// IMP=0x0000000000026977

@end
