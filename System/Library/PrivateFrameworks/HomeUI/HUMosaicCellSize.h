//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HUMosaicCellSize : NSObject
{
    unsigned long long _sizeDescription;	// 8 = 0x8
    unsigned long long _numRows;	// 16 = 0x10
    unsigned long long _numCols;	// 24 = 0x18
}

+ (id)createMosaicCellSizeForSizeDescription:(unsigned long long)arg1;	// IMP=0x00000000003ddb6b
@property(nonatomic) unsigned long long numCols; // @synthesize numCols=_numCols;
@property(nonatomic) unsigned long long numRows; // @synthesize numRows=_numRows;
@property(nonatomic) unsigned long long sizeDescription; // @synthesize sizeDescription=_sizeDescription;

@end

