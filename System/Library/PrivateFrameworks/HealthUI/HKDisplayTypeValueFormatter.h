//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol HKNumberFormatter;

@interface HKDisplayTypeValueFormatter : NSObject
{
    id <HKNumberFormatter> _numberFormatter;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000172c11
- (id)stringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;	// IMP=0x0000000000172b17
- (id)attributedStringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 valueFont:(id)arg4 unitFont:(id)arg5 formatForChart:(_Bool)arg6 unitFormatString:(id)arg7;	// IMP=0x00000000002c6fc6
- (id)attributedStringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 valueFont:(id)arg4 unitFont:(id)arg5 formatForChart:(_Bool)arg6;	// IMP=0x00000000002c6f9f
- (id)attributedStringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 valueFont:(id)arg4 unitFont:(id)arg5;	// IMP=0x00000000002c6f78
- (id)initWithNumberFormatter:(id)arg1;	// IMP=0x0000000000172aac

@end

