//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LSApplicationRecord, NSString;

__attribute__((visibility("hidden")))
@interface FPFetchDefaultContainerOperation
{
    LSApplicationRecord *_requestedRecord;	// 152 = 0x98
    NSString *_domainIdentifier;	// 160 = 0xa0
    CDUnknownBlockType _fetchCompletionBlock;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00000000000de53a
@property(copy, nonatomic) CDUnknownBlockType fetchCompletionBlock; // @synthesize fetchCompletionBlock=_fetchCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x00000000000de45e
- (void)actionMain;	// IMP=0x00000000000de193
- (id)initForApplicationRecord:(id)arg1 providerDomain:(id)arg2;	// IMP=0x00000000000de073

@end

