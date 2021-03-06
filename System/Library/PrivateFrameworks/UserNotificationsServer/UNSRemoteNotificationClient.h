//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/NSCoding-Protocol.h>
#import <UserNotificationsServer/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface UNSRemoteNotificationClient : NSObject <NSCoding, NSSecureCoding>
{
    NSString *_tokenIdentifier;	// 8 = 0x8
    NSString *_environment;	// 16 = 0x10
    NSData *_lastKnownDeviceToken;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000074506
+ (void)initialize;	// IMP=0x0000000000074496
- (void).cxx_destruct;	// IMP=0x000000000007477b
@property(copy, nonatomic) NSData *lastKnownDeviceToken; // @synthesize lastKnownDeviceToken=_lastKnownDeviceToken;
@property(copy, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(copy, nonatomic) NSString *tokenIdentifier; // @synthesize tokenIdentifier=_tokenIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007464d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007450e

@end

