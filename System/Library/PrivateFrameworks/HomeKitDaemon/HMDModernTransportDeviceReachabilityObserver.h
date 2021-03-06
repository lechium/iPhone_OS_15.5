//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDModernRemoteMessageTransportReachabilityDelegate-Protocol.h>

@class NSMapTable, NSString;

@interface HMDModernTransportDeviceReachabilityObserver : HMFObject <HMDModernRemoteMessageTransportReachabilityDelegate>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMapTable *_deviceToListenersMap;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00000000000836f0
- (void).cxx_destruct;	// IMP=0x00000000000836dd
- (void)transport:(id)arg1 device:(id)arg2 didAppearReachable:(_Bool)arg3;	// IMP=0x00000000000831e7
- (id)isDeviceReachable:(id)arg1;	// IMP=0x00000000000830e4
- (void)removeListener:(id)arg1 forDevice:(id)arg2;	// IMP=0x0000000000082e44
- (void)addListener:(id)arg1 forDevice:(id)arg2;	// IMP=0x0000000000082bd9
- (id)init;	// IMP=0x0000000000082b6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

