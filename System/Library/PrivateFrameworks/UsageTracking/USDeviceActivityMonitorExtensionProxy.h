//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UsageTracking/USDeviceActivityMonitorExtension-Protocol.h>

@class NSArray;
@protocol OS_dispatch_queue_global;

@interface USDeviceActivityMonitorExtensionProxy : NSObject <USDeviceActivityMonitorExtension>
{
    unsigned long long _timeoutInSeconds;	// 8 = 0x8
    unsigned long long _timeoutLeewayInSeconds;	// 16 = 0x10
    NSArray *_extensions;	// 24 = 0x18
    NSObject<OS_dispatch_queue_global> *_timeoutQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000004998
@property(readonly) NSObject<OS_dispatch_queue_global> *timeoutQueue; // @synthesize timeoutQueue=_timeoutQueue;
@property(readonly) NSArray *extensions; // @synthesize extensions=_extensions;
@property unsigned long long timeoutLeewayInSeconds; // @synthesize timeoutLeewayInSeconds=_timeoutLeewayInSeconds;
@property unsigned long long timeoutInSeconds; // @synthesize timeoutInSeconds=_timeoutInSeconds;
- (void)_cancelTimer:(id)arg1;	// IMP=0x0000000000004934
- (id)_scheduleTimerWithIntervalInSeconds:(unsigned long long)arg1 leewayInSeconds:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004878
- (id)_scheduleTimerWithIntervalInSeconds:(unsigned long long)arg1 leewayInSeconds:(unsigned long long)arg2 extensionPID:(int)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000047fc
- (void)_requestExtensionVendorProxyForExtension:(id)arg1 proxyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000041e6
- (void)eventWillReachThresholdWarning:(id)arg1 activity:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003f58
- (void)intervalWillEndWarningForActivity:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003d0a
- (void)intervalWillStartWarningForActivity:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003abc
- (void)eventDidReachThreshold:(id)arg1 activity:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000037be
- (void)intervalDidEndForActivity:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003570
- (void)intervalDidStartForActivity:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003322
- (id)initWithExtensionsMatchingAttributes:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000307f
- (id)initWithClientIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000002d00
- (id)initWithBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000002c15

@end

