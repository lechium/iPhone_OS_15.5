//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsArticles/NSObject-Protocol.h>

@protocol SXSubscriptionStatusObserving;

@protocol SXSubscriptionStatusProviding <NSObject>
- (void)removeObserver:(id <SXSubscriptionStatusObserving>)arg1;
- (void)addObserver:(id <SXSubscriptionStatusObserving>)arg1;
@property(nonatomic, readonly) long long channelSubscriptionStatus;
@property(nonatomic, readonly) long long bundleSubscriptionStatus;
@end

