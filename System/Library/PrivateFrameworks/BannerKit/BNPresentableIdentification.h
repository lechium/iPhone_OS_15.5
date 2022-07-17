//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BannerKit/BNPresentableUniquelyIdentifying-Protocol.h>
#import <BannerKit/BSXPCSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface BNPresentableIdentification : NSObject <BNPresentableUniquelyIdentifying, BSXPCSecureCoding>
{
    NSString *_requesterIdentifier;	// 8 = 0x8
    NSString *_requestIdentifier;	// 16 = 0x10
    NSUUID *_uniqueIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsBSXPCSecureCoding;	// IMP=0x0000000000024dce
+ (id)requesterIdentificationForPresentable:(id)arg1;	// IMP=0x0000000000024bca
+ (id)genericIdentificationForPresentable:(id)arg1;	// IMP=0x0000000000024af0
+ (id)uniqueIdentificationForPresentable:(id)arg1;	// IMP=0x00000000000249ce
+ (id)identificationWithRequesterIdentifier:(id)arg1;	// IMP=0x0000000000024980
+ (id)identificationWithRequesterIdentifier:(id)arg1 requestIdentifier:(id)arg2;	// IMP=0x0000000000024911
+ (id)identificationWithRequesterIdentifier:(id)arg1 requestIdentifier:(id)arg2 uniqueIdentifier:(id)arg3;	// IMP=0x0000000000024883
- (void).cxx_destruct;	// IMP=0x0000000000024fd5
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(readonly, copy, nonatomic) NSString *requesterIdentifier; // @synthesize requesterIdentifier=_requesterIdentifier;
@property(readonly, copy) NSString *description;
- (id)initWithBSXPCCoder:(id)arg1;	// IMP=0x0000000000024e59
- (void)encodeWithBSXPCCoder:(id)arg1;	// IMP=0x0000000000024dd6
- (id)initWithRequesterIdentifier:(id)arg1 requestIdentifier:(id)arg2 uniqueIdentifier:(id)arg3;	// IMP=0x0000000000024c67

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
