//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <QuickLook/QLItemTransformerProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface QLTextItemTransformer : NSObject <QLItemTransformerProtocol>
{
}

+ (id)wrapperFromData:(id)arg1 encoding:(unsigned long long)arg2 typeIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000614dc
+ (id)attributedStringFromData:(id)arg1 encoding:(unsigned long long)arg2 typeIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x000000000006148c
+ (id)allowedOutputClasses;	// IMP=0x0000000000061280
- (id)transformedContentsFromData:(id)arg1 context:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000613a3
- (id)transformedContentsFromURL:(id)arg1 context:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000612b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

