//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PDBootstrapOperation
{
}

- (id)overrideConfig:(id)arg1;	// IMP=0x00400000000bfe82
- (id)replaceEndpoints:(id)arg1 excludeEndpointIDs:(id)arg2 forServiceID:(id)arg3;	// IMP=0x00100000000bfab5
- (id)saveEndpointConfig:(id)arg1;	// IMP=0x00100000000bf829
- (void)prepare;	// IMP=0x00100000000bf7c1
- (_Bool)canSkipExecution;	// IMP=0x00100000000bf734
- (id)acceptContentType;	// IMP=0x00100000000bf727
- (id)requestContentType;	// IMP=0x00100000000bf71f
- (void)handleExpiration;	// IMP=0x00100000000bf719
- (id)httpMethod;	// IMP=0x00100000000bf70c

@end

