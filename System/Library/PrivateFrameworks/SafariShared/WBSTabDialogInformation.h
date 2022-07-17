//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WBSTabDialogInformation : NSObject
{
    CDUnknownBlockType _dismissalBlock;	// 8 = 0x8
    _Bool _isInvokingPresentationBlock;	// 16 = 0x10
    CDUnknownBlockType _presentationBlock;	// 24 = 0x18
    _Bool _blockingWebProcess;	// 32 = 0x20
    _Bool _dismissed;	// 33 = 0x21
    _Bool _presented;	// 34 = 0x22
    NSArray *_cancellationExemptions;	// 40 = 0x28
    CDStruct_497cfc99 _slot;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000016dd87
@property(readonly, nonatomic, getter=isPresented) _Bool presented; // @synthesize presented=_presented;
@property(readonly, nonatomic, getter=isDismissed) _Bool dismissed; // @synthesize dismissed=_dismissed;
@property(readonly, nonatomic, getter=isBlockingWebProcess) _Bool blockingWebProcess; // @synthesize blockingWebProcess=_blockingWebProcess;
@property(copy, nonatomic) NSArray *cancellationExemptions; // @synthesize cancellationExemptions=_cancellationExemptions;
@property(nonatomic) CDStruct_497cfc99 slot; // @synthesize slot=_slot;
- (_Bool)isExemptFromCancellationInContext:(id)arg1;	// IMP=0x000000000016dbe7
- (void)dismissWithResponse:(id)arg1;	// IMP=0x000000000016dbb9
- (void)presentIfNeeded;	// IMP=0x000000000016db85
- (id)description;	// IMP=0x000000000016da4c
- (id)initWithPresentationBlock:(CDUnknownBlockType)arg1 dismissalBlock:(CDUnknownBlockType)arg2 blocksWebProcessUntilDismissed:(_Bool)arg3;	// IMP=0x000000000016d97c

@end
