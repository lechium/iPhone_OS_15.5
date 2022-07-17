//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableAttributedString, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface SVSTextAnimator : NSObject
{
    UILabel *_activeLabel;	// 8 = 0x8
    NSMutableAttributedString *_attributedText;	// 16 = 0x10
    _Bool _busy;	// 24 = 0x18
    NSMutableArray *_changes;	// 32 = 0x20
    unsigned long long _displayEndIndex;	// 40 = 0x28
    UILabel *_label1;	// 48 = 0x30
    UILabel *_label2;	// 56 = 0x38
    NSString *_text;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000001dfee4
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UILabel *label2; // @synthesize label2=_label2;
@property(retain, nonatomic) UILabel *label1; // @synthesize label1=_label1;
@property(nonatomic) unsigned long long displayEndIndex; // @synthesize displayEndIndex=_displayEndIndex;
- (void)_update;	// IMP=0x00100000001dfbe0

@end
