//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CDMMentionResolverServiceUtils : NSObject
{
}

+ (void)logMRResponseToFile:(id)arg1;	// IMP=0x000000000005c394
+ (void)logMRRequestToFile:(id)arg1;	// IMP=0x000000000005c2d0
+ (id)buildMRRequestWithCurTurn:(id)arg1 tokenChain:(id)arg2 mdResponse:(id)arg3 embedding:(id)arg4 utterance:(id)arg5 turnIndex:(unsigned long long)arg6 nluRequestId:(id)arg7 resultCandidateId:(id)arg8 cdmRequestId:(id)arg9;	// IMP=0x000000000005bd51

@end

