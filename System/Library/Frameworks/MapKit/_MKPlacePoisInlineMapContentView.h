//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _MKUILabel;

__attribute__((visibility("hidden")))
@interface _MKPlacePoisInlineMapContentView
{
    _MKUILabel *_storesLabel;	// 64 = 0x40
    _MKUILabel *_seeMoreLabel;	// 72 = 0x48
    _Bool _visible;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000471d6
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000047156
- (double)mapViewHeight;	// IMP=0x0000000000047148
- (void)setLocationsNumber:(unsigned long long)arg1;	// IMP=0x0000000000047073
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000046729
- (_Bool)useImageView;	// IMP=0x0000000000046721
- (_Bool)hasTitle;	// IMP=0x0000000000046719

@end
