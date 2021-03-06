//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStoryFeedItemLayoutFactory-Protocol.h>

@class NSString;

@interface PXStoryMemoryFeedItemLayoutFactory : NSObject <PXStoryFeedItemLayoutFactory>
{
    long long layoutKind;	// 8 = 0x8
}

@property(nonatomic) long long layoutKind; // @synthesize layoutKind;
- (void)collectTapToRadarDiagnosticsForItemLayout:(id)arg1 indexPath:(struct PXSimpleIndexPath)arg2 intoContainer:(id)arg3;	// IMP=0x00000000003746a0
- (id)itemPlacementControllerForItemReference:(id)arg1 itemLayout:(id)arg2;	// IMP=0x000000000037462f
- (_Bool)shouldReloadItemLayout:(id)arg1 forChangedItemFromIndexPath:(struct PXSimpleIndexPath)arg2 inDataSource:(id)arg3 toIndexPath:(struct PXSimpleIndexPath)arg4 inDataSource:(id)arg5;	// IMP=0x00000000003741f6
- (void)setItemLayout:(id)arg1 isTouched:(_Bool)arg2;	// IMP=0x0000000000374175
- (void)setItemLayout:(id)arg1 shouldAutoplayContent:(_Bool)arg2 videoTimeRange:(CDStruct_e83c9415)arg3;	// IMP=0x00000000003740dc
- (id)createLayoutForFeedItemAtIndexPath:(struct PXSimpleIndexPath)arg1 inDataSource:(id)arg2 viewModel:(id)arg3 initialReferenceSize:(struct CGSize)arg4 thumbnailAsset:(out id *)arg5;	// IMP=0x0000000000373cec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

