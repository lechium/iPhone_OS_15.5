//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@interface ICStoreDialogResponseHandler : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _allowsHandlingNonAuthenticationDialogs;	// 8 = 0x8
    _Bool _shouldRecordLastAuthenticationDialogResponseTime;	// 9 = 0x9
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000eb5f3
- (void)_handleFamilyPermissionButtonAction:(id)arg1 usingRequestContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ea597
- (void)_handleGotoButtonAction:(id)arg1 usingRequestContext:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ea227
- (void)_handleBuyButtonAction:(id)arg1 usingRequestContext:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e9fed
- (void)_handleAuthenticationStoreDialogResponse:(id)arg1 usingRequestContext:(id)arg2 withDialogTimeout:(double)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000e9e1d
- (void)_handleDefaultStoreDialogResponse:(id)arg1 usingRequestContext:(id)arg2 withDialogTimeout:(double)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000e9c06
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e9b96
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e9adb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e9ad0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e9a44
- (unsigned long long)hash;	// IMP=0x00000000000e876e
- (void)handleStoreDialogResponse:(id)arg1 usingRequestContext:(id)arg2 withDialogTimeout:(double)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000e8691
- (void)handleStoreDialogResponse:(id)arg1 usingRequestContext:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e867c
- (void)handleButtonAction:(id)arg1 usingRequestContext:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e84ef
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000000e844f
- (id)init;	// IMP=0x00000000000e840f

@end
