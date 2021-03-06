//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDColumnInfo;

__attribute__((visibility("hidden")))
@interface EMColumnInfoMapper
{
    EDColumnInfo *edColumnInfo;	// 40 = 0x28
    double columnWidth;	// 48 = 0x30
    unsigned long long columnSpan;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000470ebc
- (void)mapAt:(id)arg1 withState:(id)arg2;	// IMP=0x0000000000131c73
- (id)initWithDefaultWidth:(double)arg1 span:(unsigned long long)arg2 parent:(id)arg3;	// IMP=0x00000000001303a9
- (id)initWithEDColumnInfo:(id)arg1 maxSpan:(unsigned long long)arg2 parent:(id)arg3;	// IMP=0x000000000013068b
- (double)columnWidth;	// IMP=0x0000000000130670

@end

