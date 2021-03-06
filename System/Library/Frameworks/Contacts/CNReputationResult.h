//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNReputationHandle;

@interface CNReputationResult : NSObject
{
    CNReputationHandle *_handle;	// 8 = 0x8
    long long _score;	// 16 = 0x10
}

+ (id)descriptionForScore:(long long)arg1;	// IMP=0x00000000000ff435
- (void).cxx_destruct;	// IMP=0x00000000000ff8ca
@property(readonly) long long score; // @synthesize score=_score;
@property(readonly, copy) CNReputationHandle *handle; // @synthesize handle=_handle;
- (unsigned long long)hash;	// IMP=0x00000000000ff775
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ff57e
- (id)description;	// IMP=0x00000000000ff32e
- (id)initWithHandle:(id)arg1 score:(long long)arg2;	// IMP=0x00000000000ff29d

@end

