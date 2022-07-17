//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, SGServiceContext;

@interface SGRequestContext : NSObject
{
    int _concurrencyBehavior;	// 8 = 0x8
    int _backpressureHazard;	// 12 = 0xc
    int _extractionMode;	// 16 = 0x10
    SGServiceContext *_serviceContext;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000fbdd0
@property(readonly, nonatomic) int extractionMode; // @synthesize extractionMode=_extractionMode;
@property(readonly, nonatomic) int backpressureHazard; // @synthesize backpressureHazard=_backpressureHazard;
@property(readonly, nonatomic) int concurrencyBehavior; // @synthesize concurrencyBehavior=_concurrencyBehavior;
@property(readonly, nonatomic) SGServiceContext *serviceContext; // @synthesize serviceContext=_serviceContext;
- (id)initWithServiceContext:(id)arg1 concurrencyBehavior:(int)arg2 backpressureHazard:(int)arg3 extractionMode:(int)arg4;	// IMP=0x00000000000fbd1b
- (id)initWithServiceContext:(id)arg1 concurrencyBehavior:(int)arg2 backpressureHazard:(int)arg3;	// IMP=0x00000000000fbd06
- (id)init;	// IMP=0x00000000000fbc7f
@property(readonly, nonatomic) NSOperationQueue *storageQueue;
@property(readonly, nonatomic) NSOperationQueue *processingQueue;

@end
