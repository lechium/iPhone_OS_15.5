//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, AKDevice, UIViewController;

@interface COSTinkerAppStoreAuthHelper : NSObject
{
    UIViewController *_presentingViewController;	// 8 = 0x8
    ACAccount *_satelliteAppStoreAccount;	// 16 = 0x10
    AKDevice *_satelliteAKDevice;	// 24 = 0x18
}

+ (id)storeAccountWithDSID:(id)arg1 altDSID:(id)arg2 username:(id)arg3;	// IMP=0x004000000012ea11
+ (id)satelliteStoreAccountForFamilyMember:(id)arg1;	// IMP=0x001000000012e8ef
- (void).cxx_destruct;	// IMP=0x002000000012f24c
@property(retain, nonatomic) AKDevice *satelliteAKDevice; // @synthesize satelliteAKDevice=_satelliteAKDevice;
@property(retain, nonatomic) ACAccount *satelliteAppStoreAccount; // @synthesize satelliteAppStoreAccount=_satelliteAppStoreAccount;
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void)authenticateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000012ec23
- (id)initWithContext:(id)arg1;	// IMP=0x001000000012e824

@end
