//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PGGraph;

@interface PGGraphEnabler : NSObject
{
    PGGraph *_graph;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000032e754
@property(readonly) PGGraph *graph; // @synthesize graph=_graph;
- (_Bool)locationIsNearMyHomeOrWork:(id)arg1;	// IMP=0x000000000032e5b4
- (_Bool)locationIsFrequent:(id)arg1;	// IMP=0x000000000032e47f
- (id)_momentsForHobbyType:(long long)arg1 inPhotoLibrary:(id)arg2;	// IMP=0x000000000032e347
- (id)momentsForPetInPhotoLibrary:(id)arg1;	// IMP=0x000000000032e32d
- (id)momentsForBabyInPhotoLibrary:(id)arg1;	// IMP=0x000000000032e313
- (id)initWithGraph:(id)arg1;	// IMP=0x000000000032e2a8

@end

