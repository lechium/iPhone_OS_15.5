//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GQDTComputedFormatSpec;

__attribute__((visibility("hidden")))
@interface GQDTDateCell
{
    struct __CFDate *mDate;	// 24 = 0x18
    GQDTComputedFormatSpec *mComputedFormat;	// 32 = 0x20
}

- (struct __CFString *)createStringValue;	// IMP=0x0000000000013588
- (struct __CFString *)getDateFormat;	// IMP=0x000000000001354a
- (struct __CFDate *)date;	// IMP=0x0000000000013539
- (void)dealloc;	// IMP=0x00000000000134e2
- (int)readAttributesForDateCell:(struct _xmlTextReader *)arg1 processor:(id)arg2;	// IMP=0x00000000000136e1

@end
