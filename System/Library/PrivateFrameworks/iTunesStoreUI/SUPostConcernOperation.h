//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

#import <iTunesStoreUI/ISStoreURLOperationDelegate-Protocol.h>

@class NSNumber, NSString, SUConcernItem;

@interface SUPostConcernOperation : ISOperation <ISStoreURLOperationDelegate>
{
    NSString *_commentText;	// 96 = 0x60
    SUConcernItem *_concern;	// 104 = 0x68
    unsigned long long _itemIdentifier;	// 112 = 0x70
}

@property unsigned long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(retain) SUConcernItem *concern; // @synthesize concern=_concern;
@property(retain) NSString *commentText; // @synthesize commentText=_commentText;
- (id)_httpBody;	// IMP=0x000000000011ad46
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;	// IMP=0x000000000011ab2d
- (void)run;	// IMP=0x000000000011a9e8
- (void)dealloc;	// IMP=0x000000000011a991
- (id)initWithConcern:(id)arg1;	// IMP=0x000000000011a957

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end

