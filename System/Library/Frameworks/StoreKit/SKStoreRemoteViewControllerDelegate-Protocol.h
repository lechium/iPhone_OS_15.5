//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKit/NSObject-Protocol.h>

@class NSError, NSString, SKStoreRemoteViewController;

@protocol SKStoreRemoteViewControllerDelegate <NSObject>
- (void)storeRemoteViewController:(SKStoreRemoteViewController *)arg1 presentRequestedViewControllerWithIdentifier:(NSString *)arg2;
- (void)storeRemoteViewControllerNeedsTabSelection:(SKStoreRemoteViewController *)arg1;

@optional
- (void)storeRemoteViewControllerTerminatedWithError:(NSError *)arg1;
- (void)storeRemoteViewControllerDidDismiss;
@end

