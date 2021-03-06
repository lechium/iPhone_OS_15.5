//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol WebBookmarkInMemoryChangeFilter;

@interface WebBookmarkListQuery : NSObject
{
    NSString *_query;	// 8 = 0x8
    NSString *_queryWithOrderBy;	// 16 = 0x10
    NSString *_orderBy;	// 24 = 0x18
    NSArray *_titleWordPrefixes;	// 32 = 0x20
    NSArray *_titleWordPrefixesForInMemoryFiltering;	// 40 = 0x28
    NSString *_urlFilter;	// 48 = 0x30
    _Bool _includeHidden;	// 56 = 0x38
    _Bool _countShouldUseNumChildrenIfPossible;	// 57 = 0x39
    _Bool _includeDescendantsAsChildren;	// 58 = 0x3a
    _Bool _customQuery;	// 59 = 0x3b
    int _folderID;	// 60 = 0x3c
    id <WebBookmarkInMemoryChangeFilter> _inMemoryFilter;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000004ce50
@property(retain, nonatomic) id <WebBookmarkInMemoryChangeFilter> inMemoryFilter; // @synthesize inMemoryFilter=_inMemoryFilter;
@property(readonly, nonatomic) int folderID; // @synthesize folderID=_folderID;
@property(readonly, nonatomic, getter=isCustomQuery) _Bool customQuery; // @synthesize customQuery=_customQuery;
- (void)_preparePrefixesFromNormalizedString:(id)arg1;	// IMP=0x000000000004ca90
- (id)_normalizeUserTypedString:(id)arg1;	// IMP=0x000000000004c9c0
- (id)bookmarksInCollection:(id)arg1 fromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;	// IMP=0x000000000004b9a7
- (id)_sqliteInConditionForInMemoryModifiedBookmarksInFolder:(int)arg1 collection:(id)arg2;	// IMP=0x000000000004b830
- (id)_sqliteNotInConditionForInMemoryModifiedAndDeleted:(_Bool)arg1 bookmarksInFolder:(int)arg2 collection:(id)arg3;	// IMP=0x000000000004b2ff
- (int)countInCollection:(id)arg1;	// IMP=0x000000000004aed4
- (id)_filterBookmarks:(id)arg1;	// IMP=0x000000000004a977
- (int)_inMemoryAddedChildrenCountForBookmarkFolder:(int)arg1 collection:(id)arg2 skipCountingBookmarksThatAreDeletedInMemory:(_Bool)arg3;	// IMP=0x000000000004a684
- (int)_childCountInDatabaseForFolderFetchInCollection:(id)arg1 skipCountingInDatabaseBookmarksThatAreDeletedInMemory:(_Bool)arg2 countShouldUseNumChildrenIfPossible:(_Bool)arg3;	// IMP=0x0000000000049dcf
- (int)_childCountInDatabaseForFolderFetchInCollection:(id)arg1 skipCountingInDatabaseBookmarksThatAreDeletedInMemory:(_Bool)arg2;	// IMP=0x0000000000049db7
- (long long)_listQueryType;	// IMP=0x0000000000049d9c
- (id)debugDescription;	// IMP=0x0000000000049ce4
- (id)initWithBookmarksWhere:(id)arg1 folderID:(int)arg2 orderBy:(id)arg3 usingFilter:(id)arg4;	// IMP=0x0000000000049991
- (id)initWithBookmarksWhere:(id)arg1 orderBy:(id)arg2 usingFilter:(id)arg3;	// IMP=0x0000000000049973
- (id)initWithFolderID:(int)arg1 inCollection:(id)arg2 usingFilter:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x00000000000496a2
- (id)init;	// IMP=0x0000000000049694

@end

