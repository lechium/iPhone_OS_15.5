//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSArray, NSPredicate, NSString;

@interface HMCameraUserNotificationSettings : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>
{
    _Bool _accessModeChangeNotificationEnabled;	// 8 = 0x8
    _Bool _reachabilityEventNotificationEnabled;	// 9 = 0x9
    _Bool _smartBulletinBoardNotificationEnabled;	// 10 = 0xa
    long long _version;	// 16 = 0x10
    NSPredicate *_smartBulletinBoardNotificationCondition;	// 24 = 0x18
}

+ (id)shortDescription;	// IMP=0x00000000000e5444
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e543c
- (void).cxx_destruct;	// IMP=0x00000000000e5357
@property(copy) NSPredicate *smartBulletinBoardNotificationCondition; // @synthesize smartBulletinBoardNotificationCondition=_smartBulletinBoardNotificationCondition;
@property(getter=isSmartBulletinBoardNotificationEnabled) _Bool smartBulletinBoardNotificationEnabled; // @synthesize smartBulletinBoardNotificationEnabled=_smartBulletinBoardNotificationEnabled;
@property(getter=isReachabilityEventNotificationEnabled) _Bool reachabilityEventNotificationEnabled; // @synthesize reachabilityEventNotificationEnabled=_reachabilityEventNotificationEnabled;
@property(getter=isAccessModeChangeNotificationEnabled) _Bool accessModeChangeNotificationEnabled; // @synthesize accessModeChangeNotificationEnabled=_accessModeChangeNotificationEnabled;
@property long long version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e4eff
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e4dfb
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e4d26
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e4d1b
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e4b0e
- (id)init;	// IMP=0x00000000000e4ad2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

