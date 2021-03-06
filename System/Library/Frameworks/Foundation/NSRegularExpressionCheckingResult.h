//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSRegularExpression;

@interface NSRegularExpressionCheckingResult
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000018e3d3
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;	// IMP=0x000000000018e3e6
- (unsigned long long)resultType;	// IMP=0x000000000018e3db
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000018e264
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000018e194
- (id)description;	// IMP=0x000000000018e0fa
- (struct _NSRange)rangeWithName:(id)arg1;	// IMP=0x000000000018e06d
@property(readonly) NSArray *rangeArray;
@property(readonly) NSRegularExpression *regularExpression;
- (id)initWithRangeArray:(id)arg1 regularExpression:(id)arg2;	// IMP=0x000000000018e02f
- (id)initWithRanges:(struct _NSRange *)arg1 count:(unsigned long long)arg2 regularExpression:(id)arg3;	// IMP=0x000000000018e001

@end

