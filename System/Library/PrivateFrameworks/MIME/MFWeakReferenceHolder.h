//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NSObject;

@interface MFWeakReferenceHolder : NSObject
{
    id <NSObject> _reference;	// 8 = 0x8
}

+ (id)weakReferenceWithObject:(id)arg1;	// IMP=0x00000000000397d3
- (id)reference;	// IMP=0x0000000000039851
- (id)retainedReference;	// IMP=0x0000000000039843
- (void)dealloc;	// IMP=0x0000000000039797
- (id)_initWithObject:(id)arg1;	// IMP=0x00000000000396c1

@end

