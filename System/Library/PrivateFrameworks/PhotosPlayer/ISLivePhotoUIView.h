//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosPlayer/ISChangeObserver-Protocol.h>
#import <PhotosPlayer/UIGestureRecognizerDelegate-Protocol.h>

@class CAMeshTransform, ISLivePhotoPlayer, ISTouchLivePhotoPlaybackFilter, NSString, UIGestureRecognizer, UIImpactFeedbackGenerator, UILabel;
@protocol ISLivePhotoUIViewDelegate;

@interface ISLivePhotoUIView <UIGestureRecognizerDelegate, ISChangeObserver>
{
    UIImpactFeedbackGenerator *_feedbackGenerator;	// 8 = 0x8
    struct {
        _Bool canBeginInteractivePlayback;
    } _delegateRespondsTo;	// 16 = 0x10
    _Bool __playingVitality;	// 17 = 0x11
    UIGestureRecognizer *_playbackGestureRecognizer;	// 24 = 0x18
    CAMeshTransform *_vitalityTransform;	// 32 = 0x20
    id <ISLivePhotoUIViewDelegate> _delegate;	// 40 = 0x28
    ISTouchLivePhotoPlaybackFilter *__playbackFilter;	// 48 = 0x30
    UILabel *__overlayLabel;	// 56 = 0x38
    long long __overlayDismissalID;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000012093
@property(nonatomic, setter=_setOverlayDismissalID:) long long _overlayDismissalID; // @synthesize _overlayDismissalID=__overlayDismissalID;
@property(readonly, nonatomic) UILabel *_overlayLabel; // @synthesize _overlayLabel=__overlayLabel;
@property(nonatomic, setter=_setPlayingVitality:) _Bool _playingVitality; // @synthesize _playingVitality=__playingVitality;
@property(retain, nonatomic, setter=_setPlaybackFilter:) ISTouchLivePhotoPlaybackFilter *_playbackFilter; // @synthesize _playbackFilter=__playbackFilter;
@property(nonatomic) __weak id <ISLivePhotoUIViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CAMeshTransform *vitalityTransform; // @synthesize vitalityTransform=_vitalityTransform;
@property(readonly, nonatomic) UIGestureRecognizer *playbackGestureRecognizer; // @synthesize playbackGestureRecognizer=_playbackGestureRecognizer;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000011f54
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000011ef2
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000011eea
- (void)_updateGestureRecognizerParameters;	// IMP=0x0000000000011e41
- (void)_playerDidChangeHinting;	// IMP=0x0000000000011dcd
- (void)_playerDidChangePlaybackStyle;	// IMP=0x0000000000011d53
- (void)_dismissOverlayLabel:(long long)arg1;	// IMP=0x0000000000011cda
- (void)_showOverlayLabel;	// IMP=0x00000000000118ba
- (void)_updatePlaybackFilter;	// IMP=0x00000000000117e0
- (void)contentDidChange;	// IMP=0x00000000000117b1
- (void)audioSessionDidChange;	// IMP=0x0000000000011770
- (void)_updateVideoTransform;	// IMP=0x000000000001163b
- (void)_updatePlaybackFilterInput;	// IMP=0x00000000000114d3
- (void)_handlePlaybackRecognizer:(id)arg1;	// IMP=0x00000000000114c1
- (void)_ISLivePhotoUIViewCommonInitialization;	// IMP=0x0000000000011372
- (id)livePhotoPlayer;	// IMP=0x00000000000112f0
@property(retain, nonatomic) ISLivePhotoPlayer *player; // @dynamic player;
- (void)dealloc;	// IMP=0x00000000000110bc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000011070
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000011013

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

