//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIViewServiceDummyPopoverBackgroundView
{
    double arrowOffset;	// 120 = 0x78
    unsigned long long arrowDirection;	// 128 = 0x80
}

+ (_Bool)wantsDefaultContentAppearance;	// IMP=0x000000000115a486
+ (struct UIEdgeInsets)contentViewInsets;	// IMP=0x000000000115a473
+ (double)arrowBase;	// IMP=0x000000000115a46a
+ (double)arrowHeight;	// IMP=0x000000000115a461
- (void)setArrowDirection:(unsigned long long)arg1;	// IMP=0x000000000115a4eb
- (unsigned long long)arrowDirection;	// IMP=0x000000000115a4da
- (void)setArrowOffset:(double)arg1;	// IMP=0x000000000115a4c8
- (double)arrowOffset;	// IMP=0x000000000115a4b6
- (struct CGSize)_shadowOffset;	// IMP=0x000000000115a4a0
- (double)_shadowRadius;	// IMP=0x000000000115a497
- (double)_shadowOpacity;	// IMP=0x000000000115a48e

@end

