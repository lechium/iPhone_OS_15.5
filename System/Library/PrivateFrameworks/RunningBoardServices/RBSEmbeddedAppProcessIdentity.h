//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface RBSEmbeddedAppProcessIdentity
{
    NSString *_embeddedApplicationIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002eff1
- (id)embeddedApplicationIdentifier;	// IMP=0x000000000002efe0
- (_Bool)isAnonymous;	// IMP=0x000000000002efd8
- (_Bool)isApplication;	// IMP=0x000000000002efd0
- (_Bool)isEmbeddedApplication;	// IMP=0x000000000002efc8
- (unsigned char)defaultManageFlags;	// IMP=0x000000000002efbd
- (id)encodeForJob;	// IMP=0x000000000002ef56
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x000000000002eec2
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x000000000002ee98
- (id)debugDescription;	// IMP=0x000000000002eda8
- (_Bool)_matchesIdentity:(id)arg1;	// IMP=0x000000000002ed34
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002eca7
- (id)copyWithAuid:(unsigned int)arg1;	// IMP=0x000000000002ec9c

@end
