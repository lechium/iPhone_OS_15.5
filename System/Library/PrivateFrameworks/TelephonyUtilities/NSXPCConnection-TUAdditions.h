//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSXPCConnection.h>

@class NSString;

@interface NSXPCConnection (TUAdditions)
+ (id)callServicesClientXPCInterface;	// IMP=0x00000000000e11cb
+ (id)callServicesServerXPCInterface;	// IMP=0x00000000000e0e0c
- (_Bool)tu_clientSandboxCanAccessFileURL:(id)arg1;	// IMP=0x00000000000e0c3c
- (void)performBlockOnQueue:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e1614
@property(readonly, copy, nonatomic) NSString *processBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *processName;
@end
