//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSNumber, NSString, NSURL, UIImage;

@protocol WBSWebExtensionToolbarItemImplementation <NSObject>
- (void)popupDidNavigateRequestingNewWindowToURL:(NSURL *)arg1;
- (void)didSetIcon:(UIImage *)arg1 forTabWithIdentifier:(NSNumber *)arg2;
- (void)didSetEnabledState:(_Bool)arg1 forTabWithIdentifier:(NSNumber *)arg2;
- (void)didSetBadgeText:(NSString *)arg1 forTabWithIdentifier:(NSNumber *)arg2;

@optional
- (void)didSetTitle:(NSString *)arg1 forTabWithIdentifier:(NSNumber *)arg2;
@end

