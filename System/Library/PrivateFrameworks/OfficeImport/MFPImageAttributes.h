//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MFPImageAttributes : NSObject
{
    NSMutableDictionary *mColorAdjustMap;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003724cb
- (id)ensureColorAdjustWithType:(int)arg1;	// IMP=0x000000000037240e
- (id)colorAdjustWithType:(int)arg1;	// IMP=0x000000000037238f
- (id)init;	// IMP=0x000000000037231b

@end
