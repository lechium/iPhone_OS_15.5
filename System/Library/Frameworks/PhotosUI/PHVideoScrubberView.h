//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosUI/PXVideoScrubberControllerDelegate-Protocol.h>
#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>
#import <PhotosUI/UIScrollViewDelegate-Protocol.h>

@class AVPlayer, NSString, PUPlayheadView, PXVideoScrubberController, UIImage, UIScrollView;
@protocol PHVideoScrubberFilmstripView, PHVideoScrubberFilmstripViewProvider, PHVideoScrubberViewInteractionDelegate;

@interface PHVideoScrubberView : UIView <PXVideoScrubberControllerDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    unsigned long long _previousPlayState;	// 8 = 0x8
    struct {
        _Bool didBeginTouching;
        _Bool didEndTouching;
        _Bool willBeginDragging;
        _Bool didEndDragging;
        _Bool willBeginDecelerating;
        _Bool didEndDecelerating;
    } _interactionDelegateRespondsTo;	// 16 = 0x10
    _Bool __needsUpdateFilmStripView;	// 22 = 0x16
    _Bool __needsUpdateVideoScrubberController;	// 23 = 0x17
    AVPlayer *_player;	// 24 = 0x18
    double _estimatedDuration;	// 32 = 0x20
    UIImage *_placeholderThumbnail;	// 40 = 0x28
    UIScrollView *_scrollView;	// 48 = 0x30
    id <PHVideoScrubberViewInteractionDelegate> _interactionDelegate;	// 56 = 0x38
    id <PHVideoScrubberFilmstripViewProvider> _filmstripViewProvider;	// 64 = 0x40
    UIView<PHVideoScrubberFilmstripView> *__filmStripView;	// 72 = 0x48
    PXVideoScrubberController *__videoScrubberController;	// 80 = 0x50
    PUPlayheadView *__playheadView;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000001840d
@property(retain, nonatomic, setter=_setPlayheadView:) PUPlayheadView *_playheadView; // @synthesize _playheadView=__playheadView;
@property(retain, nonatomic, setter=_setVideoScrubberController:) PXVideoScrubberController *_videoScrubberController; // @synthesize _videoScrubberController=__videoScrubberController;
@property(retain, nonatomic, setter=_setFilmStripView:) UIView<PHVideoScrubberFilmstripView> *_filmStripView; // @synthesize _filmStripView=__filmStripView;
@property(nonatomic, setter=_setNeedsUpdateVideoScrubberController:) _Bool _needsUpdateVideoScrubberController; // @synthesize _needsUpdateVideoScrubberController=__needsUpdateVideoScrubberController;
@property(nonatomic, setter=_setNeedsUpdateFilmStripView:) _Bool _needsUpdateFilmStripView; // @synthesize _needsUpdateFilmStripView=__needsUpdateFilmStripView;
@property(nonatomic) __weak id <PHVideoScrubberFilmstripViewProvider> filmstripViewProvider; // @synthesize filmstripViewProvider=_filmstripViewProvider;
@property(nonatomic) __weak id <PHVideoScrubberViewInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property(retain, nonatomic, setter=_setScrollView:) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImage *placeholderThumbnail; // @synthesize placeholderThumbnail=_placeholderThumbnail;
@property(nonatomic) double estimatedDuration; // @synthesize estimatedDuration=_estimatedDuration;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void)videoScrubberControllerDidUpdate:(id)arg1;	// IMP=0x000000000001824e
- (double)_lengthForDuration:(double)arg1;	// IMP=0x000000000001820b
- (double)videoScrubberController:(id)arg1 lengthForDuration:(double)arg2;	// IMP=0x00000000000181dd
- (void)_updatePlayheadFrame;	// IMP=0x0000000000017fe5
- (void)_updateScrollViewContentOffset;	// IMP=0x0000000000017f02
- (void)_updateVisibleRectOfFilmStripView;	// IMP=0x0000000000017e13
- (void)_updateIfNeeded;	// IMP=0x0000000000017d51
- (_Bool)_needsUpdate;	// IMP=0x0000000000017d18
- (void)_updateVideoscrubberControllerIfNeeded;	// IMP=0x0000000000017b47
- (void)_updateFilmStripViewIfNeeded;	// IMP=0x0000000000017873
- (void)_invalidateVideoScrubberController;	// IMP=0x0000000000017840
- (void)_invalidateFilmStripView;	// IMP=0x000000000001780d
- (void)_handleInteractionEndedAndTogglePlayState:(_Bool)arg1;	// IMP=0x000000000001775b
- (void)_handleInteractionBegan;	// IMP=0x00000000000176e4
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000000017667
- (void)scrollViewWillBeginDecelerating:(id)arg1;	// IMP=0x00000000000175eb
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0000000000017567
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000000000174eb
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000000173c7
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000000173bf
- (void)_handleLongPressGesture:(id)arg1;	// IMP=0x00000000000173aa
- (void)_handleTouchGesture:(id)arg1;	// IMP=0x0000000000017305
- (void)_handleTapGesture:(id)arg1;	// IMP=0x00000000000172ee
- (_Bool)_playerIsPlaying;	// IMP=0x00000000000172a3
- (_Bool)_isUserInteractingWithScrollView;	// IMP=0x0000000000017234
- (id)_currentVideoComposition;	// IMP=0x00000000000171ba
- (id)_currentAVAsset;	// IMP=0x0000000000017140
- (id)_scrollView;	// IMP=0x0000000000016d64
- (void)layoutSubviews;	// IMP=0x0000000000016acd
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001688c
- (void)dealloc;	// IMP=0x00000000000167e9
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000001679f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

