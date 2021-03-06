//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGSolidColorSource-Protocol.h>

@class NSString, UIColor;

@interface PXGPPTRowItemLayout <PXGSolidColorSource>
{
    CDStruct_af00bf4e _updateFlags;	// 8 = 0x8
    unsigned int _colorSpriteIndex;	// 32 = 0x20
    UIColor *_color;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000009f5760
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000009f573a
- (void)_updateContent;	// IMP=0x00000000009f569c
- (void)_invalidateContent;	// IMP=0x00000000009f55a8
- (void)update;	// IMP=0x00000000009f53ec
- (void)referenceSizeDidChange;	// IMP=0x00000000009f53ab
- (id)initWithColor:(id)arg1;	// IMP=0x00000000009f5308
- (id)init;	// IMP=0x00000000009f52ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

