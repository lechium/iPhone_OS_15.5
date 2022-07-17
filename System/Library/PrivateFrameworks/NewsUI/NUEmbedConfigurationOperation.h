//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/FCOperation.h>

@class FCFlintResourceManager, NUEmbedConfigurationOperationResult;
@protocol FCNewsAppConfigurationManager;

@interface NUEmbedConfigurationOperation : FCOperation
{
    CDUnknownBlockType _completion;	// 8 = 0x8
    id <FCNewsAppConfigurationManager> _appConfigurationManager;	// 16 = 0x10
    FCFlintResourceManager *_flintResourceManager;	// 24 = 0x18
    NUEmbedConfigurationOperationResult *_result;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000044769
@property(retain, nonatomic) NUEmbedConfigurationOperationResult *result; // @synthesize result=_result;
@property(retain, nonatomic) FCFlintResourceManager *flintResourceManager; // @synthesize flintResourceManager=_flintResourceManager;
@property(retain, nonatomic) id <FCNewsAppConfigurationManager> appConfigurationManager; // @synthesize appConfigurationManager=_appConfigurationManager;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)operationWillFinishWithError:(id)arg1;	// IMP=0x0000000000044626
- (void)performOperation;	// IMP=0x0000000000044142
- (id)initWithAppConfigManager:(id)arg1 flintResourceManager:(id)arg2;	// IMP=0x00000000000440a0

@end
