//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapServiceTraits, NSString;

__attribute__((visibility("hidden")))
@interface CuratedCollectionsListFetcher : NSObject
{
    GEOMapServiceTraits *_traits;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000103953
@property(retain, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
- (void)fetchGuidesWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000103610
- (id)initWithTraits:(id)arg1;	// IMP=0x00100000001035a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

