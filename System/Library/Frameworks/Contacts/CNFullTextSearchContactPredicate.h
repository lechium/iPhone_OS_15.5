//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNSuggestedContactPredicate-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNFullTextSearchContactPredicate <CNSuggestedContactPredicate>
{
    NSString *_searchString;	// 24 = 0x18
    NSArray *_containerIdentifiers;	// 32 = 0x20
    NSArray *_groupIdentifiers;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000286b9
- (void).cxx_destruct;	// IMP=0x0000000000028c1c
@property(readonly, copy, nonatomic) NSArray *groupIdentifiers; // @synthesize groupIdentifiers=_groupIdentifiers;
@property(readonly, copy, nonatomic) NSArray *containerIdentifiers; // @synthesize containerIdentifiers=_containerIdentifiers;
@property(readonly, copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000289e4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000287cb
- (id)initWithSearchString:(id)arg1 containerIdentifiers:(id)arg2 groupIdentifiers:(id)arg3;	// IMP=0x00000000000286c1
- (id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(_Bool)arg2 service:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000b26d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
