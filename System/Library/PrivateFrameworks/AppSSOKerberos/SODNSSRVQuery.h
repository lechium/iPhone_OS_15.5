//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SODNSSRVQuery : NSObject
{
}

- (void)lookupHost:(id)arg1 port:(id)arg2 bundleIdentifier:(id)arg3 auditTokenData:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000020d70
- (void)lookupSRVWithQuery:(id)arg1 bundleIdentifier:(id)arg2 auditTokenData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000020845
- (id)lookupSRVWithQuery:(id)arg1 bundleIdentifier:(id)arg2 auditTokenData:(id)arg3;	// IMP=0x0000000000020342
- (id)init;	// IMP=0x0000000000020313

@end
