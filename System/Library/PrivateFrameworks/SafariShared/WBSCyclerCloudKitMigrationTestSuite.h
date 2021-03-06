//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSCyclerTestSuite-Protocol.h>

@class NSString, WBSCyclerItemListRepresentation, WBSCyclerTestSuiteBookmarkAuxiliary;

@interface WBSCyclerCloudKitMigrationTestSuite : NSObject <WBSCyclerTestSuite>
{
    WBSCyclerTestSuiteBookmarkAuxiliary *_bookmarkAuxiliary;	// 8 = 0x8
    unsigned long long _bookmarksGeneratedPriorToMigration;	// 16 = 0x10
    WBSCyclerItemListRepresentation *_topLevelBookmarksPriorToMigration;	// 24 = 0x18
    _Bool _hasValidatedResultsOfPrimaryMigration;	// 32 = 0x20
    _Bool _finished;	// 33 = 0x21
}

+ (_Bool)setValue:(id)arg1 forConfigurationKey:(id)arg2;	// IMP=0x000000000006ae6f
- (void).cxx_destruct;	// IMP=0x000000000006b8dd
@property(readonly, nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
- (id)_descriptionForErrorCode:(long long)arg1;	// IMP=0x000000000006b8c7
- (id)_errorWithCode:(long long)arg1;	// IMP=0x000000000006b7e2
- (void)_validateResultsOfMigrationWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006b5f9
- (void)_migrateToCloudKitWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006b511
- (void)_fetchBookmarksPriorToMigrationWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006b343
- (void)_generateDAVServerIDsForExistingBookmarksWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006b1b2
- (void)_createRandomBookmarkWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006af42
- (void)runWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006ab36
- (id)init;	// IMP=0x000000000006aace

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

