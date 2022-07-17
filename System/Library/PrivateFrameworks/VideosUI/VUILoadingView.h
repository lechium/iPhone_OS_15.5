//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, VUILabel;

__attribute__((visibility("hidden")))
@interface VUILoadingView : UIView
{
    double _delay;	// 8 = 0x8
    VUILabel *_loadingLabel;	// 16 = 0x10
    UIActivityIndicatorView *_indicatorView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000021413b
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) VUILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(nonatomic) double delay; // @synthesize delay=_delay;
- (void)layoutSubviews;	// IMP=0x0000000000213d04
- (void)startTimer;	// IMP=0x0000000000213c80
- (id)initWithFrame:(struct CGRect)arg1 loadingString:(id)arg2;	// IMP=0x0000000000213a2a

@end
