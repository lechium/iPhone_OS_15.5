//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OCXSStream : NSObject
{
    NSMutableArray *mLevelStack;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000037cccf
- (_Bool)hasLevels;	// IMP=0x00000000001a6f1d
- (_Bool)popLevel;	// IMP=0x00000000001b00b0
- (void)pushLevel:(int)arg1 name:(const char *)arg2;	// IMP=0x00000000001a6d24
- (int)currentContextChildDepth;	// IMP=0x00000000001a6fad
- (int)currentContextDepth;	// IMP=0x00000000001a6f3a
- (id)init;	// IMP=0x00000000001a6c9b

@end

