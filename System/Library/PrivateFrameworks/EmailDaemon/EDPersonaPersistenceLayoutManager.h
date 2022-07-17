//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>

@class NSString;

@interface EDPersonaPersistenceLayoutManager : NSObject <EFLoggable>
{
}

+ (id)iOS_baseAccountDirectoryPathForPersonaIdentifier:(id)arg1;	// IMP=0x00000000000d7410
+ (id)macOS_baseAccountDirectoryPathForPersonaIdentifier:(id)arg1;	// IMP=0x00000000000d7365
+ (id)baseAccountDirectoryPathForPersonaIdentifier:(id)arg1;	// IMP=0x00000000000d6ff5
+ (id)baseAccountDirectoryForPersonaIdentifier:(id)arg1;	// IMP=0x00000000000d6f79
+ (id)log;	// IMP=0x00000000000d6e9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
