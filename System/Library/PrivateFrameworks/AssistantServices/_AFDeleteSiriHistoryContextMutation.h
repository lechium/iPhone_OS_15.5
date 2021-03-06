//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFDeleteSiriHistoryContextMutating-Protocol.h>

@class AFDeleteSiriHistoryContext, NSString;

@interface _AFDeleteSiriHistoryContextMutation : NSObject <AFDeleteSiriHistoryContextMutating>
{
    AFDeleteSiriHistoryContext *_baseModel;	// 8 = 0x8
    NSString *_successTitle;	// 16 = 0x10
    NSString *_successBody;	// 24 = 0x18
    NSString *_successButtonText;	// 32 = 0x20
    NSString *_errorTitle;	// 40 = 0x28
    NSString *_errorBody;	// 48 = 0x30
    NSString *_errorButtonText;	// 56 = 0x38
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasSuccessTitle:1;
        unsigned int hasSuccessBody:1;
        unsigned int hasSuccessButtonText:1;
        unsigned int hasErrorTitle:1;
        unsigned int hasErrorBody:1;
        unsigned int hasErrorButtonText:1;
    } _mutationFlags;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000005be53
- (id)generate;	// IMP=0x000000000005bc24
- (void)setErrorButtonText:(id)arg1;	// IMP=0x000000000005bc04
- (void)setErrorBody:(id)arg1;	// IMP=0x000000000005bbe4
- (void)setErrorTitle:(id)arg1;	// IMP=0x000000000005bbc4
- (void)setSuccessButtonText:(id)arg1;	// IMP=0x000000000005bba4
- (void)setSuccessBody:(id)arg1;	// IMP=0x000000000005bb84
- (void)setSuccessTitle:(id)arg1;	// IMP=0x000000000005bb64
- (id)initWithBaseModel:(id)arg1;	// IMP=0x000000000005baf9
- (id)init;	// IMP=0x000000000005bae5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

