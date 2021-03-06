//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSContactsSearchable-Protocol.h>
#import <ClassKit/CLSRelationable-Protocol.h>

@class NSArray, NSPersonNameComponents, NSString;

@interface CLSClass <CLSRelationable, CLSContactsSearchable>
{
    _Bool _isEditable;	// 8 = 0x8
    NSString *_className;	// 16 = 0x10
    long long _source;	// 24 = 0x18
    NSString *_iconID;	// 32 = 0x20
    NSString *_locationID;	// 40 = 0x28
    long long _originatingSource;	// 48 = 0x30
    NSString *_customClassName;	// 56 = 0x38
    NSString *_tempObjectID;	// 64 = 0x40
    NSString *_searchText;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000061f5
+ (id)relations;	// IMP=0x00000000000361ac
- (void).cxx_destruct;	// IMP=0x0000000000006cf1
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(copy, nonatomic) NSString *tempObjectID; // @synthesize tempObjectID=_tempObjectID;
@property _Bool isEditable; // @synthesize isEditable=_isEditable;
@property(copy, nonatomic) NSString *customClassName; // @synthesize customClassName=_customClassName;
@property(nonatomic) long long originatingSource; // @synthesize originatingSource=_originatingSource;
@property(copy, nonatomic) NSString *locationID; // @synthesize locationID=_locationID;
@property(copy, nonatomic) NSString *iconID; // @synthesize iconID=_iconID;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *className; // @synthesize className=_className;
- (void)removePerson:(id)arg1 withRole:(unsigned long long)arg2;	// IMP=0x00000000000067fa
- (void)addPerson:(id)arg1 withRole:(unsigned long long)arg2;	// IMP=0x0000000000006721
- (id)dictionaryRepresentation;	// IMP=0x0000000000006584
@property(readonly, copy) NSString *description;
- (void)setDisplayName:(id)arg1;	// IMP=0x00000000000062b9
@property(readonly, nonatomic) NSString *groupIdentifier;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSArray *classMembers;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000060c3
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000005efc
- (void)mergeWithObject:(id)arg1;	// IMP=0x0000000000005bb1
- (_Bool)validateObject:(id *)arg1;	// IMP=0x0000000000005a4a
- (id)initWithLocation:(id)arg1 customName:(id)arg2;	// IMP=0x0000000000005978
- (id)_init;	// IMP=0x000000000000592c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSString *emailAddress;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSPersonNameComponents *nameComponents;
@property(readonly) Class superclass;

@end

