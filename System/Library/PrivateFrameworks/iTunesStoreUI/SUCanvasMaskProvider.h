//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SUScriptCanvasFunction;

@interface SUCanvasMaskProvider
{
    SUScriptCanvasFunction *_function;	// 8 = 0x8
}

- (struct CGPath *)copyPathForMaskWithSize:(struct CGSize)arg1;	// IMP=0x00000000000acfb6
- (id)copyMaskImageWithSize:(struct CGSize)arg1;	// IMP=0x00000000000acf66
- (void)dealloc;	// IMP=0x00000000000acf18
- (id)initWithFunction:(id)arg1;	// IMP=0x00000000000acedd

@end

