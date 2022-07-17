//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioSession, AVOutputDeviceDiscoverySessionAvailableOutputDevices, AVOutputDeviceDiscoverySessionInternal, NSArray;

@interface AVOutputDeviceDiscoverySession : NSObject
{
    AVOutputDeviceDiscoverySessionInternal *_outputDeviceDiscoverySession;	// 8 = 0x8
}

+ (id)outputDeviceDiscoverySessionFactory;	// IMP=0x0000000000005f7b
+ (void)initialize;	// IMP=0x0000000000005f14
- (void)outputDeviceDiscoverySessionImplDidChangeAvailableOutputDeviceGroups:(id)arg1;	// IMP=0x00000000000068bf
- (void)outputDeviceDiscoverySessionImpl:(id)arg1 didExpireWithReplacement:(id)arg2;	// IMP=0x000000000000672d
- (void)outputDeviceDiscoverySessionImplDidChangeAvailableOutputDevices:(id)arg1;	// IMP=0x00000000000066d7
@property(readonly, nonatomic) _Bool devicePresenceDetected;
@property(readonly, nonatomic) AVOutputDeviceDiscoverySessionAvailableOutputDevices *availableOutputDevicesObject;
@property(readonly, nonatomic) NSArray *availableOutputDeviceGroups;
@property(readonly, nonatomic) NSArray *availableOutputDevices;
@property(nonatomic) long long discoveryMode;
@property(retain, nonatomic) AVAudioSession *targetAudioSession;
- (id)impl;	// IMP=0x000000000000612f
- (void)dealloc;	// IMP=0x00000000000060cc
- (id)initWithOutputDeviceDiscoverySessionImpl:(id)arg1;	// IMP=0x0000000000006008
- (id)initWithDeviceFeatures:(unsigned long long)arg1;	// IMP=0x0000000000005f9a
- (id)init;	// IMP=0x0000000000005f83

@end
