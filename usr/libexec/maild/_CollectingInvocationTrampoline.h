//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NSFastEnumeration;

@interface _CollectingInvocationTrampoline : NSObject
{
    id _first;	// 8 = 0x8
    id <NSFastEnumeration> _collection;	// 16 = 0x10
    _Bool _allMustMatch;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000004657f
- (void)forwardInvocation:(id)arg1;	// IMP=0x0010000000046367
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0010000000046319
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00100000000462b7
- (id)initWithCollection:(id)arg1 allMustMatch:(_Bool)arg2;	// IMP=0x001000000004615f

@end
