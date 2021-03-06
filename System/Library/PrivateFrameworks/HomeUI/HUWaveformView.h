//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <HomeUI/SUICFlamesViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, SUICFlamesView, UIColor, UILabel;

@interface HUWaveformView : UIView <SUICFlamesViewDelegate>
{
    UIColor *_waveformColor;	// 8 = 0x8
    NSMutableArray *_audioPowerLevels;	// 16 = 0x10
    UILabel *_timeLabel;	// 24 = 0x18
    double _minTimeLabelWidth;	// 32 = 0x20
    UIColor *_backgroundColor;	// 40 = 0x28
    NSMutableArray *_waveformSlices;	// 48 = 0x30
    SUICFlamesView *_flamesView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000148fba
@property(retain, nonatomic) SUICFlamesView *flamesView; // @synthesize flamesView=_flamesView;
@property(retain, nonatomic) NSMutableArray *waveformSlices; // @synthesize waveformSlices=_waveformSlices;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double minTimeLabelWidth; // @synthesize minTimeLabelWidth=_minTimeLabelWidth;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) NSMutableArray *audioPowerLevels; // @synthesize audioPowerLevels=_audioPowerLevels;
@property(retain, nonatomic) UIColor *waveformColor; // @synthesize waveformColor=_waveformColor;
- (float)audioLevelForFlamesView:(id)arg1;	// IMP=0x0000000000148e59
@property(readonly, nonatomic) NSArray *powerLevels;
- (void)clearPowerLevels;	// IMP=0x0000000000148daa
- (void)appendPowerLevel:(double)arg1;	// IMP=0x0000000000148d02
- (void)layoutSubviews;	// IMP=0x0000000000148bb0
- (id)initWithFrame:(struct CGRect)arg1 waveformColor:(id)arg2 backgroundColor:(id)arg3;	// IMP=0x0000000000148958

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

