//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WKWebProcessPlugInBrowserContextController, _WKRemoteObjectInterface;

__attribute__((visibility("hidden")))
@interface SFWebProcessPlugInPageExtensionController : NSObject
{
    WKWebProcessPlugInBrowserContextController *_browserContextController;	// 8 = 0x8
    _WKRemoteObjectInterface *_extensionControllerInterface;	// 16 = 0x10
    NSMutableDictionary *_extensionToScriptWorldMap;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c3a7d
- (void)clearExtensionScriptWorlds;	// IMP=0x00000000000c3a2d
- (void)finalizeJavaScriptForSharingExtension:(id)arg1 arguments:(id)arg2;	// IMP=0x00000000000c3722
- (void)evaluateJavaScriptForSharingExtension:(id)arg1 extraArguments:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c30d4
- (void)prepareJavaScriptWorldForSharingExtension:(id)arg1 javaScript:(id)arg2;	// IMP=0x00000000000c2ed1
- (void)_clearExtensionControllerInterface;	// IMP=0x00000000000c2e28
- (void)_setUpExtensionControllerInterface;	// IMP=0x00000000000c2d6b
- (void)dealloc;	// IMP=0x00000000000c2cd0
- (id)initWithBrowserContextController:(id)arg1;	// IMP=0x00000000000c2c00

@end
