//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CUIThemeGradient;

__attribute__((visibility("hidden")))
@interface _CUIThemeGradientRendition
{
    CUIThemeGradient *gradient;	// 216 = 0xd8
    double gradientAngle;	// 224 = 0xe0
}

- (unsigned int)gradientStyle;	// IMP=0x000000000005afa2
- (id)gradient;	// IMP=0x000000000005af91
- (double)gradientDrawingAngle;	// IMP=0x000000000005af7f
- (void)dealloc;	// IMP=0x000000000005af3d
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;	// IMP=0x000000000005ae2e
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;	// IMP=0x000000000005ae1c

@end

