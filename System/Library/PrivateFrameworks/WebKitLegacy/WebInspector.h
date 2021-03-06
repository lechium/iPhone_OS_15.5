//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WebInspectorFrontend, WebView;

@interface WebInspector : NSObject
{
    WebView *_inspectedWebView;	// 8 = 0x8
    WebInspectorFrontend *_frontend;	// 16 = 0x10
}

- (void)releaseFrontend;	// IMP=0x00000000000b07d0
- (void)setFrontend:(id)arg1;	// IMP=0x00000000000b07b0
- (void)evaluateInFrontend:(id)arg1 script:(id)arg2;	// IMP=0x00000000000b0710
- (void)detach:(id)arg1;	// IMP=0x00000000000b06f0
- (void)attach:(id)arg1;	// IMP=0x00000000000b06d0
- (void)close:(id)arg1;	// IMP=0x00000000000b06b0
@property(readonly, nonatomic, getter=isOpen) _Bool open;
- (void)setTimelineProfilingEnabled:(_Bool)arg1;	// IMP=0x00000000000b0680
- (_Bool)isTimelineProfilingEnabled;	// IMP=0x00000000000b0660
- (void)setJavaScriptProfilingEnabled:(_Bool)arg1;	// IMP=0x00000000000b0650
- (_Bool)isJavaScriptProfilingEnabled;	// IMP=0x00000000000b0640
- (void)stopProfilingJavaScript:(id)arg1;	// IMP=0x00000000000b0630
- (void)startProfilingJavaScript:(id)arg1;	// IMP=0x00000000000b0620
- (void)toggleProfilingJavaScript:(id)arg1;	// IMP=0x00000000000b0610
- (_Bool)isProfilingJavaScript;	// IMP=0x00000000000b0600
- (void)stopDebuggingJavaScript:(id)arg1;	// IMP=0x00000000000b05e0
- (void)startDebuggingJavaScript:(id)arg1;	// IMP=0x00000000000b05b0
- (void)toggleDebuggingJavaScript:(id)arg1;	// IMP=0x00000000000b0560
- (_Bool)isDebuggingJavaScript;	// IMP=0x00000000000b0540
- (void)showConsole:(id)arg1;	// IMP=0x00000000000b0510
- (void)show:(id)arg1;	// IMP=0x00000000000b04f0
- (void)showWindow;	// IMP=0x00000000000b04d0
- (void)inspectedWebViewClosed;	// IMP=0x00000000000b04a0
- (void)dealloc;	// IMP=0x00000000000b0460
- (id)initWithInspectedWebView:(id)arg1;	// IMP=0x00000000000b0420

@end

