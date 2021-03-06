//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TeaFoundation/TFContainerRegistry-Protocol.h>

@class NSString;
@protocol TFCallbackRegistration, TFRegistrationContainer;

@interface TFContainerRegistry : NSObject <TFContainerRegistry>
{
    id <TFRegistrationContainer> _publicContainer;	// 8 = 0x8
    id <TFRegistrationContainer> _privateContainer;	// 16 = 0x10
    id _bridgedContainer;	// 24 = 0x18
    id _swiftContainer;	// 32 = 0x20
    id <TFCallbackRegistration> _callback;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000002db0
@property(readonly, nonatomic) id <TFCallbackRegistration> callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) id swiftContainer; // @synthesize swiftContainer=_swiftContainer;
@property(readonly, nonatomic) id bridgedContainer; // @synthesize bridgedContainer=_bridgedContainer;
@property(readonly, nonatomic) id <TFRegistrationContainer> privateContainer; // @synthesize privateContainer=_privateContainer;
@property(readonly, nonatomic) id <TFRegistrationContainer> publicContainer; // @synthesize publicContainer=_publicContainer;
- (id)initWithPublicContainer:(id)arg1 privateContainer:(id)arg2 bridgedContainer:(id)arg3 callback:(id)arg4;	// IMP=0x0000000000002c93

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

