//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCWebURLResolutionEndpointConnection-Protocol.h>

@class NBHashBucketer, NBURLCanonicalizer, NBURLHasher, NFLazy, NSURL;
@protocol FCCoreConfigurationManager;

@interface FCWebURLResolutionEndpointConnection : NSObject <FCWebURLResolutionEndpointConnection>
{
    id <FCCoreConfigurationManager> _configurationManager;	// 8 = 0x8
    NFLazy *_lazyStoreFrontIDPromise;	// 16 = 0x10
    NSURL *_cachesDirectoryURL;	// 24 = 0x18
    NBURLCanonicalizer *_canonicalizer;	// 32 = 0x20
    NBURLHasher *_hasher;	// 40 = 0x28
    NBHashBucketer *_bucketer;	// 48 = 0x30
}

+ (id)_bloomFilterScheduler;	// IMP=0x00000000002640a1
+ (id)_sharedProxyingScheduler;	// IMP=0x0000000000263f05
- (void).cxx_destruct;	// IMP=0x0000000000266789
@property(readonly, nonatomic) NBHashBucketer *bucketer; // @synthesize bucketer=_bucketer;
@property(readonly, nonatomic) NBURLHasher *hasher; // @synthesize hasher=_hasher;
@property(readonly, nonatomic) NBURLCanonicalizer *canonicalizer; // @synthesize canonicalizer=_canonicalizer;
@property(readonly, copy, nonatomic) NSURL *cachesDirectoryURL; // @synthesize cachesDirectoryURL=_cachesDirectoryURL;
@property(readonly, nonatomic) NFLazy *lazyStoreFrontIDPromise; // @synthesize lazyStoreFrontIDPromise=_lazyStoreFrontIDPromise;
@property(readonly, nonatomic) id <FCCoreConfigurationManager> configurationManager; // @synthesize configurationManager=_configurationManager;
- (id)_bloomFilterError;	// IMP=0x0000000000266728
- (id)_assetHost;	// IMP=0x00000000002666c2
- (id)_articleIDWithHash:(id)arg1 lists:(id)arg2 storeFrontID:(id)arg3;	// IMP=0x0000000000266237
- (void)_fetchListsPromiseThroughProxy:(_Bool)arg1 withResourceURL:(id)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000265d84
- (id)_fetchListsPromiseWithConfig:(id)arg1 coreConfiguration:(id)arg2 hash:(id)arg3 qualityOfService:(long long)arg4;	// IMP=0x00000000002654d3
- (id)_hashOfURLWithWebURL:(id)arg1 config:(id)arg2;	// IMP=0x00000000002651af
- (id)_fetchBloomFilterInfoPromiseWithQualityOfService:(long long)arg1;	// IMP=0x0000000000264d19
- (id)_fetchConfigPromiseWithQualityOfService:(long long)arg1;	// IMP=0x00000000002648e2
- (id)_fetchConfigIfNeededPromiseWithCoreConfiguration:(id)arg1 qualityOfService:(long long)arg2;	// IMP=0x000000000026433c
- (id)_fetchCoreConfigurationIfNeededPromiseWithQualityOfService:(long long)arg1;	// IMP=0x00000000002641eb
- (void)fetchWebURLBloomFilterInfoWithQualityOfService:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000263c6c
- (void)resolveWebURL:(id)arg1 withQualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000026329a
- (id)initWithConfigurationManager:(id)arg1 cachesDirectoryURL:(id)arg2;	// IMP=0x0000000000262dfd
- (id)init;	// IMP=0x0000000000262cb8

@end
