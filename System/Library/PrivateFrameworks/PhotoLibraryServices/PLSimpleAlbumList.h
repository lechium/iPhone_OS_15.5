//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLAssetContainerList-Protocol.h>

@class NSOrderedSet, NSString;

@interface PLSimpleAlbumList : NSObject <PLAssetContainerList>
{
    NSOrderedSet *_containers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000022fd9c
@property(retain, nonatomic) NSOrderedSet *containers; // @synthesize containers=_containers;
- (id)containersRelationshipName;	// IMP=0x000000000022fd74
- (id)photoLibrary;	// IMP=0x000000000022fbfb
- (id)managedObjectContext;	// IMP=0x000000000022fbf3
- (_Bool)canEditContainers;	// IMP=0x000000000022fbeb
- (_Bool)isEmpty;	// IMP=0x000000000022fab5
@property(readonly, nonatomic) unsigned long long containersCount;
- (id)initWithAssetContainers:(id)arg1;	// IMP=0x000000000022fa34
- (id)initWithAssetContainer:(id)arg1;	// IMP=0x000000000022f9da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

