//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface BPSHistogram : NSObject
{
    NSMutableDictionary *_backingDictionary;	// 8 = 0x8
    NSArray *_keyType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001a98e
- (void)_enumerateWithBlock:(CDUnknownBlockType)arg1 node:(id)arg2 currentKey:(id)arg3 stop:(_Bool *)arg4;	// IMP=0x000000000001a6d0
- (void)enumerateKeysAndScoresUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a641
- (void)removeAllScores;	// IMP=0x000000000001a60f
- (id)allKeysAtLevel:(unsigned long long)arg1;	// IMP=0x000000000001a024
- (void)removeScoreForKey:(id)arg1;	// IMP=0x0000000000019c58
- (void)addScore:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000198e5
- (id)scoreForKey:(id)arg1;	// IMP=0x00000000000196c8
- (_Bool)_correctKeyType:(id)arg1;	// IMP=0x000000000001954a
- (void)_setKeyTypeFromKey:(id)arg1;	// IMP=0x0000000000019378
- (id)init;	// IMP=0x00000000000192fb

@end
