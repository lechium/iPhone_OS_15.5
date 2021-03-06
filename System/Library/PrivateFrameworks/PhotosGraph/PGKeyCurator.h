//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLSAssetsBeautifier, CLSSimilarStacker, PGCurationCriteriaFactory;

@interface PGKeyCurator : NSObject
{
    CLSAssetsBeautifier *_beautifier;	// 8 = 0x8
    CLSSimilarStacker *_similarStacker;	// 16 = 0x10
    PGCurationCriteriaFactory *_curationCriteriaFactory;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003ca047
- (id)bestItemInItems:(id)arg1 options:(id)arg2 criteria:(id)arg3 minimumCriteriaScore:(double)arg4;	// IMP=0x00000000003c9a44
- (_Bool)cluster:(id)arg1 isBetterThanCluster:(id)arg2 forMemories:(_Bool)arg3 allowGuestAsset:(_Bool)arg4;	// IMP=0x00000000003c991d
- (_Bool)cluster:(id)arg1 scoresBetterThanCluster:(id)arg2;	// IMP=0x00000000003c96ec
- (_Bool)scoreLevelOfCluster:(id)arg1 isAboveScoreLevelOfCluster:(id)arg2;	// IMP=0x00000000003c962c
- (id)clusterWithSubclusters:(id)arg1 keyItem:(id)arg2;	// IMP=0x00000000003c9437
- (_Bool)item:(id)arg1 passesCriteria:(id)arg2 score:(double *)arg3;	// IMP=0x00000000003c941f
- (id)_keyItemInItems:(id)arg1 options:(id)arg2 criteria:(id)arg3 debugInfo:(id)arg4 progressBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000003c83da
- (id)bestItemIdentifierWithItems:(id)arg1 options:(id)arg2 debugInfo:(out id *)arg3 criteria:(id)arg4 curationOptions:(id)arg5;	// IMP=0x00000000003c81ef
- (id)keyItemIdentifierWithItems:(id)arg1 options:(id)arg2 debugInfo:(out id *)arg3;	// IMP=0x00000000003c7f6d
- (id)keyItemInItems:(id)arg1 options:(id)arg2 criteria:(id)arg3 debugInfo:(id)arg4 progressBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000003c7527
- (id)keyItemWithFeeder:(id)arg1 options:(id)arg2 criteria:(id)arg3 debugInfo:(id)arg4 progressBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000003c7448
- (id)initWithCurationCriteriaFactory:(id)arg1;	// IMP=0x00000000003c7392

@end

