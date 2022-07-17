//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPArtworkDataSourceIdentifiable-Protocol.h>

@class HSHomeSharingLibrary, NSString;

__attribute__((visibility("hidden")))
@interface MPHomeSharingArtworkDataSource <MPArtworkDataSourceIdentifiable>
{
    HSHomeSharingLibrary *_library;	// 8 = 0x8
}

+ (id)artworkDataSourceWithIdentifier:(id)arg1;	// IMP=0x000000000025bc88
+ (id)artworkDataSourceShortDescription;	// IMP=0x000000000025bc7b
- (void).cxx_destruct;	// IMP=0x000000000025bc30
@property(retain, nonatomic) HSHomeSharingLibrary *library; // @synthesize library=_library;
@property(readonly, nonatomic) NSString *artworkDataSourceIdentifier;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000025bae6
- (id)requestForCatalog:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x000000000025b8e3
- (id)supportedSizesForCatalog:(id)arg1;	// IMP=0x000000000025b815
- (_Bool)shouldLookForLargerImageRepresentationsWhenBestRepresentationIsUnavailable;	// IMP=0x000000000025b80d
- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x000000000025b786
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;	// IMP=0x000000000025b6f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
