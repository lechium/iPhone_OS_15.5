//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SSMetricsConfiguration, SSMetricsPageEvent, SSURLConnectionRequest;

@interface RadioGetGenreTreeNodesRequest
{
    unsigned long long _parentNodeID;	// 8 = 0x8
    SSURLConnectionRequest *_request;	// 16 = 0x10
    SSMetricsConfiguration *_metricsConfiguration;	// 24 = 0x18
    SSMetricsPageEvent *_metricsPageEvent;	// 32 = 0x20
}

+ (id)responseContentKey;	// IMP=0x0000000000023bdf
+ (id)requestBagKey;	// IMP=0x0000000000023bd2
+ (id)fallbackRequestPath;	// IMP=0x0000000000023bc5
+ (id)cacheKeyForGenreWithNodeID:(unsigned long long)arg1;	// IMP=0x0000000000023ba0
- (void).cxx_destruct;	// IMP=0x0000000000022df1
@property(readonly, copy, nonatomic) SSMetricsPageEvent *metricsPageEvent; // @synthesize metricsPageEvent=_metricsPageEvent;
@property(readonly, retain, nonatomic) SSMetricsConfiguration *metricsConfiguration; // @synthesize metricsConfiguration=_metricsConfiguration;
- (id)_genreTreeByApplyingResponse:(id)arg1;	// IMP=0x0000000000022b69
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022a9c
- (void)startWithCachedCompletionHandler:(CDUnknownBlockType)arg1 networkCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000229e0
- (id)initWithParentNodeID:(unsigned long long)arg1;	// IMP=0x000000000002299c
- (id)init;	// IMP=0x0000000000022988

@end
