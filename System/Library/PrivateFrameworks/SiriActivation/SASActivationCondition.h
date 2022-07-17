//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFPreferences, NSDictionary, SASActivationRequest, SASSiriPocketStateManager, SASSystemState, SASUnderstandingOnDeviceAssetsState;

@interface SASActivationCondition : NSObject
{
    _Bool _buttonTriggerStateActive;	// 8 = 0x8
    SASActivationRequest *_request;	// 16 = 0x10
    SASSystemState *_systemState;	// 24 = 0x18
    SASSiriPocketStateManager *_pocketStateManager;	// 32 = 0x20
    AFPreferences *_preferences;	// 40 = 0x28
    NSDictionary *_analyticsContext;	// 48 = 0x30
    long long _requestState;	// 56 = 0x38
    SASUnderstandingOnDeviceAssetsState *_uodAssetsState;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000002f9f5
@property(retain, nonatomic) SASUnderstandingOnDeviceAssetsState *uodAssetsState; // @synthesize uodAssetsState=_uodAssetsState;
@property(nonatomic) long long requestState; // @synthesize requestState=_requestState;
@property(retain, nonatomic) NSDictionary *analyticsContext; // @synthesize analyticsContext=_analyticsContext;
@property(retain, nonatomic) AFPreferences *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) SASSiriPocketStateManager *pocketStateManager; // @synthesize pocketStateManager=_pocketStateManager;
@property(retain, nonatomic) SASSystemState *systemState; // @synthesize systemState=_systemState;
@property(nonatomic) _Bool buttonTriggerStateActive; // @synthesize buttonTriggerStateActive=_buttonTriggerStateActive;
@property(retain, nonatomic) SASActivationRequest *request; // @synthesize request=_request;

@end
