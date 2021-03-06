//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BLTSettingSyncSendQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_sectionInfoSenderQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_sectionInfoProcessingQueue;	// 16 = 0x10
    NSObject<OS_dispatch_semaphore> *_sectionInfoSemaphore;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_subsectionParameterIconSenderQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_subsectionParameterIconProcessingQueue;	// 40 = 0x28
    NSObject<OS_dispatch_semaphore> *_subsectionParameterIconSemaphore;	// 48 = 0x30
    NSDictionary *_iconAllowList;	// 56 = 0x38
    CDUnknownBlockType _sectionParametersProvider;	// 64 = 0x40
    CDUnknownBlockType _sectionInfoSender;	// 72 = 0x48
    CDUnknownBlockType _sectionIconSender;	// 80 = 0x50
    CDUnknownBlockType _sectionRemoveSender;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000027533
@property(copy, nonatomic) CDUnknownBlockType sectionRemoveSender; // @synthesize sectionRemoveSender=_sectionRemoveSender;
@property(copy, nonatomic) CDUnknownBlockType sectionIconSender; // @synthesize sectionIconSender=_sectionIconSender;
@property(copy, nonatomic) CDUnknownBlockType sectionInfoSender; // @synthesize sectionInfoSender=_sectionInfoSender;
@property(copy, nonatomic) CDUnknownBlockType sectionParametersProvider; // @synthesize sectionParametersProvider=_sectionParametersProvider;
@property(retain, nonatomic) NSDictionary *iconAllowList; // @synthesize iconAllowList=_iconAllowList;
- (void)_sendSectionIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(long long)arg3 waitForAcknowledgement:(_Bool)arg4 withQueue:(id)arg5 spoolToFile:(_Bool)arg6 andCompletion:(CDUnknownBlockType)arg7;	// IMP=0x0000000000027389
- (void)_sendEffectiveSectionInfo:(id)arg1 waitForAcknowledgement:(_Bool)arg2 withQueue:(id)arg3 spoolToFile:(_Bool)arg4 andCompletion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000272b6
- (void)sendSectionSubtypeParameterIcons:(id)arg1 sectionID:(id)arg2 waitForAcknowledgement:(_Bool)arg3 spoolToFile:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000026c9b
- (void)sendSpooledRequestsNowWithSender:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 progress:(CDUnknownBlockType)arg3;	// IMP=0x0000000000026a85
- (void)sendRemoveSectionWithSectionID:(id)arg1 sent:(CDUnknownBlockType)arg2;	// IMP=0x000000000002694f
- (void)sendEffectiveSectionInfosUsingProvider:(CDUnknownBlockType)arg1 count:(unsigned long long)arg2 sectionInfoSendCompleted:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4 progress:(CDUnknownBlockType)arg5 spoolToFile:(_Bool)arg6;	// IMP=0x0000000000026288
- (void)_sendSectionInfoWithSectionID:(unsigned long long)arg1 usingProvider:(CDUnknownBlockType)arg2 updateProgress:(CDUnknownBlockType)arg3 sendCompleted:(CDUnknownBlockType)arg4 sendAttempt:(unsigned long long)arg5 waitForAcknowledgement:(_Bool)arg6 group:(id)arg7 spoolToFile:(_Bool)arg8;	// IMP=0x000000000002591e
- (id)initWithMaxConcurrentSendCount:(unsigned long long)arg1;	// IMP=0x00000000000257c6
- (id)init;	// IMP=0x00000000000257af

@end

