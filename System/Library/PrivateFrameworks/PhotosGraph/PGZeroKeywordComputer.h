//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PGCurationManager, PGSearchComputationCache, PHPhotoLibrary;

@interface PGZeroKeywordComputer : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    PGCurationManager *_curationManager;	// 16 = 0x10
    PGSearchComputationCache *_searchComputationCache;	// 24 = 0x18
}

+ (id)zeroKeywordLog;	// IMP=0x0000000000504704
+ (id)contextualHolidayZeroKeywordsWithGraph:(id)arg1 options:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000003446bc
- (void).cxx_destruct;	// IMP=0x0000000000501de9
@property(readonly, nonatomic) PGSearchComputationCache *searchComputationCache; // @synthesize searchComputationCache=_searchComputationCache;
- (id)densestCloseLocationNodeForNode:(id)arg1 locationMask:(unsigned long long)arg2 locationHelper:(id)arg3;	// IMP=0x00000000005018a2
- (id)meaningNodeZeroKeywordForDisplayMeaningNode:(id)arg1 collectionUUIDsToAvoid:(id)arg2 curationContext:(id)arg3;	// IMP=0x0000000000501520
- (id)_tripZeroKeywordWithGraph:(id)arg1 curationContext:(id)arg2 score:(out double *)arg3;	// IMP=0x0000000000500e61
- (id)tripRankedKeywordWithGraph:(id)arg1 curationContext:(id)arg2;	// IMP=0x0000000000500dee
- (id)tripZeroKeywordWithGraph:(id)arg1 curationContext:(id)arg2;	// IMP=0x0000000000500dd9
- (id)sceneZeroKeywordsWithGraph:(id)arg1 options:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000004ffbe3
- (id)eventZeroKeywordsWithGraph:(id)arg1 curationContext:(id)arg2 options:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000004fe786
- (id)locationZeroKeywordsWithGraph:(id)arg1 options:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000004fca9c
- (_Bool)_conflictBetweenLocationOrAreaNode:(id)arg1 andOtherLocationOrAreaNodes:(id)arg2;	// IMP=0x00000000004fc6d9
- (id)socialGroupKeywordsWithGraph:(id)arg1 curationContext:(id)arg2 options:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000004fb185
- (id)peopleZeroKeywordsWithGraph:(id)arg1 curationContext:(id)arg2 options:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000004f9954
- (id)_zeroKeywordsWithGraph:(id)arg1 curationContext:(id)arg2 options:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000004f8d16
- (id)zeroKeywordsWithGraph:(id)arg1 curationContext:(id)arg2 options:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000004f8b64
- (id)initWithPhotoLibrary:(id)arg1 curationManager:(id)arg2 searchComputationCache:(id)arg3;	// IMP=0x00000000004f8aad
- (id)_zeroKeywordDisplayMeaningNodeForMeaningNode:(id)arg1;	// IMP=0x0000000000342d4e
- (id)contextualDateZeroKeywordsWithGraph:(id)arg1 options:(id)arg2;	// IMP=0x0000000000342a1e
- (id)contextualMeaningAndTripZeroKeywordsWithGraph:(id)arg1 curationContext:(id)arg2 options:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000342018
- (id)contextualSceneZeroKeywordsWithGraph:(id)arg1 options:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000003415d6
- (id)contextualSeasonZeroKeywordsWithGraph:(id)arg1 curationContext:(id)arg2 options:(id)arg3;	// IMP=0x0000000000341291
- (id)_timeBasedContextualLocationNodeInGraph:(id)arg1 withDate:(id)arg2 locationHelper:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000033fa18
- (id)_locationBasedContextualLocationNodeInGraph:(id)arg1 withLocation:(id)arg2 date:(id)arg3 locationHelper:(id)arg4 progressBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000033daff
- (id)contextualLocationNodesWithGraph:(id)arg1 options:(id)arg2 locationHelper:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000033d6cc
- (id)contextualSocialGroupZeroKeywordsWithGraph:(id)arg1 options:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000033c7da
- (id)contextualPersonZeroKeywordsWithGraph:(id)arg1 options:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000033b6b0

@end

