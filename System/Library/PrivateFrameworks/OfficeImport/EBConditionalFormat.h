//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBConditionalFormat : NSObject
{
}

+ (void)readXlConditionalFormat:(void *)arg1 toEDConditionalFormatting:(id)arg2 state:(id)arg3;	// IMP=0x000000000014efb8
+ (int)convertEDConditionalFmtOperatorEnumToXl:(int)arg1;	// IMP=0x000000000039e98b
+ (int)convertXlConditionalFmtOperatorEnumToED:(int)arg1;	// IMP=0x000000000014f8fb
+ (int)convertXlConditionalFmtTypeEnumToED:(int)arg1;	// IMP=0x000000000014f8d1
+ (int)convertEDConditionalFmtTypeEnumToXl:(int)arg1;	// IMP=0x000000000039e970
+ (_Bool)validXlCf:(struct XlCf *)arg1;	// IMP=0x000000000039e920

@end
