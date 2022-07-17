//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ScreenReaderOutput/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSString;
@protocol NSSecureCoding;

@interface SCROBrailleKey : NSObject <NSSecureCoding>
{
    NSMutableArray *_maskArray;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    long long _routerIndex;	// 24 = 0x18
    long long _routerToken;	// 32 = 0x20
    long long _routerLocation;	// 40 = 0x28
    _Bool _hasRouterInfo;	// 48 = 0x30
    id <NSSecureCoding> _appToken;	// 56 = 0x38
    int _displayToken;	// 64 = 0x40
    int _displayMode;	// 68 = 0x44
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000025f45
- (void).cxx_destruct;	// IMP=0x0000000000026827
- (_Bool)getRouterIndex:(long long *)arg1 token:(long long *)arg2 location:(long long *)arg3 appToken:(id *)arg4;	// IMP=0x00000000000267dd
- (void)setRouterIndex:(long long)arg1 token:(long long)arg2 location:(long long)arg3 appToken:(id)arg4;	// IMP=0x00000000000267bc
- (id)identifier;	// IMP=0x0000000000026547
- (id)keyMasks;	// IMP=0x0000000000026539
- (void)addKeyMask:(unsigned int)arg1;	// IMP=0x00000000000264cc
- (id)description;	// IMP=0x0000000000026417
- (int)displayMode;	// IMP=0x000000000002640e
- (void)setDisplayMode:(int)arg1;	// IMP=0x0000000000026405
- (int)displayToken;	// IMP=0x00000000000263fc
- (void)setDisplayToken:(int)arg1;	// IMP=0x00000000000263f3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000262df
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000025f4d
- (id)init;	// IMP=0x0000000000025eef
- (void)addModifierMask:(unsigned int)arg1;	// IMP=0x0000000000011bcb
- (void)addSpacebarKeyMask;	// IMP=0x0000000000011bb4

@end
