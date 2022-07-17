//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface CSAudioRecordDeviceInfo : NSObject
{
    _Bool _isRemoteDevice;	// 8 = 0x8
    NSString *_route;	// 16 = 0x10
    NSUUID *_remoteDeviceUID;	// 24 = 0x18
    NSString *_remoteDeviceProductIdentifier;	// 32 = 0x20
    NSString *_remoteDeviceUIDString;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000863fb
- (void).cxx_destruct;	// IMP=0x0020000000086793
// Error: Property attributes should begin with the type ('T') attribute, property name: remoteDeviceUIDString
// Property attributes: (null)

@property(readonly, copy, nonatomic) NSString *remoteDeviceProductIdentifier; // @synthesize remoteDeviceProductIdentifier=_remoteDeviceProductIdentifier;
@property(readonly, copy, nonatomic) NSUUID *remoteDeviceUID; // @synthesize remoteDeviceUID=_remoteDeviceUID;
@property(readonly, nonatomic) _Bool isRemoteDevice; // @synthesize isRemoteDevice=_isRemoteDevice;
@property(readonly, copy, nonatomic) NSString *route; // @synthesize route=_route;
- (id)initWithAVVCRecordDeviceInfo:(id)arg1;	// IMP=0x0010000000086661
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000864e3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000086403
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000863f0
- (id)description;	// IMP=0x0010000000086354
- (id)xpcObject;	// IMP=0x00100000000861f6
- (id)initWithXPCObject:(id)arg1;	// IMP=0x0010000000085fa9
- (id)initWithRoute:(id)arg1 isRemoteDevice:(_Bool)arg2 remoteDeviceUID:(id)arg3 remoteDeviceProductIdentifier:(id)arg4 remoteDeviceUIDString:(id)arg5;	// IMP=0x0010000000085e96
- (id)initWithRoute:(id)arg1 isRemoteDevice:(_Bool)arg2 remoteDeviceUID:(id)arg3 remoteDeviceProductIdentifier:(id)arg4;	// IMP=0x0010000000085e73

@end
