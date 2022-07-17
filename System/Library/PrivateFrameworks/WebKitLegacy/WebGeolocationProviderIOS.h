//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebGeolocationProvider-Protocol.h>

@class NSString;

@interface WebGeolocationProviderIOS : NSObject <WebGeolocationProvider>
{
    struct RetainPtr<WebGeolocationCoreLocationProvider> _coreLocationProvider;	// 8 = 0x8
    struct RetainPtr<_WebCoreLocationUpdateThreadingProxy> _coreLocationUpdateListenerProxy;	// 16 = 0x10
    _Bool _enableHighAccuracy;	// 24 = 0x18
    _Bool _isSuspended;	// 25 = 0x19
    _Bool _shouldResetOnResume;	// 26 = 0x1a
    struct HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>, WTF::DefaultHash<WTF::RetainPtr<WebView>>, WTF::HashTraits<WTF::RetainPtr<WebView>>, WTF::HashTraits<WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>, WTF::HashTableTraits> _webViewsWaitingForCoreLocationAuthorization;	// 32 = 0x20
    struct HashSet<WebView *, WTF::DefaultHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTableTraits> _pendingInitialPositionWebView;	// 40 = 0x28
    struct HashSet<WebView *, WTF::DefaultHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTableTraits> _registeredWebViews;	// 48 = 0x30
    struct HashSet<WebView *, WTF::DefaultHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTableTraits> _trackedWebViews;	// 56 = 0x38
    struct RetainPtr<NSTimer> _sendLastPositionAsynchronouslyTimer;	// 64 = 0x40
    struct RetainPtr<WebGeolocationPosition> _lastPosition;	// 72 = 0x48
}

+ (id)sharedGeolocationProvider;	// IMP=0x0000000000102fc0
- (id).cxx_construct;	// IMP=0x00000000001046f0
- (void).cxx_destruct;	// IMP=0x00000000001045d0
- (void)resetGeolocation;	// IMP=0x00000000001043b0
- (void)errorOccurred:(id)arg1;	// IMP=0x0000000000104240
- (void)positionChanged:(id)arg1;	// IMP=0x0000000000104090
- (void)stopTrackingWebView:(id)arg1;	// IMP=0x0000000000104070
- (void)geolocationAuthorizationDenied;	// IMP=0x0000000000103e60
- (void)geolocationAuthorizationGranted;	// IMP=0x0000000000103c50
- (void)initializeGeolocationForWebView:(id)arg1 listener:(id)arg2;	// IMP=0x0000000000103980
- (void)setEnableHighAccuracy:(_Bool)arg1;	// IMP=0x00000000001038d0
- (id)lastPosition;	// IMP=0x00000000001038c0
- (void)unregisterWebView:(id)arg1;	// IMP=0x00000000001035c0
- (void)registerWebView:(id)arg1;	// IMP=0x0000000000103390
- (void)_handlePendingInitialPosition:(id)arg1;	// IMP=0x00000000001031f0
- (void)resume;	// IMP=0x00000000001030d0
- (void)suspend;	// IMP=0x0000000000103050
- (void)dealloc;	// IMP=0x0000000000102f40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
