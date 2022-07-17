//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSArray;

@interface SoftwareLibraryLookupOperation : ISOperation
{
    NSArray *_bundleIDs;	// 96 = 0x60
    NSArray *_itemIDs;	// 104 = 0x68
    NSArray *_softwareLibraryItems;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00200000001a1406
- (id)_newSoftwareLibraryItemWithContainerPath:(id)arg1;	// IMP=0x00100000001a1362
- (id)_newSoftwareLibraryItemWithApplication:(id)arg1;	// IMP=0x00100000001a10e7
- (void)_loadFromItemIdentifiers;	// IMP=0x00100000001a0e4e
- (void)_loadFromBundleIdentifiers;	// IMP=0x00100000001a072b
- (void)run;	// IMP=0x00100000001a06de
@property(readonly) NSArray *softwareLibraryItems;
@property(readonly) NSArray *itemIdentifiers;
@property(readonly) NSArray *bundleIdentifiers;
- (id)initWithItemIdentifiers:(id)arg1;	// IMP=0x00100000001a05e9
- (id)initWithBundleIdentifiers:(id)arg1;	// IMP=0x00100000001a056f

@end
