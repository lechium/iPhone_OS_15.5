//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <LinkPresentation/UIScrollViewDelegate-Protocol.h>
#import <LinkPresentation/WKNavigationDelegate-Protocol.h>
#import <LinkPresentation/WKUIDelegate-Protocol.h>

@class LPYouTubePlayerScriptMessageHandler, LPYouTubePlayerViewFullScreenDelegate, LPYouTubePlayerWebView, NSMutableArray, NSString;
@protocol LPYouTubePlayerDelegate;

@interface LPYouTubePlayerView : UIView <UIScrollViewDelegate, WKNavigationDelegate, WKUIDelegate>
{
    LPYouTubePlayerViewFullScreenDelegate *_fullScreenDelegate;	// 8 = 0x8
    LPYouTubePlayerWebView *_webView;	// 16 = 0x10
    NSString *_videoID;	// 24 = 0x18
    long long _state;	// 32 = 0x20
    LPYouTubePlayerScriptMessageHandler *_scriptMessageHandler;	// 40 = 0x28
    _Bool _ready;	// 48 = 0x30
    NSMutableArray *_commandsPendingPlayerReadiness;	// 56 = 0x38
    _Bool _startsPlayingAutomatically;	// 64 = 0x40
    _Bool _showsControls;	// 65 = 0x41
    _Bool _muted;	// 66 = 0x42
    id <LPYouTubePlayerDelegate> _delegate;	// 72 = 0x48
    double _startTime;	// 80 = 0x50
    double _endTime;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000098352
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool showsControls; // @synthesize showsControls=_showsControls;
@property(nonatomic) _Bool startsPlayingAutomatically; // @synthesize startsPlayingAutomatically=_startsPlayingAutomatically;
@property(nonatomic) __weak id <LPYouTubePlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceiveScriptMessage:(id)arg1;	// IMP=0x0000000000097c2d
- (void)layoutSubviews;	// IMP=0x0000000000097ae8
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000097ac1
- (void)_webView:(id)arg1 navigation:(id)arg2 didFailProvisionalLoadInSubframe:(id)arg3 withError:(id)arg4;	// IMP=0x0000000000097aaa
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x0000000000097a93
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x0000000000097a7c
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;	// IMP=0x00000000000979c2
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 preferences:(id)arg3 decisionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000097872
- (void)webViewWebContentProcessDidTerminate:(id)arg1;	// IMP=0x000000000009782b
- (void)createVideoPlayerView;	// IMP=0x000000000009715e
- (id)_parameterScript;	// IMP=0x0000000000096e1b
- (void)exitFullScreen;	// IMP=0x0000000000096da2
- (void)enterFullScreen;	// IMP=0x0000000000096d0b
- (_Bool)_shouldUseElementFullScreen;	// IMP=0x0000000000096d03
- (void)seekTo:(double)arg1;	// IMP=0x0000000000096ca7
- (void)pause;	// IMP=0x0000000000096c8e
- (void)play;	// IMP=0x0000000000096c75
- (void)_evaluatePlayerCommand:(id)arg1;	// IMP=0x0000000000096bdf
- (void)dealloc;	// IMP=0x0000000000096b14
- (void)loadVideoWithID:(id)arg1;	// IMP=0x00000000000969f0
- (void)loadVideoWithEmbedURL:(id)arg1;	// IMP=0x0000000000096963
- (void)loadVideoWithURL:(id)arg1;	// IMP=0x00000000000968d6
- (void)dispatchErrorWithCode:(long long)arg1;	// IMP=0x00000000000967fc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000009668a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

