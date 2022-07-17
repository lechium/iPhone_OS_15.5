//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXSuggestLessPeopleHelperDelegate-Protocol.h>

@class NSString, PXSuggestLessPeopleHelper;

@interface PXPhotoKitAssetCollectionBlacklistMemoryFeatureActionPerformer <PXSuggestLessPeopleHelperDelegate>
{
    _Bool _isBlockingMemoryFeature;	// 24 = 0x18
    NSString *_userResponse;	// 32 = 0x20
    PXSuggestLessPeopleHelper *_suggestLessPeopleHelper;	// 40 = 0x28
}

+ (id)_verifiedPersonsIncludingMergeCandidatesInMemory:(id)arg1 personFetchOptions:(id)arg2;	// IMP=0x00000000001bbc4b
+ (id)_personContextDetailFetchOptionsForLibrary:(id)arg1;	// IMP=0x00000000001bbb8d
+ (id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3;	// IMP=0x00000000001bbb85
+ (_Bool)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2;	// IMP=0x00000000001bbb37
- (void).cxx_destruct;	// IMP=0x00000000001bb674
@property(retain, nonatomic) PXSuggestLessPeopleHelper *suggestLessPeopleHelper; // @synthesize suggestLessPeopleHelper=_suggestLessPeopleHelper;
@property(nonatomic) _Bool isBlockingMemoryFeature; // @synthesize isBlockingMemoryFeature=_isBlockingMemoryFeature;
@property(retain, nonatomic) NSString *userResponse; // @synthesize userResponse=_userResponse;
- (id)_cpAnalyticsEventForMemoryFeatureType:(unsigned long long)arg1;	// IMP=0x00000000001bb59f
- (void)applyBlacklistFeatureWithActionType:(id)arg1;	// IMP=0x00000000001bb189
- (void)performBackgroundTask;	// IMP=0x00000000001bb0c5
- (id)_memoryFeatureFromMemory:(id)arg1 forActionType:(id)arg2;	// IMP=0x00000000001baf21
- (unsigned long long)_memoryFeatureTypeFromActionType:(id)arg1;	// IMP=0x00000000001bae6b
- (void)suggestLessPeopleInMemory:(id)arg1;	// IMP=0x00000000001bab52
- (_Bool)suggestLessPeopleHelper:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001bab3a
- (_Bool)suggestLessPeopleHelper:(id)arg1 presentViewController:(id)arg2;	// IMP=0x00000000001bab25
- (void)performUserInteractionTask;	// IMP=0x00000000001baa2b
- (void)confirmBlacklistingUserAction:(id)arg1 viewSpec:(id)arg2;	// IMP=0x00000000001ba96b

@end
