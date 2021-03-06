//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitServices/BSServiceConnectionListenerDelegate-Protocol.h>
#import <UIKitServices/UISApplicationStateXPCServerInterface-Protocol.h>

@class BSServiceConnectionListener, FBSSerialQueue, NSString;
@protocol UISApplicationStateServiceDelegate;

@interface UISApplicationStateService : NSObject <BSServiceConnectionListenerDelegate, UISApplicationStateXPCServerInterface>
{
    BSServiceConnectionListener *_listener;	// 8 = 0x8
    FBSSerialQueue *_calloutQueue;	// 16 = 0x10
    id <UISApplicationStateServiceDelegate> _delegate;	// 24 = 0x18
    struct {
        unsigned int delegateDataSourceForApplicationBundleIdentifier:1;
    } _delegateFlags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000007862
@property(nonatomic) __weak id <UISApplicationStateServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_dataSourceForApplicationBundleIdentifier:(id)arg1;	// IMP=0x00000000000077c7
- (_Bool)_isCurrentConnectionAuthorizedForApplicationBundleIdentifier:(id)arg1 description:(id)arg2 legacyEntitlement:(id)arg3;	// IMP=0x0000000000007576
- (_Bool)_isCurrentConnectionAuthorizedForApplicationBundleIdentifier:(id)arg1 description:(id)arg2;	// IMP=0x0000000000007561
- (id)_operatingBundleIdentifier;	// IMP=0x0000000000007466
- (void)setBadgeValue:(id)arg1;	// IMP=0x00000000000071c5
- (oneway void)setBadgeString:(id)arg1;	// IMP=0x00000000000071b3
- (oneway void)setBadgeNumber:(id)arg1;	// IMP=0x00000000000071a1
- (void)badgeValueWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006fae
- (oneway void)setUsesBackgroundNetwork:(id)arg1;	// IMP=0x0000000000006ec8
- (void)usesBackgroundNetworkWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006d06
- (oneway void)setMinimumBackgroundFetchInterval:(id)arg1;	// IMP=0x0000000000006ca2
- (oneway void)setNextWakeIntervalSinceReferenceDate:(id)arg1;	// IMP=0x0000000000006740
- (void)nextWakeIntervalSinceReferenceDateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006530
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x0000000000006230
- (id)initWithCalloutQueue:(id)arg1;	// IMP=0x0000000000005ef3
- (id)init;	// IMP=0x0000000000005e7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

