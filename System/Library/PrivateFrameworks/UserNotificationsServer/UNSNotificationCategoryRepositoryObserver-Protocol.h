//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsServer/NSObject-Protocol.h>

@class NSString, UNSNotificationCategoryRepository;

@protocol UNSNotificationCategoryRepositoryObserver <NSObject>
- (void)categoryRepository:(UNSNotificationCategoryRepository *)arg1 didChangeCategoriesForBundleIdentifier:(NSString *)arg2;
@end

