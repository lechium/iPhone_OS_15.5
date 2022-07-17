//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CoreThemeDocument, NSConditionLock, NSMutableArray, TDLogger;
@protocol OS_dispatch_group;

@interface TDRenditionsDistiller : NSObject
{
    CoreThemeDocument *document;	// 8 = 0x8
    NSMutableArray *renditionInQueue;	// 16 = 0x10
    NSMutableArray *csiDataInfoOutQueue;	// 24 = 0x18
    NSConditionLock *inQueueLock;	// 32 = 0x20
    NSConditionLock *outQueueLock;	// 40 = 0x28
    _Bool shouldCompressCSIDataFlag;	// 48 = 0x30
    _Bool noMoreCSIDataInfo;	// 49 = 0x31
    _Bool noMoreRenditions;	// 50 = 0x32
    NSObject<OS_dispatch_group> *_group;	// 56 = 0x38
    TDLogger *_logger;	// 64 = 0x40
}

@property(retain) TDLogger *logger; // @synthesize logger=_logger;
- (id)nextCSIDataInfoFromQueue;	// IMP=0x000000000007015f
- (void)enqueueRenditionSpec:(id)arg1;	// IMP=0x000000000007012b
- (void)enqueueAbortFlag;	// IMP=0x00000000000700be
- (void)enqueueLastRenditionFlag;	// IMP=0x0000000000070084
- (void)detachDistillationThread;	// IMP=0x000000000007005e
- (void)waitUntilFinished;	// IMP=0x0000000000070049
- (void)_distill:(id)arg1;	// IMP=0x000000000006fc02
- (id)_nextObjectFromInQueue;	// IMP=0x000000000006fae6
- (void)_enqueueDistillingAbortedInfo;	// IMP=0x000000000006fa5c
- (void)_enqueueLastCSIDataInfoFlag;	// IMP=0x000000000006fa22
- (void)_enqueueCSIDataInfo:(id)arg1;	// IMP=0x000000000006fa10
- (void)_enqueueOnOutQueueTheObject:(id)arg1;	// IMP=0x000000000006f9f3
- (void)_enqueueOnInQueueTheObject:(id)arg1;	// IMP=0x000000000006f9d6
- (void)_enqueueOnQueue:(id)arg1 withQueueLock:(id)arg2 object:(id)arg3;	// IMP=0x000000000006f982
- (void)dealloc;	// IMP=0x000000000006f908
- (id)initWithDocument:(id)arg1 shouldCompressCSIDataFlag:(_Bool)arg2;	// IMP=0x000000000006f840

@end
