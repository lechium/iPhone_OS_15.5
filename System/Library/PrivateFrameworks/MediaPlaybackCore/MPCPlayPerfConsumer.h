//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCPlaybackEngineEventConsumer-Protocol.h>

@class NSString;
@protocol MPCPlaybackEngineEventStreamSubscription;

__attribute__((visibility("hidden")))
@interface MPCPlayPerfConsumer : NSObject <MPCPlaybackEngineEventConsumer>
{
    id <MPCPlaybackEngineEventStreamSubscription> _subscription;	// 8 = 0x8
}

+ (void)sendMetrics:(id)arg1;	// IMP=0x00000000000af1f9
+ (void)handleMetrics:(id)arg1;	// IMP=0x00000000000af0b0
+ (id)coreAnalyticsEventNameWithEventType:(id)arg1;	// IMP=0x00000000000af01a
+ (id)identifier;	// IMP=0x00000000000af00d
- (void).cxx_destruct;	// IMP=0x00000000000aea83
@property(readonly, nonatomic) id <MPCPlaybackEngineEventStreamSubscription> subscription; // @synthesize subscription=_subscription;
- (void)setupErrorHandlerForEventType:(id)arg1 errorKey:(id)arg2 prefix:(id)arg3;	// IMP=0x00000000000ae9b6
- (void)unsubscribeFromEventStream:(id)arg1;	// IMP=0x00000000000ae99c
- (void)subscribeToEventStream:(id)arg1;	// IMP=0x00000000000ae857

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
