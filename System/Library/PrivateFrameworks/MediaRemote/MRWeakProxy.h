//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class Protocol;

@interface MRWeakProxy : NSObject
{
    id _object;	// 8 = 0x8
    Protocol *_protocol;	// 16 = 0x10
}

+ (id)weakProxyWithObject:(id)arg1 protocol:(id)arg2;	// IMP=0x00000000000ce48f
- (void).cxx_destruct;	// IMP=0x00000000000ce802
@property(retain, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
@property(nonatomic) __weak id object; // @synthesize object=_object;
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000ce6e9
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000000ce63a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ce595
- (unsigned long long)hash;	// IMP=0x00000000000ce51b

@end
