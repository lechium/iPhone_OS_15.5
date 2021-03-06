//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>
#import <DiagnosticExtensionsDaemon/NSCopying-Protocol.h>

@class DEDExtensionIdentifier, NSString;

@interface DEDExtension : NSObject <DEDSecureArchiving, NSCopying>
{
    NSString *_identifier;	// 8 = 0x8
    DEDExtensionIdentifier *_dedExtensionIdentifier;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
}

+ (id)archivedClasses;	// IMP=0x000000000003e269
+ (id)extensionWithDEExtension:(id)arg1;	// IMP=0x000000000003dee6
+ (id)extensionWithDicionary:(id)arg1;	// IMP=0x000000000003dd4d
- (void).cxx_destruct;	// IMP=0x000000000003e397
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) DEDExtensionIdentifier *dedExtensionIdentifier; // @synthesize dedExtensionIdentifier=_dedExtensionIdentifier;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003e20a
@property(readonly, copy) NSString *description;
- (id)serialize;	// IMP=0x000000000003dfd5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

