//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString, NSURL;

@interface SADIAGSetLatencyDiagnosticConfigurationDiagnosticAction <SAAceSerializable>
{
}

+ (id)setLatencyDiagnosticConfigurationDiagnosticActionWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000001629b
+ (id)setLatencyDiagnosticConfigurationDiagnosticAction;	// IMP=0x0000000000016289
@property(copy, nonatomic) NSString *verb;
@property(copy, nonatomic) NSURL *uri;
- (id)encodedClassName;	// IMP=0x000000000001627c
- (id)groupIdentifier;	// IMP=0x0000000000016268

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
