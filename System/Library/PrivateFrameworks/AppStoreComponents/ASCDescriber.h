//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol NSObject;

__attribute__((visibility("hidden")))
@interface ASCDescriber : NSObject
{
    id <NSObject> _object;	// 8 = 0x8
    NSMutableArray *_properties;	// 16 = 0x10
}

+ (id)nilObject;	// IMP=0x0000000000037d62
- (void).cxx_destruct;	// IMP=0x00000000000389b3
@property(readonly, nonatomic) NSMutableArray *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) id <NSObject> object; // @synthesize object=_object;
- (id)description;	// IMP=0x0000000000038887
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000386f4
- (unsigned long long)hash;	// IMP=0x0000000000038642
- (id)finalizeDescription;	// IMP=0x0000000000038585
- (id)describeProperties;	// IMP=0x00000000000382f3
- (id)describeObject;	// IMP=0x0000000000038233
- (void)addObject:(id)arg1 withName:(id)arg2;	// IMP=0x0000000000038144
- (void)addSensitiveObject:(id)arg1 withName:(id)arg2;	// IMP=0x00000000000380e1
- (void)addDouble:(double)arg1 withName:(id)arg2;	// IMP=0x000000000003805b
- (void)addUInt64:(unsigned long long)arg1 withName:(id)arg2;	// IMP=0x0000000000037fda
- (void)addInt64:(long long)arg1 withName:(id)arg2;	// IMP=0x0000000000037f59
- (void)addUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2;	// IMP=0x0000000000037ed8
- (void)addInteger:(long long)arg1 withName:(id)arg2;	// IMP=0x0000000000037e57
- (void)addBool:(_Bool)arg1 withName:(id)arg2;	// IMP=0x0000000000037df4
- (id)initWithObject:(id)arg1;	// IMP=0x0000000000037d6f

@end

