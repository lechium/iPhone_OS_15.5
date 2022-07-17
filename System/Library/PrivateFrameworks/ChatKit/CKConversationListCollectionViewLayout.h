//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKConversationListCollectionViewController;

@interface CKConversationListCollectionViewLayout : NSObject
{
    CKConversationListCollectionViewController *_conversationListController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000009943a
@property(nonatomic) __weak CKConversationListCollectionViewController *conversationListController; // @synthesize conversationListController=_conversationListController;
- (double)_edgeToAvatarWidthForPinnedConversationLayoutStyle:(long long)arg1;	// IMP=0x000000000009934d
- (long long)_pinnedConversationViewLayoutStyleForCollectionViewSize:(struct CGSize)arg1;	// IMP=0x00000000000992da
- (void)updatePinnedConversationViewLayoutStyle;	// IMP=0x00000000000991da
- (long long)_numberOfItemsInSection:(unsigned long long)arg1;	// IMP=0x0000000000099166
- (double)pinnedConversationCellHeightForLayoutStyle:(long long)arg1 cellWidth:(double)arg2;	// IMP=0x0000000000098ffb
- (double)conversationCellHeight;	// IMP=0x0000000000098f0a
- (id)rowLayoutSectionForEnvironment:(id)arg1 withRowHeight:(double)arg2 usingEstimatedRowHeight:(_Bool)arg3 needsPinnedSectionSeparator:(_Bool)arg4;	// IMP=0x00000000000986e1
- (id)pinningOnboardingTitleLayoutSectionForEnvironment:(id)arg1;	// IMP=0x00000000000984e1
- (id)tipKitLayoutSectionForEnvironment:(id)arg1;	// IMP=0x00000000000982e1
- (id)_emptyLayoutSection;	// IMP=0x00000000000980fd
- (id)pinGridLayoutSectionForEnvironment:(id)arg1 withNumberOfItems:(long long)arg2;	// IMP=0x0000000000097eca
- (double)_totalVerticalRowSpacingForLayoutStyle:(long long)arg1;	// IMP=0x0000000000097eaf
- (double)_minimumEdgeToCellSpacingForLayoutStyle:(long long)arg1;	// IMP=0x0000000000097e94
- (long long)numberOfPinnedConversationColumnsForLayoutStyle:(long long)arg1;	// IMP=0x0000000000097e0e
- (double)widthForPinnedConversationCellInCollectionViewOfSize:(struct CGSize)arg1 numberOfItems:(long long)arg2;	// IMP=0x0000000000097c33
- (id)pinGridLayoutGroupForCollectionViewSize:(struct CGSize)arg1 numberOfItems:(long long)arg2;	// IMP=0x00000000000974fc
- (id)conversationListLayout;	// IMP=0x00000000000971a9
- (id)init;	// IMP=0x000000000009717a

@end
