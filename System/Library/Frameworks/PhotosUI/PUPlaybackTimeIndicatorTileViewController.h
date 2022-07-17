//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/PUBrowsingVideoPlayerChangeObserver-Protocol.h>
#import <PhotosUI/PUBrowsingVideoPlayerTimeObserver-Protocol.h>
#import <PhotosUI/PUBrowsingViewModelChangeObserver-Protocol.h>

@class NSDate, NSString, PUBrowsingVideoPlayer, PUBrowsingViewModel, PUPlaybackTimeLabel;
@protocol PUPlaybackTimeIndicatorTileViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUPlaybackTimeIndicatorTileViewController <PUBrowsingVideoPlayerTimeObserver, PUBrowsingVideoPlayerChangeObserver, PUBrowsingViewModelChangeObserver>
{
    struct {
        _Bool respondsToCanFlashIndicator;
    } _delegateFlags;	// 8 = 0x8
    _Bool __isIndicatorVisible;	// 9 = 0x9
    id <PUPlaybackTimeIndicatorTileViewControllerDelegate> _delegate;	// 16 = 0x10
    PUBrowsingVideoPlayer *_videoPlayer;	// 24 = 0x18
    PUBrowsingViewModel *_viewModel;	// 32 = 0x20
    PUPlaybackTimeLabel *__label;	// 40 = 0x28
    long long __indicatorFormat;	// 48 = 0x30
    NSDate *_forcedIndicatorVisibilityEndDate;	// 56 = 0x38
}

+ (struct CGSize)playbackTimeIndicatorTileSize;	// IMP=0x000000000037b24d
- (void).cxx_destruct;	// IMP=0x000000000037b150
@property(retain, nonatomic) NSDate *forcedIndicatorVisibilityEndDate; // @synthesize forcedIndicatorVisibilityEndDate=_forcedIndicatorVisibilityEndDate;
@property(nonatomic, setter=_setIndicatorVisible:) _Bool _isIndicatorVisible; // @synthesize _isIndicatorVisible=__isIndicatorVisible;
@property(nonatomic, setter=_setIndicatorFormat:) long long _indicatorFormat; // @synthesize _indicatorFormat=__indicatorFormat;
@property(readonly, nonatomic) PUPlaybackTimeLabel *_label; // @synthesize _label=__label;
@property(retain, nonatomic) PUBrowsingViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) PUBrowsingVideoPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(nonatomic) __weak id <PUPlaybackTimeIndicatorTileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_cancelFlashTimeIndicator;	// IMP=0x000000000037b0be
- (void)_flashTimeIndicator;	// IMP=0x000000000037b063
- (void)_handleViewModel:(id)arg1 change:(id)arg2;	// IMP=0x000000000037af10
- (void)_handleVideoPlayer:(id)arg1 change:(id)arg2;	// IMP=0x000000000037aeb5
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x000000000037adfe
- (void)videoPlayer:(id)arg1 desiredSeekTimeDidChange:(CDStruct_1b6d18a9)arg2;	// IMP=0x000000000037adec
- (void)videoPlayer:(id)arg1 currentTimeDidChange:(CDStruct_1b6d18a9)arg2;	// IMP=0x000000000037adda
- (void)_updateIndicatorDisplayStyle;	// IMP=0x000000000037ac42
- (void)_updateIndicatorValueWithTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000037ab6a
- (void)_setIndicatorVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000037a907
- (void)_setIndicatorFormat:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000037a855
- (void)becomeReusable;	// IMP=0x000000000037a5da
- (void)viewDidLoad;	// IMP=0x000000000037a45c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
