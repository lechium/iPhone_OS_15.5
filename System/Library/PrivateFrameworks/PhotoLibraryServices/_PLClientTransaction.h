//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSSet, NSString;
@protocol OS_dispatch_semaphore;

@interface _PLClientTransaction
{
    NSSet *_changeScopes;	// 8 = 0x8
    long long _addChangeScopesBatch;	// 16 = 0x10
    NSSet *_batchScopes;	// 24 = 0x18
    int _fileDescriptor;	// 32 = 0x20
    id _processAssertion;	// 40 = 0x28
    NSString *_path;	// 48 = 0x30
    NSObject<OS_dispatch_semaphore> *_fdResourceSemaphore;	// 56 = 0x38
    NSString *_changeScopesDescriptionSnapshot;	// 64 = 0x40
}

+ (id)_fdResourceSemaphore;	// IMP=0x00000000004ff736
+ (id)_fdIsolationQueue;	// IMP=0x00000000004ff712
- (void).cxx_destruct;	// IMP=0x00000000004faf71
@property(copy) NSString *changeScopesDescriptionSnapshot; // @synthesize changeScopesDescriptionSnapshot=_changeScopesDescriptionSnapshot;
@property(nonatomic) __weak NSObject<OS_dispatch_semaphore> *fdResourceSemaphore; // @synthesize fdResourceSemaphore=_fdResourceSemaphore;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) id processAssertion; // @synthesize processAssertion=_processAssertion;
@property(nonatomic) int fileDescriptor; // @synthesize fileDescriptor=_fileDescriptor;
- (id)description;	// IMP=0x00000000004fad6d
- (id)generateChangeScopesDescription;	// IMP=0x00000000004fad1d
- (void)abortTransaction;	// IMP=0x00000000004fac08
- (void)completeTransactionScope:(id)arg1;	// IMP=0x00000000004fac02
- (void)completeTransaction;	// IMP=0x00000000004faade
- (id)changeScopes;	// IMP=0x00000000004faac9
- (_Bool)isClientTransaction;	// IMP=0x00000000004faac1
- (void)popChangeScopesBatch;	// IMP=0x00000000004faa40
- (void)pushChangeScopesBatch;	// IMP=0x00000000004fa9cb
- (void)addChangeScopes:(id)arg1;	// IMP=0x00000000004fa87a
- (void)persistTransactionScopes:(id)arg1;	// IMP=0x00000000004fa7e4
- (void)_updateChangeScopesDescriptionSnapshot;	// IMP=0x00000000004fa7de
- (void)dealloc;	// IMP=0x00000000004fa69c
- (id)initWithPathManager:(id)arg1;	// IMP=0x00000000004fa5c2

@end
