//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/NSCopying-Protocol.h>
#import <ContactsFoundation/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CNHandleStringClassification : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_emailAddresses;	// 8 = 0x8
    NSArray *_phoneNumbers;	// 16 = 0x10
    NSArray *_unknown;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000055b5c
- (void).cxx_destruct;	// IMP=0x0000000000055d31
@property(readonly, copy, nonatomic) NSArray *unknown; // @synthesize unknown=_unknown;
@property(readonly, copy, nonatomic) NSArray *phoneNumbers; // @synthesize phoneNumbers=_phoneNumbers;
@property(readonly, copy, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000055c90
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000055b64
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000055b51
- (unsigned long long)hash;	// IMP=0x0000000000055ad6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000055a21
- (id)description;	// IMP=0x0000000000055961
- (id)initWithEmailAddresses:(id)arg1 phoneNumbers:(id)arg2 unknown:(id)arg3;	// IMP=0x0000000000055828
- (id)initWithBuilder:(id)arg1;	// IMP=0x000000000005576a

@end

