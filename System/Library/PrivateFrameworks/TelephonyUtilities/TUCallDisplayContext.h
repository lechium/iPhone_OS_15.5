//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSMutableCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSArray, NSPersonNameComponents, NSString;

@interface TUCallDisplayContext : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    int _legacyAddressBookIdentifier;	// 8 = 0x8
    NSPersonNameComponents *_personNameComponents;	// 16 = 0x10
    NSString *_suggestedName;	// 24 = 0x18
    NSString *_companyName;	// 32 = 0x20
    NSString *_mapName;	// 40 = 0x28
    NSString *_location;	// 48 = 0x30
    NSString *_contactName;	// 56 = 0x38
    NSString *_contactLabel;	// 64 = 0x40
    NSString *_callDirectoryLabel;	// 72 = 0x48
    NSString *_callDirectoryLocalizedExtensionContainingAppName;	// 80 = 0x50
    NSString *_callDirectoryExtensionIdentifier;	// 88 = 0x58
    NSArray *_contactIdentifiers;	// 96 = 0x60
    NSString *_name;	// 104 = 0x68
    NSString *_label;	// 112 = 0x70
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000060e96
- (void).cxx_destruct;	// IMP=0x0000000000061ab3
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int legacyAddressBookIdentifier; // @synthesize legacyAddressBookIdentifier=_legacyAddressBookIdentifier;
@property(copy, nonatomic) NSArray *contactIdentifiers; // @synthesize contactIdentifiers=_contactIdentifiers;
@property(copy, nonatomic) NSString *callDirectoryExtensionIdentifier; // @synthesize callDirectoryExtensionIdentifier=_callDirectoryExtensionIdentifier;
@property(copy, nonatomic) NSString *callDirectoryLocalizedExtensionContainingAppName; // @synthesize callDirectoryLocalizedExtensionContainingAppName=_callDirectoryLocalizedExtensionContainingAppName;
@property(copy, nonatomic) NSString *callDirectoryLabel; // @synthesize callDirectoryLabel=_callDirectoryLabel;
@property(copy, nonatomic) NSString *contactLabel; // @synthesize contactLabel=_contactLabel;
@property(copy, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *mapName; // @synthesize mapName=_mapName;
@property(copy, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
@property(copy, nonatomic) NSString *suggestedName; // @synthesize suggestedName=_suggestedName;
@property(copy, nonatomic) NSPersonNameComponents *personNameComponents; // @synthesize personNameComponents=_personNameComponents;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000061430
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000060e9e
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000060bd2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000060bc7
- (unsigned long long)hash;	// IMP=0x0000000000060902
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006021c
- (id)displayContextByMergingWithDisplayContext:(id)arg1;	// IMP=0x0000000000060184
- (void)setFirstName:(id)arg1;	// IMP=0x00000000000600bd
@property(readonly, copy, nonatomic) NSString *firstName;
@property(copy, nonatomic) NSString *contactIdentifier;
- (id)init;	// IMP=0x000000000005fdbb

@end

