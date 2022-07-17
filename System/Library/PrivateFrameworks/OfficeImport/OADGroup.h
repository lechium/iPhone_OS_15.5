//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OfficeImport/OADDrawableContainer-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface OADGroup <OADDrawableContainer>
{
    struct CGRect mLogicalBounds;	// 40 = 0x28
    NSMutableArray *mChildren;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000031a177
@property(readonly, copy) NSString *description;
- (void)removeUnnecessaryOverrides;	// IMP=0x000000000010b629
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;	// IMP=0x0000000000319fcf
- (void)setParentTextListStyle:(id)arg1;	// IMP=0x000000000010b4d6
- (void)removeChild:(id)arg1;	// IMP=0x0000000000319f3d
- (void)replaceChild:(id)arg1 with:(id)arg2;	// IMP=0x0000000000319e67
- (id)children;	// IMP=0x000000000010b80e
- (id)childAtIndex:(unsigned long long)arg1;	// IMP=0x000000000010ccb6
- (void)addChildren:(id)arg1;	// IMP=0x000000000010b319
- (void)addChild:(id)arg1;	// IMP=0x0000000000190309
- (unsigned long long)childCount;	// IMP=0x000000000010c6de
- (void)setLogicalBounds:(struct CGRect)arg1;	// IMP=0x000000000010aafc
- (struct CGRect)logicalBounds;	// IMP=0x000000000010c6fb
- (id)groupProperties;	// IMP=0x00000000001d642b
- (id)init;	// IMP=0x000000000010a881

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
