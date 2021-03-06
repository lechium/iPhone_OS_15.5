//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/CKVDonateTaskProvider-Protocol.h>

@class NSString;
@protocol CKVDonatorProvider, OS_dispatch_queue;

@interface CKVDonateTaskFactory : NSObject <CKVDonateTaskProvider>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<CKVDonatorProvider> *_donatorProvider;	// 16 = 0x10
    _Bool _useSimulatedProviderBridge;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b4812
@property _Bool useSimulatedProviderBridge; // @synthesize useSimulatedProviderBridge=_useSimulatedProviderBridge;
- (id)mediaDonateTask;	// IMP=0x00000000000b476d
- (id)homeKitDonateTask;	// IMP=0x00000000000b46dc
- (id)appInfoDonateTaskWithLanguageCode:(id)arg1;	// IMP=0x00000000000b461b
- (id)contactsDonateTask;	// IMP=0x00000000000b458a
- (id)intentVocabularyDonateTask;	// IMP=0x00000000000b44e3
- (void)enableSimulatedTasks:(_Bool)arg1;	// IMP=0x00000000000b44d1
- (id)initWithQueue:(id)arg1 serviceProvider:(id)arg2;	// IMP=0x00000000000b43ee
- (id)init;	// IMP=0x00000000000b43a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

