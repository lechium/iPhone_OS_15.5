//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ICMusicKitURLResponseHandler
{
}

- (void)_updateRequest:(id)arg1 forProcessedResponseOfStoreURLRequest:(id)arg2;	// IMP=0x000000000012fa5f
- (void)_invalidateUserTokenForInitialResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000012f902
- (void)_invalidateDeveloperTokenForInitialResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000012f7af
- (void)processCompletedResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000012f1e7
- (void)processInitialResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000012ee9c

@end
