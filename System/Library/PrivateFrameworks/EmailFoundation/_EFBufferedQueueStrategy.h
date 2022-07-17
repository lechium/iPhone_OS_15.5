//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFQueueingStrategy-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _EFBufferedQueueStrategy : NSObject <EFQueueingStrategy>
{
    CDUnknownBlockType _batchHandler;	// 8 = 0x8
    unsigned long long _capacity;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000306b5
@property(readonly, nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
@property(readonly, nonatomic) CDUnknownBlockType batchHandler; // @synthesize batchHandler=_batchHandler;
- (void)dequeueObject:(id)arg1 buffer:(id)arg2;	// IMP=0x000000000003068b
- (void)enqueueObject:(id)arg1 replaceIfExists:(_Bool)arg2 buffer:(id)arg3;	// IMP=0x0000000000030583
@property(readonly, nonatomic) NSString *descriptionType;
- (id)initWithCapacity:(unsigned long long)arg1 batchHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000304ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
