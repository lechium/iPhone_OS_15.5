//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface BRShareCopyOperation
{
    CDUnknownBlockType _shareCopyCompletionBlock;	// 88 = 0x58
    CDUnknownBlockType _rootShareCopyCompletionBlock;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000000dd55
@property(copy) CDUnknownBlockType rootShareCopyCompletionBlock; // @synthesize rootShareCopyCompletionBlock=_rootShareCopyCompletionBlock;
@property(copy) CDUnknownBlockType shareCopyCompletionBlock; // @synthesize shareCopyCompletionBlock=_shareCopyCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x000000000000db74
- (void)main;	// IMP=0x000000000000d9a7
- (id)initWithURL:(id)arg1;	// IMP=0x000000000000d978

@end

