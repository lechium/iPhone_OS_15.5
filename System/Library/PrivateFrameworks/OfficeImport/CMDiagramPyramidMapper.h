//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CMDiagramPyramidMapper
{
    _Bool mIsFlipped;	// 228 = 0xe4
}

- (struct CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000024858e
- (id)_suggestedBoundsForNodeAtIndex:(unsigned long long)arg1;	// IMP=0x000000000024862a
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;	// IMP=0x0000000000248729
- (void)mapAt:(id)arg1 withState:(id)arg2;	// IMP=0x0000000000248415
- (void)setIsFlipped:(_Bool)arg1;	// IMP=0x0000000000465a05

@end
