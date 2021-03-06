//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKComponent;

@interface CKInsetComponent
{
    struct UIEdgeInsets _insets;	// 8 = 0x8
    CKComponent *_component;	// 40 = 0x28
}

+ (id)newWithView:(const void *)arg1 size:(const struct CKComponentSize *)arg2;	// IMP=0x000000000031f484
+ (id)newWithView:(const void *)arg1 insets:(struct UIEdgeInsets)arg2 component:(id)arg3;	// IMP=0x000000000031f39a
+ (id)newWithInsets:(struct UIEdgeInsets)arg1 component:(id)arg2;	// IMP=0x000000000031f2c0
- (void).cxx_destruct;	// IMP=0x000000000031fd89
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1 restrictedToSize:(const struct CKComponentSize *)arg2 relativeToParentSize:(struct CGSize)arg3;	// IMP=0x000000000031f57f

@end

