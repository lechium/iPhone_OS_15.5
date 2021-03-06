//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CKTextComponent
{
    struct CKTextKitAttributes _attributes;	// 8 = 0x8
    struct CKTextComponentAccessibilityContext _accessibilityContext;	// 96 = 0x60
}

+ (id)newWithTextAttributes:(const struct CKTextKitAttributes *)arg1 viewAttributes:(const void *)arg2 options:(const struct CKTextComponentOptions *)arg3 size:(const struct CKComponentSize *)arg4;	// IMP=0x000000000033de5f
- (id).cxx_construct;	// IMP=0x000000000033ebfe
- (void).cxx_destruct;	// IMP=0x000000000033eb9a
- (struct MountResult)mountInContext:(const void *)arg1 size:(struct CGSize)arg2 children:(shared_ptr_3e79f8e7)arg3 supercomponent:(id)arg4;	// IMP=0x000000000033e970
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;	// IMP=0x000000000033e870
- (void)wf_applyVisualStying:(id)arg1;	// IMP=0x000000000023a279

@end

