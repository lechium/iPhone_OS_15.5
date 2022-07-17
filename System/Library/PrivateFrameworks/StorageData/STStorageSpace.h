//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface STStorageSpace : NSObject
{
    _Bool _isLowSpace;	// 8 = 0x8
    _Bool _isVeryLowSpace;	// 9 = 0x9
    long long _totalBytes;	// 16 = 0x10
    long long _freeBytes;	// 24 = 0x18
    long long _purgeableBytes;	// 32 = 0x20
    long long _usedBytes;	// 40 = 0x28
    long long _availableBytes;	// 48 = 0x30
}

@property(readonly) _Bool isVeryLowSpace; // @synthesize isVeryLowSpace=_isVeryLowSpace;
@property(readonly) _Bool isLowSpace; // @synthesize isLowSpace=_isLowSpace;
@property(readonly) long long availableBytes; // @synthesize availableBytes=_availableBytes;
@property(readonly) long long usedBytes; // @synthesize usedBytes=_usedBytes;
@property(readonly) long long purgeableBytes; // @synthesize purgeableBytes=_purgeableBytes;
@property(readonly) long long freeBytes; // @synthesize freeBytes=_freeBytes;
@property(readonly) long long totalBytes; // @synthesize totalBytes=_totalBytes;
- (id)initWithTotal:(long long)arg1 free:(long long)arg2 purgeable:(long long)arg3;	// IMP=0x000000000001a9c1

@end
