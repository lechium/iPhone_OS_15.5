//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSXPCConnection.h>

@interface NSXPCConnection (PGAdditions)
- (_Bool)PG_hasScreenSharingEntitlement;	// IMP=0x0000000000045498
- (_Bool)PG_hasMultitaskingCameraAccessEntitlement;	// IMP=0x0000000000045446
- (id)PG_remoteObjectProxyWithDebugMethodAndPointerProem:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000045303
- (id)PG_remoteObjectWithDebugMethodAndPointerProem:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000452f1
- (id)PG_appProxyWithDebugMethodAndPointerProem:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000452df
- (id)PG_remoteObjectProxyWithDebugMethodAndPointerProem:(id)arg1;	// IMP=0x00000000000452cb
- (id)PG_remoteObjectWithDebugMethodAndPointerProem:(id)arg1;	// IMP=0x00000000000452b9
- (id)PG_appProxyWithDebugMethodAndPointerProem:(id)arg1;	// IMP=0x00000000000452a7
- (_Bool)PG_hasMenuItemProviderEntitlement;	// IMP=0x0000000000046017
@end

