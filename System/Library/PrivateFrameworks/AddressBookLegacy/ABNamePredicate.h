//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface ABNamePredicate
{
    void *_addressBook;	// 16 = 0x10
    void *_tokenizations;	// 24 = 0x18
    struct __CFArray *_tokenizationSortKeys;	// 32 = 0x20
    _Bool _matchWholeWords;	// 40 = 0x28
    _Bool _matchPersonOrCompanyNamesExclusively;	// 41 = 0x29
    _Bool _matchPreferredName;	// 42 = 0x2a
    _Bool _generateExceprts;	// 43 = 0x2b
    NSString *_name;	// 48 = 0x30
    NSArray *_sources;	// 56 = 0x38
    NSArray *_groups;	// 64 = 0x40
    NSArray *_scopedContactIdentifiers;	// 72 = 0x48
}

@property(retain, nonatomic) NSArray *scopedContactIdentifiers; // @synthesize scopedContactIdentifiers=_scopedContactIdentifiers;
@property(nonatomic) _Bool generateExceprts; // @synthesize generateExceprts=_generateExceprts;
@property(nonatomic) _Bool matchPreferredName; // @synthesize matchPreferredName=_matchPreferredName;
@property(nonatomic) _Bool matchPersonOrCompanyNamesExclusively; // @synthesize matchPersonOrCompanyNamesExclusively=_matchPersonOrCompanyNamesExclusively;
@property(nonatomic) _Bool matchWholeWords; // @synthesize matchWholeWords=_matchWholeWords;
@property(retain, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) NSArray *sources; // @synthesize sources=_sources;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)predicateFormat;	// IMP=0x00000000000379a6
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;	// IMP=0x00000000000378d3
- (void)ab_bindJoinClauseComponentOfStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;	// IMP=0x0000000000037221
- (id)queryRankStringForPredicateIdentifier:(int)arg1;	// IMP=0x00000000000371fd
- (id)queryWhereStringForPredicateIdentifier:(int)arg1;	// IMP=0x0000000000036f93
- (id)_personNonNameKeys;	// IMP=0x0000000000036e39
- (id)_personNameKeys;	// IMP=0x0000000000036d19
- (id)queryJoinsInCompound:(_Bool)arg1 predicateIdentifier:(int)arg2;	// IMP=0x00000000000369cc
- (id)_matchClauseForColumns:(id)arg1 requiringAllTerms:(_Bool)arg2;	// IMP=0x000000000003683c
- (id)querySelectPropertiesForPredicateIdentifier:(int)arg1;	// IMP=0x00000000000366dc
- (id)emphasizedExcerptStringForMatchString:(id)arg1;	// IMP=0x000000000003640a
- (id)ab_metadataForMatchingRow:(struct CPSqliteStatement *)arg1 columnOffset:(int)arg2;	// IMP=0x0000000000036264
- (_Bool)isValid;	// IMP=0x000000000003623a
- (void *)tokenizations;	// IMP=0x00000000000361a1
@property(copy, nonatomic) NSString *accountIdentifier;
@property(nonatomic) void *source;
@property(nonatomic) void *group;
@property(nonatomic) void *addressBook;
- (void)dealloc;	// IMP=0x0000000000035dc5
- (id)init;	// IMP=0x0000000000035d63

@end
