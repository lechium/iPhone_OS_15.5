//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IMManualUpdater;

__attribute__((visibility("hidden")))
@interface CKAudioProgressView
{
    _Bool _playing;	// 8 = 0x8
    _Bool _played;	// 9 = 0x9
    BOOL _color;	// 10 = 0xa
    float _progress;	// 12 = 0xc
    IMManualUpdater *_displayUpdater;	// 16 = 0x10
}

+ (id)templateImageWithControlImage:(id)arg1;	// IMP=0x00000000004c6e83
+ (id)templateImageWithType:(unsigned char)arg1;	// IMP=0x00000000004c6bf5
+ (id)imageWithType:(unsigned char)arg1 color:(BOOL)arg2;	// IMP=0x00000000004c6a7f
+ (float)progressForTime:(double)arg1 duration:(double)arg2;	// IMP=0x00000000004c64fa
- (void).cxx_destruct;	// IMP=0x00000000004c7149
@property(retain, nonatomic) IMManualUpdater *displayUpdater; // @synthesize displayUpdater=_displayUpdater;
@property(nonatomic) BOOL color; // @synthesize color=_color;
@property(nonatomic, getter=isPlayed) _Bool played; // @synthesize played=_played;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void)setNeedsPrepareForDisplay;	// IMP=0x00000000004c6a42
- (void)prepareForDisplayIfNeeded;	// IMP=0x00000000004c6a05
- (void)prepareForDisplay;	// IMP=0x00000000004c6614
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000004c6499
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000004c63ef
- (_Bool)__im_ff_systemImageAdoptionEnabled;	// IMP=0x00000000004c63a4

@end
