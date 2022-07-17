//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCFetchedValueManager;
@protocol FCContentContext;

@interface FCVanityURLRedirectService : NSObject
{
    FCFetchedValueManager *_vanityURLMappingManager;	// 8 = 0x8
    id <FCContentContext> _contentContext;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000222d81
@property(readonly, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
- (id)_destinationURLForURL:(id)arg1;	// IMP=0x0000000000222b97
- (void)updateUnderlyingMappingWithQualityOfService:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000222ac4
- (void)acquireHoldTokenOnUnderlyingAssets;	// IMP=0x0000000000222aa1
- (void)resolveURL:(id)arg1 withQualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000222644
- (id)destinationURLForURL:(id)arg1;	// IMP=0x0000000000222632
- (_Bool)hasRedirectForURL:(id)arg1;	// IMP=0x00000000002225ff
@property(readonly, nonatomic) FCFetchedValueManager *vanityURLMappingManager; // @synthesize vanityURLMappingManager=_vanityURLMappingManager;
- (id)initWithContentContext:(id)arg1;	// IMP=0x00000000002222e4
- (id)init;	// IMP=0x000000000022219f

@end
