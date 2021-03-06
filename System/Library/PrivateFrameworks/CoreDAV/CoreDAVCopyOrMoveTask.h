//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

@interface CoreDAVCopyOrMoveTask
{
    int _overwrite;	// 36 = 0x24
    NSURL *_destinationURL;	// 40 = 0x28
    NSURL *_priorOrderedURL;	// 48 = 0x30
    _Bool _shouldSendOrder;	// 56 = 0x38
}

+ (id)stringFromOverwriteValue:(int)arg1;	// IMP=0x000000000004a280
- (void).cxx_destruct;	// IMP=0x000000000004a30c
@property(retain, nonatomic) NSURL *priorOrderedURL; // @synthesize priorOrderedURL=_priorOrderedURL;
@property(retain, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(nonatomic) int overwrite; // @synthesize overwrite=_overwrite;
- (void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2;	// IMP=0x000000000004a26d
- (void)finishCoreDAVTaskWithError:(id)arg1;	// IMP=0x0000000000049e57
- (id)additionalHeaderValues;	// IMP=0x0000000000049c29
- (id)requestBody;	// IMP=0x0000000000049c21
- (id)description;	// IMP=0x0000000000049a70
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 andOverwrite:(int)arg3;	// IMP=0x000000000004989b
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2;	// IMP=0x0000000000049886
- (id)initWithURL:(id)arg1;	// IMP=0x000000000004985b

@end

