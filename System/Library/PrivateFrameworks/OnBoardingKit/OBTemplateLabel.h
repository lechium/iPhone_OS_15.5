//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILabel.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OBTemplateLabel : UILabel
{
    NSString *_displayText;	// 8 = 0x8
    NSString *_symbolName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001c904
@property(copy, nonatomic) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property(copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
- (void)updateTextAlignment;	// IMP=0x000000000001c881
- (void)setTitleTrailingSymbol:(id)arg1;	// IMP=0x000000000001c652
- (void)setText:(id)arg1;	// IMP=0x000000000001c5eb
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000001c530
- (id)init;	// IMP=0x000000000001c4cd

@end
