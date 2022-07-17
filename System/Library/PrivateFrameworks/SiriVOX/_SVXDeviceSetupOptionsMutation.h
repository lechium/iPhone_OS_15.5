//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXDeviceSetupOptionsMutating-Protocol.h>

@class NSString, SVXDeviceSetupOptions;

__attribute__((visibility("hidden")))
@interface _SVXDeviceSetupOptionsMutation : NSObject <SVXDeviceSetupOptionsMutating>
{
    SVXDeviceSetupOptions *_baseModel;	// 8 = 0x8
    NSString *_languageCode;	// 16 = 0x10
    long long _gender;	// 24 = 0x18
    long long _hasActiveAccount;	// 32 = 0x20
    long long _isNewsRestricted;	// 40 = 0x28
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasLanguageCode:1;
        unsigned int hasGender:1;
        unsigned int hasHasActiveAccount:1;
        unsigned int hasIsNewsRestricted:1;
    } _mutationFlags;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000004e9d9
- (id)generate;	// IMP=0x000000000004e88f
- (void)setIsNewsRestricted:(long long)arg1;	// IMP=0x000000000004e881
- (void)setHasActiveAccount:(long long)arg1;	// IMP=0x000000000004e873
- (void)setGender:(long long)arg1;	// IMP=0x000000000004e865
- (void)setLanguageCode:(id)arg1;	// IMP=0x000000000004e845
- (id)initWithBaseModel:(id)arg1;	// IMP=0x000000000004e7da
- (id)init;	// IMP=0x000000000004e7c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
