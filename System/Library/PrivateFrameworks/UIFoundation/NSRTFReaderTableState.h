//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTextTable;

@interface NSRTFReaderTableState : NSObject
{
    NSTextTable *_currentTable;	// 8 = 0x8
    NSTextTable *_previousTable;	// 16 = 0x10
    NSMutableArray *_currentRowArray;	// 24 = 0x18
    NSMutableArray *_previousRowArray;	// 32 = 0x20
    int _currentRow;	// 40 = 0x28
    int _currentColumn;	// 44 = 0x2c
    int _currentDefinitionColumn;	// 48 = 0x30
    _Bool _currentRowIsLast;	// 52 = 0x34
}

- (void)dealloc;	// IMP=0x00000000000c76b0

@end

