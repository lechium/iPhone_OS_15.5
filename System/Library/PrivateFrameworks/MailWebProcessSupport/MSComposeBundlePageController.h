//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MailWebProcessSupport/MSBundlePageController-Protocol.h>
#import <MailWebProcessSupport/MSComposeBodyFieldController-Protocol.h>
#import <MailWebProcessSupport/WKWebProcessPlugInLoadDelegate-Protocol.h>

@class JSContext, JSValue, NSMutableArray, NSString, WKWebProcessPlugInBrowserContextController;
@protocol MSComposeBodyFieldObserver, WKWebProcessPlugIn;

@interface MSComposeBundlePageController : NSObject <WKWebProcessPlugInLoadDelegate, MSBundlePageController, MSComposeBodyFieldController>
{
    unsigned long long _performOnPageSuspendCount;	// 8 = 0x8
    NSMutableArray *_blocksToPerformOnPage;	// 16 = 0x10
    JSValue *_jsBodyField;	// 24 = 0x18
    id <WKWebProcessPlugIn> _plugIn;	// 32 = 0x20
    WKWebProcessPlugInBrowserContextController *_controller;	// 40 = 0x28
    JSContext *_jsContext;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000002eca
@property(readonly, nonatomic) JSValue *jsBodyField; // @synthesize jsBodyField=_jsBodyField;
@property(readonly, nonatomic) JSContext *jsContext; // @synthesize jsContext=_jsContext;
@property(readonly, nonatomic) WKWebProcessPlugInBrowserContextController *controller; // @synthesize controller=_controller;
@property(readonly, nonatomic) __weak id <WKWebProcessPlugIn> plugIn; // @synthesize plugIn=_plugIn;
- (void)initializeBodyField:(id)arg1;	// IMP=0x0000000000002e85
- (void)initializeGlobalObject;	// IMP=0x00000000000028bc
- (id)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 willSendRequestForResource:(unsigned long long)arg3 request:(id)arg4 redirectResponse:(id)arg5;	// IMP=0x0000000000002897
- (void)webProcessPlugInBrowserContextController:(id)arg1 globalObjectIsAvailableForFrame:(id)arg2 inScriptWorld:(id)arg3;	// IMP=0x0000000000002006
- (void)webProcessPlugInBrowserContextController:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;	// IMP=0x0000000000001f69
- (id)willSendRequest:(id)arg1;	// IMP=0x0000000000001f53
- (void)changeQuoteLevelBy:(long long)arg1;	// IMP=0x0000000000001e7d
- (void)performBodyFieldMethodOnPage:(id)arg1 withArguments:(id)arg2;	// IMP=0x0000000000001d18
- (void)resumePerformOnPage;	// IMP=0x0000000000001c83
- (void)suspendPerformOnPage;	// IMP=0x0000000000001c79
- (void)performOnPage:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001bd8
@property(readonly, nonatomic) id <MSComposeBodyFieldObserver> observerProxy;
- (void)invalidate;	// IMP=0x0000000000001b59
- (id)initWithPlugIn:(id)arg1 contextController:(id)arg2;	// IMP=0x0000000000001a63

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

