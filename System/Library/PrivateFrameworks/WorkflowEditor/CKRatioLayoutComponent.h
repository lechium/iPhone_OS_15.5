//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKComponent;

@interface CKRatioLayoutComponent
{
    double _ratio;	// 8 = 0x8
    CKComponent *_component;	// 16 = 0x10
}

+ (id)newWithRatio:(double)arg1 size:(const struct CKComponentSize *)arg2 component:(id)arg3;	// IMP=0x0000000000320659
- (void).cxx_destruct;	// IMP=0x0000000000320cef
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;	// IMP=0x000000000032080a

@end
