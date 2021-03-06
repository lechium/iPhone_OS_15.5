//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TeaUI/TUBarCompressionAnimating-Protocol.h>

@class UIToolbar;

@interface TUToolbarDefaultCompressionAnimation : NSObject <TUBarCompressionAnimating>
{
    double _topOffset;	// 8 = 0x8
    UIToolbar *_toolbar;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000a903
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(readonly, nonatomic) double topOffset; // @synthesize topOffset=_topOffset;
- (void)reloadWithTraitCollection:(id)arg1;	// IMP=0x000000000000a68b
@property(readonly, nonatomic) _Bool shouldCloseGapOnScroll;
@property(readonly, nonatomic) _Bool shouldCompressAtTop;
- (double)minimumBarHeightForTraitCollection:(id)arg1;	// IMP=0x000000000000a672
- (double)maximumBarHeightForTraitCollection:(id)arg1;	// IMP=0x000000000000a5fc
- (void)scrollViewIsAtTop:(_Bool)arg1;	// IMP=0x000000000000a5f6
- (_Bool)animationShouldBeginForScrollView:(id)arg1 currentlyFullyCompressed:(_Bool)arg2;	// IMP=0x000000000000a5ee
- (void)updateWithPercentage:(double)arg1;	// IMP=0x000000000000a13b
- (void)prepareForUpdates;	// IMP=0x000000000000a135
- (id)initWithToolbar:(id)arg1;	// IMP=0x000000000000a0ca

@end

