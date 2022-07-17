//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/AAUIServerHook-Protocol.h>

@class AAUIServerHookResponse, NSString, RUIObjectModel;
@protocol AAUIServerHookDelegate;

@interface AAUIAuthKitUpdateReachableEmailsHook : NSObject <AAUIServerHook>
{
    NSString *_altDSID;	// 8 = 0x8
    id <AAUIServerHookDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005847c
@property(nonatomic) __weak id <AAUIServerHookDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateAccountWithReachableEmails:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000583ab
- (void)processObjectModel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000582aa
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000581d0
- (_Bool)shouldMatchModel:(id)arg1;	// IMP=0x000000000005814e
- (_Bool)shouldMatchElement:(id)arg1;	// IMP=0x0000000000058100
- (id)initWithAltDSID:(id)arg1;	// IMP=0x0000000000058095

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) RUIObjectModel *objectModel;
@property(retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
@property(readonly) Class superclass;

@end
