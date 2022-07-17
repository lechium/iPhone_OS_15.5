//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _INVocabularyStoreManager;

@interface ADIntentVocabularyUpdateConnection : NSObject
{
    NSString *_appBundleID;	// 8 = 0x8
    NSString *_appPath;	// 16 = 0x10
    _INVocabularyStoreManager *_datastoreManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000025576b
- (void)fetchCurrentSiriLanguageCode:(CDUnknownBlockType)arg1;	// IMP=0x0010000000255669
- (void)verifyProcessCanDonateIntentWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000255615
- (void)requestSiriAuthorization:(CDUnknownBlockType)arg1;	// IMP=0x00100000002554da
- (void)fetchSiriAuthorization:(CDUnknownBlockType)arg1;	// IMP=0x0010000000255468
- (oneway void)deleteEverything;	// IMP=0x00100000002552e0
- (oneway void)askToSyncSlot:(id)arg1;	// IMP=0x0010000000255195
- (void)_triggerUserVocabularySyncAttributingApp:(id)arg1 vocabType:(id)arg2;	// IMP=0x00100000002550be
- (oneway void)recordVocabulary:(id)arg1 forIntentSlot:(id)arg2 withValidationCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000254ca2
- (id)_datastoreManager;	// IMP=0x0010000000254c4f
- (id)initWithBundleID:(id)arg1 path:(id)arg2;	// IMP=0x0010000000254b55

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
