//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSDate, NSSet;

@interface PPFuzzyContactQuery : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _onlyAddressBook;	// 8 = 0x8
    NSSet *_sourceBundleIds;	// 16 = 0x10
    NSDate *_startDate;	// 24 = 0x18
    NSDate *_endDate;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000bd2d
- (void).cxx_destruct;	// IMP=0x000000000000bcfa
@property(nonatomic) _Bool onlyAddressBook; // @synthesize onlyAddressBook=_onlyAddressBook;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSSet *sourceBundleIds; // @synthesize sourceBundleIds=_sourceBundleIds;
- (_Bool)isEqualToFuzzyContactQuery:(id)arg1;	// IMP=0x000000000000bb8a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000bb22
- (id)description;	// IMP=0x000000000000bad3
- (unsigned long long)hash;	// IMP=0x000000000000ba30
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000b9a8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000b643
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000b582

@end
