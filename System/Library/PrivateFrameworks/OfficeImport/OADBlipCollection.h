//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADBlipCollection : NSObject
{
    NSMutableArray *mBlips;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000030b502
@property(retain, nonatomic) NSMutableArray *blips; // @synthesize blips=mBlips;
- (unsigned int)blipCount;	// IMP=0x000000000030b4d9
- (unsigned int)addBlip:(id)arg1;	// IMP=0x000000000001e63b
- (id)blipAtIndex:(int)arg1;	// IMP=0x00000000000afec8
- (id)init;	// IMP=0x000000000000ab1c

@end

