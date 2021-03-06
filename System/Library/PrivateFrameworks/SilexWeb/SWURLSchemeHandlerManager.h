//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexWeb/SWURLSchemeHandlerManager-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSString, WKWebViewConfiguration;
@protocol SWLogger;

@interface SWURLSchemeHandlerManager : NSObject <SWURLSchemeHandlerManager>
{
    WKWebViewConfiguration *_configuration;	// 8 = 0x8
    id <SWLogger> _logger;	// 16 = 0x10
    NSMutableDictionary *_factories;	// 24 = 0x18
    NSMapTable *_handlers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000c79f
@property(readonly, nonatomic) NSMapTable *handlers; // @synthesize handlers=_handlers;
@property(readonly, nonatomic) NSMutableDictionary *factories; // @synthesize factories=_factories;
@property(readonly, nonatomic) id <SWLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) WKWebViewConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;	// IMP=0x000000000000c64e
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;	// IMP=0x000000000000bf49
- (void)registerFactory:(id)arg1 forScheme:(id)arg2;	// IMP=0x000000000000be1f
- (id)initWithConfiguration:(id)arg1 logger:(id)arg2;	// IMP=0x000000000000bd30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

