//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperationQueue, NSURLSessionTask, VSAuditToken, VSOptional;

@interface VSVerificationStateResetOperation
{
    VSAuditToken *_auditToken;	// 8 = 0x8
    VSOptional *_result;	// 16 = 0x10
    NSURLSessionTask *_resetStateTask;	// 24 = 0x18
    NSOperationQueue *_privateQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001cdac
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(retain, nonatomic) NSURLSessionTask *resetStateTask; // @synthesize resetStateTask=_resetStateTask;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
@property(copy, nonatomic) VSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
- (void)cancel;	// IMP=0x000000000001ccae
- (void)executionDidBegin;	// IMP=0x000000000001c696
- (void)_resetVerificationStateWithURL:(id)arg1;	// IMP=0x000000000001c1a7
- (id)init;	// IMP=0x000000000001c0e5

@end
