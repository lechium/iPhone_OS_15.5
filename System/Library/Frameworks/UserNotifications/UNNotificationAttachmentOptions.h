//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotifications/NSCopying-Protocol.h>
#import <UserNotifications/NSMutableCopying-Protocol.h>
#import <UserNotifications/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface UNNotificationAttachmentOptions : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    unsigned long long _displayLocation;	// 8 = 0x8
    NSDictionary *_thumbnailGeneratorUserInfo;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000f1f7
- (void).cxx_destruct;	// IMP=0x000000000000f3e4
@property(readonly, copy, nonatomic) NSDictionary *thumbnailGeneratorUserInfo; // @synthesize thumbnailGeneratorUserInfo=_thumbnailGeneratorUserInfo;
@property(readonly, nonatomic) unsigned long long displayLocation; // @synthesize displayLocation=_displayLocation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000f333
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000f1ff
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000f1c9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000f1be
- (id)description;	// IMP=0x000000000000f100
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000f004
- (unsigned long long)hash;	// IMP=0x000000000000efa2
- (id)_initWithDisplayLocation:(unsigned long long)arg1 thumbnailGeneratorUserInfo:(id)arg2;	// IMP=0x000000000000ef0b
- (id)_initWithOptions:(id)arg1;	// IMP=0x000000000000ee7f
- (id)init;	// IMP=0x000000000000ee6b

@end
