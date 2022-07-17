//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarNotification/NSCopying-Protocol.h>
#import <CalendarNotification/NSMutableCopying-Protocol.h>
#import <CalendarNotification/NSSecureCoding-Protocol.h>

@class CALNNotificationSound, NSArray, NSDate, NSDictionary, NSString, NSURL;

@interface CALNNotificationContent : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_title;	// 8 = 0x8
    NSString *_subtitle;	// 16 = 0x10
    NSString *_body;	// 24 = 0x18
    NSString *_categoryIdentifier;	// 32 = 0x20
    NSString *_sectionIdentifier;	// 40 = 0x28
    NSDate *_date;	// 48 = 0x30
    NSDate *_expirationDate;	// 56 = 0x38
    NSURL *_defaultActionURL;	// 64 = 0x40
    NSString *_iconIdentifier;	// 72 = 0x48
    _Bool _shouldHideTime;	// 80 = 0x50
    _Bool _shouldSuppressSyncDismissalWhenRemoved;	// 81 = 0x51
    NSArray *_peopleIdentifiers;	// 88 = 0x58
    CALNNotificationSound *_sound;	// 96 = 0x60
    NSDictionary *_userInfo;	// 104 = 0x68
    NSString *_threadIdentifier;	// 112 = 0x70
    NSString *_summaryArgument;	// 120 = 0x78
    unsigned long long _summaryArgumentCount;	// 128 = 0x80
    unsigned long long _interruptionLevel;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000019ab2
- (void).cxx_destruct;	// IMP=0x000000000001a4a7
@property(readonly, nonatomic) unsigned long long interruptionLevel; // @synthesize interruptionLevel=_interruptionLevel;
@property(readonly, nonatomic) unsigned long long summaryArgumentCount; // @synthesize summaryArgumentCount=_summaryArgumentCount;
@property(readonly, copy, nonatomic) NSString *summaryArgument; // @synthesize summaryArgument=_summaryArgument;
@property(readonly, copy, nonatomic) NSString *threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) CALNNotificationSound *sound; // @synthesize sound=_sound;
@property(readonly, copy, nonatomic) NSArray *peopleIdentifiers; // @synthesize peopleIdentifiers=_peopleIdentifiers;
@property(readonly, nonatomic) _Bool shouldSuppressSyncDismissalWhenRemoved; // @synthesize shouldSuppressSyncDismissalWhenRemoved=_shouldSuppressSyncDismissalWhenRemoved;
@property(readonly, copy, nonatomic) NSString *iconIdentifier; // @synthesize iconIdentifier=_iconIdentifier;
@property(readonly, nonatomic) _Bool shouldHideTime; // @synthesize shouldHideTime=_shouldHideTime;
@property(readonly, copy, nonatomic) NSURL *defaultActionURL; // @synthesize defaultActionURL=_defaultActionURL;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, copy, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property(readonly, copy, nonatomic) NSString *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(readonly, copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000019e68
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000019aba
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000197fc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000197f1
- (unsigned long long)hash;	// IMP=0x0000000000019473
- (_Bool)isEqualForDiffingPurposesToContent:(id)arg1;	// IMP=0x0000000000018edb
- (_Bool)isEqualToContent:(id)arg1;	// IMP=0x0000000000018e26
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000018dc8
- (id)description;	// IMP=0x0000000000018a95
- (id)_initWithTitle:(id)arg1 subtitle:(id)arg2 body:(id)arg3 categoryIdentifier:(id)arg4 sectionIdentifier:(id)arg5 date:(id)arg6 expirationDate:(id)arg7 defaultActionURL:(id)arg8 iconIdentifier:(id)arg9 shouldHideTime:(_Bool)arg10 shouldSuppressSyncDismissalWhenRemoved:(_Bool)arg11 peopleIdentifiers:(id)arg12 sound:(id)arg13 userInfo:(id)arg14 threadIdentifier:(id)arg15 summaryArgument:(id)arg16 summaryArgumentCount:(unsigned long long)arg17 interruptionLevel:(unsigned long long)arg18;	// IMP=0x00000000000187bc

@end
