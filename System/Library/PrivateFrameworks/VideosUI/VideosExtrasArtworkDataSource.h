//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

__attribute__((visibility("hidden")))
@interface VideosExtrasArtworkDataSource : MPAbstractNetworkArtworkDataSource
{
}

- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000000359d7
- (_Bool)wantsBackgroundImageDecompression;	// IMP=0x00000000000359cf
- (id)requestForCatalog:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000000356ed
- (id)supportedSizesForCatalog:(id)arg1;	// IMP=0x000000000003528e
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;	// IMP=0x00000000000351f0
- (id)init;	// IMP=0x00000000000350f3

@end
