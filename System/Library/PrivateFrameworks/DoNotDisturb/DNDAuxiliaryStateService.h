//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface DNDAuxiliaryStateService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSString *_clientIdentifier;	// 16 = 0x10
}

+ (id)serviceForClientIdentifier:(id)arg1;	// IMP=0x0000000000001d5a
+ (void)initialize;	// IMP=0x0000000000001d50
- (void).cxx_destruct;	// IMP=0x0000000000002535
- (id)_initWithClientIdentifier:(id)arg1;	// IMP=0x000000000000247f
- (_Bool)setScreenIsShared:(_Bool)arg1 screenIsMirrored:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000002032

@end

