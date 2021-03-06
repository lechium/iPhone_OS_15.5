//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMAccessCodeModificationRequest-Protocol.h>

@class HMAccessoryAccessCode, NSString;

@interface HMAccessCodeRemoveRequest : NSObject <HMAccessCodeModificationRequest>
{
    HMAccessoryAccessCode *_accessoryAccessCode;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001c6ae6
@property(readonly) HMAccessoryAccessCode *accessoryAccessCode; // @synthesize accessoryAccessCode=_accessoryAccessCode;
- (id)createAccessCodeRemoveRequestValue;	// IMP=0x00000000001c6a48
- (id)initWithAccessoryAccessCode:(id)arg1;	// IMP=0x00000000001c69dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

