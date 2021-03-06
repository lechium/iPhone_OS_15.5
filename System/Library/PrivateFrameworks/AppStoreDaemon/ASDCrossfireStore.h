//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDServiceProvider-Protocol.h>

@class ASDServiceBroker, NSString;

@interface ASDCrossfireStore : NSObject <ASDServiceProvider>
{
    ASDServiceBroker *_serviceBroker;	// 8 = 0x8
}

+ (id)interface;	// IMP=0x000000000001f77f
+ (id)sharedInstance;	// IMP=0x000000000001e5ac
- (void).cxx_destruct;	// IMP=0x000000000001f832
- (void)sendMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f51d
- (void)resetMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f2bb
- (void)reportAppEvent:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f024
- (void)recordMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001edc2
- (void)recordLaunchesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001eb60
- (void)getAppEventsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e8fe
- (void)flushMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e69c
- (id)_initWithServiceBroker:(id)arg1;	// IMP=0x000000000001e631
- (id)init;	// IMP=0x000000000001e552

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

