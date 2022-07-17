//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCProfile;

@interface MCDNSProxyPayloadHandler
{
    MCProfile *_profile;	// 32 = 0x20
}

+ (id)internalError;	// IMP=0x0040000000012052
- (void).cxx_destruct;	// IMP=0x00200000000120ed
- (void)remove;	// IMP=0x00100000000120e7
- (void)unsetAside;	// IMP=0x00100000000120e1
- (void)setAside;	// IMP=0x00100000000120db
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x00100000000120d3
- (id)initWithPayload:(id)arg1 profileHandler:(id)arg2;	// IMP=0x0010000000011fc3

@end
