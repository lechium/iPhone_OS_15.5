//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;

@interface BPSPartialCompletion : NSObject
{
    long long _state;	// 8 = 0x8
    id _value;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
}

+ (id)withState:(long long)arg1;	// IMP=0x000000000001c531
+ (id)withState:(long long)arg1 error:(id)arg2;	// IMP=0x000000000001c4d7
+ (id)withState:(long long)arg1 value:(id)arg2;	// IMP=0x000000000001c47c
- (void).cxx_destruct;	// IMP=0x000000000001c583
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (id)initWithState:(long long)arg1 value:(id)arg2 error:(id)arg3;	// IMP=0x000000000001c3d7
- (id)init;	// IMP=0x000000000001c3d1

@end
