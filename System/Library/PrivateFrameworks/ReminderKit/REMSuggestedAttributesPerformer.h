//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class REMStore;
@protocol OS_dispatch_queue, REMXPCSuggestedAttributesPerformer;

@interface REMSuggestedAttributesPerformer : NSObject
{
    REMStore *_store;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <REMXPCSuggestedAttributesPerformer> _q_cachedXPCPerformer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005a706
@property(retain, nonatomic) id <REMXPCSuggestedAttributesPerformer> q_cachedXPCPerformer; // @synthesize q_cachedXPCPerformer=_q_cachedXPCPerformer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) REMStore *store; // @synthesize store=_store;
- (id)q_resolveSuggestedAttributesPerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005a2e2
- (id)q_syncSuggestedAttributesPerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000059f03
- (id)resultFromPerformingSwiftInvocation:(id)arg1 parametersData:(id)arg2 storages:(id)arg3 error:(id *)arg4;	// IMP=0x000000000005963f
- (void)preWarmModels;	// IMP=0x0000000000059525
- (id)initWithQueue:(id)arg1 store:(id)arg2;	// IMP=0x0000000000059472

@end
