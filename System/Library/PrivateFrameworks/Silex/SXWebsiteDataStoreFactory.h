//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXWebsiteDataStoreFactory-Protocol.h>

@class NSString, SXProxyConfiguration;

@interface SXWebsiteDataStoreFactory : NSObject <SXWebsiteDataStoreFactory>
{
    SXProxyConfiguration *_proxyConfiguration;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000109f88
@property(readonly, nonatomic) SXProxyConfiguration *proxyConfiguration; // @synthesize proxyConfiguration=_proxyConfiguration;
- (id)createWebsiteDataStore;	// IMP=0x0000000000109e21
- (id)initWithProxyConfiguration:(id)arg1;	// IMP=0x0000000000109db6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

