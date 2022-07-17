//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface SFDomainLabel : UIView
{
    UILabel *_label;	// 8 = 0x8
    _Bool _attributedStringNeedsUpdate;	// 16 = 0x10
    _Bool _secure;	// 17 = 0x11
    NSString *_text;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c960c
@property(readonly, nonatomic, getter=isSecure) _Bool secure; // @synthesize secure=_secure;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (id)_makeAttributedString;	// IMP=0x00000000000c92f8
- (void)setText:(id)arg1 isSecure:(_Bool)arg2;	// IMP=0x00000000000c9223
- (void)_commonInit;	// IMP=0x00000000000c8eb6
- (id)initWithText:(id)arg1 isSecure:(_Bool)arg2;	// IMP=0x00000000000c8dd8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c8d7a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000c8d0b

@end
