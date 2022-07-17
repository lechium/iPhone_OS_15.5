//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DCAppAttestService : NSObject
{
}

+ (id)sharedService;	// IMP=0x0000000000001534
- (void)generateAssertion:(id)arg1 clientDataHash:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000022b9
- (void)attestKey:(id)arg1 clientDataHash:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000001f90
- (void)generateKeyWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001c1a
- (id)_rewrapAsDCError:(id)arg1;	// IMP=0x0000000000001b11
- (void)_saveAppUUID:(id)arg1;	// IMP=0x0000000000001a94
- (id)_loadAppUUID;	// IMP=0x00000000000019e6
@property(readonly, getter=isSupported) _Bool supported;
- (_Bool)_isSupportedReturningError:(id *)arg1;	// IMP=0x0000000000001589

@end
