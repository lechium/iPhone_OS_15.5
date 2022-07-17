//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StocksUI/NSObject-Protocol.h>

@class FCBundleSubscription;

@protocol FCBundleSubscriptionChangeObserver <NSObject>

@optional
- (void)bundleSubscriptionDidChange:(FCBundleSubscription *)arg1 previousBundleSubscription:(FCBundleSubscription *)arg2;
- (void)bundleSubscriptionDidExpire:(FCBundleSubscription *)arg1;
- (void)bundleSubscriptionDidSubscribe:(FCBundleSubscription *)arg1 hideBundleDetectionUI:(_Bool)arg2;
- (void)bundleSubscriptionDidSubscribe:(FCBundleSubscription *)arg1;
@end
