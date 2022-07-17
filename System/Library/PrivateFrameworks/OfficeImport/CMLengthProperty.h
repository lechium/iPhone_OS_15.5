//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CMLengthProperty
{
    double value;	// 16 = 0x10
    int unitType;	// 24 = 0x18
}

+ (double)convertToPoints:(double)arg1 unit:(int)arg2;	// IMP=0x00000000004696cc
+ (id)cssStringValue:(double)arg1 unit:(int)arg2;	// IMP=0x00000000000a904c
- (void)addNumber:(double)arg1 unit:(int)arg2;	// IMP=0x0000000000469790
- (id)description;	// IMP=0x00000000004696f4
- (id)cssString;	// IMP=0x0000000000146095
- (id)cssStringForName:(id)arg1;	// IMP=0x00000000000aa505
- (int)compareValue:(id)arg1;	// IMP=0x00000000004695e3
- (int)unitType;	// IMP=0x0000000000100663
- (int)intValue;	// IMP=0x00000000004695d1
- (double)value;	// IMP=0x000000000010064f
- (id)initWithNumber:(double)arg1 unit:(int)arg2;	// IMP=0x00000000000aa3b3
- (id)initWithNumber:(double)arg1;	// IMP=0x0000000000131ed4

@end
