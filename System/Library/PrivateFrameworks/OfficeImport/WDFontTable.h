//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, OITSUNoCopyDictionary;

__attribute__((visibility("hidden")))
@interface WDFontTable : NSObject
{
    OITSUNoCopyDictionary *mFontTable;	// 8 = 0x8
    NSMutableArray *mFontsInOrderOfInsertion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003fa154
- (id)description;	// IMP=0x00000000003fa116
- (id)fontAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003fa100
- (unsigned long long)indexOfFont:(id)arg1;	// IMP=0x00000000003fa0e9
- (id)fonts;	// IMP=0x00000000003fa0d3
- (id)createFontWithName:(id)arg1;	// IMP=0x00000000000bb5f5
- (id)fontWithName:(id)arg1 create:(_Bool)arg2;	// IMP=0x00000000000bb547
- (id)fontWithName:(id)arg1;	// IMP=0x00000000000bc1d6
- (void)clear;	// IMP=0x00000000000c24e7
- (unsigned long long)count;	// IMP=0x00000000003fa0bd
- (id)init;	// IMP=0x00000000000bb330

@end

