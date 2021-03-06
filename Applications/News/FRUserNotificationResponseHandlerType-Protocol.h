//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSDate, NSString;
@protocol FCHeadlineProviding;

@protocol FRUserNotificationResponseHandlerType <NSObject>
- (void)navigateToNotificationSettings;
- (void)navigateToSpotlight;
- (void)saveArticleWithID:(NSString *)arg1 notificationID:(NSString *)arg2 sourceChannelID:(NSString *)arg3 isFreeArticle:(_Bool)arg4 headline:(id <FCHeadlineProviding>)arg5 userActionDate:(NSDate *)arg6;
- (void)showArticleWithID:(NSString *)arg1 notificationID:(NSString *)arg2 channelID:(NSString *)arg3 title:(NSString *)arg4 forceArticleUpdate:(_Bool)arg5 userActionDate:(NSDate *)arg6;
- (void)showHeadline:(id <FCHeadlineProviding>)arg1 notificationID:(NSString *)arg2 userActionDate:(NSDate *)arg3;
@end

