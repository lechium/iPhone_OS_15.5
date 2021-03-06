//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/UIGestureRecognizerDelegate-Protocol.h>

@class MKMuninView, NSDate, NSString, UIPanGestureRecognizer, UIPinchGestureRecognizer, UITapGestureRecognizer, VKCompoundAnimation;
@protocol MKMuninGestureControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKMuninGestureController : NSObject <UIGestureRecognizerDelegate>
{
    long long _userInteractionCount;	// 8 = 0x8
    UITapGestureRecognizer *_singleNavigateGestureRecognizer;	// 16 = 0x10
    UIPanGestureRecognizer *_panGestureRecognizer;	// 24 = 0x18
    UIPinchGestureRecognizer *_pinchGestureRecognizer;	// 32 = 0x20
    NSDate *_singleTapTime;	// 40 = 0x28
    VKCompoundAnimation *_panDecelerationAnimationGroup;	// 48 = 0x30
    long long _lastZoomDirection;	// 56 = 0x38
    double _startZoomScale;	// 64 = 0x40
    double _lastZoomScale;	// 72 = 0x48
    _Bool _readyToReplayTap;	// 80 = 0x50
    _Bool _navigatingEnabled;	// 81 = 0x51
    _Bool _panningEnabled;	// 82 = 0x52
    _Bool _pinchingEnabled;	// 83 = 0x53
    id <MKMuninGestureControllerDelegate> _delegate;	// 88 = 0x58
    MKMuninView *_muninView;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000001fc267
@property(nonatomic) __weak MKMuninView *muninView; // @synthesize muninView=_muninView;
@property(nonatomic) _Bool pinchingEnabled; // @synthesize pinchingEnabled=_pinchingEnabled;
@property(nonatomic) _Bool panningEnabled; // @synthesize panningEnabled=_panningEnabled;
@property(nonatomic) _Bool navigatingEnabled; // @synthesize navigatingEnabled=_navigatingEnabled;
@property(nonatomic) __weak id <MKMuninGestureControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000001fc198
- (void)_handlePinch:(id)arg1;	// IMP=0x00000000001fbeca
- (void)_handlePan:(id)arg1;	// IMP=0x00000000001fb696
- (void)_handleTap:(id)arg1;	// IMP=0x00000000001fb0ed
- (void)_moveBackToReplayTap;	// IMP=0x00000000001facde
- (id)initWithMuninView:(id)arg1;	// IMP=0x00000000001faa98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

