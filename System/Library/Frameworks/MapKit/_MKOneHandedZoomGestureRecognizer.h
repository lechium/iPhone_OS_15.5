//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

#import <MapKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UITapGestureRecognizer, _MKZoomingPanGestureRecognizer;
@protocol MKZoomingGestureControlConfiguration;

@interface _MKOneHandedZoomGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>
{
    _Bool _didReceive1stTap;	// 8 = 0x8
    _Bool _timerOn;	// 9 = 0x9
    UITapGestureRecognizer *_tapGestureRecognizer;	// 16 = 0x10
    _MKZoomingPanGestureRecognizer *_panGestureRecognizer;	// 24 = 0x18
    struct CGPoint _locationOfTapGesture;	// 32 = 0x20
    id <MKZoomingGestureControlConfiguration> _configuration;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000da96f
@property(copy, nonatomic) id <MKZoomingGestureControlConfiguration> configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) _MKZoomingPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
- (void)_tooSlow:(id)arg1;	// IMP=0x00000000000da8f2
- (void)_startTapTimer:(double)arg1;	// IMP=0x00000000000da884
- (void)_clearTapTimer;	// IMP=0x00000000000da841
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000000da797
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000000da725
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x00000000000da6b1
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000000da624
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000da5a0
@property(readonly, nonatomic) struct CGPoint locationOfTapGesture; // @synthesize locationOfTapGesture=_locationOfTapGesture;
@property(readonly, nonatomic) double velocity;
@property(readonly, nonatomic) double scale;
- (void)_panGestureRecognizerStateDidChange:(id)arg1;	// IMP=0x00000000000da508
- (void)_tapGestureRecognizerStateDidChange:(id)arg1;	// IMP=0x00000000000da3fb
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000da2e6
- (void)reset;	// IMP=0x00000000000da23e
- (void)setAllowedPressTypes:(id)arg1;	// IMP=0x00000000000da148
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000000da0f2
- (void)dealloc;	// IMP=0x00000000000da064
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000000d9eaa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

