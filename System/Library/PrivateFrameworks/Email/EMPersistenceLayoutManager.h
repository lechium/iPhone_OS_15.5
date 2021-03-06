//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Email/EFLoggable-Protocol.h>

@class NSString;

@interface EMPersistenceLayoutManager : NSObject <EFLoggable>
{
}

+ (id)mailDataDirectoryPath;	// IMP=0x000000000006890c
+ (id)mailAccountDirectoryPath;	// IMP=0x00000000000688fa
+ (id)baseMailDirectoryPath;	// IMP=0x00000000000686f0
+ (id)_nonContainerizedBaseMailDirectoryPathCreated:(_Bool *)arg1;	// IMP=0x000000000006842d
+ (id)mailDataDirectory;	// IMP=0x00000000000683b1
+ (id)mailAccountDirectory;	// IMP=0x0000000000068335
+ (id)baseMailDirectory;	// IMP=0x00000000000682b9
+ (id)log;	// IMP=0x00000000000681dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

