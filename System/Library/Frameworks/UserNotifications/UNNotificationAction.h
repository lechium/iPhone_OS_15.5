//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotifications/NSCopying-Protocol.h>
#import <UserNotifications/NSSecureCoding-Protocol.h>

@class NSString, NSURL, UNNotificationActionIcon;

@interface UNNotificationAction : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    unsigned long long _options;	// 24 = 0x18
    UNNotificationActionIcon *_icon;	// 32 = 0x20
    NSString *_textInputButtonTitle;	// 40 = 0x28
    NSString *_textInputPlaceholder;	// 48 = 0x30
    NSURL *_url;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000006dd7
+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned long long)arg3 icon:(id)arg4;	// IMP=0x0000000000006709
+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x0000000000006676
+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 url:(id)arg3 options:(unsigned long long)arg4 icon:(id)arg5;	// IMP=0x00000000000065af
+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 url:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x0000000000006508
+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 url:(id)arg3 icon:(id)arg4;	// IMP=0x0000000000006449
+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 url:(id)arg3;	// IMP=0x00000000000063a6
- (void).cxx_destruct;	// IMP=0x000000000000730e
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *textInputPlaceholder; // @synthesize textInputPlaceholder=_textInputPlaceholder;
@property(readonly, copy, nonatomic) NSString *textInputButtonTitle; // @synthesize textInputButtonTitle=_textInputButtonTitle;
@property(readonly, copy, nonatomic) UNNotificationActionIcon *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000006f83
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000006ddf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000006dcc
- (id)description;	// IMP=0x0000000000006d60
- (id)_description;	// IMP=0x0000000000006bee
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006a57
- (unsigned long long)hash;	// IMP=0x000000000000691d
- (id)_initWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned long long)arg3 textInputButtonTitle:(id)arg4 textInputPlaceholder:(id)arg5 url:(id)arg6 icon:(id)arg7;	// IMP=0x00000000000067b1

@end
