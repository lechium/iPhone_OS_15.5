//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MSSendEmail
{
}

+ (id)sendEmail:(id)arg1 playSound:(_Bool)arg2 timeout:(double)arg3 error:(id *)arg4;	// IMP=0x000000000000b17c
+ (id)sendEmail:(id)arg1 playSound:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b0dc
+ (id)sendMessageData:(id)arg1 autosaveIdentifier:(id)arg2 isHMEMessage:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000000b017
- (void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x000000000000ba4d
- (void)_sendMessageData:(id)arg1 autosaveIdentifier:(id)arg2 isHMEMessage:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000000b66f
- (void)_sendEmail:(id)arg1 playSound:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b333

@end
