//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewLayoutInvalidationContext.h>

@interface GKGridLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext
{
    _Bool _invalidateIncrementalReveal;	// 8 = 0x8
    _Bool _invalidateBoundsChange;	// 9 = 0x9
    _Bool _invalidatePlaceholderVisibility;	// 10 = 0xa
    _Bool _invalidatePinnableAreas;	// 11 = 0xb
}

@property(nonatomic) _Bool invalidatePinnableAreas; // @synthesize invalidatePinnableAreas=_invalidatePinnableAreas;
@property(nonatomic) _Bool invalidatePlaceholderVisibility; // @synthesize invalidatePlaceholderVisibility=_invalidatePlaceholderVisibility;
@property(nonatomic) _Bool invalidateBoundsChange; // @synthesize invalidateBoundsChange=_invalidateBoundsChange;
@property(nonatomic) _Bool invalidateIncrementalReveal; // @synthesize invalidateIncrementalReveal=_invalidateIncrementalReveal;

@end

