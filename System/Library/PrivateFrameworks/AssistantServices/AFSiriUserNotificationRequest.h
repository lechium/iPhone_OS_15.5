//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSiriExternalRequest-Protocol.h>

@class NSString, UNNotification;

@interface AFSiriUserNotificationRequest : NSObject <AFSiriExternalRequest>
{
    UNNotification *_notification;	// 8 = 0x8
    NSString *_sourceAppId;	// 16 = 0x10
    long long _platform;	// 24 = 0x18
}

+ (_Bool)supportedForApplicationWithBundleId:(id)arg1;	// IMP=0x00000000000be9aa
+ (_Bool)supportedOnPlatform;	// IMP=0x00000000000be95f
+ (_Bool)canBeHandled;	// IMP=0x00000000000be914
- (void).cxx_destruct;	// IMP=0x00000000000bf549
- (void)withdrawalRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bf1e3
- (void)deactivateRequestForReason:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bed70
- (void)performRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000be9c3
- (id)initWithUserNotification:(id)arg1 sourceAppId:(id)arg2 platform:(long long)arg3;	// IMP=0x00000000000be86f
- (id)initWithUserNotification:(id)arg1 sourceAppId:(id)arg2;	// IMP=0x00000000000be857

@end
