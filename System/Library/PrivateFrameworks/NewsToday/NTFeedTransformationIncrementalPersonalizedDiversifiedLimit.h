//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsToday/FCFeedTransforming-Protocol.h>

@class NSArray, NSString;
@protocol FCFeedTransforming;

@interface NTFeedTransformationIncrementalPersonalizedDiversifiedLimit : NSObject <FCFeedTransforming>
{
    NSArray *_priorFeedItems;	// 8 = 0x8
    id <FCFeedTransforming> _privateLimitTransformation;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000002b1b
@property(retain, nonatomic) id <FCFeedTransforming> privateLimitTransformation; // @synthesize privateLimitTransformation=_privateLimitTransformation;
@property(copy, nonatomic) NSArray *priorFeedItems; // @synthesize priorFeedItems=_priorFeedItems;
- (id)transformFeedItems:(id)arg1;	// IMP=0x00000000000029a1
- (id)initWithFunctionProvider:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3;	// IMP=0x000000000000286e
- (id)init;	// IMP=0x0000000000002729

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

