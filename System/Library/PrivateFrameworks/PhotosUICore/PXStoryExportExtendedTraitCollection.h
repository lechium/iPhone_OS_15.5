//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXStoryExportExtendedTraitCollection
{
    struct CGRect _overrideFullScreenReferenceRect;	// 8 = 0x8
}

@property(readonly, nonatomic) struct CGRect overrideFullScreenReferenceRect; // @synthesize overrideFullScreenReferenceRect=_overrideFullScreenReferenceRect;
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fa153
- (struct CGRect)fullScreenReferenceRect;	// IMP=0x00000000000fa0b8
- (void)setOverrideFullScreenReferenceRect:(struct CGRect)arg1;	// IMP=0x00000000000fa09a
- (id)initWithLayoutReferenceSize:(struct CGSize)arg1 displayScale:(double)arg2 overrideFullScreenReferenceRect:(struct CGRect)arg3;	// IMP=0x00000000000fa04b

@end

