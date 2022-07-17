//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKShare, NSString;

@interface BRShareCopyiWorkShareURLOperation
{
    CKShare *_share;	// 56 = 0x38
    NSString *_appName;	// 64 = 0x40
    CDUnknownBlockType _shareCopyURLCompletionBlock;	// 72 = 0x48
}

+ (id)iWorkShareableExtensions;	// IMP=0x000000000000f97f
- (void).cxx_destruct;	// IMP=0x000000000000fea5
@property(copy) CDUnknownBlockType shareCopyURLCompletionBlock; // @synthesize shareCopyURLCompletionBlock=_shareCopyURLCompletionBlock;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) CKShare *share; // @synthesize share=_share;
- (void)finishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x000000000000fd7a
- (void)main;	// IMP=0x000000000000fca7
- (id)initWithShare:(id)arg1 documentType:(id)arg2;	// IMP=0x000000000000fac3
- (id)initWithShare:(id)arg1 appName:(id)arg2;	// IMP=0x000000000000f98c

@end
