//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Trial/TRIEvaluationStatusProvider-Protocol.h>

@class _PASXPCClientHelper;

@interface TRIEvaluationStatusDefaultProvider : NSObject <TRIEvaluationStatusProvider>
{
    _PASXPCClientHelper *_clientHelper;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000009135
- (id)enumerateStatusOfEvaluationsForMLRuntimeWithCursor:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000008a13
- (_Bool)enumerateActiveEvaluationsForMLRuntimeWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000000843b
- (id)syncProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008425
- (id)init;	// IMP=0x0000000000008222

@end
