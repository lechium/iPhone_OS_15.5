//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TKSmartCardSlotScreen : NSObject
{
    long long _physicalColumnCount;	// 8 = 0x8
    long long _physicalRowCount;	// 16 = 0x10
    long long _virtualColumnCount;	// 24 = 0x18
    long long _virtualRowCount;	// 32 = 0x20
}

@property long long virtualRowCount; // @synthesize virtualRowCount=_virtualRowCount;
@property long long virtualColumnCount; // @synthesize virtualColumnCount=_virtualColumnCount;
@property long long physicalRowCount; // @synthesize physicalRowCount=_physicalRowCount;
@property long long physicalColumnCount; // @synthesize physicalColumnCount=_physicalColumnCount;
- (_Bool)displayMessage:(id)arg1 x:(long long)arg2 y:(long long)arg3 duration:(double)arg4 clearScreen:(_Bool)arg5;	// IMP=0x00000000000105ed

@end

