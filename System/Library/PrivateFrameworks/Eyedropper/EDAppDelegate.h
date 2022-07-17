//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

#import <Eyedropper/EDLensViewDelegate-Protocol.h>
#import <Eyedropper/EDWindowTrackingDelegate-Protocol.h>
#import <Eyedropper/FBSSceneDelegate-Protocol.h>
#import <Eyedropper/NSXPCListenerDelegate-Protocol.h>
#import <Eyedropper/UIApplicationDelegate-Protocol.h>

@class BKSTouchStream, EDWindow, NSMutableArray, NSString, NSXPCListener, PSPointerClientController, UIWindow;
@protocol BSInvalidatable;

@interface EDAppDelegate : UIResponder <EDLensViewDelegate, FBSSceneDelegate, NSXPCListenerDelegate, EDWindowTrackingDelegate, UIApplicationDelegate>
{
    NSXPCListener *_serviceListener;	// 8 = 0x8
    EDWindow *_window;	// 16 = 0x10
    NSMutableArray *_liveConnections;	// 24 = 0x18
    int _notifyTokenLocked;	// 32 = 0x20
    BKSTouchStream *_touchStream;	// 40 = 0x28
    id <BSInvalidatable> _mousePointerServiceAssertion;	// 48 = 0x30
    _Bool _isFloating;	// 56 = 0x38
    struct CGPoint _lastPresentationLocation;	// 64 = 0x40
    double _lastDismissedTime;	// 80 = 0x50
    PSPointerClientController *_pointerClientController;	// 88 = 0x58
    id <BSInvalidatable> _hidePointerAssertion;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000002c28
- (void)trackedTouchesMoved:(id)arg1;	// IMP=0x0000000000002bb6
- (void)trackedTouchesEnded:(id)arg1;	// IMP=0x0000000000002b79
- (void)trackedTouchesCancelled:(id)arg1;	// IMP=0x0000000000002b73
- (void)trackedTouchesBegan:(id)arg1;	// IMP=0x0000000000002a97
- (void)lensViewDidDismiss:(id)arg1;	// IMP=0x000000000000290f
- (void)lensView:(id)arg1 didSelectColor:(id)arg2;	// IMP=0x0000000000002865
- (void)floatEyeDropper;	// IMP=0x00000000000025d6
- (void)cancelShowingEyeDropper;	// IMP=0x00000000000024e7
- (void)beginShowingEyeDropper;	// IMP=0x0000000000002269
- (void)hideSystemPointer:(_Bool)arg1;	// IMP=0x00000000000021fe
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;	// IMP=0x00000000000021f8
- (void)scene:(id)arg1 didUpdateWithDiff:(id)arg2 transitionContext:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000210e
- (void)_enumerateRemoteClientsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001f95
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000001c4f
- (id)lensView;	// IMP=0x0000000000001bf4
- (void)lockStateChanged;	// IMP=0x0000000000001b8d
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00000000000018db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
