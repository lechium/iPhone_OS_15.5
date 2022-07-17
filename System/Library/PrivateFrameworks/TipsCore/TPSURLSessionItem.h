//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TipsCore/TPSURLSessionTaskDelegate-Protocol.h>

@class NSString, TPSURLSessionTask;

@interface TPSURLSessionItem : NSObject <TPSURLSessionTaskDelegate>
{
    _Bool _cancelled;	// 8 = 0x8
    TPSURLSessionTask *_sessionTask;	// 16 = 0x10
    CDUnknownBlockType _completionHanlder;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000004fa26
@property(readonly, nonatomic) CDUnknownBlockType completionHanlder; // @synthesize completionHanlder=_completionHanlder;
@property(retain, nonatomic) TPSURLSessionTask *sessionTask; // @synthesize sessionTask=_sessionTask;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (void)URLSessionSessionTask:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x000000000004f9dd
- (void)notifyWithSessionTask:(id)arg1 error:(id)arg2;	// IMP=0x000000000004f8b2
- (void)cancel;	// IMP=0x000000000004f7c1
- (void)resume;	// IMP=0x000000000004f7ab
@property(readonly, nonatomic) long long state; // @dynamic state;
- (id)initWithSessionTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004f6a3
- (void)dealloc;	// IMP=0x000000000004f665

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
