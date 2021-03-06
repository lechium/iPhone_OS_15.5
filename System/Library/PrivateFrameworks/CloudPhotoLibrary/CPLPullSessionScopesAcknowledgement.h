//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLChangeBatch;

@interface CPLPullSessionScopesAcknowledgement
{
    CPLChangeBatch *_scopesChangeBatch;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004ab66
- (void).cxx_destruct;	// IMP=0x000000000004ab53
@property(readonly, nonatomic) CPLChangeBatch *scopesChangeBatch; // @synthesize scopesChangeBatch=_scopesChangeBatch;
- (id)statusDescription;	// IMP=0x000000000004ab25
- (id)storageForStatusInStore:(id)arg1;	// IMP=0x000000000004ab10
- (_Bool)discardFromStore:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004aae1
- (_Bool)applyToStore:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004a9a0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004a923
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004a888
- (id)initWithStore:(id)arg1 scopesChangeBatch:(id)arg2;	// IMP=0x000000000004a810

@end

