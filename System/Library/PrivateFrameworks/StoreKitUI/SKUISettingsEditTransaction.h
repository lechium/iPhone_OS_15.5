//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableSet, NSSet;
@protocol SKUISettingsEditTransactionDelegate;

__attribute__((visibility("hidden")))
@interface SKUISettingsEditTransaction : NSObject
{
    NSSet *_all;	// 8 = 0x8
    CDUnknownBlockType _commitBlock;	// 16 = 0x10
    NSLock *_lock;	// 24 = 0x18
    NSMutableSet *_pending;	// 32 = 0x20
    _Bool _success;	// 40 = 0x28
    id <SKUISettingsEditTransactionDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002b57e9
@property(nonatomic) __weak id <SKUISettingsEditTransactionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_settingDescription:(id)arg1 completedWithSuccess:(_Bool)arg2;	// IMP=0x00000000002b571b
- (void)_finalizeCommit;	// IMP=0x00000000002b5694
- (void)_delegateWillCommitTransaction;	// IMP=0x00000000002b55f6
- (void)_delegateWillBeginTransaction;	// IMP=0x00000000002b5558
- (void)_delegateDidFailTransaction;	// IMP=0x00000000002b54ba
- (void)_delegateDidCompleteTransaction;	// IMP=0x00000000002b541c
- (void)rollbackTransaction;	// IMP=0x00000000002b52a2
- (_Bool)isValid;	// IMP=0x00000000002b5167
- (_Bool)isCommiting;	// IMP=0x00000000002b5111
- (void)commitTransaction;	// IMP=0x00000000002b4e29
- (void)cancelTransaction;	// IMP=0x00000000002b4caf
- (void)beginTransaction;	// IMP=0x00000000002b4b6b
- (id)initWithSettingDescriptions:(id)arg1;	// IMP=0x00000000002b4abc

@end

