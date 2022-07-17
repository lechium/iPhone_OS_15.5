//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IconServices/ISCompositorRecipe-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ISMultipleFilesRecipe : NSObject <ISCompositorRecipe>
{
}

- (id)layerTreeForSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x0000000000037859
- (id)documentLayerWithRect:(struct CGRect)arg1 withPageFold:(_Bool)arg2 iconSize:(struct CGSize)arg3 scale:(double)arg4;	// IMP=0x0000000000036c0c
- (id)hintedShadowOffset;	// IMP=0x0000000000036ae0
- (id)hintedShadowBlur;	// IMP=0x00000000000369c3
- (id)hintedCornerSize;	// IMP=0x0000000000036897
- (id)hintedPageCurlSize;	// IMP=0x000000000003676b
- (id)hintedUnderPaperRect;	// IMP=0x0000000000036624
- (id)hintedPaperRect;	// IMP=0x00000000000364dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
