//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface CPSNavigationAlertProgressView : UIView
{
    _Bool _hasStartedAnimating;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    UIView *_progressView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006a56b
@property(nonatomic) _Bool hasStartedAnimating; // @synthesize hasStartedAnimating=_hasStartedAnimating;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)startAnimating;	// IMP=0x000000000006a258
- (id)initWithFrame:(struct CGRect)arg1 duration:(double)arg2;	// IMP=0x000000000006a1b1

@end
