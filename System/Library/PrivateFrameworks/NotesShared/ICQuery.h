//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICQueryObjC, NSArray, NSPredicate, NSString;

@interface ICQuery : NSObject
{
}

+ (id)queryForPinnedNotes:(_Bool)arg1 allowsRecentlyDeleted:(_Bool)arg2;	// IMP=0x000000000003604a
+ (id)queryForNotesWithSystemPaperAllowsRecentlyDeleted:(_Bool)arg1;	// IMP=0x0000000000036031
+ (id)queryForNotesWithTagIdentifiers:(id)arg1 allowsRecentlyDeleted:(_Bool)arg2;	// IMP=0x0000000000036018
+ (id)queryForNotesWithTagIdentifier:(id)arg1 allowsRecentlyDeleted:(_Bool)arg2;	// IMP=0x0000000000035fff
+ (id)queryForAllTaggedNotesAllowsRecentlyDeleted:(_Bool)arg1;	// IMP=0x0000000000035fe6
- (id)removingTagIdentifier:(id)arg1;	// IMP=0x00000000000360ff
- (id)replacingTagIdentifier:(id)arg1 withNewTagIdentifier:(id)arg2;	// IMP=0x0000000000036063
@property(readonly, nonatomic) NSArray *tagIdentifiers;
@property(readonly, copy, nonatomic) NSPredicate *predicate;
@property(readonly, copy, nonatomic) NSString *entityName;
@property(readonly, nonatomic) _Bool canBeEdited;
@property(readonly) ICQueryObjC *queryObjC;

@end
