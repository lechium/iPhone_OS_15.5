//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreBookkeeper/NSObject-Protocol.h>
#import <StoreBookkeeper/NSSecureCoding-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SBKGenericKeyValuePair : NSObject <NSObject, NSSecureCoding>
{
    NSString *_kvsKey;	// 8 = 0x8
    NSData *_kvsPayload;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000005dd2
+ (id)pairWithKVSKey:(id)arg1 kvsPayload:(id)arg2;	// IMP=0x0000000000005d66
- (void).cxx_destruct;	// IMP=0x0000000000005d3e
@property(readonly, nonatomic) NSData *kvsPayload; // @synthesize kvsPayload=_kvsPayload;
@property(readonly, nonatomic) NSString *kvsKey; // @synthesize kvsKey=_kvsKey;
- (double)timestamp;	// IMP=0x0000000000005d21
- (id)kvsValueDescription;	// IMP=0x0000000000005c97
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000005c29
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000005b4f
- (id)initWithKVSKey:(id)arg1 kvsPayload:(id)arg2;	// IMP=0x0000000000005ab6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
