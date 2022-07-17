//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VUIMediaItemEntityTypesFetchResponse;
@protocol VUIMediaItemEntityTypesFetchControllerDelegate;

@interface VUIMediaItemEntityTypesFetchController
{
    id <VUIMediaItemEntityTypesFetchControllerDelegate> _delegate;	// 8 = 0x8
    VUIMediaItemEntityTypesFetchResponse *_response;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001a29e2
@property(retain, nonatomic) VUIMediaItemEntityTypesFetchResponse *response; // @synthesize response=_response;
@property(nonatomic) __weak id <VUIMediaItemEntityTypesFetchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_updateResponseWithResult:(id)arg1 replaceContentsOnNilChanges:(_Bool)arg2;	// IMP=0x00000000001a28af
- (void)_notifyFetchDidFailWithError:(id)arg1;	// IMP=0x00000000001a27c7
- (void)_notifyFetchDidCompleteWithResult:(id)arg1;	// IMP=0x00000000001a26df
- (void)_notifyDelegateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a259a
- (void)_handleContentsChangeFetchControllerOperationDidCompleteWithResult:(id)arg1 error:(id)arg2;	// IMP=0x00000000001a2493
- (void)_handleInitialFetchControllerOperationDidCompleteWithResult:(id)arg1 error:(id)arg2;	// IMP=0x00000000001a23cb
- (void)_didCompleteFetchOperation:(id)arg1;	// IMP=0x00000000001a2312
- (id)_fetchOperationForFetchReason:(long long)arg1;	// IMP=0x00000000001a2264
- (void)cancelFetch;	// IMP=0x00000000001a2224
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x00000000001a21f5

@end
