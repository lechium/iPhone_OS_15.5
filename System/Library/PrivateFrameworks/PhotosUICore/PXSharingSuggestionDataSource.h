//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PHPhotoLibraryChangeObserver-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface PXSharingSuggestionDataSource <PHPhotoLibraryChangeObserver>
{
    NSObject<OS_dispatch_queue> *_fetchQueue;	// 8 = 0x8
    _Bool _prefetchingStarted;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000821c2
@property(nonatomic) _Bool prefetchingStarted; // @synthesize prefetchingStarted=_prefetchingStarted;
- (void)setMembers:(id)arg1;	// IMP=0x0000000000082131
- (void)prefetchThumbnailsForTargetSize:(struct CGSize)arg1 maxFetchCount:(unsigned long long)arg2;	// IMP=0x000000000008208e
- (id)titleAtIndex:(unsigned long long)arg1;	// IMP=0x000000000008203e
- (void)imageCacheDidChanged:(id)arg1;	// IMP=0x0000000000081df1
- (void)photoLibraryDidChange:(id)arg1;	// IMP=0x0000000000081d36
- (void)stopListeningForChanges;	// IMP=0x0000000000081cac
- (void)startListeningForChanges;	// IMP=0x0000000000081c11
- (void)dealloc;	// IMP=0x0000000000081bd3
- (id)initWithName:(id)arg1 objectsReloadBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000081b3f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
