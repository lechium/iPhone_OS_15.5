//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassroomKit/CRKASMTrustedUser-Protocol.h>

@class CRKASMCertificateVendor, NSSet, NSString;
@protocol CRKASMNameComponents;

@interface CRKASMConcreteTrustedUser <CRKASMTrustedUser>
{
    CRKASMCertificateVendor *_certificateVendor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000011780
@property(readonly, nonatomic) CRKASMCertificateVendor *certificateVendor; // @synthesize certificateVendor=_certificateVendor;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001163b
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToConcreteTrustedUser:(id)arg1;	// IMP=0x00000000000114a8
@property(readonly, copy, nonatomic) NSSet *certificates;
- (id)initWithBackingPerson:(id)arg1 certificateVendor:(id)arg2;	// IMP=0x00000000000113b0

// Remaining properties
@property(readonly, copy, nonatomic) NSString *appleID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) id <CRKASMNameComponents> nameComponents;
@property(readonly) Class superclass;

@end
