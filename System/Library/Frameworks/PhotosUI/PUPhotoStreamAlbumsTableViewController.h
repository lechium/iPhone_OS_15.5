//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSMutableSet, NSOrderedSet;
@protocol PUPhotoStreamsAlbumsTableViewControllerDelegate;

@interface PUPhotoStreamAlbumsTableViewController : UITableViewController
{
    NSOrderedSet *_albumsOrderedSet;	// 8 = 0x8
    NSMutableSet *_selectedAlbumGuids;	// 16 = 0x10
    _Bool _allowsMutlipleSelection;	// 24 = 0x18
    id <PUPhotoStreamsAlbumsTableViewControllerDelegate> _pickerDelegate;	// 32 = 0x20
}

+ (CDUnknownBlockType)_albumsComparator;	// IMP=0x000000000031bebd
+ (id)albumListForContentMode:(int)arg1;	// IMP=0x000000000031bdd3
- (void).cxx_destruct;	// IMP=0x000000000031bd93
@property(nonatomic) __weak id <PUPhotoStreamsAlbumsTableViewControllerDelegate> pickerDelegate; // @synthesize pickerDelegate=_pickerDelegate;
@property(nonatomic) _Bool allowsMutlipleSelection; // @synthesize allowsMutlipleSelection=_allowsMutlipleSelection;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000031bc2a
- (struct CGSize)contentSizeForViewInPopover;	// IMP=0x000000000031bb23
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000031b729
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000031b6b3
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000031b69a
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000031b603
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000031b170
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000031b0dc
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000031b0d1
- (id)posterImageForAlbum:(id)arg1 imageView:(id)arg2;	// IMP=0x000000000031af40
- (void)reloadActions;	// IMP=0x000000000031af03
- (void)addSelectedCloudGuid:(id)arg1;	// IMP=0x000000000031aedf
- (void)didReceiveMemoryWarning;	// IMP=0x000000000031aeb0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000031ae46
- (void)viewDidLoad;	// IMP=0x000000000031ad77
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000000031ad1a

@end
