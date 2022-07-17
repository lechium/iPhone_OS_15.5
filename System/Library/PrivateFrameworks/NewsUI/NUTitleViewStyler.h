//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsUI/NUTitleViewStyler-Protocol.h>

@class NSString, UIColor;

@interface NUTitleViewStyler : NSObject <NUTitleViewStyler>
{
    UIColor *_textColor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000042474
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (id)titleParagraphStyleWithWrapping:(_Bool)arg1;	// IMP=0x00000000000423a1
- (id)titleSmallFont;	// IMP=0x0000000000042329
- (id)titleLargeFont;	// IMP=0x00000000000422b1
- (id)messageParagraphStyle;	// IMP=0x000000000004222e
- (id)messageSmallFont;	// IMP=0x0000000000042189
- (id)messageLargeFont;	// IMP=0x00000000000420e4
- (id)styleTextAsTitle:(id)arg1 boundingSize:(struct CGSize)arg2;	// IMP=0x0000000000041e87
- (id)styleTextAsMessage:(id)arg1 boundingSize:(struct CGSize)arg2;	// IMP=0x0000000000041c6a
- (id)styleTitleText:(id)arg1 styleType:(unsigned long long)arg2 boundingSize:(struct CGSize)arg3;	// IMP=0x0000000000041bc3
- (id)initWithTextColor:(id)arg1;	// IMP=0x0000000000041b58
- (id)init;	// IMP=0x0000000000041afe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
