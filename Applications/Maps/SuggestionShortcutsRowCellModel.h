//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MapsSuggestionsEntry, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface SuggestionShortcutsRowCellModel
{
    UIImage *_image;	// 16 = 0x10
    unsigned long long _imageCount;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    NSString *_subtitle;	// 40 = 0x28
    MapsSuggestionsEntry *_entry;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000001366cd
@property(readonly, nonatomic) MapsSuggestionsEntry *entry; // @synthesize entry=_entry;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;	// IMP=0x00100000001366aa
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000136555
- (_Bool)_shouldFetchMissingImage;	// IMP=0x0010000000136394
- (void)_setFetchedImage:(id)arg1;	// IMP=0x0010000000136309
- (void)_fetchImageWithImageCount:(unsigned long long)arg1 retryCount:(unsigned long long)arg2;	// IMP=0x0010000000135ef5
- (void)_sceneDidActivate:(id)arg1;	// IMP=0x0010000000135ee3
- (void)_updateTitlesFromEntry;	// IMP=0x0010000000135e2b
- (void)fetchImageIfMissing;	// IMP=0x0010000000135d6b
- (void)fetchImage;	// IMP=0x0010000000135d45
- (_Bool)vibrantBackground;	// IMP=0x0010000000135d28
- (id)image;	// IMP=0x0010000000135cf1
- (id)subtitle;	// IMP=0x0010000000135cdc
- (id)title;	// IMP=0x0010000000135cc7
- (id)_maps_diffableDataSourceIdentifier;	// IMP=0x0010000000135caa
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000135c12
@property(readonly) unsigned long long hash;
- (void)dealloc;	// IMP=0x0010000000135b38
- (id)initWithMapsSuggestionsEntry:(id)arg1;	// IMP=0x001000000013597b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
