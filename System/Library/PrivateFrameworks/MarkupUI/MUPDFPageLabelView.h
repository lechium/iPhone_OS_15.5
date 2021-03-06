//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSTimer, UIBlurEffect, UILabel, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface MUPDFPageLabelView : UIView
{
    UILabel *_label;	// 8 = 0x8
    UIVisualEffectView *_blurView;	// 16 = 0x10
    UIBlurEffect *_blurEffect;	// 24 = 0x18
    NSTimer *_timer;	// 32 = 0x20
    unsigned long long currentPageIndex;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000248d6
@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex;
- (void)fadeOut;	// IMP=0x0000000000024789
- (void)showNowInSuperView:(id)arg1 withText:(id)arg2;	// IMP=0x000000000002460a
- (double)_fadeOutDuration;	// IMP=0x00000000000245fc
- (double)_fadeOutDelay;	// IMP=0x00000000000245ee
@property(readonly, nonatomic, getter=isTimerInstalled) _Bool timerInstalled;
- (void)setText:(id)arg1;	// IMP=0x00000000000245a0
- (void)dealloc;	// IMP=0x0000000000024562
- (void)clearTimer;	// IMP=0x000000000002452a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000023e3c

@end

