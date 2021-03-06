//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WKGeolocationProviderIOS;
@protocol WKProcessGroupDelegate;

@interface WKProcessGroup : NSObject
{
    struct RefPtr<WebKit::WebProcessPool, WTF::RawPtrTraits<WebKit::WebProcessPool>, WTF::DefaultRefDerefTraits<WebKit::WebProcessPool>> _processPool;	// 8 = 0x8
    struct WeakObjCPtr<id<WKProcessGroupDelegate>> _delegate;	// 16 = 0x10
    struct RetainPtr<WKGeolocationProviderIOS> _geolocationProvider;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x0000000000267bcb
- (void).cxx_destruct;	// IMP=0x0000000000267b7c
@property(nonatomic) __weak id <WKProcessGroupDelegate> delegate;
- (id)initWithInjectedBundleURL:(id)arg1 andCustomClassesForParameterCoder:(id)arg2;	// IMP=0x000000000026770c
- (id)initWithInjectedBundleURL:(id)arg1;	// IMP=0x00000000002674f6
- (id)init;	// IMP=0x00000000002674e2
@property(readonly) WKGeolocationProviderIOS *_geolocationProvider;
@property(readonly) struct OpaqueWKContext *_contextRef;

@end

