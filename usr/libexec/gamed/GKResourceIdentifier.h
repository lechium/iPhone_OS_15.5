//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol OS_dispatch_semaphore;

@interface GKResourceIdentifier : NSObject
{
    NSArray *_keys;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *_semaphore;	// 16 = 0x10
    NSString *_queueName;	// 24 = 0x18
}

+ (id)resourceIdentifierForKeys:(id)arg1;	// IMP=0x002000000009e7b3
+ (id)resourceIdentifiersForBagKeys:(id)arg1;	// IMP=0x001000000009e695
- (void).cxx_destruct;	// IMP=0x002000000009e9ff
@property(readonly, nonatomic) NSString *queueName; // @synthesize queueName=_queueName;
@property(readonly, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) NSArray *keys; // @synthesize keys=_keys;
- (id)description;	// IMP=0x001000000009e94a
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000009e8f3
- (unsigned long long)hash;	// IMP=0x001000000009e800
- (void)signal;	// IMP=0x001000000009e687
- (_Bool)wait:(double)arg1;	// IMP=0x001000000009e63c
- (id)initWithKeys:(id)arg1;	// IMP=0x001000000009e3a4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000009e36b

@end

