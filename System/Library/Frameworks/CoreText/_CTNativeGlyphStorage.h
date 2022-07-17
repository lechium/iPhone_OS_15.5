//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _CTNativeGlyphStorage
{
    const long long *_attachCounts;	// 56 = 0x38
    const struct CGPoint *_origins;	// 64 = 0x40
    unsigned long long _retainCount;	// 72 = 0x48
    struct GlyphStack *_stack;	// 80 = 0x50
    long long _capacity;	// 88 = 0x58
    void *_preallocatedStorage;	// 96 = 0x60
}

+ (id)newWithCount:(long long)arg1;	// IMP=0x000000000006d450
- (void)popGlyphAtIndex:(long long)arg1;	// IMP=0x000000000006e3bb
- (void)pushGlyphAtIndex:(long long)arg1;	// IMP=0x000000000006e299
- (void)initGlyphStackWithCapacity:(long long)arg1;	// IMP=0x000000000006e217
- (void)moveGlyphsFromRange:(CDStruct_912cb5d2)arg1 toIndex:(long long)arg2;	// IMP=0x000000000006e0cd
- (void)swapGlyphsAtIndex:(long long)arg1 withIndex:(long long)arg2;	// IMP=0x000000000006dfce
- (void)insertGlyphsAtRange:(CDStruct_912cb5d2)arg1;	// IMP=0x000000000006dc9f
- (void)puntStringIndicesInRange:(CDStruct_912cb5d2)arg1 by:(long long)arg2;	// IMP=0x000000000006dc6f
- (void)setStringIndex:(long long)arg1 atIndex:(long long)arg2;	// IMP=0x000000000006dc57
- (void)setAdvance:(struct CGSize)arg1 atIndex:(long long)arg2;	// IMP=0x000000000006dbc1
- (void)setGlyph:(unsigned short)arg1 atIndex:(long long)arg2;	// IMP=0x000000000006dba9
- (void)setProps:(unsigned int)arg1 atIndex:(long long)arg2;	// IMP=0x000000000006db92
- (void)setOrigin:(struct CGPoint)arg1 atIndex:(long long)arg2;	// IMP=0x000000000006db01
- (struct CGPoint)originAtIndex:(long long)arg1;	// IMP=0x000000000006dad2
- (void)resetOrigins:(CDStruct_912cb5d2)arg1;	// IMP=0x000000000006dacc
- (_Bool)implementsOrigins;	// IMP=0x000000000006dac4
- (void)setAttachmentCount:(long long)arg1 atIndex:(long long)arg2;	// IMP=0x000000000006da70
- (long long)attachmentCountAtIndex:(long long)arg1;	// IMP=0x000000000006da52
- (const struct CGSize *)allocatedAdvances;	// IMP=0x000000000006d9de
- (void)dealloc;	// IMP=0x000000000006d8c7
- (unsigned long long)retainCount;	// IMP=0x000000000006d8b3
- (oneway void)release;	// IMP=0x000000000006d84e
- (id)retain;	// IMP=0x000000000006d815
- (id)copyWithRange:(CDStruct_912cb5d2)arg1;	// IMP=0x000000000006d619
- (id)initWithCount:(long long)arg1;	// IMP=0x000000000006d52d

@end
