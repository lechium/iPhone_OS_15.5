//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKTimeView-Protocol.h>

@class CLKDevice, NSString, NTKDigitalTimeLabel;

@interface NTKExtraLargeTimeView : UIView <NTKTimeView>
{
    CLKDevice *_device;	// 8 = 0x8
    _Bool _statusBarVisible;	// 16 = 0x10
    _Bool _frozen;	// 17 = 0x11
    NTKDigitalTimeLabel *_timeHourView;	// 24 = 0x18
    NTKDigitalTimeLabel *_timeMinuteView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000072786
@property(retain, nonatomic) NTKDigitalTimeLabel *timeMinuteView; // @synthesize timeMinuteView=_timeMinuteView;
@property(retain, nonatomic) NTKDigitalTimeLabel *timeHourView; // @synthesize timeHourView=_timeHourView;
@property(nonatomic, getter=isFrozen) _Bool frozen; // @synthesize frozen=_frozen;
- (void)setTimeOffset:(double)arg1;	// IMP=0x0000000000072681
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;	// IMP=0x00000000000725ce
- (void)setStatusBarVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000007250e
- (void)performWristRaiseAnimation;	// IMP=0x0000000000072508
- (void)cancelWristRaiseAnimation;	// IMP=0x0000000000072502
- (void)prepareWristRaiseAnimation;	// IMP=0x00000000000724fc
- (void)_configureTimeLabelsFont;	// IMP=0x000000000007242a
- (void)setBottomColor:(id)arg1;	// IMP=0x000000000007240d
- (void)setTopColor:(id)arg1;	// IMP=0x00000000000723f0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000007231b
- (void)layoutSubviews;	// IMP=0x0000000000071f66
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;	// IMP=0x0000000000071d7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

