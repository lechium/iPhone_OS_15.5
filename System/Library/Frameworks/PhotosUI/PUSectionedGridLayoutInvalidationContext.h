//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewLayoutInvalidationContext.h>

__attribute__((visibility("hidden")))
@interface PUSectionedGridLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext
{
    _Bool _invalidateForVerticalScroll;	// 8 = 0x8
    _Bool _sectioningIsPreserved;	// 9 = 0x9
    _Bool _samplingIsPreserved;	// 10 = 0xa
    _Bool _invalidationHasBeenRedispatched;	// 11 = 0xb
}

@property(nonatomic) _Bool invalidationHasBeenRedispatched; // @synthesize invalidationHasBeenRedispatched=_invalidationHasBeenRedispatched;
@property(nonatomic) _Bool samplingIsPreserved; // @synthesize samplingIsPreserved=_samplingIsPreserved;
@property(nonatomic) _Bool sectioningIsPreserved; // @synthesize sectioningIsPreserved=_sectioningIsPreserved;
@property(nonatomic) _Bool invalidateForVerticalScroll; // @synthesize invalidateForVerticalScroll=_invalidateForVerticalScroll;
- (id)description;	// IMP=0x00000000003fa7c7

@end
