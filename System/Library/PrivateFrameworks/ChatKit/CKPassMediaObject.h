//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImage;

@interface CKPassMediaObject
{
    UIImage *_icon;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002e12ed
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (id)passView;	// IMP=0x00000000002e11ae
- (id)generateThumbnailFillToSize:(struct CGSize)arg1 contentAlignmentInsets:(struct UIEdgeInsets)arg2;	// IMP=0x00000000002e103d
- (id)subtitle;	// IMP=0x00000000002e0d8c
- (id)title;	// IMP=0x00000000002e0cee
- (id)initWithTransfer:(id)arg1 context:(id)arg2 forceInlinePreview:(_Bool)arg3;	// IMP=0x00000000002e0c4e

@end

