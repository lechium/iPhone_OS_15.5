//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SKUISpacePageComponent;

__attribute__((visibility("hidden")))
@interface SKUISpacePageSection
{
}

- (long long)numberOfCells;	// IMP=0x000000000031de43
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x000000000031dd68
- (id)cellForIndexPath:(id)arg1;	// IMP=0x000000000031dcc0
- (void)willAppearInContext:(id)arg1;	// IMP=0x000000000031dc6a
- (id)initWithPageComponent:(id)arg1;	// IMP=0x000000000031dc3b

// Remaining properties
@property(readonly, nonatomic) SKUISpacePageComponent *pageComponent; // @dynamic pageComponent;

@end
