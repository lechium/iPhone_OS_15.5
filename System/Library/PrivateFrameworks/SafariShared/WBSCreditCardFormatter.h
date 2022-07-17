//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFormatter.h>

@interface WBSCreditCardFormatter : NSFormatter
{
    _Bool _showLastFourDigits;	// 8 = 0x8
    _Bool _showCreditCardNumber;	// 9 = 0x9
    _Bool _allowsUnknownCardTypes;	// 10 = 0xa
    _Bool _isVirtualCard;	// 11 = 0xb
}

+ (id)_formattedStringForNormalizedNumber:(id)arg1 showCreditCardNumber:(_Bool)arg2 showLastFourDigits:(_Bool)arg3 isVirtualCard:(_Bool)arg4;	// IMP=0x000000000004fb58
@property(nonatomic) _Bool isVirtualCard; // @synthesize isVirtualCard=_isVirtualCard;
@property(nonatomic) _Bool allowsUnknownCardTypes; // @synthesize allowsUnknownCardTypes=_allowsUnknownCardTypes;
@property(nonatomic) _Bool showCreditCardNumber; // @synthesize showCreditCardNumber=_showCreditCardNumber;
@property(nonatomic) _Bool showLastFourDigits; // @synthesize showLastFourDigits=_showLastFourDigits;
- (struct _NSRange)_selectionRangeInFormattedCreditCardNumber:(id)arg1 forNormalizedSelectionRange:(struct _NSRange)arg2 inNormalizedCreditCardNumber:(id)arg3;	// IMP=0x00000000000500d3
- (struct _NSRange)_normalizedSelectionRangeForFormattedCreditCardNumber:(id)arg1 withOriginalSelectionRange:(struct _NSRange)arg2;	// IMP=0x000000000005000e
- (_Bool)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;	// IMP=0x000000000004f9df
- (_Bool)isPartialStringValid:(id)arg1 newEditingString:(id *)arg2 errorDescription:(id *)arg3;	// IMP=0x000000000004f8ed
- (_Bool)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;	// IMP=0x000000000004f847
- (id)stringForObjectValue:(id)arg1;	// IMP=0x000000000004f77d

@end
