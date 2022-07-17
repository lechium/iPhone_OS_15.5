//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary, _UIDictionaryManager;

__attribute__((visibility("hidden")))
@interface _UIRemoteDictionaryViewController
{
    NSArray *_availableDictionaries;	// 400 = 0x190
    _UIDictionaryManager *_dictionaryAssetManager;	// 408 = 0x198
    NSMutableDictionary *_downloadingAssets;	// 416 = 0x1a0
}

- (void).cxx_destruct;	// IMP=0x0000000000483cb1
@property(retain, nonatomic) NSMutableDictionary *downloadingAssets; // @synthesize downloadingAssets=_downloadingAssets;
@property(retain, nonatomic) _UIDictionaryManager *dictionaryAssetManager; // @synthesize dictionaryAssetManager=_dictionaryAssetManager;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x0000000000483c05
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000048387b
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0000000000483873
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000482ec0
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000482ea3
- (void)_startDownloadForDictionary:(id)arg1;	// IMP=0x0000000000482a19
- (void)_handleDownloadButton:(id)arg1;	// IMP=0x00000000004828a6
- (id)_downloadButton;	// IMP=0x00000000004827cf
- (id)_downloadImageWithTintColor:(id)arg1;	// IMP=0x000000000048257b
- (id)_cloudBackgroundImage;	// IMP=0x000000000048256a
- (id)_downloadArrowImage;	// IMP=0x0000000000482559
- (void)viewDidLoad;	// IMP=0x000000000048236a
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000000004822c1

@end
