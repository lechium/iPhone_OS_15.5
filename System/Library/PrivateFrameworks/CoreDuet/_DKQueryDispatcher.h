//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKKnowledgeQuerying-Protocol.h>

@class _DKContentProviderCache, _DKKnowledgeContentProvider;
@protocol OS_dispatch_queue, _DKKnowledgeQuerying;

@interface _DKQueryDispatcher : NSObject <_DKKnowledgeQuerying>
{
    _DKContentProviderCache *_contentProviderCache;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queryQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_defaultResponseQueue;	// 24 = 0x18
    id <_DKKnowledgeQuerying> _knowledgeStore;	// 32 = 0x20
    _DKKnowledgeContentProvider *_knowledgeContentProvider;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000d4904
@property(retain, nonatomic) _DKContentProviderCache *contentProviderCache; // @synthesize contentProviderCache=_contentProviderCache;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2;	// IMP=0x00000000000d48d4
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d436f
- (id)executeQuery:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000d3a5c
- (id)initWithKnowledgeStore:(id)arg1;	// IMP=0x00000000000d38fa

@end
