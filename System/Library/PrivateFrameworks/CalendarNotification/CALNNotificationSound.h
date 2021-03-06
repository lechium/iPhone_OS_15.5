//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarNotification/NSCopying-Protocol.h>
#import <CalendarNotification/NSSecureCoding-Protocol.h>

@class NSString;

@interface CALNNotificationSound : NSObject <NSCopying, NSSecureCoding>
{
    long long _alertType;	// 8 = 0x8
    NSString *_alertTopic;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004a1a4
+ (id)soundWithAlertType:(long long)arg1 alertTopic:(id)arg2;	// IMP=0x0000000000049df1
- (void).cxx_destruct;	// IMP=0x000000000004a306
@property(readonly, copy, nonatomic) NSString *alertTopic; // @synthesize alertTopic=_alertTopic;
@property(readonly, nonatomic) long long alertType; // @synthesize alertType=_alertType;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004a249
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004a1ac
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004a128
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004a11d
- (id)description;	// IMP=0x000000000004a050
- (_Bool)isEqualToSound:(id)arg1;	// IMP=0x0000000000049f95
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000049f37
- (unsigned long long)hash;	// IMP=0x0000000000049ed5
- (id)init;	// IMP=0x0000000000049ec7
- (id)_initWithAlertType:(long long)arg1 alertTopic:(id)arg2;	// IMP=0x0000000000049e49

@end

