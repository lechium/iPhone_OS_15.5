//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPDAllCollectionsViewResult, NSArray;

@interface GEOAllCollectionsViewResult : NSObject
{
    GEOPDAllCollectionsViewResult *_allCollectionsViewResult;	// 8 = 0x8
    NSArray *_places;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000f341a4
@property(readonly, nonatomic) NSArray *resultFilters;
@property(readonly, nonatomic) NSArray *collectionIdentifiers;
- (id)initWithAllCollectionsViewResult:(id)arg1;	// IMP=0x0000000000f33e70
- (id)initWithAllCollectionsViewResult:(id)arg1 withPlaces:(id)arg2;	// IMP=0x0000000000f33d47

@end

