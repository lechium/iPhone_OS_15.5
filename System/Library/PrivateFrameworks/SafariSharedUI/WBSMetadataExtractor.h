//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class JSContext, WKWebProcessPlugInFrame, WKWebProcessPlugInScriptWorld;

@interface WBSMetadataExtractor : NSObject
{
    WKWebProcessPlugInScriptWorld *_webProcessPlugInScriptWorld;	// 8 = 0x8
    JSContext *_context;	// 16 = 0x10
    WKWebProcessPlugInFrame *_webProcessPlugInFrame;	// 24 = 0x18
}

+ (id)metadataExtractorScriptSource;	// IMP=0x00000000001445f8
- (void).cxx_destruct;	// IMP=0x0000000000144ffb
@property(readonly, nonatomic) WKWebProcessPlugInFrame *webProcessPlugInFrame; // @synthesize webProcessPlugInFrame=_webProcessPlugInFrame;
- (id)firstElementForSelector:(id)arg1;	// IMP=0x0000000000144f3f
- (void)getTemplateIconURL:(id *)arg1 andColor:(id *)arg2;	// IMP=0x0000000000144de0
- (id)_colorFromColorComponents:(id)arg1;	// IMP=0x0000000000144c9a
- (id)faviconURLs;	// IMP=0x0000000000144a4e
- (id)appleTouchIconURLs;	// IMP=0x0000000000144928
- (id)_resultForInvokingFunctionWithName:(id)arg1;	// IMP=0x0000000000144808
@property(readonly, nonatomic) JSContext *context;
- (id)makeContext;	// IMP=0x0000000000144742
- (void)dealloc;	// IMP=0x0000000000144700
- (id)initWithWebProcessPlugInFrame:(id)arg1 useNormalWorld:(_Bool)arg2;	// IMP=0x000000000014464c
- (id)initWithWebProcessPlugInFrame:(id)arg1;	// IMP=0x0000000000144638

@end

