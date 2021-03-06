//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSContactsSearchable-Protocol.h>

@class NSArray, NSPersonNameComponents, NSString;

@interface CLSOrganization <CLSContactsSearchable>
{
    NSString *_name;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    NSArray *_locationIDs;	// 24 = 0x18
    NSArray *_emailDomains;	// 32 = 0x20
    NSString *_searchText;	// 40 = 0x28
}

+ (id)_propertyNames;	// IMP=0x00000000000262d9
+ (long long)typeFromString:(id)arg1;	// IMP=0x0000000000026234
+ (id)stringForType:(long long)arg1;	// IMP=0x0000000000026209
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000025e85
- (void).cxx_destruct;	// IMP=0x0000000000026436
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(copy, nonatomic) NSArray *emailDomains; // @synthesize emailDomains=_emailDomains;
@property(copy, nonatomic) NSArray *locationIDs; // @synthesize locationIDs=_locationIDs;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *displayName;
- (id)dictionaryRepresentation;	// IMP=0x0000000000026079
- (void)mergeWithObject:(id)arg1;	// IMP=0x0000000000025e8d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000025d91
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000025bca
- (id)initWithOrganizationID:(id)arg1 type:(long long)arg2 name:(id)arg3;	// IMP=0x0000000000025aea
- (id)_init;	// IMP=0x0000000000025abb

// Remaining properties
@property(readonly, nonatomic) NSString *emailAddress;
@property(readonly, nonatomic) NSString *groupIdentifier;
@property(readonly, nonatomic) NSPersonNameComponents *nameComponents;

@end

