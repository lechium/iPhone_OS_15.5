//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface ARUIGridSpriteGenerator : NSObject
{
    unsigned long long _spriteCount;	// 8 = 0x8
    unsigned long long _framesPerSprite;	// 16 = 0x10
    unsigned long long _columnsPerSprite;	// 24 = 0x18
    unsigned long long _rowsPerSprite;	// 32 = 0x20
}

+ (id)generatorWithSpriteCount:(unsigned long long)arg1 framesPerSprite:(unsigned long long)arg2 rowsPerSprite:(unsigned long long)arg3 columnsPerSprite:(unsigned long long)arg4;	// IMP=0x0000000000004a40
- (id)generateSprites;	// IMP=0x0000000000004c2a
- (id)spriteAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000004b9d
- (MISSING_TYPE *)originForSpriteAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000004b47
- (MISSING_TYPE *)frameSize;	// IMP=0x0000000000004aed
- (id)initWithSpriteCount:(unsigned long long)arg1 framesPerSprite:(unsigned long long)arg2 rowsPerSprite:(unsigned long long)arg3 columnsPerSprite:(unsigned long long)arg4;	// IMP=0x0000000000004a8f

@end
