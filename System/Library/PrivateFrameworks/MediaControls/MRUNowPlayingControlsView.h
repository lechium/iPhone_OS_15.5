//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MRUNowPlayingHeaderView, MRUNowPlayingTimeControlsView, MRUNowPlayingTransportControlsView, MRUNowPlayingVolumeControlsView, MRUVisualStylingProvider;

__attribute__((visibility("hidden")))
@interface MRUNowPlayingControlsView : UIView
{
    _Bool _showTimeControlsView;	// 8 = 0x8
    _Bool _showTransportControlsView;	// 9 = 0x9
    _Bool _supportsHorizontalLayout;	// 10 = 0xa
    MRUNowPlayingHeaderView *_headerView;	// 16 = 0x10
    MRUNowPlayingTimeControlsView *_timeControlsView;	// 24 = 0x18
    MRUNowPlayingTransportControlsView *_transportControlsView;	// 32 = 0x20
    MRUNowPlayingVolumeControlsView *_volumeControlsView;	// 40 = 0x28
    MRUVisualStylingProvider *_stylingProvider;	// 48 = 0x30
    long long _layout;	// 56 = 0x38
    long long _context;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000022b0f
@property(nonatomic) _Bool supportsHorizontalLayout; // @synthesize supportsHorizontalLayout=_supportsHorizontalLayout;
@property(nonatomic) _Bool showTransportControlsView; // @synthesize showTransportControlsView=_showTransportControlsView;
@property(nonatomic) _Bool showTimeControlsView; // @synthesize showTimeControlsView=_showTimeControlsView;
@property(nonatomic) long long context; // @synthesize context=_context;
@property(nonatomic) long long layout; // @synthesize layout=_layout;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(readonly, nonatomic) MRUNowPlayingVolumeControlsView *volumeControlsView; // @synthesize volumeControlsView=_volumeControlsView;
@property(readonly, nonatomic) MRUNowPlayingTransportControlsView *transportControlsView; // @synthesize transportControlsView=_transportControlsView;
@property(readonly, nonatomic) MRUNowPlayingTimeControlsView *timeControlsView; // @synthesize timeControlsView=_timeControlsView;
@property(readonly, nonatomic) MRUNowPlayingHeaderView *headerView; // @synthesize headerView=_headerView;
- (void)updateTimeControlVisibility:(id)arg1;	// IMP=0x00000000000228cc
- (void)updateVisibility;	// IMP=0x0000000000022723
- (void)didMoveToWindow;	// IMP=0x0000000000022470
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000002223c
- (void)layoutSubviews;	// IMP=0x00000000000210c5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000020f80

@end

