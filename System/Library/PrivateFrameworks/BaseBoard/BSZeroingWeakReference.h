//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BSZeroingWeakReference : NSObject
{
    id _object;	// 8 = 0x8
    Class _objectClass;	// 16 = 0x10
    unsigned long long _objectAddress;	// 24 = 0x18
}

+ (id)referenceWithObject:(id)arg1;	// IMP=0x0000000000048f1a
- (void).cxx_destruct;	// IMP=0x000000000004920e
@property(readonly, nonatomic) __weak id object;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000049125
- (unsigned long long)hash;	// IMP=0x000000000004911b
- (id)description;	// IMP=0x000000000004902b
- (id)init;	// IMP=0x0000000000049017
- (id)initWithObject:(id)arg1;	// IMP=0x0000000000048f77

@end

