//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSupport/NSSecureCoding-Protocol.h>

@class CNContact, CNLabeledValue, NSString;

@interface MSPSharedTripContact : NSObject <NSSecureCoding>
{
    NSString *_displayName;	// 8 = 0x8
    NSString *_originalHandle;	// 16 = 0x10
    CNContact *_contact;	// 24 = 0x18
    CNLabeledValue *_labeledValue;	// 32 = 0x20
}

+ (id)contactsFromCNContact:(id)arg1 andIdentifiers:(id)arg2;	// IMP=0x000000000003f2b4
+ (void)setAdditionalKeyDescriptorsForContactFetching:(id)arg1;	// IMP=0x000000000003f1d4
+ (id)contactsFromIDSHandles:(id)arg1;	// IMP=0x000000000003f168
+ (id)contactsFromHandles:(id)arg1;	// IMP=0x000000000003ef37
+ (id)contactsFromCNContact:(id)arg1;	// IMP=0x000000000003ebe2
+ (id)contactsFromCNContact:(id)arg1 matchingHandles:(id)arg2;	// IMP=0x000000000003e550
+ (id)_propertiesForFetching;	// IMP=0x000000000003d628
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003d2d5
- (void).cxx_destruct;	// IMP=0x000000000003f2fc
@property(retain, nonatomic) CNLabeledValue *labeledValue; // @synthesize labeledValue=_labeledValue;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) _Bool isPhoneNumber;
@property(readonly, nonatomic) NSString *handleForIDS;
- (id)_stringValue;	// IMP=0x000000000003e26b
@property(readonly, nonatomic) NSString *stringValue;
- (id)initWithContact:(id)arg1 labeledValue:(id)arg2;	// IMP=0x000000000003e160
- (id)initWithContact:(id)arg1 handle:(id)arg2;	// IMP=0x000000000003dfb9
- (id)initWithContactHandle:(id)arg1;	// IMP=0x000000000003dd05
- (void)_populateFromContactUsingHandle:(id)arg1;	// IMP=0x000000000003d8c7
- (id)description;	// IMP=0x000000000003d4f9
- (unsigned long long)hash;	// IMP=0x000000000003d4b5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003d37d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003d300
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003d2dd

@end

