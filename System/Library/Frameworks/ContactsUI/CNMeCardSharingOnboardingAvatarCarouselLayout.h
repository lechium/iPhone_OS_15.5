//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewFlowLayout.h>

__attribute__((visibility("hidden")))
@interface CNMeCardSharingOnboardingAvatarCarouselLayout : UICollectionViewFlowLayout
{
}

+ (id)indexPathForNearestItemToCenterWithOffset:(struct CGPoint)arg1 collectionView:(id)arg2 layout:(id)arg3;	// IMP=0x00000000000b8dda
- (id)indexesForElementsInRect:(struct CGRect)arg1 visibleBounds:(struct CGRect)arg2 numberOfItems:(long long)arg3;	// IMP=0x00000000000b8b88
- (struct CGRect)frameForElementAtIndex:(long long)arg1 visibleBounds:(struct CGRect)arg2;	// IMP=0x00000000000b8af0
- (double)pageOffsetForIndex:(long long)arg1;	// IMP=0x00000000000b89d9
- (long long)selectedPageIndex;	// IMP=0x00000000000b8911
- (double)pagingOrigin;	// IMP=0x00000000000b8870
- (double)pagingLength;	// IMP=0x00000000000b86a5

@end
