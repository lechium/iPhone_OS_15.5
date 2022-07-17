//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HMDDevice, NSMutableDictionary, NSString;

@interface HMDCameraSessionID : HMFObject <NSCopying>
{
    _Bool _spiClient;	// 8 = 0x8
    NSString *_sessionID;	// 16 = 0x10
    NSString *_descriptionString;	// 24 = 0x18
    NSString *_cameraSessionAppID;	// 32 = 0x20
    HMDDevice *_remoteDevice;	// 40 = 0x28
    NSMutableDictionary *_milestones;	// 48 = 0x30
    NSString *_deviceSectionName;	// 56 = 0x38
    NSMutableDictionary *_deviceMilestones;	// 64 = 0x40
}

+ (id)millisecondsSince1970;	// IMP=0x0000000000a980c2
+ (id)applicationIdentiferForMessage:(id)arg1;	// IMP=0x0000000000a97f71
- (void).cxx_destruct;	// IMP=0x0000000000a97eeb
@property(readonly) NSMutableDictionary *deviceMilestones; // @synthesize deviceMilestones=_deviceMilestones;
@property(readonly) NSString *deviceSectionName; // @synthesize deviceSectionName=_deviceSectionName;
@property(readonly) NSMutableDictionary *milestones; // @synthesize milestones=_milestones;
@property(readonly, getter=isSPIClient) _Bool spiClient; // @synthesize spiClient=_spiClient;
@property(readonly) HMDDevice *remoteDevice; // @synthesize remoteDevice=_remoteDevice;
@property(readonly) NSString *cameraSessionAppID; // @synthesize cameraSessionAppID=_cameraSessionAppID;
@property(readonly) NSString *descriptionString; // @synthesize descriptionString=_descriptionString;
@property(readonly) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void)_prepareDeviceMilestones;	// IMP=0x0000000000a97cb2
- (void)addParameterFor:(id)arg1 value:(id)arg2;	// IMP=0x0000000000a97b5c
- (void)setParameterForPath:(id)arg1 value:(id)arg2;	// IMP=0x0000000000a97a66
- (void)setParameterFor:(id)arg1 value:(id)arg2;	// IMP=0x0000000000a979e0
- (void)markMilestoneForPath:(id)arg1;	// IMP=0x0000000000a97854
- (void)markMilestoneFor:(id)arg1;	// IMP=0x0000000000a977b9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a976bc
- (unsigned long long)hash;	// IMP=0x0000000000a97678
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a975ba
- (id)description;	// IMP=0x0000000000a975a8
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 cameraSessionAppID:(id)arg3 descriptionString:(id)arg4 spiClient:(_Bool)arg5;	// IMP=0x0000000000a97493

@end
