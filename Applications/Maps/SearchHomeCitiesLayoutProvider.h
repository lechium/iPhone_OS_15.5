//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKPlaceCompactCollectionSizeController, NSString;

__attribute__((visibility("hidden")))
@interface SearchHomeCitiesLayoutProvider : NSObject
{
    MKPlaceCompactCollectionSizeController *_sizeController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000a6f493
@property(retain, nonatomic) MKPlaceCompactCollectionSizeController *sizeController; // @synthesize sizeController=_sizeController;
- (id)layoutSectionWithLayoutEnvironment:(id)arg1 estimatedHeaderHeight:(double)arg2 estimatedFooterHeight:(double)arg3 deletionBlock:(CDUnknownBlockType)arg4 objectsCount:(unsigned long long)arg5 mapsTheme:(id)arg6;	// IMP=0x0010000000a6ef52
- (id)cellForRowAtIndexPath:(id)arg1 collectionView:(id)arg2 item:(id)arg3;	// IMP=0x0010000000a6ee8f
- (long long)type;	// IMP=0x0010000000a6ee84
- (id)cellReuseIdentifier;	// IMP=0x0010000000a6ee6b
- (id)cellClasses;	// IMP=0x0010000000a6edff
- (id)initWithTraitEnvironment:(id)arg1;	// IMP=0x0010000000a6ed78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

