//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PptMetaCharacterBlock : NSObject
{
    int mType;	// 8 = 0x8
    int mPosition;	// 12 = 0xc
    int mExtraData;	// 16 = 0x10
}

- (int)extraData;	// IMP=0x0000000000441fce
- (void)setPosition:(int)arg1;	// IMP=0x0000000000441fc5
- (int)position;	// IMP=0x000000000002eb40
- (id)initWithType:(int)arg1 position:(int)arg2 extraData:(int)arg3;	// IMP=0x0000000000441edf
- (id)initWithType:(int)arg1 position:(int)arg2;	// IMP=0x000000000002eaed
- (int)type;	// IMP=0x000000000002eb58

@end
