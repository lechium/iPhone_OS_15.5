//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface LUILockButtonController : NSObject
{
    CDUnknownBlockType _actionBlock;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x002000000002bc85
- (void).cxx_destruct;	// IMP=0x002000000002be7c
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void)consumeDoublePressUpForButtonKind:(long long)arg1;	// IMP=0x001000000002bdaf
- (void)startConsumingLockButtonDoublePressEventWithAction:(CDUnknownBlockType)arg1;	// IMP=0x001000000002bcda

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
