//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CMDiagramSegmentedPieMapper
{
    _Bool mDrawArrows;	// 228 = 0xe4
}

- (struct CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000466166
- (id)_suggestedBoundsForNodeAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004660ec
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;	// IMP=0x0000000000465d07
- (void)mapAt:(id)arg1 withState:(id)arg2;	// IMP=0x0000000000465a42
- (void)setDrawArrows:(_Bool)arg1;	// IMP=0x0000000000465a32
- (int)pointCount;	// IMP=0x0000000000465a15

@end
