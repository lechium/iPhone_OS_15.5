//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _PASSqliteRowIdCursor
{
}

+ (_Bool)hasRowId;	// IMP=0x00000000000474bb
+ (const char *)sqliteCreateTableStatement;	// IMP=0x00000000000474ae
- (unsigned long long)outputRowId;	// IMP=0x00000000000474ec
- (unsigned long long)currentIndexedRowId;	// IMP=0x00000000000474e6
- (_Bool)currentIndexEof;	// IMP=0x00000000000474c3

@end
