//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WBSExtensionsController, WKWebView;

@interface WBSSafariExtensionStateObserver : NSObject
{
    WKWebView *_webView;	// 8 = 0x8
    WBSExtensionsController *_extensionsController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000039d82
- (void)_addIDsForExtension:(id)arg1 toSet:(id)arg2;	// IMP=0x0000000000039c4c
- (void)_addNamesForExtension:(id)arg1 toMap:(id)arg2;	// IMP=0x0000000000039abd
- (void)_handleExtensionEnabledStateDidChange:(id)arg1;	// IMP=0x00000000000398f7
- (void)_handleExtensionWasRemoved:(id)arg1;	// IMP=0x000000000003978e
- (void)_handleExtensionWasAdded:(id)arg1;	// IMP=0x0000000000039625
- (_Bool)_teardownObserverIfNecessary;	// IMP=0x00000000000395c3
- (_Bool)_shouldObserveExtension:(id)arg1;	// IMP=0x0000000000039503
- (void)_stopObservingExtensionNotifications;	// IMP=0x0000000000039455
- (void)_startObservingExtensionNotifications;	// IMP=0x0000000000039392
- (void)stopObservingExtensionStateChanges;	// IMP=0x0000000000039380
- (void)startObservingExtensionStateChanges;	// IMP=0x000000000003915b
- (void)dealloc;	// IMP=0x00000000000390dd
- (id)initWithWebView:(id)arg1 extensionsController:(id)arg2;	// IMP=0x000000000003901e
- (id)init;	// IMP=0x0000000000039010

@end

