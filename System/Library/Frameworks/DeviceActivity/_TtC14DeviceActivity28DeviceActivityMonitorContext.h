//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <DeviceActivity/USDeviceActivityMonitorExtension-Protocol.h>
#import <DeviceActivity/_TtP14DeviceActivity25DeviceActivityMonitorHost_-Protocol.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC14DeviceActivity28DeviceActivityMonitorContext : NSExtensionContext <USDeviceActivityMonitorExtension, _TtP14DeviceActivity25DeviceActivityMonitorHost_>
{
    MISSING_TYPE *$__lazy_storage_$_monitor;	// 8 = 0x8
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x000000000000c170
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x000000000000c150
- (void).cxx_destruct;	// IMP=0x000000000000c890
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;	// IMP=0x000000000000c750
- (id)initWithInputItems:(id)arg1 contextUUID:(id)arg2;	// IMP=0x000000000000c660
- (id)initWithInputItems:(id)arg1;	// IMP=0x000000000000c5b0
- (id)init;	// IMP=0x000000000000c570
- (void)eventWillReachThresholdWarning:(id)arg1 activity:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000c470
- (void)intervalWillEndWarningForActivity:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c3b0
- (void)intervalWillStartWarningForActivity:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c390
- (void)eventDidReachThreshold:(id)arg1 activity:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000c370
- (void)intervalDidEndForActivity:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c350
- (void)intervalDidStartForActivity:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c330

@end

