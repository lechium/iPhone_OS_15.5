//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FindMyDevice/FMDExtAccessoryDelegateProtocol-Protocol.h>

@class NSString;
@protocol FMDExtAccessoryDelegateProtocol;

@interface FMDExtHostContext <FMDExtAccessoryDelegateProtocol>
{
    id <FMDExtAccessoryDelegateProtocol> _accessoryDelegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000136ec
@property(retain, nonatomic) id <FMDExtAccessoryDelegateProtocol> accessoryDelegate; // @synthesize accessoryDelegate=_accessoryDelegate;
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000013544
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000134ad
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000013435
- (id)init;	// IMP=0x00000000000133b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

