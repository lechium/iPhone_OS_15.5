//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTKColoringLabel;

@interface NTKStopwatchRichComplicationBezelView
{
    NTKColoringLabel *_textLabel;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000021eb43
- (void)_updateTextProvider;	// IMP=0x000000000021ea55
- (void)updateMonochromeColor;	// IMP=0x000000000021ea4f
- (void)transitionToMonochromeWithFraction:(double)arg1;	// IMP=0x000000000021ea49
- (void)_editingDidEnd;	// IMP=0x000000000021ea2c
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;	// IMP=0x000000000021ea1a
- (void)_applyPausedUpdate;	// IMP=0x000000000021ea08
- (id)_createLabelViewWithFont:(id)arg1;	// IMP=0x000000000021e669
- (id)init;	// IMP=0x000000000021e5e9

@end
