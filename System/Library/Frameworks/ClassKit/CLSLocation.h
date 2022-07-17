//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSContactsSearchable-Protocol.h>

@class NSPersonNameComponents, NSString;

@interface CLSLocation <CLSContactsSearchable>
{
    _Bool _isEditable;	// 8 = 0x8
    NSString *_locationName;	// 16 = 0x10
    NSString *_searchText;	// 24 = 0x18
    long long _sourceType;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004da2e
- (void).cxx_destruct;	// IMP=0x000000000004dc0e
@property _Bool isEditable; // @synthesize isEditable=_isEditable;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(copy, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;
- (id)dictionaryRepresentation;	// IMP=0x000000000004da4b
@property(readonly, nonatomic) NSString *displayName;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004d951
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004d821
- (id)initWithLocationID:(id)arg1 name:(id)arg2;	// IMP=0x000000000004d785
- (id)_init;	// IMP=0x000000000004d756

// Remaining properties
@property(readonly, nonatomic) NSString *emailAddress;
@property(readonly, nonatomic) NSString *groupIdentifier;
@property(readonly, nonatomic) NSPersonNameComponents *nameComponents;

@end
