//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface FRNotificationPayloadInfo : NSObject
{
    NSDictionary *_newsUserInfo;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000008dc39
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000008dc2e
@property(readonly, nonatomic) NSString *notificationArticleID;
@property(readonly, nonatomic) NSString *notificationSourceChannelID;
@property(readonly, nonatomic) NSString *notificationSenderChannelID;
@property(readonly, nonatomic) NSString *notificationID;
- (id)initWithNewsUserInfo:(id)arg1;	// IMP=0x001000000008d9bf
- (id)init;	// IMP=0x001000000008d87a

@end

