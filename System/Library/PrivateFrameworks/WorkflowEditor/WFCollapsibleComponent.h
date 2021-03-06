//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKComponent;

@interface WFCollapsibleComponent
{
    CKComponent *_component;	// 8 = 0x8
    _Bool _expanded;	// 16 = 0x10
}

+ (id)newWithView:(const void *)arg1 size:(const struct CKComponentSize *)arg2;	// IMP=0x000000000022b18d
+ (id)newWithComponent:(id)arg1 expanded:(_Bool)arg2;	// IMP=0x000000000022b041
- (void).cxx_destruct;	// IMP=0x000000000022b599
- (id)viewForAnimation;	// IMP=0x000000000022b531
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1 restrictedToSize:(const struct CKComponentSize *)arg2 relativeToParentSize:(struct CGSize)arg3;	// IMP=0x000000000022b288

@end

