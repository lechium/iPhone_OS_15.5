//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, VUIMPMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUIMPDeviceMediaLibrary
{
    _Bool _updatingRentalPlaybackStartDates;	// 8 = 0x8
    VUIMPMediaLibrary *_mediaLibrary;	// 16 = 0x10
    NSMutableDictionary *_rentalPlaybackStartDatesToSave;	// 24 = 0x18
}

+ (_Bool)_isInitialUpdateInProgress;	// IMP=0x000000000025e933
+ (_Bool)_isUpdateInProgress;	// IMP=0x000000000025e8e8
- (void).cxx_destruct;	// IMP=0x000000000025e9e8
@property(nonatomic) _Bool updatingRentalPlaybackStartDates; // @synthesize updatingRentalPlaybackStartDates=_updatingRentalPlaybackStartDates;
@property(retain, nonatomic) NSMutableDictionary *rentalPlaybackStartDatesToSave; // @synthesize rentalPlaybackStartDatesToSave=_rentalPlaybackStartDatesToSave;
@property(retain, nonatomic) VUIMPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
- (void)_handleApplicationWillResignActiveNotification:(id)arg1;	// IMP=0x000000000025e8a4
- (void)_handleApplicationDidBecomeActiveNotification:(id)arg1;	// IMP=0x000000000025e860
- (void)_handleMediaLibraryIsUpdateInProgressDidChangeNotification:(id)arg1;	// IMP=0x000000000025e5e1
- (void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1;	// IMP=0x000000000025e5cf
- (id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;	// IMP=0x000000000025e52f
- (id)_imageLoadParamsForImageLoaderObject:(id)arg1;	// IMP=0x000000000025e4ac
- (id)_imageLoaderIdentifier;	// IMP=0x000000000025e45c
- (id)saveMediaEntity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000025e3c5
- (id)enqueueFetchRequests:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000025e32e
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000025e2ab
- (id)title;	// IMP=0x000000000025e25b
- (void)updateFromCloudWithReason:(long long)arg1;	// IMP=0x000000000025e1ab
- (void)updateProgressWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000025e0b0
- (_Bool)isInitialUpdateInProgress;	// IMP=0x000000000025e096
- (_Bool)isUpdating;	// IMP=0x000000000025e07c
- (void)dealloc;	// IMP=0x000000000025e007
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3;	// IMP=0x000000000025df98
- (id)initWithManager:(id)arg1;	// IMP=0x000000000025dd2a

@end

