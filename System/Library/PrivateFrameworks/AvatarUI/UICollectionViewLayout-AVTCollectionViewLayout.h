//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewLayout.h>

#import <AvatarUI/AVTCollectionViewLayout-Protocol.h>

@interface UICollectionViewLayout (AVTCollectionViewLayout) <AVTCollectionViewLayout>
- (struct CGRect)finalFrameForDisappearingElementAtOriginForVisibleBounds:(struct CGRect)arg1;	// IMP=0x00000000000c8fa7
- (struct CGRect)initialFrameForAppearingElementAtOriginForVisibleBounds:(struct CGRect)arg1;	// IMP=0x00000000000c8f11
- (struct CGSize)contentSizeForVisibleBounds:(struct CGRect)arg1 numberOfItems:(long long)arg2;	// IMP=0x00000000000c8eff
- (struct CGPoint)centerForCenteringElementAtIndex:(long long)arg1 visibleBoundsSize:(struct CGSize)arg2 proposedOrigin:(struct CGPoint)arg3;	// IMP=0x00000000000c8e43
- (id)indexesForElementsInRect:(struct CGRect)arg1 visibleBounds:(struct CGRect)arg2 numberOfItems:(long long)arg3;	// IMP=0x00000000000c8bf1
- (struct CGRect)frameForElementAtIndex:(long long)arg1 visibleBounds:(struct CGRect)arg2;	// IMP=0x00000000000c8b59
@end

