//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInput/NSSecureCoding-Protocol.h>

@interface TIKeyboardTouchEvent : NSObject <NSSecureCoding>
{
    union {
        long long integerValue;
        struct {
            unsigned int continuousPathState:4;
        } fields;
    } _mask;	// 8 = 0x8
    int _stage;	// 16 = 0x10
    int _fingerID;	// 20 = 0x14
    double _radius;	// 24 = 0x18
    double _timestamp;	// 32 = 0x20
    long long _pathIndex;	// 40 = 0x28
    long long _forcedKeyCode;	// 48 = 0x30
    struct CGPoint _location;	// 56 = 0x38
}

+ (id)touchEventWithStage:(int)arg1 location:(struct CGPoint)arg2 radius:(double)arg3 timestamp:(double)arg4 pathIndex:(long long)arg5 fingerID:(int)arg6 forcedKeyCode:(long long)arg7 continuousPathState:(int)arg8;	// IMP=0x000000000004c62f
+ (id)touchEventWithStage:(int)arg1 location:(struct CGPoint)arg2 radius:(double)arg3 timestamp:(double)arg4 pathIndex:(long long)arg5 fingerID:(int)arg6 forcedKeyCode:(long long)arg7;	// IMP=0x000000000004c5ab
+ (id)touchEventWithStage:(int)arg1 location:(struct CGPoint)arg2 radius:(double)arg3 timestamp:(double)arg4 pathIndex:(long long)arg5 forcedKeyCode:(long long)arg6;	// IMP=0x000000000004c583
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004c57b
@property(readonly, nonatomic) long long forcedKeyCode; // @synthesize forcedKeyCode=_forcedKeyCode;
@property(readonly, nonatomic) int fingerID; // @synthesize fingerID=_fingerID;
@property(readonly, nonatomic) int stage; // @synthesize stage=_stage;
@property(readonly, nonatomic) long long pathIndex; // @synthesize pathIndex=_pathIndex;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(readonly, nonatomic) int continuousPathState;
- (id)shortDescription;	// IMP=0x000000000004c40c
- (id)description;	// IMP=0x000000000004c0c8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004bf5f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004be20
- (id)initWithStage:(int)arg1 location:(struct CGPoint)arg2 radius:(double)arg3 timestamp:(double)arg4 pathIndex:(long long)arg5 fingerID:(int)arg6 forcedKeyCode:(long long)arg7 continuousPathState:(int)arg8;	// IMP=0x000000000004bd77

@end

