//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class NSHashTable, NSNotificationCenter, NSString;
@protocol OS_dispatch_queue;

@interface HMDRemoteEventRouterAssertionController : NSObject <HMFLogging>
{
    _Bool _isPluggedIn;	// 8 = 0x8
    _Bool _isHomeAppForeground;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSNotificationCenter *_notificationCenter;	// 24 = 0x18
    NSHashTable *_clients;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00000000009eb0d8
- (void).cxx_destruct;	// IMP=0x00000000009ea913
- (void)registerClient:(id)arg1;	// IMP=0x00000000009ea883
- (void)configure;	// IMP=0x00000000009ea7e6
- (void)_handleProcessStateChange:(id)arg1;	// IMP=0x00000000009ea6b0
- (id)initWithQueue:(id)arg1 notificationCenter:(id)arg2;	// IMP=0x00000000009ea5e1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

