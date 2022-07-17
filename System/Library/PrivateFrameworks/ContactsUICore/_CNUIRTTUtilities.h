//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIRTTUtilities-Protocol.h>

@class NSString, RTTTelephonyUtilities;

@interface _CNUIRTTUtilities : NSObject <CNUIRTTUtilities>
{
    RTTTelephonyUtilities *_utilityProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000036fc
@property(retain, nonatomic) RTTTelephonyUtilities *utilityProvider; // @synthesize utilityProvider=_utilityProvider;
- (_Bool)relayIsSupported;	// IMP=0x00000000000036a7
- (_Bool)contactIsTTYContact:(id)arg1;	// IMP=0x0000000000003630
- (id)nts_lazyUtilityProvider;	// IMP=0x00000000000035e3
- (id)initWithUtilityProvider:(id)arg1;	// IMP=0x00000000000034fc
- (id)init;	// IMP=0x00000000000034e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
