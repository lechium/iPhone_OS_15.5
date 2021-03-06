//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface PUForYouSuggestionSaveActionPerformer
{
    _Bool _isReverting;	// 32 = 0x20
}

@property(readonly, nonatomic) _Bool isReverting; // @synthesize isReverting=_isReverting;
- (void)_dismissPresentedViewController:(id)arg1;	// IMP=0x000000000017b5c4
- (void)_displayFailureAlert;	// IMP=0x000000000017b2e4
- (void)_handleSuccess:(_Bool)arg1;	// IMP=0x000000000017b2cc
- (void)_updateSuggestionState;	// IMP=0x000000000017b045
- (void)_performImageSaveWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000017ae3a
- (void)_performLivePhotoSaveWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000017abeb
- (void)_performLoopingVideoSaveWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000017a9e0
- (void)performWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000017a5c0
- (id)initWithAsset:(id)arg1 isReverting:(_Bool)arg2;	// IMP=0x000000000017a57e
- (id)initWithAsset:(id)arg1;	// IMP=0x000000000017a56a

@end

