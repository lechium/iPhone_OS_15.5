//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFAssertion.h>

@class HMHomeManager;

__attribute__((visibility("hidden")))
@interface __HMActiveAssertion : HMFAssertion
{
    HMHomeManager *_manager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000307b0
@property(readonly) __weak HMHomeManager *manager; // @synthesize manager=_manager;
- (void)invalidate;	// IMP=0x000000000003047e
- (void)dealloc;	// IMP=0x000000000003037a
- (id)initWithHomeManager:(id)arg1 reason:(id)arg2;	// IMP=0x000000000002fe97
- (id)initWithName:(id)arg1;	// IMP=0x000000000002fde1

@end
