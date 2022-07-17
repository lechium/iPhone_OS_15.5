//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSProgress, NSString, UILabel, UIProgressView;

__attribute__((visibility("hidden")))
@interface MapsProgressBarModalView : UIView
{
    UIView *_contentView;	// 8 = 0x8
    UIProgressView *_progressView;	// 16 = 0x10
    UILabel *_progressLabel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000066b06d
@property(retain, nonatomic) NSProgress *observedProgress;
@property(nonatomic) float progress;
@property(retain, nonatomic) NSString *progressTitle;
- (void)_commonInit;	// IMP=0x001000000066a67c
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000066a630
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000066a5d3

@end
