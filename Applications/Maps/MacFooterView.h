//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIButton;
@protocol MacFooterViewDelegate;

__attribute__((visibility("hidden")))
@interface MacFooterView : UIView
{
    NSArray *_actionButtons;	// 8 = 0x8
    _Bool _rightButtonEnabled;	// 16 = 0x10
    id <MacFooterViewDelegate> _delegate;	// 24 = 0x18
    UIButton *_rightButton;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000060d418
@property(nonatomic) _Bool rightButtonEnabled; // @synthesize rightButtonEnabled=_rightButtonEnabled;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(nonatomic) __weak id <MacFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)submissionFinishedWithError:(id)arg1;	// IMP=0x001000000060d1a9
- (void)willBeginSubmissionWithProgress:(id)arg1;	// IMP=0x001000000060d077
- (void)_backButtonTapped:(id)arg1;	// IMP=0x001000000060d02b
- (void)_rightButtonTapped:(id)arg1;	// IMP=0x001000000060cfdf
- (void)_leftButtonTapped:(id)arg1;	// IMP=0x001000000060cf93
- (id)_basicButtonSetupAddedToContentView:(id)arg1;	// IMP=0x001000000060cf0d
- (id)initWithNoBlurRightSideButtonsOfType:(long long)arg1;	// IMP=0x001000000060c5d2
- (id)initWithRightButtonType:(long long)arg1;	// IMP=0x001000000060b80c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
