//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStoreUI/ISStoreURLOperationDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface SUArtworkCellConfiguration <ISStoreURLOperationDelegate>
{
    NSMutableDictionary *_artworkByURL;	// 120 = 0x78
    NSMutableArray *_artworkLoadOperations;	// 128 = 0x80
}

+ (id)copyDefaultContext;	// IMP=0x000000000003ae61
- (id)_artworkImageForURL:(id)arg1 dataProvider:(id)arg2;	// IMP=0x000000000003b024
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;	// IMP=0x000000000003af14
- (void)operation:(id)arg1 failedWithError:(id)arg2;	// IMP=0x000000000003aeca
- (void)setRepresentedObject:(id)arg1;	// IMP=0x000000000003ae72
- (void)reloadAfterArtworkLoad;	// IMP=0x000000000003ae26
- (id)copyImageDataProvider;	// IMP=0x000000000003aded
- (void)cancelArtworkRequests;	// IMP=0x000000000003ac36
- (id)artworkImageForURL:(id)arg1;	// IMP=0x000000000003abbb
- (id)artworkImageForItemImage:(id)arg1;	// IMP=0x000000000003ab04
- (void)dealloc;	// IMP=0x000000000003aa8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end
