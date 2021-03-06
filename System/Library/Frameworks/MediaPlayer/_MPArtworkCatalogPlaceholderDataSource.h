//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPArtworkDataSource-Protocol.h>

@class NSCache, NSString;

__attribute__((visibility("hidden")))
@interface _MPArtworkCatalogPlaceholderDataSource : NSObject <MPArtworkDataSource>
{
    NSCache *_fallbackCache;	// 8 = 0x8
}

+ (id)sharedDataSource;	// IMP=0x00000000000cf9c4
- (void).cxx_destruct;	// IMP=0x00000000000cf6b7
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;	// IMP=0x00000000000cf6b1
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;	// IMP=0x00000000000cf5e4
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cf401
- (id)existingRepresentationForArtworkCatalog:(id)arg1;	// IMP=0x00000000000cf324
- (_Bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;	// IMP=0x00000000000cf26e
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;	// IMP=0x00000000000cf266

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

