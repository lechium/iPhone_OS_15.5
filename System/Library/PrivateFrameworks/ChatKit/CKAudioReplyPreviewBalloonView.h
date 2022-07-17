//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKWaveformProgressView;

@interface CKAudioReplyPreviewBalloonView
{
    double _duration;	// 8 = 0x8
    long long _waveformContentMode;	// 16 = 0x10
    CKWaveformProgressView *_waveformProgressView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003144ec
@property(retain, nonatomic) CKWaveformProgressView *waveformProgressView; // @synthesize waveformProgressView=_waveformProgressView;
@property(nonatomic) long long waveformContentMode; // @synthesize waveformContentMode=_waveformContentMode;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)setWaveform:(id)arg1;	// IMP=0x0000000000314308
- (void)prepareForDisplay;	// IMP=0x00000000003141ce
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;	// IMP=0x0000000000313f1e
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x0000000000313d59
- (void)layoutSubviews;	// IMP=0x0000000000313b5a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003139ea
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;	// IMP=0x000000000008fc59
- (void)configureForComposition:(id)arg1;	// IMP=0x00000000000ac6ee
- (void)configureForMessagePart:(id)arg1;	// IMP=0x000000000037ca9d

@end
