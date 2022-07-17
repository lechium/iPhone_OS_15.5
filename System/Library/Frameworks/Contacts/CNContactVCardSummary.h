//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CNContactVCardSummary : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_title;	// 8 = 0x8
    NSString *_subtitle;	// 16 = 0x10
    unsigned long long _contactCount;	// 24 = 0x18
    NSArray *_avatarContacts;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e2114
+ (_Bool)isAvatarContacts:(id)arg1 equalTo:(id)arg2;	// IMP=0x00000000000e1b41
+ (id)localizedStringWithName:(id)arg1 andThisManyOthers:(unsigned long long)arg2;	// IMP=0x00000000000e1431
+ (id)localizedStringWithName:(id)arg1 andOtherName:(id)arg2;	// IMP=0x00000000000e1342
+ (id)makeFormatter;	// IMP=0x00000000000e1308
+ (id)defaultNameFormatter;	// IMP=0x00000000000e1273
+ (id)nameForContact:(id)arg1;	// IMP=0x00000000000e119c
+ (id)namesForContact:(id)arg1;	// IMP=0x00000000000e0df8
+ (id)readingOptionsWithContactLimit:(unsigned long long)arg1;	// IMP=0x00000000000e0cd8
- (void).cxx_destruct;	// IMP=0x00000000000e2156
@property(readonly, copy, nonatomic) NSArray *avatarContacts; // @synthesize avatarContacts=_avatarContacts;
@property(readonly, nonatomic) unsigned long long contactCount; // @synthesize contactCount=_contactCount;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *descriptiveLabel;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e208d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e1f11
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e1f06
- (unsigned long long)hash;	// IMP=0x00000000000e1c86
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e175c
- (id)description;	// IMP=0x00000000000e1608
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 contactCount:(unsigned long long)arg3 avatarContacts:(id)arg4;	// IMP=0x00000000000e1507
- (id)initWithData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000e0402

@end
