//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface _PASXPCServer : NSObject
{
    NSArray *_XPCListeners;	// 8 = 0x8
}

+ (id)description;	// IMP=0x0000000000061f6e
+ (void)registerForService:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000061c0a
- (void).cxx_destruct;	// IMP=0x0000000000061bfa
- (void)registerXPCListeners;	// IMP=0x0000000000061a24
- (id)initWithXPCListeners:(id)arg1 logHandle:(id)arg2;	// IMP=0x00000000000619b9
- (id)init;	// IMP=0x00000000000619b3

@end

