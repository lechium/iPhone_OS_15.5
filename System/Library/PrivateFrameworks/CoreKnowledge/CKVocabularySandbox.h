//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKVAuxiliaryFilesystemBase, CKVDonationManager, CKVIndexManager, CKVSettings, NSString;
@protocol CKVSearcherProvider, KVDonateServiceProvider, OS_dispatch_queue;

@interface CKVocabularySandbox : NSObject
{
    CKVDonationManager *_donationManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSString *_sandboxBaseName;	// 24 = 0x18
    CKVAuxiliaryFilesystemBase *_base;	// 32 = 0x20
    _Bool _sandboxIsSaved;	// 40 = 0x28
    NSString *_sandboxId;	// 48 = 0x30
    CKVIndexManager *_indexManager;	// 56 = 0x38
    NSObject<KVDonateServiceProvider> *_donateServiceProvider;	// 64 = 0x40
    NSObject<CKVSearcherProvider> *_searcherProvider;	// 72 = 0x48
    double _synchronousDonatorTimeout;	// 80 = 0x50
    CKVSettings *_settings;	// 88 = 0x58
}

+ (id)_sandboxBaseNameWithId:(id)arg1;	// IMP=0x00000000000c906b
+ (id)loadWithSandboxId:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c8de0
+ (void)initialize;	// IMP=0x00000000000c8dbc
+ (id)_sandboxWithProfile:(id)arg1 settings:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000086b70
+ (id)sandboxWithProfile:(id)arg1 locale:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000086942
+ (id)_sandboxWithRawSpeechProfile:(id)arg1 rawSpeechProfileMetadata:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000085d10
+ (id)sandboxWithRawSpeechProfile:(id)arg1 rawSpeechProfileMetadata:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000085c8d
+ (id)sandboxWithRawSpeechProfile:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000085c2b
- (void).cxx_destruct;	// IMP=0x00000000000c8a56
@property(readonly, nonatomic) CKVSettings *settings; // @synthesize settings=_settings;
@property(nonatomic) double synchronousDonatorTimeout; // @synthesize synchronousDonatorTimeout=_synchronousDonatorTimeout;
@property(readonly, nonatomic) NSObject<CKVSearcherProvider> *searcherProvider; // @synthesize searcherProvider=_searcherProvider;
@property(readonly, nonatomic) NSObject<KVDonateServiceProvider> *donateServiceProvider; // @synthesize donateServiceProvider=_donateServiceProvider;
@property(readonly, nonatomic) CKVIndexManager *indexManager; // @synthesize indexManager=_indexManager;
@property(readonly, nonatomic) NSString *sandboxId; // @synthesize sandboxId=_sandboxId;
- (id)_loadSavedSettings;	// IMP=0x00000000000c88c2
- (_Bool)_saveSettings;	// IMP=0x00000000000c87d4
- (id)save;	// IMP=0x00000000000c877e
- (void)reset;	// IMP=0x00000000000c8733
- (void)dealloc;	// IMP=0x00000000000c86c8
- (id)initWithSandboxId:(id)arg1 sandboxIsSaved:(_Bool)arg2 settings:(id)arg3;	// IMP=0x00000000000c82e0
- (id)initWithSettings:(id)arg1;	// IMP=0x00000000000c823f
- (id)init;	// IMP=0x00000000000c81bf
- (long long)synchronousDonatorWithOriginAppId:(id)arg1 replaceAllVocabularyOfClass:(Class)arg2 withVocabulary:(id)arg3;	// IMP=0x00000000000c600b
- (id)donatorWithOriginAppId:(id)arg1;	// IMP=0x00000000000c5ee6
- (id)searcherForUserId:(id)arg1;	// IMP=0x00000000000df8a9
- (id)searcher;	// IMP=0x00000000000df855

@end
