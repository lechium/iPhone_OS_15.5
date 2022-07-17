//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKComponent;

@interface CKCompositeComponent
{
    CKComponent *_component;	// 8 = 0x8
}

+ (id)newWithView:(const void *)arg1 size:(const struct CKComponentSize *)arg2;	// IMP=0x000000000030a804
+ (id)newWithView:(const void *)arg1 component:(id)arg2;	// IMP=0x000000000030a739
+ (id)newWithComponent:(id)arg1;	// IMP=0x000000000030a673
- (void).cxx_destruct;	// IMP=0x000000000030ad52
- (id)viewForAnimation;	// IMP=0x000000000030acea
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1 restrictedToSize:(const struct CKComponentSize *)arg2 relativeToParentSize:(struct CGSize)arg3;	// IMP=0x000000000030a8ff

@end
