//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/SXViewportChangeListener-Protocol.h>

@class NSString, SXMediaExposureEvent;
@protocol SXAnalyticsReporting;

@interface SXMediaComponentView <SXViewportChangeListener>
{
    _Bool _isDisplayingMedia;	// 8 = 0x8
    id <SXAnalyticsReporting> _analyticsReporting;	// 16 = 0x10
    SXMediaExposureEvent *_mediaExposureEvent;	// 24 = 0x18
    double _minimumVisibleY;	// 32 = 0x20
    double _maximumVisibleY;	// 40 = 0x28
    struct CGRect _visibleBounds;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000088968
@property(nonatomic) double maximumVisibleY; // @synthesize maximumVisibleY=_maximumVisibleY;
@property(nonatomic) double minimumVisibleY; // @synthesize minimumVisibleY=_minimumVisibleY;
@property(retain, nonatomic) SXMediaExposureEvent *mediaExposureEvent; // @synthesize mediaExposureEvent=_mediaExposureEvent;
@property(nonatomic) struct CGRect visibleBounds; // @synthesize visibleBounds=_visibleBounds;
@property(nonatomic) _Bool isDisplayingMedia; // @synthesize isDisplayingMedia=_isDisplayingMedia;
@property(readonly, nonatomic) id <SXAnalyticsReporting> analyticsReporting; // @synthesize analyticsReporting=_analyticsReporting;
- (void)visibleBoundsChanged;	// IMP=0x0000000000088754
- (void)calculateVisibleBounds;	// IMP=0x0000000000088526
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect)arg2;	// IMP=0x00000000000884ea
- (void)visibilityStateDidChangeFromState:(long long)arg1;	// IMP=0x00000000000883da
- (_Bool)shouldSubmitMediaExposureEventForExposedBounds:(struct CGRect)arg1;	// IMP=0x0000000000088367
- (void)willSubmitMediaExposureEvent:(id)arg1;	// IMP=0x0000000000088361
- (void)submitEvents;	// IMP=0x000000000008834f
- (id)mediaEventForClass:(Class)arg1;	// IMP=0x00000000000881f6
- (unsigned long long)analyticsVideoType;	// IMP=0x00000000000881ee
- (unsigned long long)analyticsMediaType;	// IMP=0x00000000000881e6
- (unsigned long long)analyticsGalleryType;	// IMP=0x00000000000881de
- (void)finishMediaExposureEventIfNeeded;	// IMP=0x0000000000087f4c
- (void)createMediaExposureEventIfNeeded;	// IMP=0x0000000000087e9a
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6;	// IMP=0x0000000000087a4a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

