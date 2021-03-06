//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class HKCurrentTimeChevronButton, NSString, UIButton;
@protocol HKCurrentTimeViewDelegate;

@interface HKCurrentTimeView : UIView
{
    UIButton *_currentTimeButton;	// 8 = 0x8
    HKCurrentTimeChevronButton *_previousTimeIndexButton;	// 16 = 0x10
    HKCurrentTimeChevronButton *_nextTimeIndexButton;	// 24 = 0x18
    _Bool _disableControls;	// 32 = 0x20
    _Bool _currentTimeButtonEnabled;	// 33 = 0x21
    _Bool _omitPrevNextButtons;	// 34 = 0x22
    NSString *_currentTimeString;	// 40 = 0x28
    id <HKCurrentTimeViewDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000094aeb
@property(nonatomic) _Bool omitPrevNextButtons; // @synthesize omitPrevNextButtons=_omitPrevNextButtons;
@property(nonatomic) _Bool currentTimeButtonEnabled; // @synthesize currentTimeButtonEnabled=_currentTimeButtonEnabled;
@property(nonatomic) _Bool disableControls; // @synthesize disableControls=_disableControls;
@property(nonatomic) __weak id <HKCurrentTimeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *currentTimeString; // @synthesize currentTimeString=_currentTimeString;
- (void)_handleContentSizeCategoryDidChange;	// IMP=0x0000000000094a02
- (double)_backgroundAlpha:(_Bool)arg1;	// IMP=0x00000000000949e6
- (double)_foregroundAlpha:(_Bool)arg1;	// IMP=0x00000000000949ca
- (id)_backgroundColor:(_Bool)arg1;	// IMP=0x000000000009495c
- (id)_foregroundColor:(_Bool)arg1;	// IMP=0x00000000000948ee
- (id)_labelColor:(_Bool)arg1;	// IMP=0x00000000000948b2
- (id)_tintColor:(_Bool)arg1;	// IMP=0x0000000000094876
- (id)_colorIfForeground:(_Bool)arg1 enabled:(_Bool)arg2;	// IMP=0x0000000000094842
- (double)_currentTimeButtonBaselineToBottom;	// IMP=0x00000000000947ea
- (double)_currentTimeButtonBaselineToTop;	// IMP=0x0000000000094792
- (id)_currentTimeButtonFont;	// IMP=0x000000000009476a
- (void)nextTimeIndexButtonTapped:(id)arg1;	// IMP=0x000000000009471e
- (void)previousTimeIndexButtonTapped:(id)arg1;	// IMP=0x00000000000946d2
- (void)currentTimeButtonTapped:(id)arg1;	// IMP=0x0000000000094686
@property(nonatomic) _Bool nextTimeButtonEnabled;
@property(nonatomic) _Bool previousTimeButtonEnabled;
- (void)setupViewWithWideHorizontalMargin:(_Bool)arg1;	// IMP=0x0000000000093a7a
- (void)dealloc;	// IMP=0x0000000000093a05
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000939d6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000939bf
- (id)initWithWideHorizontalMargin:(_Bool)arg1;	// IMP=0x0000000000093902

@end

