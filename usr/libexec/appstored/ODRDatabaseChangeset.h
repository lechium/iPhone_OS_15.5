//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;

@interface ODRDatabaseChangeset : NSObject
{
    NSMutableSet *_deletedAssetPackURLs;	// 8 = 0x8
    NSMutableSet *_deletedStorageIDs;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001bd787
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001bd6fa
@property(readonly, copy) NSSet *deletedStorageIDs;
@property(readonly, copy) NSSet *deletedAssetPackURLs;
- (void)unionChangeset:(id)arg1;	// IMP=0x00100000001bd5d1
- (void)addDeletedStorageID:(id)arg1;	// IMP=0x00100000001bd53f
- (void)addDeletedAssetPackURL:(id)arg1;	// IMP=0x00100000001bd4ad

@end
