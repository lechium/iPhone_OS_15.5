//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/NFStateMachineContextType-Protocol.h>

@class NSError, NSString;

@interface SXQuickLookComponentErrorTransitionContext : NSObject <NFStateMachineContextType>
{
    NSError *_error;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000007e06d
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (id)initWithError:(id)arg1;	// IMP=0x000000000007dff8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

