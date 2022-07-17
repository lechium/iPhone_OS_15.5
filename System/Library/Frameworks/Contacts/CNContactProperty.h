//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class CNContact, NSString;

@interface CNContactProperty : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_key;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    CNContact *_internalContact;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000c720f
+ (id)contactPropertyWithContactNoCopy:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3;	// IMP=0x00000000000c6c45
+ (id)contactPropertyWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3;	// IMP=0x00000000000c6b75
- (void).cxx_destruct;	// IMP=0x00000000000c7c6d
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *key;
- (int)multiValueIdentifier;	// IMP=0x00000000000c7b84
@property(readonly, nonatomic) id value;
@property(readonly, copy, nonatomic) NSString *label;
- (id)labeledValue;	// IMP=0x00000000000c79be
- (id)sourceContact;	// IMP=0x00000000000c764a
@property(readonly, copy, nonatomic) CNContact *contact;
- (id)description;	// IMP=0x00000000000c7412
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c738f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c7222
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c7217
- (unsigned long long)hash;	// IMP=0x00000000000c7035
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c6cf4

@end
