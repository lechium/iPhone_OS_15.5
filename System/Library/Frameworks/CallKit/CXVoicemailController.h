//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CXVoicemailObserver;
@protocol OS_dispatch_queue;

@interface CXVoicemailController : NSObject
{
    CXVoicemailObserver *_voicemailObserver;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_completionQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000271ca
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(readonly, nonatomic) CXVoicemailObserver *voicemailObserver; // @synthesize voicemailObserver=_voicemailObserver;
- (void)_requestTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027041
- (void)requestTransactionWithAction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026f7b
- (void)requestTransactionWithActions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026e74
- (void)requestTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026c7a
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000026bbb
- (id)init;	// IMP=0x0000000000026b79

@end

