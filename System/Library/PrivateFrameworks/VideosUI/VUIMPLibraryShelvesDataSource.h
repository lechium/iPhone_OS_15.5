//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/VUILibraryDataSourceDelegate-Protocol.h>

@class NSMutableArray, NSString, VUIMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUIMPLibraryShelvesDataSource <VUILibraryDataSourceDelegate>
{
    VUIMediaLibrary *_mediaLibrary;	// 8 = 0x8
    NSMutableArray *_fetchedDataSources;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000297f32
@property(retain, nonatomic) NSMutableArray *fetchedDataSources; // @synthesize fetchedDataSources=_fetchedDataSources;
@property(retain, nonatomic) VUIMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
- (void)_updateRentalShelf;	// IMP=0x0000000000297e54
- (id)_dataSourceForShelves;	// IMP=0x0000000000297bb9
- (void)_removeRentalsUpdateNotificationObserver;	// IMP=0x0000000000297b59
- (void)_addRentalsUpdateNotificationObserver;	// IMP=0x0000000000297af2
- (void)dataSourceDidFinishFetching:(id)arg1;	// IMP=0x0000000000297912
- (void)startFetch;	// IMP=0x00000000002978a0
- (void)dealloc;	// IMP=0x0000000000297845
- (id)initWithValidShelfTypes:(id)arg1 forMediaLibrary:(id)arg2;	// IMP=0x00000000002977bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

