//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;

@interface CSTodayContentView
{
    _Bool _bouncing;	// 8 = 0x8
    UIView *_navigationView;	// 16 = 0x10
    UIView *_todayView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000cbf17
@property(nonatomic, getter=isBouncing) _Bool bouncing; // @synthesize bouncing=_bouncing;
@property(nonatomic) __weak UIView *todayView; // @synthesize todayView=_todayView;
@property(nonatomic) __weak UIView *navigationView; // @synthesize navigationView=_navigationView;
- (void)_resetContentAfterEdgeBounce;	// IMP=0x00000000000cbd5c
- (void)_adjustContentForEdgeBounce;	// IMP=0x00000000000cbb19
- (void)layoutSubviews;	// IMP=0x00000000000cbabf

@end
