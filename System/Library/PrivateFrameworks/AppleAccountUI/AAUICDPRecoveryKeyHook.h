//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/AAUIServerHook-Protocol.h>

@class AAUIServerHookResponse, NSString, RUIObjectModel;
@protocol AAUIServerHookDelegate;

@interface AAUICDPRecoveryKeyHook : NSObject <AAUIServerHook>
{
    id <AAUIServerHookDelegate> _delegate;	// 8 = 0x8
}

+ (id)helperWithPresenter:(id)arg1 forceInline:(_Bool)arg2;	// IMP=0x000000000001dc60
- (void).cxx_destruct;	// IMP=0x000000000001ddbd
@property(nonatomic) __weak id <AAUIServerHookDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_generateRecoveryKeyWithType:(long long)arg1 attributes:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001d95b
- (void)_deleteRecoveryKey:(CDUnknownBlockType)arg1;	// IMP=0x000000000001d777
- (void)processObjectModel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001d586
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000001d40f
- (_Bool)_shouldMatchAction:(id)arg1;	// IMP=0x000000000001d394
- (_Bool)shouldMatchModel:(id)arg1;	// IMP=0x000000000001d313
- (_Bool)shouldMatchElement:(id)arg1;	// IMP=0x000000000001d2bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) RUIObjectModel *objectModel;
@property(retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
@property(readonly) Class superclass;

@end
