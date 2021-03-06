//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotifications/BSXPCCoding-Protocol.h>
#import <UserNotifications/NSCopying-Protocol.h>
#import <UserNotifications/NSSecureCoding-Protocol.h>

@class BSServiceConnectionEndpoint, NSString, UNNotification;

@interface UNNotificationResponse : NSObject <BSXPCCoding, NSCopying, NSSecureCoding>
{
    UNNotification *_notification;	// 8 = 0x8
    NSString *_actionIdentifier;	// 16 = 0x10
    NSString *_originIdentifier;	// 24 = 0x18
    BSServiceConnectionEndpoint *_targetConnectionEndpoint;	// 32 = 0x20
    NSString *_targetSceneIdentifier;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001b727
+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 targetSceneIdentifier:(id)arg5;	// IMP=0x000000000001b0e3
+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4;	// IMP=0x000000000001b031
+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2;	// IMP=0x000000000001b015
- (void).cxx_destruct;	// IMP=0x000000000001bd20
@property(readonly, nonatomic) NSString *targetSceneIdentifier; // @synthesize targetSceneIdentifier=_targetSceneIdentifier;
@property(readonly, nonatomic) BSServiceConnectionEndpoint *targetConnectionEndpoint; // @synthesize targetConnectionEndpoint=_targetConnectionEndpoint;
@property(readonly, copy, nonatomic) NSString *originIdentifier; // @synthesize originIdentifier=_originIdentifier;
@property(readonly, copy, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property(readonly, copy, nonatomic) UNNotification *notification; // @synthesize notification=_notification;
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x000000000001bb50
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x000000000001b9eb
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001b87b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001b72f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b71c
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001b427
@property(readonly) unsigned long long hash;
- (id)initWithNotification:(id)arg1 actionIdentifier:(id)arg2;	// IMP=0x000000000001b2d5
- (id)_initWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 targetSceneIdentifier:(id)arg5;	// IMP=0x000000000001b1ab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

