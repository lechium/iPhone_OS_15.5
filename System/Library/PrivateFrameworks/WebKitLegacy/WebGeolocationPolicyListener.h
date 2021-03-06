//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebAllowDenyPolicyListener-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebGeolocationPolicyListener : NSObject <WebAllowDenyPolicyListener>
{
    struct RefPtr<WebCore::Geolocation, WTF::RawPtrTraits<WebCore::Geolocation>, WTF::DefaultRefDerefTraits<WebCore::Geolocation>> _geolocation;	// 8 = 0x8
    struct RetainPtr<WebView> _webView;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x0000000000102240
- (void).cxx_destruct;	// IMP=0x00000000001021e0
- (_Bool)shouldClearCache;	// IMP=0x00000000001021a0
- (void)denyOnlyThisRequest;	// IMP=0x0000000000102120
- (void)deny;	// IMP=0x0000000000102050
- (void)allow;	// IMP=0x0000000000101f70
- (id)initWithGeolocation:(NakedPtr_331571b6)arg1 forWebView:(id)arg2;	// IMP=0x0000000000101ec0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

