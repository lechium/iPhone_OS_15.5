//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

@interface PKPerformActionLoadingView : UIView
{
    UIActivityIndicatorView *_spinner;	// 8 = 0x8
    UILabel *_loadingLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000013f5ee
@property(readonly, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(readonly, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
- (void)layoutSubviews;	// IMP=0x000000000013f483
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000013f2bb

@end

