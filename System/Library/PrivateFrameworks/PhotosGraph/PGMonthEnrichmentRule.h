//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGHighlightItemEnrichmentRule-Protocol.h>

@class NSString, PGGraphMomentNodeCollection;
@protocol OS_os_log, PGHighlightItemModelReader;

@interface PGMonthEnrichmentRule : NSObject <PGHighlightItemEnrichmentRule>
{
    PGGraphMomentNodeCollection *_momentNodesAtWork;	// 8 = 0x8
    id <PGHighlightItemModelReader> _modelReader;	// 16 = 0x10
    NSObject<OS_os_log> *_loggingConnection;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000421fdb
@property(readonly, nonatomic) NSObject<OS_os_log> *loggingConnection; // @synthesize loggingConnection=_loggingConnection;
@property(readonly, nonatomic) id <PGHighlightItemModelReader> modelReader; // @synthesize modelReader=_modelReader;
- (id)sortedItemsByWeekOfMonthFromItems:(id)arg1 sortDescriptors:(id)arg2;	// IMP=0x0000000000421c2a
- (id)bestItemsFromSortedItemsByWeekOfMonth:(id)arg1 previouslySelectedItemsCountByWeek:(id)arg2 maximumNumberOfItems:(unsigned long long)arg3 sortDescriptors:(id)arg4;	// IMP=0x00000000004214e6
- (id)_momentNodesAtWorkWithGraph:(id)arg1;	// IMP=0x0000000000421429
- (void)enumerateChildVisibilityStateForHighlightItemList:(id)arg1 withGraph:(id)arg2 neighborScoreComputer:(id)arg3 usingBlock:(CDUnknownBlockType)arg4 maximumNumberOfVisibleItems:(unsigned long long)arg5 maximumNumberOfVisibleRegularItems:(unsigned long long)arg6;	// IMP=0x0000000000420216
- (void)enumerateChildVisibilityStateForHighlightItemList:(id)arg1 withGraph:(id)arg2 neighborScoreComputer:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000420137
- (id)_sampleAssets:(id)arg1 withSize:(unsigned long long)arg2;	// IMP=0x0000000000420021
- (id)curatedAssetsForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2;	// IMP=0x000000000041f645
- (id)fallbackKeyAssetWithHighlightItemList:(id)arg1;	// IMP=0x000000000041f320
- (id)firstKeyAssetWithHighlightItemList:(id)arg1;	// IMP=0x000000000041f0c5
- (id)keyAssetForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2;	// IMP=0x000000000041ef94
- (double)promotionScoreForHighlightItemList:(id)arg1;	// IMP=0x000000000041ee11
- (id)initWithModelReader:(id)arg1 loggingConnection:(id)arg2;	// IMP=0x000000000041ed78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
