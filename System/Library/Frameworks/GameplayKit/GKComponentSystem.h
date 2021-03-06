//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameplayKit/NSFastEnumeration-Protocol.h>

@class NSArray, NSMutableArray;

@interface GKComponentSystem : NSObject <NSFastEnumeration>
{
    NSMutableArray *_components;	// 8 = 0x8
    Class _componentClass;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000049b0d
@property(readonly, nonatomic) Class componentClass; // @synthesize componentClass=_componentClass;
- (Class)classForGenericArgumentAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000049af1
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000004996a
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000498ea
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000049896
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;	// IMP=0x00000000000496d1
- (void)updateWithDeltaTime:(double)arg1;	// IMP=0x0000000000049598
- (void)removeComponent:(id)arg1;	// IMP=0x0000000000049536
- (void)removeComponentWithEntity:(id)arg1;	// IMP=0x00000000000494e5
- (void)addComponentWithEntity:(id)arg1;	// IMP=0x0000000000049494
- (void)addComponent:(id)arg1;	// IMP=0x0000000000049338
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x0000000000049322
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000004930c
@property(readonly, retain, nonatomic) NSArray *components;
- (id)initWithComponentClass:(Class)arg1;	// IMP=0x00000000000492ac

@end

