//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SKHandle, SKPublishedStatus, SKStatusSubscriptionDaemonConnection, SKStatusSubscriptionMetadata;

@interface SKStatusSubscription : NSObject
{
    SKStatusSubscriptionMetadata *_subscriptionMetadata;	// 8 = 0x8
    SKStatusSubscriptionDaemonConnection *_daemonConnection;	// 16 = 0x10
}

+ (id)logger;	// IMP=0x0000000000007cc9
- (void).cxx_destruct;	// IMP=0x0000000000007d39
@property(readonly, nonatomic) SKStatusSubscriptionDaemonConnection *daemonConnection; // @synthesize daemonConnection=_daemonConnection;
@property(readonly, nonatomic) SKStatusSubscriptionMetadata *subscriptionMetadata; // @synthesize subscriptionMetadata=_subscriptionMetadata;
- (id)description;	// IMP=0x0000000000007b8f
- (id)_ownerHandlesDescription;	// IMP=0x000000000000799b
@property(readonly, nonatomic) NSArray *ownerHandles;
@property(readonly, nonatomic) SKPublishedStatus *currentStatus;
@property(readonly, nonatomic, getter=isPersonalStatusSubscription) _Bool personalStatusSubscription;
@property(readonly, nonatomic) NSString *subscriptionIdentifier;
- (void)deleteSubscriptionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000076a2
- (void)releasePersistentSubscriptionAssertionForApplicationIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000073d1
- (void)retainPersistentSubscriptionAssertionForApplicationIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007100
- (void)releaseTransientSubscriptionAssertionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006e62
- (void)retainTransientSubscriptionAssertionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006b6f
- (id)initWithSubscriptionMetadata:(id)arg1 daemonConnection:(id)arg2;	// IMP=0x0000000000006ad6
@property(readonly, nonatomic) SKHandle *ownerHandle;

@end
