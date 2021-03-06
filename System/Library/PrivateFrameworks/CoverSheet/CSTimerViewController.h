//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTTimerManager, NSDate, NSTimer;
@protocol CSTimerViewControllerDelegate;

@interface CSTimerViewController
{
    _Bool _enabled;	// 8 = 0x8
    NSTimer *_updateTimer;	// 16 = 0x10
    NSDate *_endDate;	// 24 = 0x18
    MTTimerManager *_timerManager;	// 32 = 0x20
    id <CSTimerViewControllerDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000ea993
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <CSTimerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateNextTimer;	// IMP=0x00000000000ea6f4
- (void)_nextTimerChanged:(id)arg1;	// IMP=0x00000000000ea638
- (void)_updateTimerLabelView;	// IMP=0x00000000000ea5b7
- (void)_updateTimerFired;	// IMP=0x00000000000ea4e9
- (void)_startTimer;	// IMP=0x00000000000ea292
- (void)_stopTimerNotifyingDelegate:(_Bool)arg1;	// IMP=0x00000000000ea179
- (void)_stopTimer;	// IMP=0x00000000000ea162
- (_Bool)isEndDateValid;	// IMP=0x00000000000ea130
- (id)timerView;	// IMP=0x00000000000ea11e
- (void)setEndDate:(id)arg1;	// IMP=0x00000000000ea06b
- (_Bool)isTimerActive;	// IMP=0x00000000000ea04e
- (void)loadView;	// IMP=0x00000000000e9fe2
- (void)dealloc;	// IMP=0x00000000000e9f60
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000e9e99

@end

