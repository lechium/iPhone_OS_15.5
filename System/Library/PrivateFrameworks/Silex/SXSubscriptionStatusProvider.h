//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXSubscriptionStatusProviding-Protocol.h>

@class NSString;

@interface SXSubscriptionStatusProvider : NSObject <SXSubscriptionStatusProviding>
{
    long long _bundleSubscriptionStatus;	// 8 = 0x8
    long long _channelSubscriptionStatus;	// 16 = 0x10
}

@property(readonly, nonatomic) long long channelSubscriptionStatus; // @synthesize channelSubscriptionStatus=_channelSubscriptionStatus;
@property(readonly, nonatomic) long long bundleSubscriptionStatus; // @synthesize bundleSubscriptionStatus=_bundleSubscriptionStatus;
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000bf368
- (void)addObserver:(id)arg1;	// IMP=0x00000000000bf362
- (id)initWithBundleSubscriptionStatus:(long long)arg1 channelSubscriptionStatus:(long long)arg2;	// IMP=0x00000000000bf31a
- (id)init;	// IMP=0x00000000000bf304

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

