//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXDeactivationContextMutating-Protocol.h>

@class NSDictionary, NSString, SVXButtonEvent, SVXClientInfo, SVXDeactivationContext, SVXDeactivationOptions;

__attribute__((visibility("hidden")))
@interface _SVXDeactivationContextMutation : NSObject <SVXDeactivationContextMutating>
{
    SVXDeactivationContext *_baseModel;	// 8 = 0x8
    long long _source;	// 16 = 0x10
    unsigned long long _timestamp;	// 24 = 0x18
    SVXButtonEvent *_buttonEvent;	// 32 = 0x20
    SVXClientInfo *_clientInfo;	// 40 = 0x28
    NSDictionary *_userInfo;	// 48 = 0x30
    SVXDeactivationOptions *_options;	// 56 = 0x38
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasSource:1;
        unsigned int hasTimestamp:1;
        unsigned int hasButtonEvent:1;
        unsigned int hasClientInfo:1;
        unsigned int hasUserInfo:1;
        unsigned int hasOptions:1;
    } _mutationFlags;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000049af6
- (id)generate;	// IMP=0x00000000000498fe
- (void)setOptions:(id)arg1;	// IMP=0x00000000000498de
- (void)setUserInfo:(id)arg1;	// IMP=0x00000000000498be
- (void)setClientInfo:(id)arg1;	// IMP=0x000000000004989e
- (void)setButtonEvent:(id)arg1;	// IMP=0x000000000004987e
- (void)setTimestamp:(unsigned long long)arg1;	// IMP=0x0000000000049870
- (void)setSource:(long long)arg1;	// IMP=0x0000000000049862
- (id)initWithBaseModel:(id)arg1;	// IMP=0x00000000000497f7
- (id)init;	// IMP=0x00000000000497e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

