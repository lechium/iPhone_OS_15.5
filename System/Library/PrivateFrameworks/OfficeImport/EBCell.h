//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBCell : NSObject
{
}

+ (void)readXlCell:(struct XlCell *)arg1 edRowInfo:(struct EDRowInfo **)arg2 edRowBlock:(id)arg3 edRowBlocks:(id)arg4 state:(id)arg5;	// IMP=0x00000000001298fc
+ (int)convertEDErrorValueEnumToXl:(int)arg1;	// IMP=0x000000000039e802
+ (int)convertXlErrorEnumToED:(int)arg1;	// IMP=0x000000000014c2b3
+ (int)convertXlCellTypeToED:(int)arg1;	// IMP=0x0000000000129c40

@end

