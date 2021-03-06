//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FileProviderDaemon/FPCancellable-Protocol.h>

@class FPDActionOperationQueue, FPDCoordinator, FPDMoveOperation, FPMoveInfo, NSArray, NSError, NSMutableArray, NSMutableDictionary, NSObservation;
@protocol FPDMoveWriterExecutor, OS_dispatch_queue;

@interface FPDMoveWriter : NSObject <FPCancellable>
{
    FPMoveInfo *_info;	// 8 = 0x8
    FPDActionOperationQueue *_moveQueue;	// 16 = 0x10
    id <FPDMoveWriterExecutor> _providerWriter;	// 24 = 0x18
    FPDCoordinator *_preemptiveDownloadCoordinator;	// 32 = 0x20
    NSMutableArray *_sourceFoldersStack;	// 40 = 0x28
    NSMutableArray *_destinationFoldersStack;	// 48 = 0x30
    NSMutableDictionary *_errorsByRoot;	// 56 = 0x38
    NSMutableDictionary *_progressByRoot;	// 64 = 0x40
    id _waitedOnID;	// 72 = 0x48
    CDUnknownBlockType _waiterBlock;	// 80 = 0x50
    _Bool _cancelled;	// 88 = 0x58
    NSError *_error;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_asyncQueue;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_queue;	// 112 = 0x70
    unsigned long long _logSection;	// 120 = 0x78
    NSObservation *_importProgressObservation;	// 128 = 0x80
    NSArray *_accessTokens;	// 136 = 0x88
    FPDMoveOperation *_operation;	// 144 = 0x90
    CDUnknownBlockType _itemCopyProgressBlock;	// 152 = 0x98
    CDUnknownBlockType _itemCompletionBlock;	// 160 = 0xa0
    CDUnknownBlockType _rootCreatedBlock;	// 168 = 0xa8
    CDUnknownBlockType _rootCompletionBlock;	// 176 = 0xb0
    CDUnknownBlockType _completionBlock;	// 184 = 0xb8
    id <FPDMoveWriterExecutor> _diskWriter;	// 192 = 0xc0
    FPDCoordinator *_coordinator;	// 200 = 0xc8
}

+ (void)initialize;	// IMP=0x0000000000090f9d
+ (void)releaseDownloadSlot:(id)arg1;	// IMP=0x0000000000090e63
+ (id)acquireDownloadSlotForItem:(id)arg1;	// IMP=0x0000000000090d6a
- (void).cxx_destruct;	// IMP=0x0000000000094ff8
@property(retain, nonatomic) FPDCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) FPMoveInfo *info; // @synthesize info=_info;
@property(retain, nonatomic) id <FPDMoveWriterExecutor> diskWriter; // @synthesize diskWriter=_diskWriter;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType rootCompletionBlock; // @synthesize rootCompletionBlock=_rootCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType rootCreatedBlock; // @synthesize rootCreatedBlock=_rootCreatedBlock;
@property(copy, nonatomic) CDUnknownBlockType itemCompletionBlock; // @synthesize itemCompletionBlock=_itemCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType itemCopyProgressBlock; // @synthesize itemCopyProgressBlock=_itemCopyProgressBlock;
@property(readonly, nonatomic) __weak FPDMoveOperation *operation; // @synthesize operation=_operation;
- (void)performCreateFolder:(id)arg1 inside:(id)arg2 as:(id)arg3 useDiskWriter:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000094dbb
- (void)performMoveOfFolder:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 atomically:(_Bool)arg6 useDiskWriter:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0000000000094c3b
- (void)performMoveOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 useDiskWriter:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0000000000094ae2
- (void)performCopyOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 useDiskWriter:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000000000948f8
- (void)performCopyOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000009481a
- (id)defaultExecutor;	// IMP=0x000000000009478a
- (void)dumpStateTo:(id)arg1;	// IMP=0x0000000000094567
- (void)_removeRoot:(id)arg1;	// IMP=0x00000000000943fa
- (void)startDownloadOfItem:(id)arg1 shouldMaterializeRecursively:(_Bool)arg2;	// IMP=0x0000000000094053
- (id)waitForResultOfSourceID:(id)arg1 root:(id)arg2 error:(id *)arg3;	// IMP=0x000000000009386f
- (void)_unblockWaiterForSourceID:(id)arg1 withResult:(id)arg2 error:(id)arg3;	// IMP=0x00000000000937b6
- (void)setProgress:(id)arg1 forRoot:(id)arg2;	// IMP=0x00000000000934f8
- (void)cancel;	// IMP=0x0000000000093447
- (void)cancelRoot:(id)arg1;	// IMP=0x00000000000932de
- (void)failWithError:(id)arg1;	// IMP=0x0000000000093234
- (void)_finishWithError:(id)arg1;	// IMP=0x0000000000092fa4
- (void)start;	// IMP=0x0000000000092f43
- (void)_step;	// IMP=0x0000000000092d44
- (void)handleAtom:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000092c34
- (void)_handlePostFolder:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000092a27
- (void)handleCreationForAtom:(id)arg1 result:(id)arg2;	// IMP=0x000000000009289c
- (void)_handleCompletionOfAtom:(id)arg1 source:(id)arg2 result:(id)arg3 error:(id)arg4;	// IMP=0x000000000009255f
- (void)_handleFolder:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000009227b
- (void)_performCopyOrMoveOfFolder:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000091eb2
- (void)_handleItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000091d37
- (void)_performCopyOrMoveOfItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000009150c
- (id)initWithOperation:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000090fe6

@end

