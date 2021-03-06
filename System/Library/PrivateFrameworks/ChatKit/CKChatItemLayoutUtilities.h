//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CKChatItemLayoutUtilities : NSObject
{
}

+ (id)tapbackLayoutAnchorForAcknowledgmentChatItem:(id)arg1;	// IMP=0x00000000003449c5
+ (id)tapbackSupplementaryItemForChatItem:(id)arg1 layoutEnvironment:(id)arg2;	// IMP=0x0000000000344610
+ (id)avatarSupplementaryItemForChatItem:(id)arg1 layoutEnvironment:(id)arg2;	// IMP=0x0000000000344410
+ (id)balloonEdgeSpacingForItemWithLayoutEnvironment:(id)arg1 orientation:(BOOL)arg2 itemSize:(struct CGSize)arg3 supplementaryItems:(id)arg4;	// IMP=0x0000000000343fd0
+ (id)layoutGroupForItem:(id)arg1;	// IMP=0x0000000000343e7c
+ (struct CGSize)sizeWithLayoutSize:(id)arg1;	// IMP=0x0000000000343d5e
+ (id)layoutSizeWithSize:(struct CGSize)arg1;	// IMP=0x0000000000343cbe
+ (_Bool)nextItemIsOriginatorWithRepliesForIndex:(unsigned long long)arg1 allDatasourceItems:(id)arg2;	// IMP=0x0000000000343bff
+ (_Bool)nextMessageIsReplyForIndex:(unsigned long long)arg1 allDatasourceItems:(id)arg2;	// IMP=0x0000000000343b2d
+ (_Bool)needsAdditionalBracketPaddingForChatItem:(id)arg1 prevChatItem:(id)arg2;	// IMP=0x0000000000343a83
+ (id)dynamicWidthLayoutSizeWithHeight:(double)arg1;	// IMP=0x00000000003439da
+ (id)transcriptBalloonVerticalLayoutSpacingWithTopSpacing:(double)arg1 bottomSpacing:(double)arg2 previousChatItem:(id)arg3;	// IMP=0x000000000034388d
+ (id)transcriptVerticalEdgeSpacingForChatItem:(id)arg1 previousChatItem:(id)arg2 topSpacing:(double)arg3 bottomSpacing:(double)arg4;	// IMP=0x000000000034374c
+ (double)adjustedTopSpacingForTextAlignmentInsetsWithSpacing:(double)arg1 chatItem:(id)arg2 previousChatItem:(id)arg3;	// IMP=0x0000000000343689
+ (double)adjustedBalloonTopSpacingWithSpacing:(double)arg1 previousChatItem:(id)arg2;	// IMP=0x00000000003435df

@end

