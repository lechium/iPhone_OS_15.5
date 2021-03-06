//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMConcreteContainerIdentityForLibsystem;

@interface MCMResolvedLink
{
    MCMConcreteContainerIdentityForLibsystem *_originContainerIdentityForLibsystem;	// 40 = 0x28
    MCMConcreteContainerIdentityForLibsystem *_containerIdentityForLibsystem;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000005a2f2
@property(readonly, nonatomic) MCMConcreteContainerIdentityForLibsystem *containerIdentityForLibsystem; // @synthesize containerIdentityForLibsystem=_containerIdentityForLibsystem;
@property(readonly, nonatomic) MCMConcreteContainerIdentityForLibsystem *originContainerIdentityForLibsystem; // @synthesize originContainerIdentityForLibsystem=_originContainerIdentityForLibsystem;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000005a22f
- (id)description;	// IMP=0x001000000005a155
- (struct container_link_s *)createLibsystemLinkWithError:(unsigned long long *)arg1;	// IMP=0x001000000005a061
- (id)initWithLibsystemLink:(struct container_link_s *)arg1 defaultUserIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x0010000000059ee4
- (id)initWithOriginContainerIdentityForLibsystem:(id)arg1 containerIdentityForLibsystem:(id)arg2 attributes:(unsigned long long)arg3 implied:(_Bool)arg4;	// IMP=0x0010000000059e35

@end

